package crc64d465fbe34e0c11e4;


public class UnoSKCanvasView_InternalRenderer
	extends java.lang.Object
	implements
		mono.android.IGCUserPeer,
		android.opengl.GLSurfaceView.Renderer
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_onDrawFrame:(Ljavax/microedition/khronos/opengles/GL10;)V:GetOnDrawFrame_Ljavax_microedition_khronos_opengles_GL10_Handler:Android.Opengl.GLSurfaceView+IRendererInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onSurfaceChanged:(Ljavax/microedition/khronos/opengles/GL10;II)V:GetOnSurfaceChanged_Ljavax_microedition_khronos_opengles_GL10_IIHandler:Android.Opengl.GLSurfaceView+IRendererInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onSurfaceCreated:(Ljavax/microedition/khronos/opengles/GL10;Ljavax/microedition/khronos/egl/EGLConfig;)V:GetOnSurfaceCreated_Ljavax_microedition_khronos_opengles_GL10_Ljavax_microedition_khronos_egl_EGLConfig_Handler:Android.Opengl.GLSurfaceView+IRendererInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"";
		mono.android.Runtime.register ("Uno.UI.Runtime.Skia.Android.UnoSKCanvasView+InternalRenderer, Uno.UI.Runtime.Skia.Android", UnoSKCanvasView_InternalRenderer.class, __md_methods);
	}

	public UnoSKCanvasView_InternalRenderer ()
	{
		super ();
		if (getClass () == UnoSKCanvasView_InternalRenderer.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.UnoSKCanvasView+InternalRenderer, Uno.UI.Runtime.Skia.Android", "", this, new java.lang.Object[] {  });
		}
	}

	public void onDrawFrame (javax.microedition.khronos.opengles.GL10 p0)
	{
		n_onDrawFrame (p0);
	}

	private native void n_onDrawFrame (javax.microedition.khronos.opengles.GL10 p0);

	public void onSurfaceChanged (javax.microedition.khronos.opengles.GL10 p0, int p1, int p2)
	{
		n_onSurfaceChanged (p0, p1, p2);
	}

	private native void n_onSurfaceChanged (javax.microedition.khronos.opengles.GL10 p0, int p1, int p2);

	public void onSurfaceCreated (javax.microedition.khronos.opengles.GL10 p0, javax.microedition.khronos.egl.EGLConfig p1)
	{
		n_onSurfaceCreated (p0, p1);
	}

	private native void n_onSurfaceCreated (javax.microedition.khronos.opengles.GL10 p0, javax.microedition.khronos.egl.EGLConfig p1);

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
