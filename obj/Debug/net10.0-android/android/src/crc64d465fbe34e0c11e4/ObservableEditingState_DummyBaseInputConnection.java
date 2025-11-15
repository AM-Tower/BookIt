package crc64d465fbe34e0c11e4;


public class ObservableEditingState_DummyBaseInputConnection
	extends android.view.inputmethod.BaseInputConnection
	implements
		mono.android.IGCUserPeer
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_getEditable:()Landroid/text/Editable;:GetGetEditableHandler\n" +
			"";
		mono.android.Runtime.register ("Uno.UI.Runtime.Skia.Android.ObservableEditingState+DummyBaseInputConnection, Uno.UI.Runtime.Skia.Android", ObservableEditingState_DummyBaseInputConnection.class, __md_methods);
	}

	public ObservableEditingState_DummyBaseInputConnection (android.view.View p0, boolean p1)
	{
		super (p0, p1);
		if (getClass () == ObservableEditingState_DummyBaseInputConnection.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.ObservableEditingState+DummyBaseInputConnection, Uno.UI.Runtime.Skia.Android", "Android.Views.View, Mono.Android:System.Boolean, System.Private.CoreLib", this, new java.lang.Object[] { p0, p1 });
		}
	}

	public android.text.Editable getEditable ()
	{
		return n_getEditable ();
	}

	private native android.text.Editable n_getEditable ();

	private java.util.ArrayList refList;
	public void monodroidAddReference (java.lang.Object obj)
	{
		if (refList == null)
			refList = new java.util.ArrayList ();
		refList.add (obj);
	}

	public void monodroidClearReferences ()
	{
		if (refList != null)
			refList.clear ();
	}
}
