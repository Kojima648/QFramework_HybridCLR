using System.Collections.Generic;
public class AOTGenericReferences : UnityEngine.MonoBehaviour
{

	// {{ AOT assemblies
	public static readonly IReadOnlyList<string> PatchedAOTAssemblyList = new List<string>
	{
		"QFramework.CoreKit.dll",
		"QFramework.dll",
		"ResKit.dll",
		"System.Core.dll",
		"UIKit.dll",
		"UnityEngine.CoreModule.dll",
		"mscorlib.dll",
	};
	// }}

	// {{ constraint implement type
	// }} 

	// {{ AOT generic types
	// QFramework.CustomObjectFactory<object>
	// QFramework.DefaultObjectFactory<object>
	// QFramework.EasyEvent.<>c<object>
	// QFramework.EasyEvent.<>c__DisplayClass1_0<object>
	// QFramework.EasyEvent.<>c__DisplayClass4_0<object>
	// QFramework.EasyEvent<object>
	// QFramework.IObjectFactory<object>
	// QFramework.MonoSingletonProperty<object>
	// QFramework.Pool<object>
	// QFramework.SafeObjectPool<object>
	// System.Action<Entry.MyVec3>
	// System.Action<int>
	// System.Action<object>
	// System.Collections.Generic.ArraySortHelper<Entry.MyVec3>
	// System.Collections.Generic.ArraySortHelper<int>
	// System.Collections.Generic.ArraySortHelper<object>
	// System.Collections.Generic.Comparer<Entry.MyVec3>
	// System.Collections.Generic.Comparer<int>
	// System.Collections.Generic.Comparer<object>
	// System.Collections.Generic.Dictionary.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.KeyCollection<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection.Enumerator<object,object>
	// System.Collections.Generic.Dictionary.ValueCollection<object,object>
	// System.Collections.Generic.Dictionary<object,object>
	// System.Collections.Generic.EqualityComparer<object>
	// System.Collections.Generic.ICollection<Entry.MyVec3>
	// System.Collections.Generic.ICollection<int>
	// System.Collections.Generic.ICollection<object>
	// System.Collections.Generic.IComparer<Entry.MyVec3>
	// System.Collections.Generic.IComparer<int>
	// System.Collections.Generic.IComparer<object>
	// System.Collections.Generic.IEnumerable<Entry.MyVec3>
	// System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<object,object>>
	// System.Collections.Generic.IEnumerable<int>
	// System.Collections.Generic.IEnumerable<object>
	// System.Collections.Generic.IEnumerator<Entry.MyVec3>
	// System.Collections.Generic.IEnumerator<int>
	// System.Collections.Generic.IEnumerator<object>
	// System.Collections.Generic.IEqualityComparer<object>
	// System.Collections.Generic.IList<Entry.MyVec3>
	// System.Collections.Generic.IList<int>
	// System.Collections.Generic.IList<object>
	// System.Collections.Generic.KeyValuePair<object,object>
	// System.Collections.Generic.List.Enumerator<Entry.MyVec3>
	// System.Collections.Generic.List.Enumerator<int>
	// System.Collections.Generic.List.Enumerator<object>
	// System.Collections.Generic.List<Entry.MyVec3>
	// System.Collections.Generic.List<int>
	// System.Collections.Generic.List<object>
	// System.Collections.Generic.ObjectComparer<Entry.MyVec3>
	// System.Collections.Generic.ObjectComparer<int>
	// System.Collections.Generic.ObjectComparer<object>
	// System.Collections.Generic.ObjectEqualityComparer<object>
	// System.Collections.Generic.Stack.Enumerator<object>
	// System.Collections.Generic.Stack<object>
	// System.Collections.ObjectModel.ReadOnlyCollection<Entry.MyVec3>
	// System.Collections.ObjectModel.ReadOnlyCollection<int>
	// System.Collections.ObjectModel.ReadOnlyCollection<object>
	// System.Comparison<Entry.MyVec3>
	// System.Comparison<int>
	// System.Comparison<object>
	// System.Func<byte>
	// System.Func<int,byte>
	// System.Func<int,int,byte>
	// System.Func<int,int>
	// System.Func<int,object>
	// System.Func<object,byte>
	// System.Func<object>
	// System.Linq.Enumerable.Iterator<int>
	// System.Linq.Enumerable.Iterator<object>
	// System.Linq.Enumerable.WhereEnumerableIterator<int>
	// System.Linq.Enumerable.WhereEnumerableIterator<object>
	// System.Linq.Enumerable.WhereSelectArrayIterator<int,int>
	// System.Linq.Enumerable.WhereSelectArrayIterator<int,object>
	// System.Linq.Enumerable.WhereSelectEnumerableIterator<int,int>
	// System.Linq.Enumerable.WhereSelectEnumerableIterator<int,object>
	// System.Linq.Enumerable.WhereSelectListIterator<int,int>
	// System.Linq.Enumerable.WhereSelectListIterator<int,object>
	// System.Predicate<Entry.MyVec3>
	// System.Predicate<int>
	// System.Predicate<object>
	// }}

