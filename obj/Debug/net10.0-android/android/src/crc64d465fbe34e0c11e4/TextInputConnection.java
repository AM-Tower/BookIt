package crc64d465fbe34e0c11e4;


public class TextInputConnection
	extends android.view.inputmethod.BaseInputConnection
	implements
		mono.android.IGCUserPeer
{
/** @hide */
	public static final String __md_methods;
	static {
		__md_methods = 
			"n_getEditable:()Landroid/text/Editable;:GetGetEditableHandler\n" +
			"n_endBatchEdit:()Z:GetEndBatchEditHandler\n" +
			"n_setSelection:(II)Z:GetSetSelection_IIHandler\n" +
			"n_sendKeyEvent:(Landroid/view/KeyEvent;)Z:GetSendKeyEvent_Landroid_view_KeyEvent_Handler\n" +
			"n_requestCursorUpdates:(I)Z:GetRequestCursorUpdates_IHandler\n" +
			"n_beginBatchEdit:()Z:GetBeginBatchEditHandler\n" +
			"n_clearMetaKeyStates:(I)Z:GetClearMetaKeyStates_IHandler\n" +
			"n_closeConnection:()V:GetCloseConnectionHandler\n" +
			"n_commitCompletion:(Landroid/view/inputmethod/CompletionInfo;)Z:GetCommitCompletion_Landroid_view_inputmethod_CompletionInfo_Handler\n" +
			"n_commitContent:(Landroid/view/inputmethod/InputContentInfo;ILandroid/os/Bundle;)Z:GetCommitContent_Landroid_view_inputmethod_InputContentInfo_ILandroid_os_Bundle_Handler\n" +
			"n_commitCorrection:(Landroid/view/inputmethod/CorrectionInfo;)Z:GetCommitCorrection_Landroid_view_inputmethod_CorrectionInfo_Handler\n" +
			"n_commitText:(Ljava/lang/CharSequence;I)Z:GetCommitText_Ljava_lang_CharSequence_IHandler\n" +
			"n_deleteSurroundingText:(II)Z:GetDeleteSurroundingText_IIHandler\n" +
			"n_deleteSurroundingTextInCodePoints:(II)Z:GetDeleteSurroundingTextInCodePoints_IIHandler\n" +
			"n_finishComposingText:()Z:GetFinishComposingTextHandler\n" +
			"n_getCursorCapsMode:(I)I:GetGetCursorCapsMode_IHandler\n" +
			"n_getExtractedText:(Landroid/view/inputmethod/ExtractedTextRequest;I)Landroid/view/inputmethod/ExtractedText;:GetGetExtractedText_Landroid_view_inputmethod_ExtractedTextRequest_IHandler\n" +
			"n_getSelectedText:(I)Ljava/lang/CharSequence;:GetGetSelectedText_IHandler\n" +
			"n_getSurroundingText:(III)Landroid/view/inputmethod/SurroundingText;:GetGetSurroundingText_IIIHandler\n" +
			"n_getTextAfterCursor:(II)Ljava/lang/CharSequence;:GetGetTextAfterCursor_IIHandler\n" +
			"n_getTextBeforeCursor:(II)Ljava/lang/CharSequence;:GetGetTextBeforeCursor_IIHandler\n" +
			"n_performContextMenuAction:(I)Z:GetPerformContextMenuAction_IHandler\n" +
			"n_performEditorAction:(I)Z:GetPerformEditorAction_IHandler\n" +
			"n_performPrivateCommand:(Ljava/lang/String;Landroid/os/Bundle;)Z:GetPerformPrivateCommand_Ljava_lang_String_Landroid_os_Bundle_Handler\n" +
			"n_replaceText:(IILjava/lang/CharSequence;ILandroid/view/inputmethod/TextAttribute;)Z:GetReplaceText_IILjava_lang_CharSequence_ILandroid_view_inputmethod_TextAttribute_Handler\n" +
			"n_reportFullscreenMode:(Z)Z:GetReportFullscreenMode_ZHandler\n" +
			"n_setComposingRegion:(II)Z:GetSetComposingRegion_IIHandler\n" +
			"n_setComposingText:(Ljava/lang/CharSequence;I)Z:GetSetComposingText_Ljava_lang_CharSequence_IHandler\n" +
			"n_takeSnapshot:()Landroid/view/inputmethod/TextSnapshot;:GetTakeSnapshotHandler\n" +
			"";
		mono.android.Runtime.register ("Uno.UI.Runtime.Skia.Android.TextInputConnection, Uno.UI.Runtime.Skia.Android", TextInputConnection.class, __md_methods);
	}

	public TextInputConnection (android.view.View p0, boolean p1)
	{
		super (p0, p1);
		if (getClass () == TextInputConnection.class) {
			mono.android.TypeManager.Activate ("Uno.UI.Runtime.Skia.Android.TextInputConnection, Uno.UI.Runtime.Skia.Android", "Android.Views.View, Mono.Android:System.Boolean, System.Private.CoreLib", this, new java.lang.Object[] { p0, p1 });
		}
	}

	public android.text.Editable getEditable ()
	{
		return n_getEditable ();
	}

	private native android.text.Editable n_getEditable ();

	public boolean endBatchEdit ()
	{
		return n_endBatchEdit ();
	}

	private native boolean n_endBatchEdit ();

	public boolean setSelection (int p0, int p1)
	{
		return n_setSelection (p0, p1);
	}

	private native boolean n_setSelection (int p0, int p1);

	public boolean sendKeyEvent (android.view.KeyEvent p0)
	{
		return n_sendKeyEvent (p0);
	}

	private native boolean n_sendKeyEvent (android.view.KeyEvent p0);

	public boolean requestCursorUpdates (int p0)
	{
		return n_requestCursorUpdates (p0);
	}

	private native boolean n_requestCursorUpdates (int p0);

	public boolean beginBatchEdit ()
	{
		return n_beginBatchEdit ();
	}

	private native boolean n_beginBatchEdit ();

	public boolean clearMetaKeyStates (int p0)
	{
		return n_clearMetaKeyStates (p0);
	}

	private native boolean n_clearMetaKeyStates (int p0);

	public void closeConnection ()
	{
		n_closeConnection ();
	}

	private native void n_closeConnection ();

	public boolean commitCompletion (android.view.inputmethod.CompletionInfo p0)
	{
		return n_commitCompletion (p0);
	}

	private native boolean n_commitCompletion (android.view.inputmethod.CompletionInfo p0);

	public boolean commitContent (android.view.inputmethod.InputContentInfo p0, int p1, android.os.Bundle p2)
	{
		return n_commitContent (p0, p1, p2);
	}

	private native boolean n_commitContent (android.view.inputmethod.InputContentInfo p0, int p1, android.os.Bundle p2);

	public boolean commitCorrection (android.view.inputmethod.CorrectionInfo p0)
	{
		return n_commitCorrection (p0);
	}

	private native boolean n_commitCorrection (android.view.inputmethod.CorrectionInfo p0);

	public boolean commitText (java.lang.CharSequence p0, int p1)
	{
		return n_commitText (p0, p1);
	}

	private native boolean n_commitText (java.lang.CharSequence p0, int p1);

	public boolean deleteSurroundingText (int p0, int p1)
	{
		return n_deleteSurroundingText (p0, p1);
	}

	private native boolean n_deleteSurroundingText (int p0, int p1);

	public boolean deleteSurroundingTextInCodePoints (int p0, int p1)
	{
		return n_deleteSurroundingTextInCodePoints (p0, p1);
	}

	private native boolean n_deleteSurroundingTextInCodePoints (int p0, int p1);

	public boolean finishComposingText ()
	{
		return n_finishComposingText ();
	}

	private native boolean n_finishComposingText ();

	public int getCursorCapsMode (int p0)
	{
		return n_getCursorCapsMode (p0);
	}

	private native int n_getCursorCapsMode (int p0);

	public android.view.inputmethod.ExtractedText getExtractedText (android.view.inputmethod.ExtractedTextRequest p0, int p1)
	{
		return n_getExtractedText (p0, p1);
	}

	private native android.view.inputmethod.ExtractedText n_getExtractedText (android.view.inputmethod.ExtractedTextRequest p0, int p1);

	public java.lang.CharSequence getSelectedText (int p0)
	{
		return n_getSelectedText (p0);
	}

	private native java.lang.CharSequence n_getSelectedText (int p0);

	public android.view.inputmethod.SurroundingText getSurroundingText (int p0, int p1, int p2)
	{
		return n_getSurroundingText (p0, p1, p2);
	}

	private native android.view.inputmethod.SurroundingText n_getSurroundingText (int p0, int p1, int p2);

	public java.lang.CharSequence getTextAfterCursor (int p0, int p1)
	{
		return n_getTextAfterCursor (p0, p1);
	}

	private native java.lang.CharSequence n_getTextAfterCursor (int p0, int p1);

	public java.lang.CharSequence getTextBeforeCursor (int p0, int p1)
	{
		return n_getTextBeforeCursor (p0, p1);
	}

	private native java.lang.CharSequence n_getTextBeforeCursor (int p0, int p1);

	public boolean performContextMenuAction (int p0)
	{
		return n_performContextMenuAction (p0);
	}

	private native boolean n_performContextMenuAction (int p0);

	public boolean performEditorAction (int p0)
	{
		return n_performEditorAction (p0);
	}

	private native boolean n_performEditorAction (int p0);

	public boolean performPrivateCommand (java.lang.String p0, android.os.Bundle p1)
	{
		return n_performPrivateCommand (p0, p1);
	}

	private native boolean n_performPrivateCommand (java.lang.String p0, android.os.Bundle p1);

	public boolean replaceText (int p0, int p1, java.lang.CharSequence p2, int p3, android.view.inputmethod.TextAttribute p4)
	{
		return n_replaceText (p0, p1, p2, p3, p4);
	}

	private native boolean n_replaceText (int p0, int p1, java.lang.CharSequence p2, int p3, android.view.inputmethod.TextAttribute p4);

	public boolean reportFullscreenMode (boolean p0)
	{
		return n_reportFullscreenMode (p0);
	}

	private native boolean n_reportFullscreenMode (boolean p0);

	public boolean setComposingRegion (int p0, int p1)
	{
		return n_setComposingRegion (p0, p1);
	}

	private native boolean n_setComposingRegion (int p0, int p1);

	public boolean setComposingText (java.lang.CharSequence p0, int p1)
	{
		return n_setComposingText (p0, p1);
	}

	private native boolean n_setComposingText (java.lang.CharSequence p0, int p1);

	public android.view.inputmethod.TextSnapshot takeSnapshot ()
	{
		return n_takeSnapshot ();
	}

	private native android.view.inputmethod.TextSnapshot n_takeSnapshot ();

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
