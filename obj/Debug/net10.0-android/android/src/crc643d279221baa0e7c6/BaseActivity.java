package crc643d279221baa0e7c6;


public class BaseActivity
	extends androidx.appcompat.app.AppCompatActivity
	implements
		mono.android.IGCUserPeer
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_onAttachedToWindow:()V:GetOnAttachedToWindowHandler\n" +
			"n_onDetachedFromWindow:()V:GetOnDetachedFromWindowHandler\n" +
			"n_setContentView:(Landroid/view/View;)V:GetSetContentView_Landroid_view_View_Handler\n" +
			"n_setContentView:(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V:GetSetContentView_Landroid_view_View_Landroid_view_ViewGroup_LayoutParams_Handler\n" +
			"n_addContentView:(Landroid/view/View;Landroid/view/ViewGroup$LayoutParams;)V:GetAddContentView_Landroid_view_View_Landroid_view_ViewGroup_LayoutParams_Handler\n" +
			"n_onCreate:(Landroid/os/Bundle;)V:GetOnCreate_Landroid_os_Bundle_Handler\n" +
			"n_onCreate:(Landroid/os/Bundle;Landroid/os/PersistableBundle;)V:GetOnCreate_Landroid_os_Bundle_Landroid_os_PersistableBundle_Handler\n" +
			"n_onStart:()V:GetOnStartHandler\n" +
			"n_onRestart:()V:GetOnRestartHandler\n" +
			"n_onResume:()V:GetOnResumeHandler\n" +
			"n_onTopResumedActivityChanged:(Z)V:GetOnTopResumedActivityChanged_ZHandler\n" +
			"n_onPause:()V:GetOnPauseHandler\n" +
			"n_onStop:()V:GetOnStopHandler\n" +
			"n_onDestroy:()V:GetOnDestroyHandler\n" +
			"n_onRequestPermissionsResult:(I[Ljava/lang/String;[I)V:GetOnRequestPermissionsResult_IarrayLjava_lang_String_arrayIHandler\n" +
			"";
		mono.android.Runtime.register ("Uno.UI.BaseActivity, Uno.UI.Runtime.Skia.Android", BaseActivity.class, __md_methods);
	}

	public BaseActivity ()
	{
		super ();
		if (getClass () == BaseActivity.class) {
			mono.android.TypeManager.Activate ("Uno.UI.BaseActivity, Uno.UI.Runtime.Skia.Android", "", this, new java.lang.Object[] {  });
		}
	}

	public BaseActivity (int p0)
	{
		super (p0);
		if (getClass () == BaseActivity.class) {
			mono.android.TypeManager.Activate ("Uno.UI.BaseActivity, Uno.UI.Runtime.Skia.Android", "System.Int32, System.Private.CoreLib", this, new java.lang.Object[] { p0 });
		}
	}

	public void onAttachedToWindow ()
	{
		n_onAttachedToWindow ();
	}

	private native void n_onAttachedToWindow ();

	public void onDetachedFromWindow ()
	{
		n_onDetachedFromWindow ();
	}

	private native void n_onDetachedFromWindow ();

	public void setContentView (android.view.View p0)
	{
		n_setContentView (p0);
	}

	private native void n_setContentView (android.view.View p0);

	public void setContentView (android.view.View p0, android.view.ViewGroup.LayoutParams p1)
	{
		n_setContentView (p0, p1);
	}

	private native void n_setContentView (android.view.View p0, android.view.ViewGroup.LayoutParams p1);

	public void addContentView (android.view.View p0, android.view.ViewGroup.LayoutParams p1)
	{
		n_addContentView (p0, p1);
	}

	private native void n_addContentView (android.view.View p0, android.view.ViewGroup.LayoutParams p1);

	public void onCreate (android.os.Bundle p0)
	{
		n_onCreate (p0);
	}

	private native void n_onCreate (android.os.Bundle p0);

	public void onCreate (android.os.Bundle p0, android.os.PersistableBundle p1)
	{
		n_onCreate (p0, p1);
	}

	private native void n_onCreate (android.os.Bundle p0, android.os.PersistableBundle p1);

	public void onStart ()
	{
		n_onStart ();
	}

	private native void n_onStart ();

	public void onRestart ()
	{
		n_onRestart ();
	}

	private native void n_onRestart ();

	public void onResume ()
	{
		n_onResume ();
	}

	private native void n_onResume ();

	public void onTopResumedActivityChanged (boolean p0)
	{
		n_onTopResumedActivityChanged (p0);
	}

	private native void n_onTopResumedActivityChanged (boolean p0);

	public void onPause ()
	{
		n_onPause ();
	}

	private native void n_onPause ();

	public void onStop ()
	{
		n_onStop ();
	}

	private native void n_onStop ();

	public void onDestroy ()
	{
		n_onDestroy ();
	}

	private native void n_onDestroy ();

	public void onRequestPermissionsResult (int p0, java.lang.String[] p1, int[] p2)
	{
		n_onRequestPermissionsResult (p0, p1, p2);
	}

	private native void n_onRequestPermissionsResult (int p0, java.lang.String[] p1, int[] p2);

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
