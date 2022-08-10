/****************************************************************************
 * Copyright (c) 2016 - 2022 liangxiegame UNDER MIT License
 * 
 * http://qframework.cn
 * https://github.com/liangxiegame/QFramework
 * https://gitee.com/liangxiegame/QFramework
 ****************************************************************************/

using System;
using System.Collections.Generic;
using UnityEngine;

namespace QFramework
{
    public interface IState
    {
        void Enter();
        void Update();
        void FixedUpdate();
        void Exit();
    }

    public class CustomState : IState
    {
        private Action mOnEnter;
        private Action mOnUpdate;
        private Action mOnFixedUpdate;
        private Action mOnExit;
        public CustomState OnEnter(Action onEnter)
        {
            mOnEnter = onEnter;
            return this;
        }

        public CustomState OnUpdate(Action onUpdate)
        {
            mOnUpdate = onUpdate;
            return this;
        }
        
        public CustomState OnFixedUpdate(Action onFixedUpdate)
        {
            mOnFixedUpdate = onFixedUpdate;
            return this;
        }
        
        public CustomState OnExit(Action onExit)
        {
            mOnExit = onExit;
            return this;
        }


        public void Enter()
        {
            mOnEnter?.Invoke();
        }
        

        public void Update()
        {
            mOnUpdate?.Invoke();

        }

        public void FixedUpdate()
        {
            mOnFixedUpdate?.Invoke();
        }

        public void Exit()
        {
            mOnExit?.Invoke();
        }
    }
#if UNITY_EDITOR
    [ClassAPI("10.FSM","FSM",0,"FSM")]
    [APIDescriptionCN("简易状态机")]
    [APIDescriptionEN("Simple FSM")]
    [APIExampleCode(@"
        void Example()
        {
            var fsm = new FSM<States>();
            fsm.State(States.A)
                .OnEnter(() =>
                {

                })
                .OnUpdate(() =>
                { 
                    //if (xxx) fsm.ChangeState(States.B);

                })
                .OnExit(() =>
                {

                });

            fsm.State(States.B)
                .OnEnter(() =>
                {

                });

            fsm.StartState(States.A);

            // 需要用 Update 去刷状态机
            ActionKit.OnUpdate.Register(() =>
            {
                fsm.Update();
            }).UnRegisterWhenGameObjectDestroyed(gameObject);
        }")]
#endif
    public class FSM<T>
    {
        public Dictionary<T, IState> mStates = new Dictionary<T, IState>();

        public CustomState State(T t)
        {
            if (mStates.ContainsKey(t))
            {
                return mStates[t] as CustomState;
            }

            var state = new CustomState();
            mStates.Add(t, state);
            return state;
        }

        private IState mCurrentState;
        private T mCurrentStateId;

        public IState CurrentState => mCurrentState;
        public T CurrentStateId => mCurrentStateId;
        
        public void ChangeState(T t)
        {
            if (mStates.TryGetValue(t, out var state))
            {
                if (mCurrentState != null)
                {
                    mCurrentState.Exit();
                    mCurrentState = state;
                    mCurrentStateId = t;
                    mCurrentState.Enter();
                }
            }
        }

        public void StartState(T t)
        {
            if (mStates.TryGetValue(t, out var state))
            {
                mCurrentState = state;
                mCurrentStateId = t;
                state.Enter();
            }
        }

        public void FixedUpdate()
        {
            mCurrentState?.FixedUpdate();
        }

        public void Update()
        {
            mCurrentState?.Update();
        }

        public void Clear()
        {
            mCurrentState = null;
            mCurrentStateId = default;
            mStates.Clear();
        }
    }

    // public class StateManager : MonoBehaviour
    // {
    //     
    // }
    //
    // public static class StateManagerExtension
    // {
    //     public 
    // }


    public class StateExample : MonoBehaviour
    {
        public enum States
        {
            A,
            B,
            C
        }

        void Example()
        {
            var fsm = new FSM<States>();
            fsm.State(States.A)
                .OnEnter(() =>
                {
                    
                })
                .OnUpdate(() =>
                { 
                    //if (xxx) fsm.ChangeState(States.B);
                    
                })
                .OnExit(() =>
                {
                    
                });

            fsm.State(States.B)
                .OnEnter(() =>
                {

                });

            fsm.StartState(States.A);

            ActionKit.OnUpdate.Register(() =>
            {
                fsm.Update();
            }).UnRegisterWhenGameObjectDestroyed(gameObject);
        }
    }
}