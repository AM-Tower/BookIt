package crc64d465fbe34e0c11e4;


public class UnoSKCanvasView
	extends android.opengl.GLSurfaceView
	implements
		mono.android.IGCUserPeer
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_onCheckIsTextEditor:()Z:GetOnCheckIsTextEditorHandler\n" +
			"n_dispatchHoverEvent:(Landroid/view/MotionEvent;)Z:GetDispatchHoverEvent_Landroid_view_MotionEvent_Handler\n" +
			"n_dispatchKeyEvent:(Landroid/view/KeyEvent;)Z:GetDispatchKeyEvent_Landroid_view_KeyEvent_Handler\n" +
			"n_onFocusChanged:(ZILandroid/graphics/Rect;)V:GetOnFocusChanged_ZILandroid_graphics_Rect_Handler\n" +
			"n_onProvideAutofillVirtualStructure:(Landroid/view/ViewStructure;I)V:GetOnProvideAutofillVirtualStructure_Landroid_view_ViewStructure_IHandler\n" +
			"n_autofill:(Landroid/util/SparseArray;)V:GetAutofill_Landroid_util_SparseArray_Handler\n" +
			"n_onCreateInputConnection:(Landroid/view/inputmethod/EditorInfo;)Landroid/view/inputmethod/InputConnection;:GetOnCreateInputConnection_Landroid_view_inputmethod_EditorInfo_Handler\n" +
			"";
		mono.android.Runtime.register ("Uno.UI.Runtime.Skia.Android.UnoSKCanvasView, Uno.UI.Runtime.Skia.Android", UnoSKCanvasView.class, __md_methods);
	}

	public UnoSKCanvasView (android.content.Context p0, android.util.AttributeSet p1)
	{
		super (p0, p1);
		if (getClass () == UnoSKCanvasView.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.UnoSKCanvasView, Uno.UI.Runtime.Skia.Android", "Android.Content.Context, Mono.Android:Android.Util.IAttributeSet, Mono.Android", this, new java.lang.Object[] { p0, p1 });
		}
	}

	public UnoSKCanvasView (android.content.Context p0)
	{
		super (p0);
		if (getClass () == UnoSKCanvasView.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.UnoSKCanvasView, Uno.UI.Runtime.Skia.Android", "Android.Content.Context, Mono.Android", this, new java.lang.Object[] { p0 });
		}
	}

	public boolean onCheckIsTextEditor ()
	{
		return n_onCheckIsTextEditor ();
	}

	private native boolean n_onCheckIsTextEditor ();

	public boolean dispatchHoverEvent (android.view.MotionEvent p0)
	{
		return n_dispatchHoverEvent (p0);
	}

	private native boolean n_dispatchHoverEvent (android.view.MotionEvent p0);

	public boolean dispatchKeyEvent (android.view.KeyEvent p0)
	{
		return n_dispatchKeyEvent (p0);
	}

	private native boolean n_dispatchKeyEvent (android.view.KeyEvent p0);

	public void onFocusChanged (boolean p0, int p1, android.graphics.Rect p2)
	{
		n_onFocusChanged (p0, p1, p2);
	}

	private native void n_onFocusChanged (boolean p0, int p1, android.graphics.Rect p2);

	public void onProvideAutofillVirtualStructure (android.view.ViewStructure p0, int p1)
	{
		n_onProvideAutofillVirtualStructure (p0, p1);
	}

	private native void n_onProvideAutofillVirtualStructure (android.view.ViewStructure p0, int p1);

	public void autofill (android.util.SparseArray p0)
	{
		n_autofill (p0);
	}

	private native void n_autofill (android.util.SparseArray p0);

	public android.view.inputmethod.InputConnection onCreateInputConnection (android.view.inputmethod.EditorInfo p0)
	{
		return n_onCreateInputConnection (p0);
	}

	private native android.view.inputmethod.InputConnection n_onCreateInputConnection (android.view.inputmethod.EditorInfo p0);

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