	public void RefMethods()
	{
		// object QFramework.EasyEvents.GetEvent<object>()
		// object QFramework.EasyEvents.GetOrAddEvent<object>()
		// QFramework.IActionChain QFramework.IActionChainExtention.Repeat<object>(object,int)
		// QFramework.IActionChain QFramework.IActionChainExtention.Sequence<object>(object)
		// object QFramework.IResLoaderExtensions.LoadSync<object>(QFramework.IResLoader,string)
		// QFramework.IUnRegister QFramework.TypeEventSystem.Register<object>(System.Action<object>)
		// System.Void QFramework.TypeEventSystem.Send<object>()
		// System.Void QFramework.TypeEventSystem.Send<object>(object)
		// System.Void QFramework.TypeEventSystem.UnRegister<object>(System.Action<object>)
		// object QFramework.UIKit.OpenPanel<object>(QFramework.IUIData,QFramework.PanelOpenType,string,string)
		// System.Void QFramework.UnityEngineGameObjectExtension.DestroyGameObjGracefully<object>(object)
		// object QFramework.UnityEngineObjectExtension.DestroySelfGracefully<object>(object)
		// object QFramework.UnityEngineObjectExtension.Instantiate<object>(object)
		// object QFramework.UnityEngineObjectExtension.Name<object>(object,string)
		// object QFramework.UnityEngineTransformExtension.DestroyChildren<object>(object)
		// object QFramework.UnityEngineTransformExtension.LocalIdentity<object>(object)
		// object QFramework.UnityEngineTransformExtension.Parent<object>(object,UnityEngine.Component)
		// object QFramework.UnityEngineTransformExtension.Position<object>(object,float,float,float)
		// object System.Activator.CreateInstance<object>()
		// System.Collections.Generic.IEnumerable<int> System.Linq.Enumerable.Select<int,int>(System.Collections.Generic.IEnumerable<int>,System.Func<int,int>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Select<int,object>(System.Collections.Generic.IEnumerable<int>,System.Func<int,object>)
		// System.Collections.Generic.List<int> System.Linq.Enumerable.ToList<int>(System.Collections.Generic.IEnumerable<int>)
		// System.Collections.Generic.List<object> System.Linq.Enumerable.ToList<object>(System.Collections.Generic.IEnumerable<object>)
		// System.Collections.Generic.IEnumerable<int> System.Linq.Enumerable.Iterator<int>.Select<int>(System.Func<int,int>)
		// System.Collections.Generic.IEnumerable<object> System.Linq.Enumerable.Iterator<int>.Select<object>(System.Func<int,object>)
		// object UnityEngine.GameObject.AddComponent<object>()
		// object UnityEngine.GameObject.GetComponent<object>()
		// object UnityEngine.Object.Instantiate<object>(object)
	}
}