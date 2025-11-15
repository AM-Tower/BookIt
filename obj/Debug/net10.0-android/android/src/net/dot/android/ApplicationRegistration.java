package net.dot.android;

public class ApplicationRegistration {

	public static android.content.Context Context;

	public static void registerApplications ()
	{
		// Application and Instrumentation ACWs must be registered first.
		mono.android.Runtime.register ("BookIt.Droid.Application, BookIt, Version=1.0.0.0, Culture=neutral, PublicKeyToken=null", crc64e02cfed75b7951be.Application.class, crc64e02cfed75b7951be.Application.__md_methods);
		mono.android.Runtime.register ("Microsoft.UI.Xaml.NativeApplication, Uno.UI.Runtime.Skia.Android, Version=255.255.255.255, Culture=neutral, PublicKeyToken=null", crc64d0916be76e7aa092.NativeApplication.class, crc64d0916be76e7aa092.NativeApplication.__md_methods);
		
	}
}
