package crc64d465fbe34e0c11e4;


public class ObservableEditingState
	extends android.text.SpannableStringBuilder
	implements
		mono.android.IGCUserPeer
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_replace:(IILjava/lang/CharSequence;II)Landroid/text/SpannableStringBuilder;:GetReplace_IILjava_lang_CharSequence_IIHandler\n" +
			"n_setSpan:(Ljava/lang/Object;III)V:GetSetSpan_Ljava_lang_Object_IIIHandler\n" +
			"n_toString:()Ljava/lang/String;:GetToStringHandler\n" +
			"";
		mono.android.Runtime.register ("Uno.UI.Runtime.Skia.Android.ObservableEditingState, Uno.UI.Runtime.Skia.Android", ObservableEditingState.class, __md_methods);
	}

	public ObservableEditingState ()
	{
		super ();
		if (getClass () == ObservableEditingState.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.ObservableEditingState, Uno.UI.Runtime.Skia.Android", "", this, new java.lang.Object[] {  });
		}
	}

	public ObservableEditingState (java.lang.CharSequence p0, int p1, int p2)
	{
		super (p0, p1, p2);
		if (getClass () == ObservableEditingState.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.ObservableEditingState, Uno.UI.Runtime.Skia.Android", "Java.Lang.ICharSequence, Mono.Android:System.Int32, System.Private.CoreLib:System.Int32, System.Private.CoreLib", this, new java.lang.Object[] { p0, p1, p2 });
		}
	}

	public ObservableEditingState (java.lang.CharSequence p0)
	{
		super (p0);
		if (getClass () == ObservableEditingState.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.ObservableEditingState, Uno.UI.Runtime.Skia.Android", "Java.Lang.ICharSequence, Mono.Android", this, new java.lang.Object[] { p0 });
		}
	}

	public android.text.SpannableStringBuilder replace (int p0, int p1, java.lang.CharSequence p2, int p3, int p4)
	{
		return n_replace (p0, p1, p2, p3, p4);
	}

	private native android.text.SpannableStringBuilder n_replace (int p0, int p1, java.lang.CharSequence p2, int p3, int p4);

	public void setSpan (java.lang.Object p0, int p1, int p2, int p3)
	{
		n_setSpan (p0, p1, p2, p3);
	}

	private native void n_setSpan (java.lang.Object p0, int p1, int p2, int p3);

	public java.lang.String toString ()
	{
		return n_toString ();
	}

	private native java.lang.String n_toString ();

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
