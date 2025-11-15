package crc64967086e9a43d0cf7;


public class CallCallback
	extends android.telephony.TelephonyCallback
	implements
		mono.android.IGCUserPeer,
		android.telephony.TelephonyCallback.CallStateListener
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_onCallStateChanged:(I)V:GetOnCallStateChanged_IHandler:Android.Telephony.TelephonyCallback+ICallStateListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"";
		mono.android.Runtime.register ("Windows.ApplicationModel.Calls.CallCallback, Uno", CallCallback.class, __md_methods);
	}

	public CallCallback ()
	{
		super ();
		if (getClass () == CallCallback.class) {
			mono.android.TypeManager.Activate ("Windows.ApplicationModel.Calls.CallCallback, Uno", "", this, new java.lang.Object[] {  });
		}
	}

	public void onCallStateChanged (int p0)
	{
		n_onCallStateChanged (p0);
	}

	private native void n_onCallStateChanged (int p0);

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
