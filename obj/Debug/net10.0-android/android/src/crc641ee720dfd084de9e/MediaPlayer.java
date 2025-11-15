package crc641ee720dfd084de9e;


public class MediaPlayer
	extends java.lang.Object
	implements
		mono.android.IGCUserPeer,
		android.view.TextureView.SurfaceTextureListener,
		android.media.MediaPlayer.OnCompletionListener,
		android.media.MediaPlayer.OnErrorListener,
		android.media.MediaPlayer.OnPreparedListener,
		android.media.MediaPlayer.OnSeekCompleteListener,
		android.media.MediaPlayer.OnBufferingUpdateListener,
		android.media.MediaPlayer.OnVideoSizeChangedListener,
		android.view.View.OnLayoutChangeListener
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_onSurfaceTextureAvailable:(Landroid/graphics/SurfaceTexture;II)V:GetOnSurfaceTextureAvailable_Landroid_graphics_SurfaceTexture_IIHandler:Android.Views.TextureView+ISurfaceTextureListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onSurfaceTextureDestroyed:(Landroid/graphics/SurfaceTexture;)Z:GetOnSurfaceTextureDestroyed_Landroid_graphics_SurfaceTexture_Handler:Android.Views.TextureView+ISurfaceTextureListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onSurfaceTextureSizeChanged:(Landroid/graphics/SurfaceTexture;II)V:GetOnSurfaceTextureSizeChanged_Landroid_graphics_SurfaceTexture_IIHandler:Android.Views.TextureView+ISurfaceTextureListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onSurfaceTextureUpdated:(Landroid/graphics/SurfaceTexture;)V:GetOnSurfaceTextureUpdated_Landroid_graphics_SurfaceTexture_Handler:Android.Views.TextureView+ISurfaceTextureListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onCompletion:(Landroid/media/MediaPlayer;)V:GetOnCompletion_Landroid_media_MediaPlayer_Handler:Android.Media.MediaPlayer+IOnCompletionListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onError:(Landroid/media/MediaPlayer;II)Z:GetOnError_Landroid_media_MediaPlayer_IIHandler:Android.Media.MediaPlayer+IOnErrorListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onPrepared:(Landroid/media/MediaPlayer;)V:GetOnPrepared_Landroid_media_MediaPlayer_Handler:Android.Media.MediaPlayer+IOnPreparedListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onSeekComplete:(Landroid/media/MediaPlayer;)V:GetOnSeekComplete_Landroid_media_MediaPlayer_Handler:Android.Media.MediaPlayer+IOnSeekCompleteListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onBufferingUpdate:(Landroid/media/MediaPlayer;I)V:GetOnBufferingUpdate_Landroid_media_MediaPlayer_IHandler:Android.Media.MediaPlayer+IOnBufferingUpdateListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onVideoSizeChanged:(Landroid/media/MediaPlayer;II)V:GetOnVideoSizeChanged_Landroid_media_MediaPlayer_IIHandler:Android.Media.MediaPlayer+IOnVideoSizeChangedListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"n_onLayoutChange:(Landroid/view/View;IIIIIIII)V:GetOnLayoutChange_Landroid_view_View_IIIIIIIIHandler:Android.Views.View+IOnLayoutChangeListenerInvoker, Mono.Android, Version=0.0.0.0, Culture=neutral, PublicKeyToken=null\n" +
			"";
		mono.android.Runtime.register ("Windows.Media.Playback.MediaPlayer, Uno", MediaPlayer.class, __md_methods);
	}

	public MediaPlayer ()
	{
		super ();
		if (getClass () == MediaPlayer.class) {
			mono.android.TypeManager.Activate ("Windows.Media.Playback.MediaPlayer, Uno", "", this, new java.lang.Object[] {  });
		}
	}

	public void onSurfaceTextureAvailable (android.graphics.SurfaceTexture p0, int p1, int p2)
	{
		n_onSurfaceTextureAvailable (p0, p1, p2);
	}

	private native void n_onSurfaceTextureAvailable (android.graphics.SurfaceTexture p0, int p1, int p2);

	public boolean onSurfaceTextureDestroyed (android.graphics.SurfaceTexture p0)
	{
		return n_onSurfaceTextureDestroyed (p0);
	}

	private native boolean n_onSurfaceTextureDestroyed (android.graphics.SurfaceTexture p0);

	public void onSurfaceTextureSizeChanged (android.graphics.SurfaceTexture p0, int p1, int p2)
	{
		n_onSurfaceTextureSizeChanged (p0, p1, p2);
	}

	private native void n_onSurfaceTextureSizeChanged (android.graphics.SurfaceTexture p0, int p1, int p2);

	public void onSurfaceTextureUpdated (android.graphics.SurfaceTexture p0)
	{
		n_onSurfaceTextureUpdated (p0);
	}

	private native void n_onSurfaceTextureUpdated (android.graphics.SurfaceTexture p0);

	public void onCompletion (android.media.MediaPlayer p0)
	{
		n_onCompletion (p0);
	}

	private native void n_onCompletion (android.media.MediaPlayer p0);

	public boolean onError (android.media.MediaPlayer p0, int p1, int p2)
	{
		return n_onError (p0, p1, p2);
	}

	private native boolean n_onError (android.media.MediaPlayer p0, int p1, int p2);

	public void onPrepared (android.media.MediaPlayer p0)
	{
		n_onPrepared (p0);
	}

	private native void n_onPrepared (android.media.MediaPlayer p0);

	public void onSeekComplete (android.media.MediaPlayer p0)
	{
		n_onSeekComplete (p0);
	}

	private native void n_onSeekComplete (android.media.MediaPlayer p0);

	public void onBufferingUpdate (android.media.MediaPlayer p0, int p1)
	{
		n_onBufferingUpdate (p0, p1);
	}

	private native void n_onBufferingUpdate (android.media.MediaPlayer p0, int p1);

	public void onVideoSizeChanged (android.media.MediaPlayer p0, int p1, int p2)
	{
		n_onVideoSizeChanged (p0, p1, p2);
	}

	private native void n_onVideoSizeChanged (android.media.MediaPlayer p0, int p1, int p2);

	public void onLayoutChange (android.view.View p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8)
	{
		n_onLayoutChange (p0, p1, p2, p3, p4, p5, p6, p7, p8);
	}

	private native void n_onLayoutChange (android.view.View p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8);

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
