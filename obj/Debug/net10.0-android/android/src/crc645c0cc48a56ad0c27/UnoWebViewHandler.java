package crc645c0cc48a56ad0c27;


public class UnoWebViewHandler
	extends Uno.UI.UnoWebViewHandlerJavascriptInterface
	implements
		mono.android.IGCUserPeer
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_postMessage:(Ljava/lang/String;)V:GetPostMessage_Ljava_lang_String_Handler\n" +
			"";
		mono.android.Runtime.register ("Uno.UI.Xaml.Controls.UnoWebViewHandler, Uno.UI.Runtime.Skia.Android", UnoWebViewHandler.class, __md_methods);
	}

	public UnoWebViewHandler ()
	{
		super ();
		if (getClass () == UnoWebViewHandler.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Xaml.Controls.UnoWebViewHandler, Uno.UI.Runtime.Skia.Android", "", this, new java.lang.Object[] {  });
		}
	}

@android.webkit.JavascriptInterface
	public void postMessage (java.lang.String p0)
	{
		n_postMessage (p0);
	}

	private native void n_postMessage (java.lang.String p0);

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
