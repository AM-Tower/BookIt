// GENERATED FILE, DO NOT MODIFY (PInvokeTableGenerator.cs)
#include <mono/utils/details/mono-error-types.h>
#include <mono/metadata/assembly.h>
#include <mono/utils/mono-error.h>
#include <mono/metadata/object.h>
#include <mono/utils/details/mono-logger-types.h>
#include "runtime.h"
#include "pinvoke.h"

uint32_t CompressionNative_Crc32 (uint32_t, void *, int32_t);

int32_t CompressionNative_Deflate (void *, int32_t);

int32_t CompressionNative_DeflateEnd (void *);

int32_t CompressionNative_DeflateInit2_ (void *, int32_t, int32_t, int32_t, int32_t, int32_t);

int32_t CompressionNative_Inflate (void *, int32_t);

int32_t CompressionNative_InflateEnd (void *);

int32_t CompressionNative_InflateInit2_ (void *, int32_t);

int32_t CompressionNative_InflateReset2_ (void *, int32_t);

void GlobalizationNative_ChangeCase (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseInvariant (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_ChangeCaseTurkish (void *, int32_t, void *, int32_t, int32_t);

void GlobalizationNative_CloseSortHandle (void *);

int32_t GlobalizationNative_CompareString (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_EndsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_EnumCalendarInfo (void *, void *, uint32_t, int32_t, void *);

int32_t GlobalizationNative_GetCalendarInfo (void *, uint32_t, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetCalendars (void *, void *, int32_t);

int32_t GlobalizationNative_GetDefaultLocaleName (void *, int32_t);

int32_t GlobalizationNative_GetICUVersion ();

int32_t GlobalizationNative_GetJapaneseEraStartDate (int32_t, void *, void *, void *);

int32_t GlobalizationNative_GetLatestJapaneseEra ();

int32_t GlobalizationNative_GetLocaleInfoGroupingSizes (void *, uint32_t, void *, void *);

int32_t GlobalizationNative_GetLocaleInfoInt (void *, uint32_t, void *);

int32_t GlobalizationNative_GetLocaleInfoString (void *, uint32_t, void *, int32_t, void *);

int32_t GlobalizationNative_GetLocaleName (void *, void *, int32_t);

int32_t GlobalizationNative_GetLocaleTimeFormat (void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_GetLocales (void *, int32_t);

int32_t GlobalizationNative_GetSortHandle (void *, void *);

int32_t GlobalizationNative_GetSortKey (void *, void *, int32_t, void *, int32_t, int32_t);

int32_t GlobalizationNative_GetSortVersion (void *);

int32_t GlobalizationNative_IndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

void GlobalizationNative_InitICUFunctions (void *, void *, void *, void *);

void GlobalizationNative_InitOrdinalCasingPage (int32_t, void *);

int32_t GlobalizationNative_IsNormalized (int32_t, void *, int32_t);

int32_t GlobalizationNative_IsPredefinedLocale (void *);

int32_t GlobalizationNative_LastIndexOf (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_LoadICU ();

int32_t GlobalizationNative_NormalizeString (int32_t, void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_StartsWith (void *, void *, int32_t, void *, int32_t, int32_t, void *);

int32_t GlobalizationNative_ToAscii (uint32_t, void *, int32_t, void *, int32_t);

int32_t GlobalizationNative_ToUnicode (uint32_t, void *, int32_t, void *, int32_t);

int32_t SystemNative_Access (void *, int32_t);

void * SystemNative_AlignedAlloc (void *, void *);

void SystemNative_AlignedFree (void *);

void * SystemNative_AlignedRealloc (void *, void *, void *);

void * SystemNative_Calloc (void *, void *);

int32_t SystemNative_CanGetHiddenFlag ();

int32_t SystemNative_ChDir (void *);

int32_t SystemNative_ChMod (void *, int32_t);

int32_t SystemNative_Close (void *);

int32_t SystemNative_CloseDir (void *);

int32_t SystemNative_ConvertErrorPalToPlatform (int32_t);

int32_t SystemNative_ConvertErrorPlatformToPal (int32_t);

int32_t SystemNative_CopyFile (void *, void *, int64_t);

void * SystemNative_Dup (void *);

int32_t SystemNative_FAllocate (void *, int64_t, int64_t);

int32_t SystemNative_FChMod (void *, int32_t);

int32_t SystemNative_FChflags (void *, uint32_t);

int32_t SystemNative_FLock (void *, int32_t);

int32_t SystemNative_FStat (void *, void *);

int32_t SystemNative_FSync (void *);

int32_t SystemNative_FTruncate (void *, int64_t);

int32_t SystemNative_FUTimens (void *, void *);

int32_t SystemNative_FcntlSetFD (void *, int32_t);

void SystemNative_Free (void *);

void SystemNative_FreeEnviron (void *);

int32_t SystemNative_GetAddressFamily (void *, int32_t, void *);

double SystemNative_GetCpuUtilization (void *);

int32_t SystemNative_GetCryptographicallySecureRandomBytes (void *, int32_t);

void * SystemNative_GetCwd (void *, int32_t);

void * SystemNative_GetDefaultSearchOrderPseudoHandle ();

void * SystemNative_GetEnv (void *);

void * SystemNative_GetEnviron ();

int32_t SystemNative_GetErrNo ();

uint32_t SystemNative_GetFileSystemType (void *);

int32_t SystemNative_GetIPv4Address (void *, int32_t, void *);

int32_t SystemNative_GetIPv6Address (void *, int32_t, void *, int32_t, void *);

int64_t SystemNative_GetLowResolutionTimestamp ();

void SystemNative_GetNonCryptographicallySecureRandomBytes (void *, int32_t);

int32_t SystemNative_GetPort (void *, int32_t, void *);

int32_t SystemNative_GetSocketAddressSizes (void *, void *, void *, void *);

int64_t SystemNative_GetSystemTimeAsTicks ();

void * SystemNative_GetTimeZoneData (void *, void *);

int64_t SystemNative_GetTimestamp ();

int32_t SystemNative_IsMemfdSupported ();

int32_t SystemNative_LChflags (void *, uint32_t);

int32_t SystemNative_LChflagsCanSetHiddenFlag ();

int64_t SystemNative_LSeek (void *, int64_t, int32_t);

int32_t SystemNative_LStat (void *, void *);

int32_t SystemNative_Link (void *, void *);

int32_t SystemNative_LockFileRegion (void *, int64_t, int64_t, int32_t);

void SystemNative_Log (void *, int32_t);

void SystemNative_LogError (void *, int32_t);

void SystemNative_LowLevelMonitor_Acquire (void *);

void * SystemNative_LowLevelMonitor_Create ();

void SystemNative_LowLevelMonitor_Destroy (void *);

void SystemNative_LowLevelMonitor_Release (void *);

void SystemNative_LowLevelMonitor_Signal_Release (void *);

int32_t SystemNative_LowLevelMonitor_TimedWait (void *, int32_t);

void SystemNative_LowLevelMonitor_Wait (void *);

int32_t SystemNative_MAdvise (void *, uint64_t, int32_t);

void * SystemNative_MMap (void *, uint64_t, int32_t, int32_t, void *, int64_t);

int32_t SystemNative_MSync (void *, uint64_t, int32_t);

int32_t SystemNative_MUnmap (void *, uint64_t);

void * SystemNative_Malloc (void *);

void * SystemNative_MemfdCreate (void *, int32_t);

int32_t SystemNative_MkDir (void *, int32_t);

void * SystemNative_MkdTemp (void *);

void * SystemNative_MksTemps (void *, int32_t);

void * SystemNative_Open (void *, int32_t, int32_t);

void * SystemNative_OpenDir (void *);

int32_t SystemNative_PRead (void *, void *, int32_t, int64_t);

int64_t SystemNative_PReadV (void *, void *, int32_t, int64_t);

int32_t SystemNative_PWrite (void *, void *, int32_t, int64_t);

int64_t SystemNative_PWriteV (void *, void *, int32_t, int64_t);

int32_t SystemNative_PosixFAdvise (void *, int64_t, int64_t, int32_t);

int32_t SystemNative_Read (void *, void *, int32_t);

int32_t SystemNative_ReadDir (void *, void *);

int32_t SystemNative_ReadLink (void *, void *, int32_t);

void * SystemNative_Realloc (void *, void *);

int32_t SystemNative_Rename (void *, void *);

int32_t SystemNative_RmDir (void *);

int32_t SystemNative_SchedGetCpu ();

int32_t SystemNative_SetAddressFamily (void *, int32_t, int32_t);

void SystemNative_SetErrNo (int32_t);

int32_t SystemNative_SetIPv4Address (void *, int32_t, uint32_t);

int32_t SystemNative_SetIPv6Address (void *, int32_t, void *, int32_t, uint32_t);

int32_t SystemNative_SetPort (void *, int32_t, uint32_t);

void * SystemNative_ShmOpen (void *, int32_t, int32_t);

int32_t SystemNative_ShmUnlink (void *);

int32_t SystemNative_Stat (void *, void *);

void * SystemNative_StrErrorR (int32_t, void *, int32_t);

int32_t SystemNative_SymLink (void *, void *);

int64_t SystemNative_SysConf (int32_t);

void SystemNative_SysLog (int32_t, void *, void *);

uint32_t SystemNative_TryGetUInt32OSThreadId ();

int32_t SystemNative_UTimensat (void *, void *);

int32_t SystemNative_Unlink (void *);

int32_t SystemNative_Write (void *, void *, int32_t);

void gr_backendrendertarget_delete (void *);

int32_t gr_backendrendertarget_get_backend (void *);

int32_t gr_backendrendertarget_get_gl_framebufferinfo (void *, void *);

int32_t gr_backendrendertarget_get_height (void *);

int32_t gr_backendrendertarget_get_samples (void *);

int32_t gr_backendrendertarget_get_stencils (void *);

int32_t gr_backendrendertarget_get_width (void *);

int32_t gr_backendrendertarget_is_valid (void *);

void * gr_backendrendertarget_new_direct3d (int32_t, int32_t, void *);

void * gr_backendrendertarget_new_gl (int32_t, int32_t, int32_t, int32_t, void *);

void * gr_backendrendertarget_new_metal (int32_t, int32_t, void *);

void * gr_backendrendertarget_new_vulkan (int32_t, int32_t, void *);

void gr_backendtexture_delete (void *);

int32_t gr_backendtexture_get_backend (void *);

int32_t gr_backendtexture_get_gl_textureinfo (void *, void *);

int32_t gr_backendtexture_get_height (void *);

int32_t gr_backendtexture_get_width (void *);

int32_t gr_backendtexture_has_mipmaps (void *);

int32_t gr_backendtexture_is_valid (void *);

void * gr_backendtexture_new_direct3d (int32_t, int32_t, void *);

void * gr_backendtexture_new_gl (int32_t, int32_t, int32_t, void *);

void * gr_backendtexture_new_metal (int32_t, int32_t, int32_t, void *);

void * gr_backendtexture_new_vulkan (int32_t, int32_t, void *);

void gr_direct_context_abandon_context (void *);

void gr_direct_context_dump_memory_statistics (void *, void *);

void gr_direct_context_flush (void *);

void gr_direct_context_flush_and_submit (void *, int32_t);

void gr_direct_context_flush_image (void *, void *);

void gr_direct_context_flush_surface (void *, void *);

void gr_direct_context_free_gpu_resources (void *);

void * gr_direct_context_get_resource_cache_limit (void *);

void gr_direct_context_get_resource_cache_usage (void *, void *, void *);

int32_t gr_direct_context_is_abandoned (void *);

void * gr_direct_context_make_direct3d (void *);

void * gr_direct_context_make_direct3d_with_options (void *, void *);

void * gr_direct_context_make_gl (void *);

void * gr_direct_context_make_gl_with_options (void *, void *);

void * gr_direct_context_make_metal (void *, void *);

void * gr_direct_context_make_metal_with_options (void *, void *, void *);

void * gr_direct_context_make_vulkan (void *);

void * gr_direct_context_make_vulkan_with_options (void *, void *);

void gr_direct_context_perform_deferred_cleanup (void *, int64_t);

void gr_direct_context_purge_unlocked_resources (void *, int32_t);

void gr_direct_context_purge_unlocked_resources_bytes (void *, void *, int32_t);

void gr_direct_context_release_resources_and_abandon_context (void *);

void gr_direct_context_reset_context (void *, uint32_t);

void gr_direct_context_set_resource_cache_limit (void *, void *);

int32_t gr_direct_context_submit (void *, int32_t);

void * gr_glinterface_assemble_gl_interface (void *, void *);

void * gr_glinterface_assemble_gles_interface (void *, void *);

void * gr_glinterface_assemble_interface (void *, void *);

void * gr_glinterface_assemble_webgl_interface (void *, void *);

void * gr_glinterface_create_native_interface ();

int32_t gr_glinterface_has_extension (void *, void *);

void gr_glinterface_unref (void *);

int32_t gr_glinterface_validate (void *);

int32_t gr_recording_context_get_backend (void *);

void * gr_recording_context_get_direct_context (void *);

int32_t gr_recording_context_get_max_surface_sample_count_for_color_type (void *, int32_t);

int32_t gr_recording_context_is_abandoned (void *);

int32_t gr_recording_context_max_render_target_size (void *);

int32_t gr_recording_context_max_texture_size (void *);

void gr_recording_context_unref (void *);

void gr_vk_extensions_delete (void *);

int32_t gr_vk_extensions_has_extension (void *, void *, uint32_t);

void gr_vk_extensions_init (void *, void *, void *, void *, void *, uint32_t, void *, uint32_t, void *);

void * gr_vk_extensions_new ();

void * hb_blob_copy_writable_or_fail (void *);

void * hb_blob_create (void *, uint32_t, int32_t, void *, void *);

void * hb_blob_create_from_file (void *);

void * hb_blob_create_from_file_or_fail (void *);

void * hb_blob_create_or_fail (void *, uint32_t, int32_t, void *, void *);

void * hb_blob_create_sub_blob (void *, uint32_t, uint32_t);

void hb_blob_destroy (void *);

void * hb_blob_get_data (void *, void *);

void * hb_blob_get_data_writable (void *, void *);

void * hb_blob_get_empty ();

uint32_t hb_blob_get_length (void *);

int32_t hb_blob_is_immutable (void *);

void hb_blob_make_immutable (void *);

void * hb_blob_reference (void *);

void hb_buffer_add (void *, uint32_t, uint32_t);

void hb_buffer_add_codepoints (void *, void *, int32_t, uint32_t, int32_t);

void hb_buffer_add_latin1 (void *, void *, int32_t, uint32_t, int32_t);

void hb_buffer_add_utf16 (void *, void *, int32_t, uint32_t, int32_t);

void hb_buffer_add_utf32 (void *, void *, int32_t, uint32_t, int32_t);

void hb_buffer_add_utf8 (void *, void *, int32_t, uint32_t, int32_t);

int32_t hb_buffer_allocation_successful (void *);

void hb_buffer_append (void *, void *, uint32_t, uint32_t);

void hb_buffer_clear_contents (void *);

void * hb_buffer_create ();

int32_t hb_buffer_deserialize_glyphs (void *, void *, int32_t, void *, void *, int32_t);

int32_t hb_buffer_deserialize_unicode (void *, void *, int32_t, void *, int32_t);

void hb_buffer_destroy (void *);

int32_t hb_buffer_diff (void *, void *, uint32_t, uint32_t);

int32_t hb_buffer_get_cluster_level (void *);

int32_t hb_buffer_get_content_type (void *);

int32_t hb_buffer_get_direction (void *);

void * hb_buffer_get_empty ();

int32_t hb_buffer_get_flags (void *);

void * hb_buffer_get_glyph_infos (void *, void *);

void * hb_buffer_get_glyph_positions (void *, void *);

uint32_t hb_buffer_get_invisible_glyph (void *);

void * hb_buffer_get_language (void *);

uint32_t hb_buffer_get_length (void *);

uint32_t hb_buffer_get_replacement_codepoint (void *);

uint32_t hb_buffer_get_script (void *);

void * hb_buffer_get_unicode_funcs (void *);

void hb_buffer_guess_segment_properties (void *);

int32_t hb_buffer_has_positions (void *);

void hb_buffer_normalize_glyphs (void *);

int32_t hb_buffer_pre_allocate (void *, uint32_t);

void * hb_buffer_reference (void *);

void hb_buffer_reset (void *);

void hb_buffer_reverse (void *);

void hb_buffer_reverse_clusters (void *);

void hb_buffer_reverse_range (void *, uint32_t, uint32_t);

uint32_t hb_buffer_serialize (void *, uint32_t, uint32_t, void *, uint32_t, void *, void *, int32_t, int32_t);

int32_t hb_buffer_serialize_format_from_string (void *, int32_t);

void * hb_buffer_serialize_format_to_string (int32_t);

uint32_t hb_buffer_serialize_glyphs (void *, uint32_t, uint32_t, void *, uint32_t, void *, void *, int32_t, int32_t);

void * hb_buffer_serialize_list_formats ();

uint32_t hb_buffer_serialize_unicode (void *, uint32_t, uint32_t, void *, uint32_t, void *, int32_t, int32_t);

void hb_buffer_set_cluster_level (void *, int32_t);

void hb_buffer_set_content_type (void *, int32_t);

void hb_buffer_set_direction (void *, int32_t);

void hb_buffer_set_flags (void *, int32_t);

void hb_buffer_set_invisible_glyph (void *, uint32_t);

void hb_buffer_set_language (void *, void *);

int32_t hb_buffer_set_length (void *, uint32_t);

void hb_buffer_set_message_func (void *, void *, void *, void *);

void hb_buffer_set_replacement_codepoint (void *, uint32_t);

void hb_buffer_set_script (void *, uint32_t);

void hb_buffer_set_unicode_funcs (void *, void *);

uint32_t hb_color_get_alpha (uint32_t);

uint32_t hb_color_get_blue (uint32_t);

uint32_t hb_color_get_green (uint32_t);

uint32_t hb_color_get_red (uint32_t);

int32_t hb_direction_from_string (void *, int32_t);

void * hb_direction_to_string (int32_t);

int32_t hb_face_builder_add_table (void *, uint32_t, void *);

void * hb_face_builder_create ();

void hb_face_collect_unicodes (void *, void *);

void hb_face_collect_variation_selectors (void *, void *);

void hb_face_collect_variation_unicodes (void *, uint32_t, void *);

uint32_t hb_face_count (void *);

void * hb_face_create (void *, uint32_t);

void * hb_face_create_for_tables (void *, void *, void *);

void hb_face_destroy (void *);

void * hb_face_get_empty ();

uint32_t hb_face_get_glyph_count (void *);

uint32_t hb_face_get_index (void *);

uint32_t hb_face_get_table_tags (void *, uint32_t, void *, void *);

uint32_t hb_face_get_upem (void *);

int32_t hb_face_is_immutable (void *);

void hb_face_make_immutable (void *);

void * hb_face_reference (void *);

void * hb_face_reference_blob (void *);

void * hb_face_reference_table (void *, uint32_t);

void hb_face_set_glyph_count (void *, uint32_t);

void hb_face_set_index (void *, uint32_t);

void hb_face_set_upem (void *, uint32_t);

int32_t hb_feature_from_string (void *, int32_t, void *);

void hb_feature_to_string (void *, void *, uint32_t);

void hb_font_add_glyph_origin_for_direction (void *, uint32_t, int32_t, void *, void *);

void * hb_font_create (void *);

void * hb_font_create_sub_font (void *);

void hb_font_destroy (void *);

void * hb_font_funcs_create ();

void hb_font_funcs_destroy (void *);

void * hb_font_funcs_get_empty ();

int32_t hb_font_funcs_is_immutable (void *);

void hb_font_funcs_make_immutable (void *);

void * hb_font_funcs_reference (void *);

void hb_font_funcs_set_font_h_extents_func (void *, void *, void *, void *);

void hb_font_funcs_set_font_v_extents_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_contour_point_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_extents_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_from_name_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_h_advance_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_h_advances_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_h_kerning_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_h_origin_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_name_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_v_advance_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_v_advances_func (void *, void *, void *, void *);

void hb_font_funcs_set_glyph_v_origin_func (void *, void *, void *, void *);

void hb_font_funcs_set_nominal_glyph_func (void *, void *, void *, void *);

void hb_font_funcs_set_nominal_glyphs_func (void *, void *, void *, void *);

void hb_font_funcs_set_variation_glyph_func (void *, void *, void *, void *);

void * hb_font_get_empty ();

void hb_font_get_extents_for_direction (void *, int32_t, void *);

void * hb_font_get_face (void *);

int32_t hb_font_get_glyph (void *, uint32_t, uint32_t, void *);

void hb_font_get_glyph_advance_for_direction (void *, uint32_t, int32_t, void *, void *);

void hb_font_get_glyph_advances_for_direction (void *, int32_t, uint32_t, void *, uint32_t, void *, uint32_t);

int32_t hb_font_get_glyph_contour_point (void *, uint32_t, uint32_t, void *, void *);

int32_t hb_font_get_glyph_contour_point_for_origin (void *, uint32_t, uint32_t, int32_t, void *, void *);

int32_t hb_font_get_glyph_extents (void *, uint32_t, void *);

int32_t hb_font_get_glyph_extents_for_origin (void *, uint32_t, int32_t, void *);

int32_t hb_font_get_glyph_from_name (void *, void *, int32_t, void *);

int32_t hb_font_get_glyph_h_advance (void *, uint32_t);

void hb_font_get_glyph_h_advances (void *, uint32_t, void *, uint32_t, void *, uint32_t);

int32_t hb_font_get_glyph_h_kerning (void *, uint32_t, uint32_t);

int32_t hb_font_get_glyph_h_origin (void *, uint32_t, void *, void *);

void hb_font_get_glyph_kerning_for_direction (void *, uint32_t, uint32_t, int32_t, void *, void *);

int32_t hb_font_get_glyph_name (void *, uint32_t, void *, uint32_t);

void hb_font_get_glyph_origin_for_direction (void *, uint32_t, int32_t, void *, void *);

int32_t hb_font_get_glyph_v_advance (void *, uint32_t);

void hb_font_get_glyph_v_advances (void *, uint32_t, void *, uint32_t, void *, uint32_t);

int32_t hb_font_get_glyph_v_origin (void *, uint32_t, void *, void *);

int32_t hb_font_get_h_extents (void *, void *);

int32_t hb_font_get_nominal_glyph (void *, uint32_t, void *);

uint32_t hb_font_get_nominal_glyphs (void *, uint32_t, void *, uint32_t, void *, uint32_t);

void * hb_font_get_parent (void *);

void hb_font_get_ppem (void *, void *, void *);

float hb_font_get_ptem (void *);

void hb_font_get_scale (void *, void *, void *);

int32_t hb_font_get_v_extents (void *, void *);

void * hb_font_get_var_coords_normalized (void *, void *);

int32_t hb_font_get_variation_glyph (void *, uint32_t, uint32_t, void *);

int32_t hb_font_glyph_from_string (void *, void *, int32_t, void *);

void hb_font_glyph_to_string (void *, uint32_t, void *, uint32_t);

int32_t hb_font_is_immutable (void *);

void hb_font_make_immutable (void *);

void * hb_font_reference (void *);

void hb_font_set_face (void *, void *);

void hb_font_set_funcs (void *, void *, void *, void *);

void hb_font_set_funcs_data (void *, void *, void *);

void hb_font_set_parent (void *, void *);

void hb_font_set_ppem (void *, uint32_t, uint32_t);

void hb_font_set_ptem (void *, float);

void hb_font_set_scale (void *, int32_t, int32_t);

void hb_font_set_var_coords_design (void *, void *, uint32_t);

void hb_font_set_var_coords_normalized (void *, void *, uint32_t);

void hb_font_set_var_named_instance (void *, uint32_t);

void hb_font_set_variations (void *, void *, uint32_t);

void hb_font_subtract_glyph_origin_for_direction (void *, uint32_t, int32_t, void *, void *);

int32_t hb_glyph_info_get_glyph_flags (void *);

void * hb_language_from_string (void *, int32_t);

void * hb_language_get_default ();

void * hb_language_to_string (void *);

int32_t hb_map_allocation_successful (void *);

void hb_map_clear (void *);

void * hb_map_create ();

void hb_map_del (void *, uint32_t);

void hb_map_destroy (void *);

uint32_t hb_map_get (void *, uint32_t);

void * hb_map_get_empty ();

uint32_t hb_map_get_population (void *);

int32_t hb_map_has (void *, uint32_t);

int32_t hb_map_is_empty (void *);

void * hb_map_reference (void *);

void hb_map_set (void *, uint32_t, uint32_t);

uint32_t hb_ot_color_glyph_get_layers (void *, uint32_t, uint32_t, void *, void *);

void * hb_ot_color_glyph_reference_png (void *, uint32_t);

void * hb_ot_color_glyph_reference_svg (void *, uint32_t);

int32_t hb_ot_color_has_layers (void *);

int32_t hb_ot_color_has_palettes (void *);

int32_t hb_ot_color_has_png (void *);

int32_t hb_ot_color_has_svg (void *);

int32_t hb_ot_color_palette_color_get_name_id (void *, uint32_t);

uint32_t hb_ot_color_palette_get_colors (void *, uint32_t, uint32_t, void *, void *);

uint32_t hb_ot_color_palette_get_count (void *);

int32_t hb_ot_color_palette_get_flags (void *, uint32_t);

int32_t hb_ot_color_palette_get_name_id (void *, uint32_t);

void hb_ot_font_set_funcs (void *);

void hb_ot_layout_collect_features (void *, uint32_t, void *, void *, void *, void *);

void hb_ot_layout_collect_lookups (void *, uint32_t, void *, void *, void *, void *);

uint32_t hb_ot_layout_feature_get_characters (void *, uint32_t, uint32_t, uint32_t, void *, void *);

uint32_t hb_ot_layout_feature_get_lookups (void *, uint32_t, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_feature_get_name_ids (void *, uint32_t, uint32_t, void *, void *, void *, void *, void *);

uint32_t hb_ot_layout_feature_with_variations_get_lookups (void *, uint32_t, uint32_t, uint32_t, uint32_t, void *, void *);

uint32_t hb_ot_layout_get_attach_points (void *, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_get_baseline (void *, int32_t, int32_t, uint32_t, uint32_t, void *);

int32_t hb_ot_layout_get_glyph_class (void *, uint32_t);

void hb_ot_layout_get_glyphs_in_class (void *, int32_t, void *);

uint32_t hb_ot_layout_get_ligature_carets (void *, int32_t, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_get_size_params (void *, void *, void *, void *, void *, void *);

int32_t hb_ot_layout_has_glyph_classes (void *);

int32_t hb_ot_layout_has_positioning (void *);

int32_t hb_ot_layout_has_substitution (void *);

int32_t hb_ot_layout_language_find_feature (void *, uint32_t, uint32_t, uint32_t, uint32_t, void *);

uint32_t hb_ot_layout_language_get_feature_indexes (void *, uint32_t, uint32_t, uint32_t, uint32_t, void *, void *);

uint32_t hb_ot_layout_language_get_feature_tags (void *, uint32_t, uint32_t, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_language_get_required_feature (void *, uint32_t, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_language_get_required_feature_index (void *, uint32_t, uint32_t, uint32_t, void *);

void hb_ot_layout_lookup_collect_glyphs (void *, uint32_t, uint32_t, void *, void *, void *, void *);

uint32_t hb_ot_layout_lookup_get_glyph_alternates (void *, uint32_t, uint32_t, uint32_t, void *, void *);

void hb_ot_layout_lookup_substitute_closure (void *, uint32_t, void *);

int32_t hb_ot_layout_lookup_would_substitute (void *, uint32_t, void *, uint32_t, int32_t);

void hb_ot_layout_lookups_substitute_closure (void *, void *, void *);

uint32_t hb_ot_layout_script_get_language_tags (void *, uint32_t, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_script_select_language (void *, uint32_t, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_table_find_feature_variations (void *, uint32_t, void *, uint32_t, void *);

int32_t hb_ot_layout_table_find_script (void *, uint32_t, uint32_t, void *);

uint32_t hb_ot_layout_table_get_feature_tags (void *, uint32_t, uint32_t, void *, void *);

uint32_t hb_ot_layout_table_get_lookup_count (void *, uint32_t);

uint32_t hb_ot_layout_table_get_script_tags (void *, uint32_t, uint32_t, void *, void *);

int32_t hb_ot_layout_table_select_script (void *, uint32_t, uint32_t, void *, void *, void *);

int32_t hb_ot_math_get_constant (void *, int32_t);

uint32_t hb_ot_math_get_glyph_assembly (void *, uint32_t, int32_t, uint32_t, void *, void *, void *);

int32_t hb_ot_math_get_glyph_italics_correction (void *, uint32_t);

int32_t hb_ot_math_get_glyph_kerning (void *, uint32_t, int32_t, int32_t);

int32_t hb_ot_math_get_glyph_top_accent_attachment (void *, uint32_t);

uint32_t hb_ot_math_get_glyph_variants (void *, uint32_t, int32_t, uint32_t, void *, void *);

int32_t hb_ot_math_get_min_connector_overlap (void *, int32_t);

int32_t hb_ot_math_has_data (void *);

int32_t hb_ot_math_is_glyph_extended_shape (void *, uint32_t);

uint32_t hb_ot_meta_get_entry_tags (void *, uint32_t, void *, void *);

void * hb_ot_meta_reference_entry (void *, int32_t);

int32_t hb_ot_metrics_get_position (void *, int32_t, void *);

float hb_ot_metrics_get_variation (void *, int32_t);

int32_t hb_ot_metrics_get_x_variation (void *, int32_t);

int32_t hb_ot_metrics_get_y_variation (void *, int32_t);

uint32_t hb_ot_name_get_utf16 (void *, int32_t, void *, void *, void *);

uint32_t hb_ot_name_get_utf32 (void *, int32_t, void *, void *, void *);

uint32_t hb_ot_name_get_utf8 (void *, int32_t, void *, void *, void *);

void * hb_ot_name_list_names (void *, void *);

void hb_ot_shape_glyphs_closure (void *, void *, void *, uint32_t, void *);

void hb_ot_shape_plan_collect_lookups (void *, uint32_t, void *);

void * hb_ot_tag_to_language (uint32_t);

uint32_t hb_ot_tag_to_script (uint32_t);

void hb_ot_tags_from_script_and_language (uint32_t, void *, void *, void *, void *, void *);

void hb_ot_tags_to_script_and_language (uint32_t, uint32_t, void *, void *);

uint32_t hb_script_from_iso15924_tag (uint32_t);

uint32_t hb_script_from_string (void *, int32_t);

int32_t hb_script_get_horizontal_direction (uint32_t);

uint32_t hb_script_to_iso15924_tag (uint32_t);

void hb_set_add (void *, uint32_t);

void hb_set_add_range (void *, uint32_t, uint32_t);

int32_t hb_set_allocation_successful (void *);

void hb_set_clear (void *);

void * hb_set_copy (void *);

void * hb_set_create ();

void hb_set_del (void *, uint32_t);

void hb_set_del_range (void *, uint32_t, uint32_t);

void hb_set_destroy (void *);

void * hb_set_get_empty ();

uint32_t hb_set_get_max (void *);

uint32_t hb_set_get_min (void *);

uint32_t hb_set_get_population (void *);

int32_t hb_set_has (void *, uint32_t);

void hb_set_intersect (void *, void *);

int32_t hb_set_is_empty (void *);

int32_t hb_set_is_equal (void *, void *);

int32_t hb_set_is_subset (void *, void *);

int32_t hb_set_next (void *, void *);

int32_t hb_set_next_range (void *, void *, void *);

int32_t hb_set_previous (void *, void *);

int32_t hb_set_previous_range (void *, void *, void *);

void * hb_set_reference (void *);

void hb_set_set (void *, void *);

void hb_set_subtract (void *, void *);

void hb_set_symmetric_difference (void *, void *);

void hb_set_union (void *, void *);

void hb_shape (void *, void *, void *, uint32_t);

int32_t hb_shape_full (void *, void *, void *, uint32_t, void *);

void * hb_shape_list_shapers ();

uint32_t hb_tag_from_string (void *, int32_t);

void hb_tag_to_string (uint32_t, void *);

int32_t hb_unicode_combining_class (void *, uint32_t);

int32_t hb_unicode_compose (void *, uint32_t, uint32_t, void *);

int32_t hb_unicode_decompose (void *, uint32_t, void *, void *);

void * hb_unicode_funcs_create (void *);

void hb_unicode_funcs_destroy (void *);

void * hb_unicode_funcs_get_default ();

void * hb_unicode_funcs_get_empty ();

void * hb_unicode_funcs_get_parent (void *);

int32_t hb_unicode_funcs_is_immutable (void *);

void hb_unicode_funcs_make_immutable (void *);

void * hb_unicode_funcs_reference (void *);

void hb_unicode_funcs_set_combining_class_func (void *, void *, void *, void *);

void hb_unicode_funcs_set_compose_func (void *, void *, void *, void *);

void hb_unicode_funcs_set_decompose_func (void *, void *, void *, void *);

void hb_unicode_funcs_set_general_category_func (void *, void *, void *, void *);

void hb_unicode_funcs_set_mirroring_func (void *, void *, void *, void *);

void hb_unicode_funcs_set_script_func (void *, void *, void *, void *);

int32_t hb_unicode_general_category (void *, uint32_t);

uint32_t hb_unicode_mirroring (void *, uint32_t);

uint32_t hb_unicode_script (void *, uint32_t);

int32_t hb_variation_from_string (void *, int32_t, void *);

void hb_variation_to_string (void *, void *, uint32_t);

void hb_version (void *, void *, void *);

int32_t hb_version_atleast (uint32_t, uint32_t, uint32_t);

void * hb_version_string ();

void sk_bitmap_destructor (void *);

void sk_bitmap_erase (void *, uint32_t);

void sk_bitmap_erase_rect (void *, uint32_t, void *);

int32_t sk_bitmap_extract_alpha (void *, void *, void *, void *);

int32_t sk_bitmap_extract_subset (void *, void *, void *);

void * sk_bitmap_get_addr (void *, int32_t, int32_t);

void * sk_bitmap_get_addr_16 (void *, int32_t, int32_t);

void * sk_bitmap_get_addr_32 (void *, int32_t, int32_t);

void * sk_bitmap_get_addr_8 (void *, int32_t, int32_t);

void * sk_bitmap_get_byte_count (void *);

void sk_bitmap_get_info (void *, void *);

uint32_t sk_bitmap_get_pixel_color (void *, int32_t, int32_t);

void sk_bitmap_get_pixel_colors (void *, void *);

void * sk_bitmap_get_pixels (void *, void *);

void * sk_bitmap_get_row_bytes (void *);

int32_t sk_bitmap_install_pixels (void *, void *, void *, void *, void *, void *);

int32_t sk_bitmap_install_pixels_with_pixmap (void *, void *);

int32_t sk_bitmap_is_immutable (void *);

int32_t sk_bitmap_is_null (void *);

void * sk_bitmap_make_shader (void *, int32_t, int32_t, void *, void *);

void * sk_bitmap_new ();

void sk_bitmap_notify_pixels_changed (void *);

int32_t sk_bitmap_peek_pixels (void *, void *);

int32_t sk_bitmap_ready_to_draw (void *);

void sk_bitmap_reset (void *);

void sk_bitmap_set_immutable (void *);

void sk_bitmap_set_pixels (void *, void *);

void sk_bitmap_swap (void *, void *);

int32_t sk_bitmap_try_alloc_pixels (void *, void *, void *);

int32_t sk_bitmap_try_alloc_pixels_with_flags (void *, void *, uint32_t);

void * sk_blender_new_arithmetic (float, float, float, float, int32_t);

void * sk_blender_new_mode (int32_t);

void sk_blender_ref (void *);

void sk_blender_unref (void *);

void sk_canvas_clear (void *, uint32_t);

void sk_canvas_clear_color4f (void *, void *);

void sk_canvas_clip_path_with_operation (void *, void *, int32_t, int32_t);

void sk_canvas_clip_rect_with_operation (void *, void *, int32_t, int32_t);

void sk_canvas_clip_region (void *, void *, int32_t);

void sk_canvas_clip_rrect_with_operation (void *, void *, int32_t, int32_t);

void sk_canvas_concat (void *, void *);

void sk_canvas_destroy (void *);

void sk_canvas_discard (void *);

void sk_canvas_draw_annotation (void *, void *, void *, void *);

void sk_canvas_draw_arc (void *, void *, float, float, int32_t, void *);

void sk_canvas_draw_atlas (void *, void *, void *, void *, void *, int32_t, int32_t, void *, void *, void *);

void sk_canvas_draw_circle (void *, float, float, float, void *);

void sk_canvas_draw_color (void *, uint32_t, int32_t);

void sk_canvas_draw_color4f (void *, void *, int32_t);

void sk_canvas_draw_drawable (void *, void *, void *);

void sk_canvas_draw_drrect (void *, void *, void *, void *);

void sk_canvas_draw_image (void *, void *, float, float, void *, void *);

void sk_canvas_draw_image_lattice (void *, void *, void *, void *, int32_t, void *);

void sk_canvas_draw_image_nine (void *, void *, void *, void *, int32_t, void *);

void sk_canvas_draw_image_rect (void *, void *, void *, void *, void *, void *);

void sk_canvas_draw_line (void *, float, float, float, float, void *);

void sk_canvas_draw_link_destination_annotation (void *, void *, void *);

void sk_canvas_draw_named_destination_annotation (void *, void *, void *);

void sk_canvas_draw_oval (void *, void *, void *);

void sk_canvas_draw_paint (void *, void *);

void sk_canvas_draw_patch (void *, void *, void *, void *, int32_t, void *);

void sk_canvas_draw_path (void *, void *, void *);

void sk_canvas_draw_picture (void *, void *, void *, void *);

void sk_canvas_draw_point (void *, float, float, void *);

void sk_canvas_draw_points (void *, int32_t, void *, void *, void *);

void sk_canvas_draw_rect (void *, void *, void *);

void sk_canvas_draw_region (void *, void *, void *);

void sk_canvas_draw_round_rect (void *, void *, float, float, void *);

void sk_canvas_draw_rrect (void *, void *, void *);

void sk_canvas_draw_simple_text (void *, void *, void *, int32_t, float, float, void *, void *);

void sk_canvas_draw_text_blob (void *, void *, float, float, void *);

void sk_canvas_draw_url_annotation (void *, void *, void *);

void sk_canvas_draw_vertices (void *, void *, int32_t, void *);

int32_t sk_canvas_get_device_clip_bounds (void *, void *);

int32_t sk_canvas_get_local_clip_bounds (void *, void *);

void sk_canvas_get_matrix (void *, void *);

int32_t sk_canvas_get_save_count (void *);

int32_t sk_canvas_is_clip_empty (void *);

int32_t sk_canvas_is_clip_rect (void *);

void * sk_canvas_new_from_bitmap (void *);

void * sk_canvas_new_from_raster (void *, void *, void *, void *);

int32_t sk_canvas_quick_reject (void *, void *);

void sk_canvas_reset_matrix (void *);

void sk_canvas_restore (void *);

void sk_canvas_restore_to_count (void *, int32_t);

void sk_canvas_rotate_degrees (void *, float);

void sk_canvas_rotate_radians (void *, float);

int32_t sk_canvas_save (void *);

int32_t sk_canvas_save_layer (void *, void *, void *);

int32_t sk_canvas_save_layer_rec (void *, void *);

void sk_canvas_scale (void *, float, float);

void sk_canvas_set_matrix (void *, void *);

void sk_canvas_skew (void *, float, float);

void sk_canvas_translate (void *, float, float);

void sk_codec_destroy (void *);

int32_t sk_codec_get_encoded_format (void *);

int32_t sk_codec_get_frame_count (void *);

void sk_codec_get_frame_info (void *, void *);

int32_t sk_codec_get_frame_info_for_index (void *, int32_t, void *);

void sk_codec_get_info (void *, void *);

int32_t sk_codec_get_origin (void *);

int32_t sk_codec_get_pixels (void *, void *, void *, void *, void *);

int32_t sk_codec_get_repetition_count (void *);

void sk_codec_get_scaled_dimensions (void *, float, void *);

int32_t sk_codec_get_scanline_order (void *);

int32_t sk_codec_get_scanlines (void *, void *, int32_t, void *);

int32_t sk_codec_get_valid_subset (void *, void *);

int32_t sk_codec_incremental_decode (void *, void *);

void * sk_codec_min_buffered_bytes_needed ();

void * sk_codec_new_from_data (void *);

void * sk_codec_new_from_stream (void *, void *);

int32_t sk_codec_next_scanline (void *);

int32_t sk_codec_output_scanline (void *, int32_t);

int32_t sk_codec_skip_scanlines (void *, int32_t);

int32_t sk_codec_start_incremental_decode (void *, void *, void *, void *, void *);

int32_t sk_codec_start_scanline_decode (void *, void *, void *);

void sk_color4f_from_color (uint32_t, void *);

uint32_t sk_color4f_to_color (void *);

void sk_color_get_bit_shift (void *, void *, void *, void *);

uint32_t sk_color_premultiply (uint32_t);

void sk_color_premultiply_array (void *, int32_t, void *);

uint32_t sk_color_unpremultiply (uint32_t);

void sk_color_unpremultiply_array (void *, int32_t, void *);

void * sk_colorfilter_new_color_matrix (void *);

void * sk_colorfilter_new_compose (void *, void *);

void * sk_colorfilter_new_high_contrast (void *);

void * sk_colorfilter_new_hsla_matrix (void *);

void * sk_colorfilter_new_lerp (float, void *, void *);

void * sk_colorfilter_new_lighting (uint32_t, uint32_t);

void * sk_colorfilter_new_linear_to_srgb_gamma ();

void * sk_colorfilter_new_luma_color ();

void * sk_colorfilter_new_mode (uint32_t, int32_t);

void * sk_colorfilter_new_srgb_to_linear_gamma ();

void * sk_colorfilter_new_table (void *);

void * sk_colorfilter_new_table_argb (void *, void *, void *, void *);

void sk_colorfilter_unref (void *);

int32_t sk_colorspace_equals (void *, void *);

int32_t sk_colorspace_gamma_close_to_srgb (void *);

int32_t sk_colorspace_gamma_is_linear (void *);

void sk_colorspace_icc_profile_delete (void *);

void * sk_colorspace_icc_profile_get_buffer (void *, void *);

int32_t sk_colorspace_icc_profile_get_to_xyzd50 (void *, void *);

void * sk_colorspace_icc_profile_new ();

int32_t sk_colorspace_icc_profile_parse (void *, void *, void *);

int32_t sk_colorspace_is_numerical_transfer_fn (void *, void *);

int32_t sk_colorspace_is_srgb (void *);

void * sk_colorspace_make_linear_gamma (void *);

void * sk_colorspace_make_srgb_gamma (void *);

void * sk_colorspace_new_icc (void *);

void * sk_colorspace_new_rgb (void *, void *);

void * sk_colorspace_new_srgb ();

void * sk_colorspace_new_srgb_linear ();

int32_t sk_colorspace_primaries_to_xyzd50 (void *, void *);

void sk_colorspace_ref (void *);

void sk_colorspace_to_profile (void *, void *);

int32_t sk_colorspace_to_xyzd50 (void *, void *);

float sk_colorspace_transfer_fn_eval (void *, float);

int32_t sk_colorspace_transfer_fn_invert (void *, void *);

void sk_colorspace_transfer_fn_named_2dot2 (void *);

void sk_colorspace_transfer_fn_named_hlg (void *);

void sk_colorspace_transfer_fn_named_linear (void *);

void sk_colorspace_transfer_fn_named_pq (void *);

void sk_colorspace_transfer_fn_named_rec2020 (void *);

void sk_colorspace_transfer_fn_named_srgb (void *);

void sk_colorspace_unref (void *);

void sk_colorspace_xyz_concat (void *, void *, void *);

int32_t sk_colorspace_xyz_invert (void *, void *);

void sk_colorspace_xyz_named_adobe_rgb (void *);

void sk_colorspace_xyz_named_display_p3 (void *);

void sk_colorspace_xyz_named_rec2020 (void *);

void sk_colorspace_xyz_named_srgb (void *);

void sk_colorspace_xyz_named_xyz (void *);

int32_t sk_colortype_get_default_8888 ();

void * sk_compatpaint_clone (void *);

void sk_compatpaint_delete (void *);

int32_t sk_compatpaint_get_filter_quality (void *);

void * sk_compatpaint_get_font (void *);

int32_t sk_compatpaint_get_lcd_render_text (void *);

int32_t sk_compatpaint_get_text_align (void *);

int32_t sk_compatpaint_get_text_encoding (void *);

void * sk_compatpaint_make_font (void *);

void * sk_compatpaint_new ();

void * sk_compatpaint_new_with_font (void *);

void sk_compatpaint_reset (void *);

void sk_compatpaint_set_filter_quality (void *, int32_t);

void sk_compatpaint_set_is_antialias (void *, int32_t);

void sk_compatpaint_set_lcd_render_text (void *, int32_t);

void sk_compatpaint_set_text_align (void *, int32_t);

void sk_compatpaint_set_text_encoding (void *, int32_t);

void * sk_data_get_bytes (void *);

void * sk_data_get_data (void *);

void * sk_data_get_size (void *);

void * sk_data_new_empty ();

void * sk_data_new_from_file (void *);

void * sk_data_new_from_stream (void *, void *);

void * sk_data_new_subset (void *, void *, void *);

void * sk_data_new_uninitialized (void *);

void * sk_data_new_with_copy (void *, void *);

void * sk_data_new_with_proc (void *, void *, void *, void *);

void sk_data_ref (void *);

void sk_data_unref (void *);

void sk_document_abort (void *);

void * sk_document_begin_page (void *, float, float, void *);

void sk_document_close (void *);

void * sk_document_create_pdf_from_stream (void *);

void * sk_document_create_pdf_from_stream_with_metadata (void *, void *);

void * sk_document_create_xps_from_stream (void *, float);

void sk_document_end_page (void *);

void sk_document_unref (void *);

void * sk_drawable_approximate_bytes_used (void *);

void sk_drawable_draw (void *, void *, void *);

void sk_drawable_get_bounds (void *, void *);

uint32_t sk_drawable_get_generation_id (void *);

void * sk_drawable_new_picture_snapshot (void *);

void sk_drawable_notify_drawing_changed (void *);

void sk_drawable_unref (void *);

void sk_dynamicmemorywstream_copy_to (void *, void *);

void sk_dynamicmemorywstream_destroy (void *);

void * sk_dynamicmemorywstream_detach_as_data (void *);

void * sk_dynamicmemorywstream_detach_as_stream (void *);

void * sk_dynamicmemorywstream_new ();

int32_t sk_dynamicmemorywstream_write_to_stream (void *, void *);

void sk_filestream_destroy (void *);

int32_t sk_filestream_is_valid (void *);

void * sk_filestream_new (void *);

void sk_filewstream_destroy (void *);

int32_t sk_filewstream_is_valid (void *);

void * sk_filewstream_new (void *);

void * sk_font_break_text (void *, void *, void *, int32_t, float, void *, void *);

void sk_font_delete (void *);

int32_t sk_font_get_edging (void *);

int32_t sk_font_get_hinting (void *);

float sk_font_get_metrics (void *, void *);

int32_t sk_font_get_path (void *, uint32_t, void *);

void sk_font_get_paths (void *, void *, int32_t, void *, void *);

void sk_font_get_pos (void *, void *, int32_t, void *, void *);

float sk_font_get_scale_x (void *);

float sk_font_get_size (void *);

float sk_font_get_skew_x (void *);

void * sk_font_get_typeface (void *);

void sk_font_get_widths_bounds (void *, void *, int32_t, void *, void *, void *);

void sk_font_get_xpos (void *, void *, int32_t, void *, float);

int32_t sk_font_is_baseline_snap (void *);

int32_t sk_font_is_embedded_bitmaps (void *);

int32_t sk_font_is_embolden (void *);

int32_t sk_font_is_force_auto_hinting (void *);

int32_t sk_font_is_linear_metrics (void *);

int32_t sk_font_is_subpixel (void *);

float sk_font_measure_text (void *, void *, void *, int32_t, void *, void *);

void sk_font_measure_text_no_return (void *, void *, void *, int32_t, void *, void *, void *);

void * sk_font_new ();

void * sk_font_new_with_values (void *, float, float, float);

void sk_font_set_baseline_snap (void *, int32_t);

void sk_font_set_edging (void *, int32_t);

void sk_font_set_embedded_bitmaps (void *, int32_t);

void sk_font_set_embolden (void *, int32_t);

void sk_font_set_force_auto_hinting (void *, int32_t);

void sk_font_set_hinting (void *, int32_t);

void sk_font_set_linear_metrics (void *, int32_t);

void sk_font_set_scale_x (void *, float);

void sk_font_set_size (void *, float);

void sk_font_set_skew_x (void *, float);

void sk_font_set_subpixel (void *, int32_t);

void sk_font_set_typeface (void *, void *);

int32_t sk_font_text_to_glyphs (void *, void *, void *, int32_t, void *, int32_t);

uint32_t sk_font_unichar_to_glyph (void *, int32_t);

void sk_font_unichars_to_glyphs (void *, void *, int32_t, void *);

int32_t sk_fontmgr_count_families (void *);

void * sk_fontmgr_create_default ();

void * sk_fontmgr_create_from_data (void *, void *, int32_t);

void * sk_fontmgr_create_from_file (void *, void *, int32_t);

void * sk_fontmgr_create_from_stream (void *, void *, int32_t);

void * sk_fontmgr_create_styleset (void *, int32_t);

void sk_fontmgr_get_family_name (void *, int32_t, void *);

void * sk_fontmgr_match_family (void *, void *);

void * sk_fontmgr_match_family_style (void *, void *, void *);

void * sk_fontmgr_match_family_style_character (void *, void *, void *, void *, int32_t, int32_t);

void * sk_fontmgr_ref_default ();

void sk_fontmgr_unref (void *);

void sk_fontstyle_delete (void *);

int32_t sk_fontstyle_get_slant (void *);

int32_t sk_fontstyle_get_weight (void *);

int32_t sk_fontstyle_get_width (void *);

void * sk_fontstyle_new (int32_t, int32_t, int32_t);

void * sk_fontstyleset_create_empty ();

void * sk_fontstyleset_create_typeface (void *, int32_t);

int32_t sk_fontstyleset_get_count (void *);

void sk_fontstyleset_get_style (void *, int32_t, void *, void *);

void * sk_fontstyleset_match_style (void *, void *);

void sk_fontstyleset_unref (void *);

void * sk_get_recording_context (void *);

void * sk_get_surface (void *);

void sk_graphics_dump_memory_statistics (void *);

int32_t sk_graphics_get_font_cache_count_limit ();

int32_t sk_graphics_get_font_cache_count_used ();

void * sk_graphics_get_font_cache_limit ();

void * sk_graphics_get_font_cache_used ();

void * sk_graphics_get_resource_cache_single_allocation_byte_limit ();

void * sk_graphics_get_resource_cache_total_byte_limit ();

void * sk_graphics_get_resource_cache_total_bytes_used ();

void sk_graphics_init ();

void sk_graphics_purge_all_caches ();

void sk_graphics_purge_font_cache ();

void sk_graphics_purge_resource_cache ();

int32_t sk_graphics_set_font_cache_count_limit (int32_t);

void * sk_graphics_set_font_cache_limit (void *);

void * sk_graphics_set_resource_cache_single_allocation_byte_limit (void *);

void * sk_graphics_set_resource_cache_total_byte_limit (void *);

int32_t sk_image_get_alpha_type (void *);

int32_t sk_image_get_color_type (void *);

void * sk_image_get_colorspace (void *);

int32_t sk_image_get_height (void *);

uint32_t sk_image_get_unique_id (void *);

int32_t sk_image_get_width (void *);

int32_t sk_image_is_alpha_only (void *);

int32_t sk_image_is_lazy_generated (void *);

int32_t sk_image_is_texture_backed (void *);

int32_t sk_image_is_valid (void *, void *);

void * sk_image_make_non_texture_image (void *);

void * sk_image_make_raster_image (void *);

void * sk_image_make_raw_shader (void *, int32_t, int32_t, void *, void *);

void * sk_image_make_shader (void *, int32_t, int32_t, void *, void *);

void * sk_image_make_subset (void *, void *, void *);

void * sk_image_make_subset_raster (void *, void *);

void * sk_image_make_texture_image (void *, void *, int32_t, int32_t);

void * sk_image_make_with_filter (void *, void *, void *, void *, void *, void *, void *);

void * sk_image_make_with_filter_raster (void *, void *, void *, void *, void *, void *);

void * sk_image_new_from_adopted_texture (void *, void *, int32_t, int32_t, int32_t, void *);

void * sk_image_new_from_bitmap (void *);

void * sk_image_new_from_encoded (void *);

void * sk_image_new_from_picture (void *, void *, void *, void *, int32_t, void *, void *);

void * sk_image_new_from_texture (void *, void *, int32_t, int32_t, int32_t, void *, void *, void *);

void * sk_image_new_raster (void *, void *, void *);

void * sk_image_new_raster_copy (void *, void *, void *);

void * sk_image_new_raster_copy_with_pixmap (void *);

void * sk_image_new_raster_data (void *, void *, void *);

int32_t sk_image_peek_pixels (void *, void *);

int32_t sk_image_read_pixels (void *, void *, void *, void *, int32_t, int32_t, int32_t);

int32_t sk_image_read_pixels_into_pixmap (void *, void *, int32_t, int32_t, int32_t);

void sk_image_ref (void *);

void * sk_image_ref_encoded (void *);

int32_t sk_image_scale_pixels (void *, void *, void *, int32_t);

void sk_image_unref (void *);

void * sk_imagefilter_new_arithmetic (float, float, float, float, int32_t, void *, void *, void *);

void * sk_imagefilter_new_blend (int32_t, void *, void *, void *);

void * sk_imagefilter_new_blender (void *, void *, void *, void *);

void * sk_imagefilter_new_blur (float, float, int32_t, void *, void *);

void * sk_imagefilter_new_color_filter (void *, void *, void *);

void * sk_imagefilter_new_compose (void *, void *);

void * sk_imagefilter_new_dilate (float, float, void *, void *);

void * sk_imagefilter_new_displacement_map_effect (int32_t, int32_t, float, void *, void *, void *);

void * sk_imagefilter_new_distant_lit_diffuse (void *, uint32_t, float, float, void *, void *);

void * sk_imagefilter_new_distant_lit_specular (void *, uint32_t, float, float, float, void *, void *);

void * sk_imagefilter_new_drop_shadow (float, float, float, float, uint32_t, void *, void *);

void * sk_imagefilter_new_drop_shadow_only (float, float, float, float, uint32_t, void *, void *);

void * sk_imagefilter_new_erode (float, float, void *, void *);

void * sk_imagefilter_new_image (void *, void *, void *, void *);

void * sk_imagefilter_new_image_simple (void *, void *);

void * sk_imagefilter_new_magnifier (void *, float, float, void *, void *, void *);

void * sk_imagefilter_new_matrix_convolution (void *, void *, float, float, void *, int32_t, int32_t, void *, void *);

void * sk_imagefilter_new_matrix_transform (void *, void *, void *);

void * sk_imagefilter_new_merge (void *, int32_t, void *);

void * sk_imagefilter_new_merge_simple (void *, void *, void *);

void * sk_imagefilter_new_offset (float, float, void *, void *);

void * sk_imagefilter_new_picture (void *);

void * sk_imagefilter_new_picture_with_rect (void *, void *);

void * sk_imagefilter_new_point_lit_diffuse (void *, uint32_t, float, float, void *, void *);

void * sk_imagefilter_new_point_lit_specular (void *, uint32_t, float, float, float, void *, void *);

void * sk_imagefilter_new_shader (void *, int32_t, void *);

void * sk_imagefilter_new_spot_lit_diffuse (void *, void *, float, float, uint32_t, float, float, void *, void *);

void * sk_imagefilter_new_spot_lit_specular (void *, void *, float, float, uint32_t, float, float, float, void *, void *);

void * sk_imagefilter_new_tile (void *, void *, void *);

void sk_imagefilter_unref (void *);

int32_t sk_jpegencoder_encode (void *, void *, void *);

void sk_linker_keep_alive ();

void * sk_manageddrawable_new (void *);

void sk_manageddrawable_set_procs (void *);

void sk_manageddrawable_unref (void *);

void sk_managedstream_destroy (void *);

void * sk_managedstream_new (void *);

void sk_managedstream_set_procs (void *);

void sk_managedtracememorydump_delete (void *);

void * sk_managedtracememorydump_new (int32_t, int32_t, void *);

void sk_managedtracememorydump_set_procs (void *);

void sk_managedwstream_destroy (void *);

void * sk_managedwstream_new (void *);

void sk_managedwstream_set_procs (void *);

void * sk_maskfilter_new_blur (int32_t, float);

void * sk_maskfilter_new_blur_with_flags (int32_t, float, int32_t);

void * sk_maskfilter_new_clip (uint32_t, uint32_t);

void * sk_maskfilter_new_gamma (float);

void * sk_maskfilter_new_shader (void *);

void * sk_maskfilter_new_table (void *);

void sk_maskfilter_ref (void *);

void sk_maskfilter_unref (void *);

void sk_matrix_concat (void *, void *, void *);

void sk_matrix_map_points (void *, void *, void *, int32_t);

float sk_matrix_map_radius (void *, float);

void sk_matrix_map_rect (void *, void *, void *);

void sk_matrix_map_vector (void *, float, float, void *);

void sk_matrix_map_vectors (void *, void *, void *, int32_t);

void sk_matrix_map_xy (void *, float, float, void *);

void sk_matrix_post_concat (void *, void *);

void sk_matrix_pre_concat (void *, void *);

int32_t sk_matrix_try_invert (void *, void *);

void sk_memorystream_destroy (void *);

void * sk_memorystream_new ();

void * sk_memorystream_new_with_data (void *, void *, int32_t);

void * sk_memorystream_new_with_length (void *);

void * sk_memorystream_new_with_skdata (void *);

void sk_memorystream_set_memory (void *, void *, void *, int32_t);

void sk_nodraw_canvas_destroy (void *);

void * sk_nodraw_canvas_new (int32_t, int32_t);

int32_t sk_nvrefcnt_get_ref_count (void *);

void sk_nvrefcnt_safe_ref (void *);

void sk_nvrefcnt_safe_unref (void *);

int32_t sk_nvrefcnt_unique (void *);

void sk_nway_canvas_add_canvas (void *, void *);

void sk_nway_canvas_destroy (void *);

void * sk_nway_canvas_new (int32_t, int32_t);

void sk_nway_canvas_remove_all (void *);

void sk_nway_canvas_remove_canvas (void *, void *);

void sk_opbuilder_add (void *, void *, int32_t);

void sk_opbuilder_destroy (void *);

void * sk_opbuilder_new ();

int32_t sk_opbuilder_resolve (void *, void *);

void sk_overdraw_canvas_destroy (void *);

void * sk_overdraw_canvas_new (void *);

void * sk_paint_clone (void *);

void sk_paint_delete (void *);

void * sk_paint_get_blender (void *);

int32_t sk_paint_get_blendmode (void *);

uint32_t sk_paint_get_color (void *);

void sk_paint_get_color4f (void *, void *);

void * sk_paint_get_colorfilter (void *);

int32_t sk_paint_get_fill_path (void *, void *, void *, void *, void *);

void * sk_paint_get_imagefilter (void *);

void * sk_paint_get_maskfilter (void *);

void * sk_paint_get_path_effect (void *);

void * sk_paint_get_shader (void *);

int32_t sk_paint_get_stroke_cap (void *);

int32_t sk_paint_get_stroke_join (void *);

float sk_paint_get_stroke_miter (void *);

float sk_paint_get_stroke_width (void *);

int32_t sk_paint_get_style (void *);

int32_t sk_paint_is_antialias (void *);

int32_t sk_paint_is_dither (void *);

void * sk_paint_new ();

void sk_paint_reset (void *);

void sk_paint_set_antialias (void *, int32_t);

void sk_paint_set_blender (void *, void *);

void sk_paint_set_blendmode (void *, int32_t);

void sk_paint_set_color (void *, uint32_t);

void sk_paint_set_color4f (void *, void *, void *);

void sk_paint_set_colorfilter (void *, void *);

void sk_paint_set_dither (void *, int32_t);

void sk_paint_set_imagefilter (void *, void *);

void sk_paint_set_maskfilter (void *, void *);

void sk_paint_set_path_effect (void *, void *);

void sk_paint_set_shader (void *, void *);

void sk_paint_set_stroke_cap (void *, int32_t);

void sk_paint_set_stroke_join (void *, int32_t);

void sk_paint_set_stroke_miter (void *, float);

void sk_paint_set_stroke_width (void *, float);

void sk_paint_set_style (void *, int32_t);

void sk_path_add_arc (void *, void *, float, float);

void sk_path_add_circle (void *, float, float, float, int32_t);

void sk_path_add_oval (void *, void *, int32_t);

void sk_path_add_path (void *, void *, int32_t);

void sk_path_add_path_matrix (void *, void *, void *, int32_t);

void sk_path_add_path_offset (void *, void *, float, float, int32_t);

void sk_path_add_path_reverse (void *, void *);

void sk_path_add_poly (void *, void *, int32_t, int32_t);

void sk_path_add_rect (void *, void *, int32_t);

void sk_path_add_rect_start (void *, void *, int32_t, uint32_t);

void sk_path_add_rounded_rect (void *, void *, float, float, int32_t);

void sk_path_add_rrect (void *, void *, int32_t);

void sk_path_add_rrect_start (void *, void *, int32_t, uint32_t);

void sk_path_arc_to (void *, float, float, float, int32_t, int32_t, float, float);

void sk_path_arc_to_with_oval (void *, void *, float, float, int32_t);

void sk_path_arc_to_with_points (void *, float, float, float, float, float);

void * sk_path_clone (void *);

void sk_path_close (void *);

void sk_path_compute_tight_bounds (void *, void *);

void sk_path_conic_to (void *, float, float, float, float, float);

int32_t sk_path_contains (void *, float, float);

int32_t sk_path_convert_conic_to_quads (void *, void *, void *, float, void *, int32_t);

int32_t sk_path_count_points (void *);

int32_t sk_path_count_verbs (void *);

void * sk_path_create_iter (void *, int32_t);

void * sk_path_create_rawiter (void *);

void sk_path_cubic_to (void *, float, float, float, float, float, float);

void sk_path_delete (void *);

void * sk_path_effect_create_1d_path (void *, float, float, int32_t);

void * sk_path_effect_create_2d_line (float, void *);

void * sk_path_effect_create_2d_path (void *, void *);

void * sk_path_effect_create_compose (void *, void *);

void * sk_path_effect_create_corner (float);

void * sk_path_effect_create_dash (void *, int32_t, float);

void * sk_path_effect_create_discrete (float, float, uint32_t);

void * sk_path_effect_create_sum (void *, void *);

void * sk_path_effect_create_trim (float, float, int32_t);

void sk_path_effect_unref (void *);

void sk_path_get_bounds (void *, void *);

int32_t sk_path_get_filltype (void *);

int32_t sk_path_get_last_point (void *, void *);

void sk_path_get_point (void *, int32_t, void *);

int32_t sk_path_get_points (void *, void *, int32_t);

uint32_t sk_path_get_segment_masks (void *);

int32_t sk_path_is_convex (void *);

int32_t sk_path_is_line (void *, void *);

int32_t sk_path_is_oval (void *, void *);

int32_t sk_path_is_rect (void *, void *, void *, void *);

int32_t sk_path_is_rrect (void *, void *);

float sk_path_iter_conic_weight (void *);

void sk_path_iter_destroy (void *);

int32_t sk_path_iter_is_close_line (void *);

int32_t sk_path_iter_is_closed_contour (void *);

int32_t sk_path_iter_next (void *, void *);

void sk_path_line_to (void *, float, float);

void sk_path_move_to (void *, float, float);

void * sk_path_new ();

int32_t sk_path_parse_svg_string (void *, void *);

void sk_path_quad_to (void *, float, float, float, float);

void sk_path_rarc_to (void *, float, float, float, int32_t, int32_t, float, float);

float sk_path_rawiter_conic_weight (void *);

void sk_path_rawiter_destroy (void *);

int32_t sk_path_rawiter_next (void *, void *);

int32_t sk_path_rawiter_peek (void *);

void sk_path_rconic_to (void *, float, float, float, float, float);

void sk_path_rcubic_to (void *, float, float, float, float, float, float);

void sk_path_reset (void *);

void sk_path_rewind (void *);

void sk_path_rline_to (void *, float, float);

void sk_path_rmove_to (void *, float, float);

void sk_path_rquad_to (void *, float, float, float, float);

void sk_path_set_filltype (void *, int32_t);

void sk_path_to_svg_string (void *, void *);

void sk_path_transform (void *, void *);

void sk_path_transform_to_dest (void *, void *, void *);

void sk_pathmeasure_destroy (void *);

float sk_pathmeasure_get_length (void *);

int32_t sk_pathmeasure_get_matrix (void *, float, void *, int32_t);

int32_t sk_pathmeasure_get_pos_tan (void *, float, void *, void *);

int32_t sk_pathmeasure_get_segment (void *, float, float, void *, int32_t);

int32_t sk_pathmeasure_is_closed (void *);

void * sk_pathmeasure_new ();

void * sk_pathmeasure_new_with_path (void *, int32_t, float);

int32_t sk_pathmeasure_next_contour (void *);

void sk_pathmeasure_set_path (void *, void *, int32_t);

int32_t sk_pathop_as_winding (void *, void *);

int32_t sk_pathop_op (void *, void *, int32_t, void *);

int32_t sk_pathop_simplify (void *, void *);

int32_t sk_pathop_tight_bounds (void *, void *);

void * sk_picture_approximate_bytes_used (void *);

int32_t sk_picture_approximate_op_count (void *, int32_t);

void * sk_picture_deserialize_from_data (void *);

void * sk_picture_deserialize_from_memory (void *, void *);

void * sk_picture_deserialize_from_stream (void *);

void sk_picture_get_cull_rect (void *, void *);

void * sk_picture_get_recording_canvas (void *);

uint32_t sk_picture_get_unique_id (void *);

void * sk_picture_make_shader (void *, int32_t, int32_t, int32_t, void *, void *);

void sk_picture_playback (void *, void *);

void * sk_picture_recorder_begin_recording (void *, void *);

void * sk_picture_recorder_begin_recording_with_bbh_factory (void *, void *, void *);

void sk_picture_recorder_delete (void *);

void * sk_picture_recorder_end_recording (void *);

void * sk_picture_recorder_end_recording_as_drawable (void *);

void * sk_picture_recorder_new ();

void sk_picture_ref (void *);

void * sk_picture_serialize_to_data (void *);

void sk_picture_serialize_to_stream (void *, void *);

void sk_picture_unref (void *);

int32_t sk_pixmap_compute_is_opaque (void *);

void sk_pixmap_destructor (void *);

int32_t sk_pixmap_erase_color (void *, uint32_t, void *);

int32_t sk_pixmap_erase_color4f (void *, void *, void *);

int32_t sk_pixmap_extract_subset (void *, void *, void *);

void * sk_pixmap_get_colorspace (void *);

void sk_pixmap_get_info (void *, void *);

float sk_pixmap_get_pixel_alphaf (void *, int32_t, int32_t);

uint32_t sk_pixmap_get_pixel_color (void *, int32_t, int32_t);

void sk_pixmap_get_pixel_color4f (void *, int32_t, int32_t, void *);

void * sk_pixmap_get_row_bytes (void *);

void * sk_pixmap_get_writable_addr (void *);

void * sk_pixmap_get_writeable_addr_with_xy (void *, int32_t, int32_t);

void * sk_pixmap_new ();

void * sk_pixmap_new_with_params (void *, void *, void *);

int32_t sk_pixmap_read_pixels (void *, void *, void *, void *, int32_t, int32_t);

void sk_pixmap_reset (void *);

void sk_pixmap_reset_with_params (void *, void *, void *, void *);

int32_t sk_pixmap_scale_pixels (void *, void *, void *);

void sk_pixmap_set_colorspace (void *, void *);

int32_t sk_pngencoder_encode (void *, void *, void *);

int32_t sk_refcnt_get_ref_count (void *);

void sk_refcnt_safe_ref (void *);

void sk_refcnt_safe_unref (void *);

int32_t sk_refcnt_unique (void *);

void sk_region_cliperator_delete (void *);

int32_t sk_region_cliperator_done (void *);

void * sk_region_cliperator_new (void *, void *);

void sk_region_cliperator_next (void *);

void sk_region_cliperator_rect (void *, void *);

int32_t sk_region_contains (void *, void *);

int32_t sk_region_contains_point (void *, int32_t, int32_t);

int32_t sk_region_contains_rect (void *, void *);

void sk_region_delete (void *);

int32_t sk_region_get_boundary_path (void *, void *);

void sk_region_get_bounds (void *, void *);

int32_t sk_region_intersects (void *, void *);

int32_t sk_region_intersects_rect (void *, void *);

int32_t sk_region_is_complex (void *);

int32_t sk_region_is_empty (void *);

int32_t sk_region_is_rect (void *);

void sk_region_iterator_delete (void *);

int32_t sk_region_iterator_done (void *);

void * sk_region_iterator_new (void *);

void sk_region_iterator_next (void *);

void sk_region_iterator_rect (void *, void *);

int32_t sk_region_iterator_rewind (void *);

void * sk_region_new ();

int32_t sk_region_op (void *, void *, int32_t);

int32_t sk_region_op_rect (void *, void *, int32_t);

int32_t sk_region_quick_contains (void *, void *);

int32_t sk_region_quick_reject (void *, void *);

int32_t sk_region_quick_reject_rect (void *, void *);

int32_t sk_region_set_empty (void *);

int32_t sk_region_set_path (void *, void *, void *);

int32_t sk_region_set_rect (void *, void *);

int32_t sk_region_set_rects (void *, void *, int32_t);

int32_t sk_region_set_region (void *, void *);

void sk_region_spanerator_delete (void *);

void * sk_region_spanerator_new (void *, int32_t, int32_t, int32_t);

int32_t sk_region_spanerator_next (void *, void *, void *);

void sk_region_translate (void *, int32_t, int32_t);

int32_t sk_rrect_contains (void *, void *);

void sk_rrect_delete (void *);

float sk_rrect_get_height (void *);

void sk_rrect_get_radii (void *, int32_t, void *);

void sk_rrect_get_rect (void *, void *);

int32_t sk_rrect_get_type (void *);

float sk_rrect_get_width (void *);

void sk_rrect_inset (void *, float, float);

int32_t sk_rrect_is_valid (void *);

void * sk_rrect_new ();

void * sk_rrect_new_copy (void *);

void sk_rrect_offset (void *, float, float);

void sk_rrect_outset (void *, float, float);

void sk_rrect_set_empty (void *);

void sk_rrect_set_nine_patch (void *, void *, float, float, float, float);

void sk_rrect_set_oval (void *, void *);

void sk_rrect_set_rect (void *, void *);

void sk_rrect_set_rect_radii (void *, void *, void *);

void sk_rrect_set_rect_xy (void *, void *, float, float);

int32_t sk_rrect_transform (void *, void *, void *);

void sk_rtree_factory_delete (void *);

void * sk_rtree_factory_new ();

void sk_runtimeeffect_get_child_from_index (void *, int32_t, void *);

void sk_runtimeeffect_get_child_from_name (void *, void *, void *, void *);

void sk_runtimeeffect_get_child_name (void *, int32_t, void *);

void * sk_runtimeeffect_get_children_size (void *);

void * sk_runtimeeffect_get_uniform_byte_size (void *);

void sk_runtimeeffect_get_uniform_from_index (void *, int32_t, void *);

void sk_runtimeeffect_get_uniform_from_name (void *, void *, void *, void *);

void sk_runtimeeffect_get_uniform_name (void *, int32_t, void *);

void * sk_runtimeeffect_get_uniforms_size (void *);

void * sk_runtimeeffect_make_blender (void *, void *, void *, void *);

void * sk_runtimeeffect_make_color_filter (void *, void *, void *, void *);

void * sk_runtimeeffect_make_for_blender (void *, void *);

void * sk_runtimeeffect_make_for_color_filter (void *, void *);

void * sk_runtimeeffect_make_for_shader (void *, void *);

void * sk_runtimeeffect_make_shader (void *, void *, void *, void *, void *);

void sk_runtimeeffect_unref (void *);

void * sk_shader_new_blend (int32_t, void *, void *);

void * sk_shader_new_blender (void *, void *, void *);

void * sk_shader_new_color (uint32_t);

void * sk_shader_new_color4f (void *, void *);

void * sk_shader_new_empty ();

void * sk_shader_new_linear_gradient (void *, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_linear_gradient_color4f (void *, void *, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_perlin_noise_fractal_noise (float, float, int32_t, float, void *);

void * sk_shader_new_perlin_noise_turbulence (float, float, int32_t, float, void *);

void * sk_shader_new_radial_gradient (void *, float, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_radial_gradient_color4f (void *, float, void *, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_sweep_gradient (void *, void *, void *, int32_t, int32_t, float, float, void *);

void * sk_shader_new_sweep_gradient_color4f (void *, void *, void *, void *, int32_t, int32_t, float, float, void *);

void * sk_shader_new_two_point_conical_gradient (void *, float, void *, float, void *, void *, int32_t, int32_t, void *);

void * sk_shader_new_two_point_conical_gradient_color4f (void *, float, void *, float, void *, void *, void *, int32_t, int32_t, void *);

void sk_shader_ref (void *);

void sk_shader_unref (void *);

void * sk_shader_with_color_filter (void *, void *);

void * sk_shader_with_local_matrix (void *, void *);

void sk_stream_asset_destroy (void *);

void sk_stream_destroy (void *);

void * sk_stream_duplicate (void *);

void * sk_stream_fork (void *);

void * sk_stream_get_length (void *);

void * sk_stream_get_memory_base (void *);

void * sk_stream_get_position (void *);

int32_t sk_stream_has_length (void *);

int32_t sk_stream_has_position (void *);

int32_t sk_stream_is_at_end (void *);

int32_t sk_stream_move (void *, int32_t);

void * sk_stream_peek (void *, void *, void *);

void * sk_stream_read (void *, void *, void *);

int32_t sk_stream_read_bool (void *, void *);

int32_t sk_stream_read_s16 (void *, void *);

int32_t sk_stream_read_s32 (void *, void *);

int32_t sk_stream_read_s8 (void *, void *);

int32_t sk_stream_read_u16 (void *, void *);

int32_t sk_stream_read_u32 (void *, void *);

int32_t sk_stream_read_u8 (void *, void *);

int32_t sk_stream_rewind (void *);

int32_t sk_stream_seek (void *, void *);

void * sk_stream_skip (void *, void *);

void sk_string_destructor (void *);

void * sk_string_get_c_str (void *);

void * sk_string_get_size (void *);

void * sk_string_new_empty ();

void * sk_string_new_with_copy (void *, void *);

void sk_surface_draw (void *, void *, float, float, void *);

void * sk_surface_get_canvas (void *);

void * sk_surface_get_props (void *);

void * sk_surface_get_recording_context (void *);

void * sk_surface_new_backend_render_target (void *, void *, int32_t, int32_t, void *, void *);

void * sk_surface_new_backend_texture (void *, void *, int32_t, int32_t, int32_t, void *, void *);

void * sk_surface_new_image_snapshot (void *);

void * sk_surface_new_image_snapshot_with_crop (void *, void *);

void * sk_surface_new_metal_layer (void *, void *, int32_t, int32_t, int32_t, void *, void *, void *);

void * sk_surface_new_metal_view (void *, void *, int32_t, int32_t, int32_t, void *, void *);

void * sk_surface_new_null (int32_t, int32_t);

void * sk_surface_new_raster (void *, void *, void *);

void * sk_surface_new_raster_direct (void *, void *, void *, void *, void *, void *);

void * sk_surface_new_render_target (void *, int32_t, void *, int32_t, int32_t, void *, int32_t);

int32_t sk_surface_peek_pixels (void *, void *);

int32_t sk_surface_read_pixels (void *, void *, void *, void *, int32_t, int32_t);

void sk_surface_unref (void *);

void sk_surfaceprops_delete (void *);

uint32_t sk_surfaceprops_get_flags (void *);

int32_t sk_surfaceprops_get_pixel_geometry (void *);

void * sk_surfaceprops_new (uint32_t, int32_t);

void * sk_svgcanvas_create_with_stream (void *, void *);

void sk_swizzle_swap_rb (void *, void *, int32_t);

void sk_text_utils_get_path (void *, void *, int32_t, float, float, void *, void *);

void sk_text_utils_get_pos_path (void *, void *, int32_t, void *, void *, void *);

void sk_textblob_builder_alloc_run (void *, void *, int32_t, float, float, void *, void *);

void sk_textblob_builder_alloc_run_pos (void *, void *, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_pos_h (void *, void *, int32_t, float, void *, void *);

void sk_textblob_builder_alloc_run_rsxform (void *, void *, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text (void *, void *, int32_t, float, float, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text_pos (void *, void *, int32_t, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text_pos_h (void *, void *, int32_t, float, int32_t, void *, void *);

void sk_textblob_builder_alloc_run_text_rsxform (void *, void *, int32_t, int32_t, void *, void *);

void sk_textblob_builder_delete (void *);

void * sk_textblob_builder_make (void *);

void * sk_textblob_builder_new ();

void sk_textblob_get_bounds (void *, void *);

int32_t sk_textblob_get_intercepts (void *, void *, void *, void *);

uint32_t sk_textblob_get_unique_id (void *);

void sk_textblob_ref (void *);

void sk_textblob_unref (void *);

void * sk_typeface_copy_table_data (void *, uint32_t);

int32_t sk_typeface_count_glyphs (void *);

int32_t sk_typeface_count_tables (void *);

void * sk_typeface_create_default ();

void * sk_typeface_create_from_data (void *, int32_t);

void * sk_typeface_create_from_file (void *, int32_t);

void * sk_typeface_create_from_name (void *, void *);

void * sk_typeface_create_from_stream (void *, int32_t);

void * sk_typeface_get_family_name (void *);

int32_t sk_typeface_get_font_slant (void *);

int32_t sk_typeface_get_font_weight (void *);

int32_t sk_typeface_get_font_width (void *);

void * sk_typeface_get_fontstyle (void *);

int32_t sk_typeface_get_kerning_pair_adjustments (void *, void *, int32_t, void *);

void * sk_typeface_get_post_script_name (void *);

void * sk_typeface_get_table_data (void *, uint32_t, void *, void *, void *);

void * sk_typeface_get_table_size (void *, uint32_t);

int32_t sk_typeface_get_table_tags (void *, void *);

int32_t sk_typeface_get_units_per_em (void *);

int32_t sk_typeface_is_fixed_pitch (void *);

void * sk_typeface_open_stream (void *, void *);

void * sk_typeface_ref_default ();

uint32_t sk_typeface_unichar_to_glyph (void *, int32_t);

void sk_typeface_unichars_to_glyphs (void *, void *, int32_t, void *);

void sk_typeface_unref (void *);

int32_t sk_version_get_increment ();

int32_t sk_version_get_milestone ();

void * sk_version_get_string ();

void * sk_vertices_make_copy (int32_t, int32_t, void *, void *, void *, int32_t, void *);

void sk_vertices_ref (void *);

void sk_vertices_unref (void *);

int32_t sk_webpencoder_encode (void *, void *, void *);

void * sk_wstream_bytes_written (void *);

void sk_wstream_flush (void *);

int32_t sk_wstream_get_size_of_packed_uint (void *);

int32_t sk_wstream_newline (void *);

int32_t sk_wstream_write (void *, void *, void *);

int32_t sk_wstream_write_16 (void *, uint32_t);

int32_t sk_wstream_write_32 (void *, uint32_t);

int32_t sk_wstream_write_8 (void *, uint32_t);

int32_t sk_wstream_write_bigdec_as_text (void *, int64_t, int32_t);

int32_t sk_wstream_write_bool (void *, int32_t);

int32_t sk_wstream_write_dec_as_text (void *, int32_t);

int32_t sk_wstream_write_hex_as_text (void *, uint32_t, int32_t);

int32_t sk_wstream_write_packed_uint (void *, void *);

int32_t sk_wstream_write_scalar (void *, float);

int32_t sk_wstream_write_scalar_as_text (void *, float);

int32_t sk_wstream_write_stream (void *, void *, void *);

int32_t sk_wstream_write_text (void *, void *);

void skottie_animation_builder_delete (void *);

void skottie_animation_builder_get_stats (void *, void *);

void * skottie_animation_builder_make_from_data (void *, void *, void *);

void * skottie_animation_builder_make_from_file (void *, void *);

void * skottie_animation_builder_make_from_stream (void *, void *);

void * skottie_animation_builder_make_from_string (void *, void *, void *);

void * skottie_animation_builder_new (int32_t);

void skottie_animation_builder_set_font_manager (void *, void *);

void skottie_animation_builder_set_resource_provider (void *, void *);

void skottie_animation_delete (void *);

double skottie_animation_get_duration (void *);

double skottie_animation_get_fps (void *);

double skottie_animation_get_in_point (void *);

double skottie_animation_get_out_point (void *);

void skottie_animation_get_size (void *, void *);

void skottie_animation_get_version (void *, void *);

void * skottie_animation_make_from_data (void *, void *);

void * skottie_animation_make_from_file (void *);

void * skottie_animation_make_from_stream (void *);

void * skottie_animation_make_from_string (void *, int32_t);

void skottie_animation_ref (void *);

void skottie_animation_render (void *, void *, void *);

void skottie_animation_render_with_flags (void *, void *, void *, int32_t);

void skottie_animation_seek (void *, float, void *);

void skottie_animation_seek_frame (void *, float, void *);

void skottie_animation_seek_frame_time (void *, float, void *);

void skottie_animation_unref (void *);

void * skresources_caching_resource_provider_proxy_make (void *);

void * skresources_data_uri_resource_provider_proxy_make (void *, int32_t);

void * skresources_file_resource_provider_make (void *, int32_t);

void skresources_resource_provider_delete (void *);

void * skresources_resource_provider_load (void *, void *, void *);

void * skresources_resource_provider_load_audio_asset (void *, void *, void *, void *);

void * skresources_resource_provider_load_image_asset (void *, void *, void *, void *);

void * skresources_resource_provider_load_typeface (void *, void *, void *);

void skresources_resource_provider_ref (void *);

void skresources_resource_provider_unref (void *);

void sksg_invalidation_controller_begin (void *);

void sksg_invalidation_controller_delete (void *);

void sksg_invalidation_controller_end (void *);

void sksg_invalidation_controller_get_bounds (void *, void *);

void sksg_invalidation_controller_inval (void *, void *, void *);

void * sksg_invalidation_controller_new ();

void sksg_invalidation_controller_reset (void *);

static PinvokeImport __Internal_imports [] = {
    {NULL, NULL}
};

static PinvokeImport __Native_imports [] = {
    {NULL, NULL}
};

static PinvokeImport libHarfBuzzSharp_imports [] = {
    {"hb_blob_copy_writable_or_fail", hb_blob_copy_writable_or_fail}, // HarfBuzzSharp
    {"hb_blob_create", hb_blob_create}, // HarfBuzzSharp
    {"hb_blob_create_from_file", hb_blob_create_from_file}, // HarfBuzzSharp
    {"hb_blob_create_from_file_or_fail", hb_blob_create_from_file_or_fail}, // HarfBuzzSharp
    {"hb_blob_create_or_fail", hb_blob_create_or_fail}, // HarfBuzzSharp
    {"hb_blob_create_sub_blob", hb_blob_create_sub_blob}, // HarfBuzzSharp
    {"hb_blob_destroy", hb_blob_destroy}, // HarfBuzzSharp
    {"hb_blob_get_data", hb_blob_get_data}, // HarfBuzzSharp
    {"hb_blob_get_data_writable", hb_blob_get_data_writable}, // HarfBuzzSharp
    {"hb_blob_get_empty", hb_blob_get_empty}, // HarfBuzzSharp
    {"hb_blob_get_length", hb_blob_get_length}, // HarfBuzzSharp
    {"hb_blob_is_immutable", hb_blob_is_immutable}, // HarfBuzzSharp
    {"hb_blob_make_immutable", hb_blob_make_immutable}, // HarfBuzzSharp
    {"hb_blob_reference", hb_blob_reference}, // HarfBuzzSharp
    {"hb_buffer_add", hb_buffer_add}, // HarfBuzzSharp
    {"hb_buffer_add_codepoints", hb_buffer_add_codepoints}, // HarfBuzzSharp
    {"hb_buffer_add_latin1", hb_buffer_add_latin1}, // HarfBuzzSharp
    {"hb_buffer_add_utf16", hb_buffer_add_utf16}, // HarfBuzzSharp
    {"hb_buffer_add_utf32", hb_buffer_add_utf32}, // HarfBuzzSharp
    {"hb_buffer_add_utf8", hb_buffer_add_utf8}, // HarfBuzzSharp
    {"hb_buffer_allocation_successful", hb_buffer_allocation_successful}, // HarfBuzzSharp
    {"hb_buffer_append", hb_buffer_append}, // HarfBuzzSharp
    {"hb_buffer_clear_contents", hb_buffer_clear_contents}, // HarfBuzzSharp
    {"hb_buffer_create", hb_buffer_create}, // HarfBuzzSharp
    {"hb_buffer_deserialize_glyphs", hb_buffer_deserialize_glyphs}, // HarfBuzzSharp
    {"hb_buffer_deserialize_unicode", hb_buffer_deserialize_unicode}, // HarfBuzzSharp
    {"hb_buffer_destroy", hb_buffer_destroy}, // HarfBuzzSharp
    {"hb_buffer_diff", hb_buffer_diff}, // HarfBuzzSharp
    {"hb_buffer_get_cluster_level", hb_buffer_get_cluster_level}, // HarfBuzzSharp
    {"hb_buffer_get_content_type", hb_buffer_get_content_type}, // HarfBuzzSharp
    {"hb_buffer_get_direction", hb_buffer_get_direction}, // HarfBuzzSharp
    {"hb_buffer_get_empty", hb_buffer_get_empty}, // HarfBuzzSharp
    {"hb_buffer_get_flags", hb_buffer_get_flags}, // HarfBuzzSharp
    {"hb_buffer_get_glyph_infos", hb_buffer_get_glyph_infos}, // HarfBuzzSharp
    {"hb_buffer_get_glyph_positions", hb_buffer_get_glyph_positions}, // HarfBuzzSharp
    {"hb_buffer_get_invisible_glyph", hb_buffer_get_invisible_glyph}, // HarfBuzzSharp
    {"hb_buffer_get_language", hb_buffer_get_language}, // HarfBuzzSharp
    {"hb_buffer_get_length", hb_buffer_get_length}, // HarfBuzzSharp
    {"hb_buffer_get_replacement_codepoint", hb_buffer_get_replacement_codepoint}, // HarfBuzzSharp
    {"hb_buffer_get_script", hb_buffer_get_script}, // HarfBuzzSharp
    {"hb_buffer_get_unicode_funcs", hb_buffer_get_unicode_funcs}, // HarfBuzzSharp
    {"hb_buffer_guess_segment_properties", hb_buffer_guess_segment_properties}, // HarfBuzzSharp
    {"hb_buffer_has_positions", hb_buffer_has_positions}, // HarfBuzzSharp
    {"hb_buffer_normalize_glyphs", hb_buffer_normalize_glyphs}, // HarfBuzzSharp
    {"hb_buffer_pre_allocate", hb_buffer_pre_allocate}, // HarfBuzzSharp
    {"hb_buffer_reference", hb_buffer_reference}, // HarfBuzzSharp
    {"hb_buffer_reset", hb_buffer_reset}, // HarfBuzzSharp
    {"hb_buffer_reverse", hb_buffer_reverse}, // HarfBuzzSharp
    {"hb_buffer_reverse_clusters", hb_buffer_reverse_clusters}, // HarfBuzzSharp
    {"hb_buffer_reverse_range", hb_buffer_reverse_range}, // HarfBuzzSharp
    {"hb_buffer_serialize", hb_buffer_serialize}, // HarfBuzzSharp
    {"hb_buffer_serialize_format_from_string", hb_buffer_serialize_format_from_string}, // HarfBuzzSharp
    {"hb_buffer_serialize_format_to_string", hb_buffer_serialize_format_to_string}, // HarfBuzzSharp
    {"hb_buffer_serialize_glyphs", hb_buffer_serialize_glyphs}, // HarfBuzzSharp
    {"hb_buffer_serialize_list_formats", hb_buffer_serialize_list_formats}, // HarfBuzzSharp
    {"hb_buffer_serialize_unicode", hb_buffer_serialize_unicode}, // HarfBuzzSharp
    {"hb_buffer_set_cluster_level", hb_buffer_set_cluster_level}, // HarfBuzzSharp
    {"hb_buffer_set_content_type", hb_buffer_set_content_type}, // HarfBuzzSharp
    {"hb_buffer_set_direction", hb_buffer_set_direction}, // HarfBuzzSharp
    {"hb_buffer_set_flags", hb_buffer_set_flags}, // HarfBuzzSharp
    {"hb_buffer_set_invisible_glyph", hb_buffer_set_invisible_glyph}, // HarfBuzzSharp
    {"hb_buffer_set_language", hb_buffer_set_language}, // HarfBuzzSharp
    {"hb_buffer_set_length", hb_buffer_set_length}, // HarfBuzzSharp
    {"hb_buffer_set_message_func", hb_buffer_set_message_func}, // HarfBuzzSharp
    {"hb_buffer_set_replacement_codepoint", hb_buffer_set_replacement_codepoint}, // HarfBuzzSharp
    {"hb_buffer_set_script", hb_buffer_set_script}, // HarfBuzzSharp
    {"hb_buffer_set_unicode_funcs", hb_buffer_set_unicode_funcs}, // HarfBuzzSharp
    {"hb_color_get_alpha", hb_color_get_alpha}, // HarfBuzzSharp
    {"hb_color_get_blue", hb_color_get_blue}, // HarfBuzzSharp
    {"hb_color_get_green", hb_color_get_green}, // HarfBuzzSharp
    {"hb_color_get_red", hb_color_get_red}, // HarfBuzzSharp
    {"hb_direction_from_string", hb_direction_from_string}, // HarfBuzzSharp
    {"hb_direction_to_string", hb_direction_to_string}, // HarfBuzzSharp
    {"hb_face_builder_add_table", hb_face_builder_add_table}, // HarfBuzzSharp
    {"hb_face_builder_create", hb_face_builder_create}, // HarfBuzzSharp
    {"hb_face_collect_unicodes", hb_face_collect_unicodes}, // HarfBuzzSharp
    {"hb_face_collect_variation_selectors", hb_face_collect_variation_selectors}, // HarfBuzzSharp
    {"hb_face_collect_variation_unicodes", hb_face_collect_variation_unicodes}, // HarfBuzzSharp
    {"hb_face_count", hb_face_count}, // HarfBuzzSharp
    {"hb_face_create", hb_face_create}, // HarfBuzzSharp
    {"hb_face_create_for_tables", hb_face_create_for_tables}, // HarfBuzzSharp
    {"hb_face_destroy", hb_face_destroy}, // HarfBuzzSharp
    {"hb_face_get_empty", hb_face_get_empty}, // HarfBuzzSharp
    {"hb_face_get_glyph_count", hb_face_get_glyph_count}, // HarfBuzzSharp
    {"hb_face_get_index", hb_face_get_index}, // HarfBuzzSharp
    {"hb_face_get_table_tags", hb_face_get_table_tags}, // HarfBuzzSharp
    {"hb_face_get_upem", hb_face_get_upem}, // HarfBuzzSharp
    {"hb_face_is_immutable", hb_face_is_immutable}, // HarfBuzzSharp
    {"hb_face_make_immutable", hb_face_make_immutable}, // HarfBuzzSharp
    {"hb_face_reference", hb_face_reference}, // HarfBuzzSharp
    {"hb_face_reference_blob", hb_face_reference_blob}, // HarfBuzzSharp
    {"hb_face_reference_table", hb_face_reference_table}, // HarfBuzzSharp
    {"hb_face_set_glyph_count", hb_face_set_glyph_count}, // HarfBuzzSharp
    {"hb_face_set_index", hb_face_set_index}, // HarfBuzzSharp
    {"hb_face_set_upem", hb_face_set_upem}, // HarfBuzzSharp
    {"hb_feature_from_string", hb_feature_from_string}, // HarfBuzzSharp
    {"hb_feature_to_string", hb_feature_to_string}, // HarfBuzzSharp
    {"hb_font_add_glyph_origin_for_direction", hb_font_add_glyph_origin_for_direction}, // HarfBuzzSharp
    {"hb_font_create", hb_font_create}, // HarfBuzzSharp
    {"hb_font_create_sub_font", hb_font_create_sub_font}, // HarfBuzzSharp
    {"hb_font_destroy", hb_font_destroy}, // HarfBuzzSharp
    {"hb_font_funcs_create", hb_font_funcs_create}, // HarfBuzzSharp
    {"hb_font_funcs_destroy", hb_font_funcs_destroy}, // HarfBuzzSharp
    {"hb_font_funcs_get_empty", hb_font_funcs_get_empty}, // HarfBuzzSharp
    {"hb_font_funcs_is_immutable", hb_font_funcs_is_immutable}, // HarfBuzzSharp
    {"hb_font_funcs_make_immutable", hb_font_funcs_make_immutable}, // HarfBuzzSharp
    {"hb_font_funcs_reference", hb_font_funcs_reference}, // HarfBuzzSharp
    {"hb_font_funcs_set_font_h_extents_func", hb_font_funcs_set_font_h_extents_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_font_v_extents_func", hb_font_funcs_set_font_v_extents_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_contour_point_func", hb_font_funcs_set_glyph_contour_point_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_extents_func", hb_font_funcs_set_glyph_extents_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_from_name_func", hb_font_funcs_set_glyph_from_name_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_h_advance_func", hb_font_funcs_set_glyph_h_advance_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_h_advances_func", hb_font_funcs_set_glyph_h_advances_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_h_kerning_func", hb_font_funcs_set_glyph_h_kerning_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_h_origin_func", hb_font_funcs_set_glyph_h_origin_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_name_func", hb_font_funcs_set_glyph_name_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_v_advance_func", hb_font_funcs_set_glyph_v_advance_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_v_advances_func", hb_font_funcs_set_glyph_v_advances_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_glyph_v_origin_func", hb_font_funcs_set_glyph_v_origin_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_nominal_glyph_func", hb_font_funcs_set_nominal_glyph_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_nominal_glyphs_func", hb_font_funcs_set_nominal_glyphs_func}, // HarfBuzzSharp
    {"hb_font_funcs_set_variation_glyph_func", hb_font_funcs_set_variation_glyph_func}, // HarfBuzzSharp
    {"hb_font_get_empty", hb_font_get_empty}, // HarfBuzzSharp
    {"hb_font_get_extents_for_direction", hb_font_get_extents_for_direction}, // HarfBuzzSharp
    {"hb_font_get_face", hb_font_get_face}, // HarfBuzzSharp
    {"hb_font_get_glyph", hb_font_get_glyph}, // HarfBuzzSharp
    {"hb_font_get_glyph_advance_for_direction", hb_font_get_glyph_advance_for_direction}, // HarfBuzzSharp
    {"hb_font_get_glyph_advances_for_direction", hb_font_get_glyph_advances_for_direction}, // HarfBuzzSharp
    {"hb_font_get_glyph_contour_point", hb_font_get_glyph_contour_point}, // HarfBuzzSharp
    {"hb_font_get_glyph_contour_point_for_origin", hb_font_get_glyph_contour_point_for_origin}, // HarfBuzzSharp
    {"hb_font_get_glyph_extents", hb_font_get_glyph_extents}, // HarfBuzzSharp
    {"hb_font_get_glyph_extents_for_origin", hb_font_get_glyph_extents_for_origin}, // HarfBuzzSharp
    {"hb_font_get_glyph_from_name", hb_font_get_glyph_from_name}, // HarfBuzzSharp
    {"hb_font_get_glyph_h_advance", hb_font_get_glyph_h_advance}, // HarfBuzzSharp
    {"hb_font_get_glyph_h_advances", hb_font_get_glyph_h_advances}, // HarfBuzzSharp
    {"hb_font_get_glyph_h_kerning", hb_font_get_glyph_h_kerning}, // HarfBuzzSharp
    {"hb_font_get_glyph_h_origin", hb_font_get_glyph_h_origin}, // HarfBuzzSharp
    {"hb_font_get_glyph_kerning_for_direction", hb_font_get_glyph_kerning_for_direction}, // HarfBuzzSharp
    {"hb_font_get_glyph_name", hb_font_get_glyph_name}, // HarfBuzzSharp
    {"hb_font_get_glyph_origin_for_direction", hb_font_get_glyph_origin_for_direction}, // HarfBuzzSharp
    {"hb_font_get_glyph_v_advance", hb_font_get_glyph_v_advance}, // HarfBuzzSharp
    {"hb_font_get_glyph_v_advances", hb_font_get_glyph_v_advances}, // HarfBuzzSharp
    {"hb_font_get_glyph_v_origin", hb_font_get_glyph_v_origin}, // HarfBuzzSharp
    {"hb_font_get_h_extents", hb_font_get_h_extents}, // HarfBuzzSharp
    {"hb_font_get_nominal_glyph", hb_font_get_nominal_glyph}, // HarfBuzzSharp
    {"hb_font_get_nominal_glyphs", hb_font_get_nominal_glyphs}, // HarfBuzzSharp
    {"hb_font_get_parent", hb_font_get_parent}, // HarfBuzzSharp
    {"hb_font_get_ppem", hb_font_get_ppem}, // HarfBuzzSharp
    {"hb_font_get_ptem", hb_font_get_ptem}, // HarfBuzzSharp
    {"hb_font_get_scale", hb_font_get_scale}, // HarfBuzzSharp
    {"hb_font_get_v_extents", hb_font_get_v_extents}, // HarfBuzzSharp
    {"hb_font_get_var_coords_normalized", hb_font_get_var_coords_normalized}, // HarfBuzzSharp
    {"hb_font_get_variation_glyph", hb_font_get_variation_glyph}, // HarfBuzzSharp
    {"hb_font_glyph_from_string", hb_font_glyph_from_string}, // HarfBuzzSharp
    {"hb_font_glyph_to_string", hb_font_glyph_to_string}, // HarfBuzzSharp
    {"hb_font_is_immutable", hb_font_is_immutable}, // HarfBuzzSharp
    {"hb_font_make_immutable", hb_font_make_immutable}, // HarfBuzzSharp
    {"hb_font_reference", hb_font_reference}, // HarfBuzzSharp
    {"hb_font_set_face", hb_font_set_face}, // HarfBuzzSharp
    {"hb_font_set_funcs", hb_font_set_funcs}, // HarfBuzzSharp
    {"hb_font_set_funcs_data", hb_font_set_funcs_data}, // HarfBuzzSharp
    {"hb_font_set_parent", hb_font_set_parent}, // HarfBuzzSharp
    {"hb_font_set_ppem", hb_font_set_ppem}, // HarfBuzzSharp
    {"hb_font_set_ptem", hb_font_set_ptem}, // HarfBuzzSharp
    {"hb_font_set_scale", hb_font_set_scale}, // HarfBuzzSharp
    {"hb_font_set_var_coords_design", hb_font_set_var_coords_design}, // HarfBuzzSharp
    {"hb_font_set_var_coords_normalized", hb_font_set_var_coords_normalized}, // HarfBuzzSharp
    {"hb_font_set_var_named_instance", hb_font_set_var_named_instance}, // HarfBuzzSharp
    {"hb_font_set_variations", hb_font_set_variations}, // HarfBuzzSharp
    {"hb_font_subtract_glyph_origin_for_direction", hb_font_subtract_glyph_origin_for_direction}, // HarfBuzzSharp
    {"hb_glyph_info_get_glyph_flags", hb_glyph_info_get_glyph_flags}, // HarfBuzzSharp
    {"hb_language_from_string", hb_language_from_string}, // HarfBuzzSharp
    {"hb_language_get_default", hb_language_get_default}, // HarfBuzzSharp
    {"hb_language_to_string", hb_language_to_string}, // HarfBuzzSharp
    {"hb_map_allocation_successful", hb_map_allocation_successful}, // HarfBuzzSharp
    {"hb_map_clear", hb_map_clear}, // HarfBuzzSharp
    {"hb_map_create", hb_map_create}, // HarfBuzzSharp
    {"hb_map_del", hb_map_del}, // HarfBuzzSharp
    {"hb_map_destroy", hb_map_destroy}, // HarfBuzzSharp
    {"hb_map_get", hb_map_get}, // HarfBuzzSharp
    {"hb_map_get_empty", hb_map_get_empty}, // HarfBuzzSharp
    {"hb_map_get_population", hb_map_get_population}, // HarfBuzzSharp
    {"hb_map_has", hb_map_has}, // HarfBuzzSharp
    {"hb_map_is_empty", hb_map_is_empty}, // HarfBuzzSharp
    {"hb_map_reference", hb_map_reference}, // HarfBuzzSharp
    {"hb_map_set", hb_map_set}, // HarfBuzzSharp
    {"hb_ot_color_glyph_get_layers", hb_ot_color_glyph_get_layers}, // HarfBuzzSharp
    {"hb_ot_color_glyph_reference_png", hb_ot_color_glyph_reference_png}, // HarfBuzzSharp
    {"hb_ot_color_glyph_reference_svg", hb_ot_color_glyph_reference_svg}, // HarfBuzzSharp
    {"hb_ot_color_has_layers", hb_ot_color_has_layers}, // HarfBuzzSharp
    {"hb_ot_color_has_palettes", hb_ot_color_has_palettes}, // HarfBuzzSharp
    {"hb_ot_color_has_png", hb_ot_color_has_png}, // HarfBuzzSharp
    {"hb_ot_color_has_svg", hb_ot_color_has_svg}, // HarfBuzzSharp
    {"hb_ot_color_palette_color_get_name_id", hb_ot_color_palette_color_get_name_id}, // HarfBuzzSharp
    {"hb_ot_color_palette_get_colors", hb_ot_color_palette_get_colors}, // HarfBuzzSharp
    {"hb_ot_color_palette_get_count", hb_ot_color_palette_get_count}, // HarfBuzzSharp
    {"hb_ot_color_palette_get_flags", hb_ot_color_palette_get_flags}, // HarfBuzzSharp
    {"hb_ot_color_palette_get_name_id", hb_ot_color_palette_get_name_id}, // HarfBuzzSharp
    {"hb_ot_font_set_funcs", hb_ot_font_set_funcs}, // HarfBuzzSharp
    {"hb_ot_layout_collect_features", hb_ot_layout_collect_features}, // HarfBuzzSharp
    {"hb_ot_layout_collect_lookups", hb_ot_layout_collect_lookups}, // HarfBuzzSharp
    {"hb_ot_layout_feature_get_characters", hb_ot_layout_feature_get_characters}, // HarfBuzzSharp
    {"hb_ot_layout_feature_get_lookups", hb_ot_layout_feature_get_lookups}, // HarfBuzzSharp
    {"hb_ot_layout_feature_get_name_ids", hb_ot_layout_feature_get_name_ids}, // HarfBuzzSharp
    {"hb_ot_layout_feature_with_variations_get_lookups", hb_ot_layout_feature_with_variations_get_lookups}, // HarfBuzzSharp
    {"hb_ot_layout_get_attach_points", hb_ot_layout_get_attach_points}, // HarfBuzzSharp
    {"hb_ot_layout_get_baseline", hb_ot_layout_get_baseline}, // HarfBuzzSharp
    {"hb_ot_layout_get_glyph_class", hb_ot_layout_get_glyph_class}, // HarfBuzzSharp
    {"hb_ot_layout_get_glyphs_in_class", hb_ot_layout_get_glyphs_in_class}, // HarfBuzzSharp
    {"hb_ot_layout_get_ligature_carets", hb_ot_layout_get_ligature_carets}, // HarfBuzzSharp
    {"hb_ot_layout_get_size_params", hb_ot_layout_get_size_params}, // HarfBuzzSharp
    {"hb_ot_layout_has_glyph_classes", hb_ot_layout_has_glyph_classes}, // HarfBuzzSharp
    {"hb_ot_layout_has_positioning", hb_ot_layout_has_positioning}, // HarfBuzzSharp
    {"hb_ot_layout_has_substitution", hb_ot_layout_has_substitution}, // HarfBuzzSharp
    {"hb_ot_layout_language_find_feature", hb_ot_layout_language_find_feature}, // HarfBuzzSharp
    {"hb_ot_layout_language_get_feature_indexes", hb_ot_layout_language_get_feature_indexes}, // HarfBuzzSharp
    {"hb_ot_layout_language_get_feature_tags", hb_ot_layout_language_get_feature_tags}, // HarfBuzzSharp
    {"hb_ot_layout_language_get_required_feature", hb_ot_layout_language_get_required_feature}, // HarfBuzzSharp
    {"hb_ot_layout_language_get_required_feature_index", hb_ot_layout_language_get_required_feature_index}, // HarfBuzzSharp
    {"hb_ot_layout_lookup_collect_glyphs", hb_ot_layout_lookup_collect_glyphs}, // HarfBuzzSharp
    {"hb_ot_layout_lookup_get_glyph_alternates", hb_ot_layout_lookup_get_glyph_alternates}, // HarfBuzzSharp
    {"hb_ot_layout_lookup_substitute_closure", hb_ot_layout_lookup_substitute_closure}, // HarfBuzzSharp
    {"hb_ot_layout_lookup_would_substitute", hb_ot_layout_lookup_would_substitute}, // HarfBuzzSharp
    {"hb_ot_layout_lookups_substitute_closure", hb_ot_layout_lookups_substitute_closure}, // HarfBuzzSharp
    {"hb_ot_layout_script_get_language_tags", hb_ot_layout_script_get_language_tags}, // HarfBuzzSharp
    {"hb_ot_layout_script_select_language", hb_ot_layout_script_select_language}, // HarfBuzzSharp
    {"hb_ot_layout_table_find_feature_variations", hb_ot_layout_table_find_feature_variations}, // HarfBuzzSharp
    {"hb_ot_layout_table_find_script", hb_ot_layout_table_find_script}, // HarfBuzzSharp
    {"hb_ot_layout_table_get_feature_tags", hb_ot_layout_table_get_feature_tags}, // HarfBuzzSharp
    {"hb_ot_layout_table_get_lookup_count", hb_ot_layout_table_get_lookup_count}, // HarfBuzzSharp
    {"hb_ot_layout_table_get_script_tags", hb_ot_layout_table_get_script_tags}, // HarfBuzzSharp
    {"hb_ot_layout_table_select_script", hb_ot_layout_table_select_script}, // HarfBuzzSharp
    {"hb_ot_math_get_constant", hb_ot_math_get_constant}, // HarfBuzzSharp
    {"hb_ot_math_get_glyph_assembly", hb_ot_math_get_glyph_assembly}, // HarfBuzzSharp
    {"hb_ot_math_get_glyph_italics_correction", hb_ot_math_get_glyph_italics_correction}, // HarfBuzzSharp
    {"hb_ot_math_get_glyph_kerning", hb_ot_math_get_glyph_kerning}, // HarfBuzzSharp
    {"hb_ot_math_get_glyph_top_accent_attachment", hb_ot_math_get_glyph_top_accent_attachment}, // HarfBuzzSharp
    {"hb_ot_math_get_glyph_variants", hb_ot_math_get_glyph_variants}, // HarfBuzzSharp
    {"hb_ot_math_get_min_connector_overlap", hb_ot_math_get_min_connector_overlap}, // HarfBuzzSharp
    {"hb_ot_math_has_data", hb_ot_math_has_data}, // HarfBuzzSharp
    {"hb_ot_math_is_glyph_extended_shape", hb_ot_math_is_glyph_extended_shape}, // HarfBuzzSharp
    {"hb_ot_meta_get_entry_tags", hb_ot_meta_get_entry_tags}, // HarfBuzzSharp
    {"hb_ot_meta_reference_entry", hb_ot_meta_reference_entry}, // HarfBuzzSharp
    {"hb_ot_metrics_get_position", hb_ot_metrics_get_position}, // HarfBuzzSharp
    {"hb_ot_metrics_get_variation", hb_ot_metrics_get_variation}, // HarfBuzzSharp
    {"hb_ot_metrics_get_x_variation", hb_ot_metrics_get_x_variation}, // HarfBuzzSharp
    {"hb_ot_metrics_get_y_variation", hb_ot_metrics_get_y_variation}, // HarfBuzzSharp
    {"hb_ot_name_get_utf16", hb_ot_name_get_utf16}, // HarfBuzzSharp
    {"hb_ot_name_get_utf32", hb_ot_name_get_utf32}, // HarfBuzzSharp
    {"hb_ot_name_get_utf8", hb_ot_name_get_utf8}, // HarfBuzzSharp
    {"hb_ot_name_list_names", hb_ot_name_list_names}, // HarfBuzzSharp
    {"hb_ot_shape_glyphs_closure", hb_ot_shape_glyphs_closure}, // HarfBuzzSharp
    {"hb_ot_shape_plan_collect_lookups", hb_ot_shape_plan_collect_lookups}, // HarfBuzzSharp
    {"hb_ot_tag_to_language", hb_ot_tag_to_language}, // HarfBuzzSharp
    {"hb_ot_tag_to_script", hb_ot_tag_to_script}, // HarfBuzzSharp
    {"hb_ot_tags_from_script_and_language", hb_ot_tags_from_script_and_language}, // HarfBuzzSharp
    {"hb_ot_tags_to_script_and_language", hb_ot_tags_to_script_and_language}, // HarfBuzzSharp
    {"hb_script_from_iso15924_tag", hb_script_from_iso15924_tag}, // HarfBuzzSharp
    {"hb_script_from_string", hb_script_from_string}, // HarfBuzzSharp
    {"hb_script_get_horizontal_direction", hb_script_get_horizontal_direction}, // HarfBuzzSharp
    {"hb_script_to_iso15924_tag", hb_script_to_iso15924_tag}, // HarfBuzzSharp
    {"hb_set_add", hb_set_add}, // HarfBuzzSharp
    {"hb_set_add_range", hb_set_add_range}, // HarfBuzzSharp
    {"hb_set_allocation_successful", hb_set_allocation_successful}, // HarfBuzzSharp
    {"hb_set_clear", hb_set_clear}, // HarfBuzzSharp
    {"hb_set_copy", hb_set_copy}, // HarfBuzzSharp
    {"hb_set_create", hb_set_create}, // HarfBuzzSharp
    {"hb_set_del", hb_set_del}, // HarfBuzzSharp
    {"hb_set_del_range", hb_set_del_range}, // HarfBuzzSharp
    {"hb_set_destroy", hb_set_destroy}, // HarfBuzzSharp
    {"hb_set_get_empty", hb_set_get_empty}, // HarfBuzzSharp
    {"hb_set_get_max", hb_set_get_max}, // HarfBuzzSharp
    {"hb_set_get_min", hb_set_get_min}, // HarfBuzzSharp
    {"hb_set_get_population", hb_set_get_population}, // HarfBuzzSharp
    {"hb_set_has", hb_set_has}, // HarfBuzzSharp
    {"hb_set_intersect", hb_set_intersect}, // HarfBuzzSharp
    {"hb_set_is_empty", hb_set_is_empty}, // HarfBuzzSharp
    {"hb_set_is_equal", hb_set_is_equal}, // HarfBuzzSharp
    {"hb_set_is_subset", hb_set_is_subset}, // HarfBuzzSharp
    {"hb_set_next", hb_set_next}, // HarfBuzzSharp
    {"hb_set_next_range", hb_set_next_range}, // HarfBuzzSharp
    {"hb_set_previous", hb_set_previous}, // HarfBuzzSharp
    {"hb_set_previous_range", hb_set_previous_range}, // HarfBuzzSharp
    {"hb_set_reference", hb_set_reference}, // HarfBuzzSharp
    {"hb_set_set", hb_set_set}, // HarfBuzzSharp
    {"hb_set_subtract", hb_set_subtract}, // HarfBuzzSharp
    {"hb_set_symmetric_difference", hb_set_symmetric_difference}, // HarfBuzzSharp
    {"hb_set_union", hb_set_union}, // HarfBuzzSharp
    {"hb_shape", hb_shape}, // HarfBuzzSharp
    {"hb_shape_full", hb_shape_full}, // HarfBuzzSharp
    {"hb_shape_list_shapers", hb_shape_list_shapers}, // HarfBuzzSharp
    {"hb_tag_from_string", hb_tag_from_string}, // HarfBuzzSharp
    {"hb_tag_to_string", hb_tag_to_string}, // HarfBuzzSharp
    {"hb_unicode_combining_class", hb_unicode_combining_class}, // HarfBuzzSharp
    {"hb_unicode_compose", hb_unicode_compose}, // HarfBuzzSharp
    {"hb_unicode_decompose", hb_unicode_decompose}, // HarfBuzzSharp
    {"hb_unicode_funcs_create", hb_unicode_funcs_create}, // HarfBuzzSharp
    {"hb_unicode_funcs_destroy", hb_unicode_funcs_destroy}, // HarfBuzzSharp
    {"hb_unicode_funcs_get_default", hb_unicode_funcs_get_default}, // HarfBuzzSharp
    {"hb_unicode_funcs_get_empty", hb_unicode_funcs_get_empty}, // HarfBuzzSharp
    {"hb_unicode_funcs_get_parent", hb_unicode_funcs_get_parent}, // HarfBuzzSharp
    {"hb_unicode_funcs_is_immutable", hb_unicode_funcs_is_immutable}, // HarfBuzzSharp
    {"hb_unicode_funcs_make_immutable", hb_unicode_funcs_make_immutable}, // HarfBuzzSharp
    {"hb_unicode_funcs_reference", hb_unicode_funcs_reference}, // HarfBuzzSharp
    {"hb_unicode_funcs_set_combining_class_func", hb_unicode_funcs_set_combining_class_func}, // HarfBuzzSharp
    {"hb_unicode_funcs_set_compose_func", hb_unicode_funcs_set_compose_func}, // HarfBuzzSharp
    {"hb_unicode_funcs_set_decompose_func", hb_unicode_funcs_set_decompose_func}, // HarfBuzzSharp
    {"hb_unicode_funcs_set_general_category_func", hb_unicode_funcs_set_general_category_func}, // HarfBuzzSharp
    {"hb_unicode_funcs_set_mirroring_func", hb_unicode_funcs_set_mirroring_func}, // HarfBuzzSharp
    {"hb_unicode_funcs_set_script_func", hb_unicode_funcs_set_script_func}, // HarfBuzzSharp
    {"hb_unicode_general_category", hb_unicode_general_category}, // HarfBuzzSharp
    {"hb_unicode_mirroring", hb_unicode_mirroring}, // HarfBuzzSharp
    {"hb_unicode_script", hb_unicode_script}, // HarfBuzzSharp
    {"hb_variation_from_string", hb_variation_from_string}, // HarfBuzzSharp
    {"hb_variation_to_string", hb_variation_to_string}, // HarfBuzzSharp
    {"hb_version", hb_version}, // HarfBuzzSharp
    {"hb_version_atleast", hb_version_atleast}, // HarfBuzzSharp
    {"hb_version_string", hb_version_string}, // HarfBuzzSharp
    {NULL, NULL}
};

static PinvokeImport libSkiaSharp_imports [] = {
    {"gr_backendrendertarget_delete", gr_backendrendertarget_delete}, // SkiaSharp
    {"gr_backendrendertarget_get_backend", gr_backendrendertarget_get_backend}, // SkiaSharp
    {"gr_backendrendertarget_get_gl_framebufferinfo", gr_backendrendertarget_get_gl_framebufferinfo}, // SkiaSharp
    {"gr_backendrendertarget_get_height", gr_backendrendertarget_get_height}, // SkiaSharp
    {"gr_backendrendertarget_get_samples", gr_backendrendertarget_get_samples}, // SkiaSharp
    {"gr_backendrendertarget_get_stencils", gr_backendrendertarget_get_stencils}, // SkiaSharp
    {"gr_backendrendertarget_get_width", gr_backendrendertarget_get_width}, // SkiaSharp
    {"gr_backendrendertarget_is_valid", gr_backendrendertarget_is_valid}, // SkiaSharp
    {"gr_backendrendertarget_new_direct3d", gr_backendrendertarget_new_direct3d}, // SkiaSharp
    {"gr_backendrendertarget_new_gl", gr_backendrendertarget_new_gl}, // SkiaSharp
    {"gr_backendrendertarget_new_metal", gr_backendrendertarget_new_metal}, // SkiaSharp
    {"gr_backendrendertarget_new_vulkan", gr_backendrendertarget_new_vulkan}, // SkiaSharp
    {"gr_backendtexture_delete", gr_backendtexture_delete}, // SkiaSharp
    {"gr_backendtexture_get_backend", gr_backendtexture_get_backend}, // SkiaSharp
    {"gr_backendtexture_get_gl_textureinfo", gr_backendtexture_get_gl_textureinfo}, // SkiaSharp
    {"gr_backendtexture_get_height", gr_backendtexture_get_height}, // SkiaSharp
    {"gr_backendtexture_get_width", gr_backendtexture_get_width}, // SkiaSharp
    {"gr_backendtexture_has_mipmaps", gr_backendtexture_has_mipmaps}, // SkiaSharp
    {"gr_backendtexture_is_valid", gr_backendtexture_is_valid}, // SkiaSharp
    {"gr_backendtexture_new_direct3d", gr_backendtexture_new_direct3d}, // SkiaSharp
    {"gr_backendtexture_new_gl", gr_backendtexture_new_gl}, // SkiaSharp
    {"gr_backendtexture_new_metal", gr_backendtexture_new_metal}, // SkiaSharp
    {"gr_backendtexture_new_vulkan", gr_backendtexture_new_vulkan}, // SkiaSharp
    {"gr_direct_context_abandon_context", gr_direct_context_abandon_context}, // SkiaSharp
    {"gr_direct_context_dump_memory_statistics", gr_direct_context_dump_memory_statistics}, // SkiaSharp
    {"gr_direct_context_flush", gr_direct_context_flush}, // SkiaSharp
    {"gr_direct_context_flush_and_submit", gr_direct_context_flush_and_submit}, // SkiaSharp
    {"gr_direct_context_flush_image", gr_direct_context_flush_image}, // SkiaSharp
    {"gr_direct_context_flush_surface", gr_direct_context_flush_surface}, // SkiaSharp
    {"gr_direct_context_free_gpu_resources", gr_direct_context_free_gpu_resources}, // SkiaSharp
    {"gr_direct_context_get_resource_cache_limit", gr_direct_context_get_resource_cache_limit}, // SkiaSharp
    {"gr_direct_context_get_resource_cache_usage", gr_direct_context_get_resource_cache_usage}, // SkiaSharp
    {"gr_direct_context_is_abandoned", gr_direct_context_is_abandoned}, // SkiaSharp
    {"gr_direct_context_make_direct3d", gr_direct_context_make_direct3d}, // SkiaSharp
    {"gr_direct_context_make_direct3d_with_options", gr_direct_context_make_direct3d_with_options}, // SkiaSharp
    {"gr_direct_context_make_gl", gr_direct_context_make_gl}, // SkiaSharp
    {"gr_direct_context_make_gl_with_options", gr_direct_context_make_gl_with_options}, // SkiaSharp
    {"gr_direct_context_make_metal", gr_direct_context_make_metal}, // SkiaSharp
    {"gr_direct_context_make_metal_with_options", gr_direct_context_make_metal_with_options}, // SkiaSharp
    {"gr_direct_context_make_vulkan", gr_direct_context_make_vulkan}, // SkiaSharp
    {"gr_direct_context_make_vulkan_with_options", gr_direct_context_make_vulkan_with_options}, // SkiaSharp
    {"gr_direct_context_perform_deferred_cleanup", gr_direct_context_perform_deferred_cleanup}, // SkiaSharp
    {"gr_direct_context_purge_unlocked_resources", gr_direct_context_purge_unlocked_resources}, // SkiaSharp
    {"gr_direct_context_purge_unlocked_resources_bytes", gr_direct_context_purge_unlocked_resources_bytes}, // SkiaSharp
    {"gr_direct_context_release_resources_and_abandon_context", gr_direct_context_release_resources_and_abandon_context}, // SkiaSharp
    {"gr_direct_context_reset_context", gr_direct_context_reset_context}, // SkiaSharp
    {"gr_direct_context_set_resource_cache_limit", gr_direct_context_set_resource_cache_limit}, // SkiaSharp
    {"gr_direct_context_submit", gr_direct_context_submit}, // SkiaSharp
    {"gr_glinterface_assemble_gl_interface", gr_glinterface_assemble_gl_interface}, // SkiaSharp
    {"gr_glinterface_assemble_gles_interface", gr_glinterface_assemble_gles_interface}, // SkiaSharp
    {"gr_glinterface_assemble_interface", gr_glinterface_assemble_interface}, // SkiaSharp
    {"gr_glinterface_assemble_webgl_interface", gr_glinterface_assemble_webgl_interface}, // SkiaSharp
    {"gr_glinterface_create_native_interface", gr_glinterface_create_native_interface}, // SkiaSharp
    {"gr_glinterface_has_extension", gr_glinterface_has_extension}, // SkiaSharp
    {"gr_glinterface_unref", gr_glinterface_unref}, // SkiaSharp
    {"gr_glinterface_validate", gr_glinterface_validate}, // SkiaSharp
    {"gr_recording_context_get_backend", gr_recording_context_get_backend}, // SkiaSharp
    {"gr_recording_context_get_direct_context", gr_recording_context_get_direct_context}, // SkiaSharp
    {"gr_recording_context_get_max_surface_sample_count_for_color_type", gr_recording_context_get_max_surface_sample_count_for_color_type}, // SkiaSharp
    {"gr_recording_context_is_abandoned", gr_recording_context_is_abandoned}, // SkiaSharp
    {"gr_recording_context_max_render_target_size", gr_recording_context_max_render_target_size}, // SkiaSharp
    {"gr_recording_context_max_texture_size", gr_recording_context_max_texture_size}, // SkiaSharp
    {"gr_recording_context_unref", gr_recording_context_unref}, // SkiaSharp
    {"gr_vk_extensions_delete", gr_vk_extensions_delete}, // SkiaSharp
    {"gr_vk_extensions_has_extension", gr_vk_extensions_has_extension}, // SkiaSharp
    {"gr_vk_extensions_init", gr_vk_extensions_init}, // SkiaSharp
    {"gr_vk_extensions_new", gr_vk_extensions_new}, // SkiaSharp
    {"sk_bitmap_destructor", sk_bitmap_destructor}, // SkiaSharp
    {"sk_bitmap_erase", sk_bitmap_erase}, // SkiaSharp
    {"sk_bitmap_erase_rect", sk_bitmap_erase_rect}, // SkiaSharp
    {"sk_bitmap_extract_alpha", sk_bitmap_extract_alpha}, // SkiaSharp
    {"sk_bitmap_extract_subset", sk_bitmap_extract_subset}, // SkiaSharp
    {"sk_bitmap_get_addr", sk_bitmap_get_addr}, // SkiaSharp
    {"sk_bitmap_get_addr_16", sk_bitmap_get_addr_16}, // SkiaSharp
    {"sk_bitmap_get_addr_32", sk_bitmap_get_addr_32}, // SkiaSharp
    {"sk_bitmap_get_addr_8", sk_bitmap_get_addr_8}, // SkiaSharp
    {"sk_bitmap_get_byte_count", sk_bitmap_get_byte_count}, // SkiaSharp
    {"sk_bitmap_get_info", sk_bitmap_get_info}, // SkiaSharp
    {"sk_bitmap_get_pixel_color", sk_bitmap_get_pixel_color}, // SkiaSharp
    {"sk_bitmap_get_pixel_colors", sk_bitmap_get_pixel_colors}, // SkiaSharp
    {"sk_bitmap_get_pixels", sk_bitmap_get_pixels}, // SkiaSharp
    {"sk_bitmap_get_row_bytes", sk_bitmap_get_row_bytes}, // SkiaSharp
    {"sk_bitmap_install_pixels", sk_bitmap_install_pixels}, // SkiaSharp
    {"sk_bitmap_install_pixels_with_pixmap", sk_bitmap_install_pixels_with_pixmap}, // SkiaSharp
    {"sk_bitmap_is_immutable", sk_bitmap_is_immutable}, // SkiaSharp
    {"sk_bitmap_is_null", sk_bitmap_is_null}, // SkiaSharp
    {"sk_bitmap_make_shader", sk_bitmap_make_shader}, // SkiaSharp
    {"sk_bitmap_new", sk_bitmap_new}, // SkiaSharp
    {"sk_bitmap_notify_pixels_changed", sk_bitmap_notify_pixels_changed}, // SkiaSharp
    {"sk_bitmap_peek_pixels", sk_bitmap_peek_pixels}, // SkiaSharp
    {"sk_bitmap_ready_to_draw", sk_bitmap_ready_to_draw}, // SkiaSharp
    {"sk_bitmap_reset", sk_bitmap_reset}, // SkiaSharp
    {"sk_bitmap_set_immutable", sk_bitmap_set_immutable}, // SkiaSharp
    {"sk_bitmap_set_pixels", sk_bitmap_set_pixels}, // SkiaSharp
    {"sk_bitmap_swap", sk_bitmap_swap}, // SkiaSharp
    {"sk_bitmap_try_alloc_pixels", sk_bitmap_try_alloc_pixels}, // SkiaSharp
    {"sk_bitmap_try_alloc_pixels_with_flags", sk_bitmap_try_alloc_pixels_with_flags}, // SkiaSharp
    {"sk_blender_new_arithmetic", sk_blender_new_arithmetic}, // SkiaSharp
    {"sk_blender_new_mode", sk_blender_new_mode}, // SkiaSharp
    {"sk_blender_ref", sk_blender_ref}, // SkiaSharp
    {"sk_blender_unref", sk_blender_unref}, // SkiaSharp
    {"sk_canvas_clear", sk_canvas_clear}, // SkiaSharp
    {"sk_canvas_clear_color4f", sk_canvas_clear_color4f}, // SkiaSharp
    {"sk_canvas_clip_path_with_operation", sk_canvas_clip_path_with_operation}, // SkiaSharp
    {"sk_canvas_clip_rect_with_operation", sk_canvas_clip_rect_with_operation}, // SkiaSharp
    {"sk_canvas_clip_region", sk_canvas_clip_region}, // SkiaSharp
    {"sk_canvas_clip_rrect_with_operation", sk_canvas_clip_rrect_with_operation}, // SkiaSharp
    {"sk_canvas_concat", sk_canvas_concat}, // SkiaSharp
    {"sk_canvas_destroy", sk_canvas_destroy}, // SkiaSharp
    {"sk_canvas_discard", sk_canvas_discard}, // SkiaSharp
    {"sk_canvas_draw_annotation", sk_canvas_draw_annotation}, // SkiaSharp
    {"sk_canvas_draw_arc", sk_canvas_draw_arc}, // SkiaSharp
    {"sk_canvas_draw_atlas", sk_canvas_draw_atlas}, // SkiaSharp
    {"sk_canvas_draw_circle", sk_canvas_draw_circle}, // SkiaSharp
    {"sk_canvas_draw_color", sk_canvas_draw_color}, // SkiaSharp
    {"sk_canvas_draw_color4f", sk_canvas_draw_color4f}, // SkiaSharp
    {"sk_canvas_draw_drawable", sk_canvas_draw_drawable}, // SkiaSharp
    {"sk_canvas_draw_drrect", sk_canvas_draw_drrect}, // SkiaSharp
    {"sk_canvas_draw_image", sk_canvas_draw_image}, // SkiaSharp
    {"sk_canvas_draw_image_lattice", sk_canvas_draw_image_lattice}, // SkiaSharp
    {"sk_canvas_draw_image_nine", sk_canvas_draw_image_nine}, // SkiaSharp
    {"sk_canvas_draw_image_rect", sk_canvas_draw_image_rect}, // SkiaSharp
    {"sk_canvas_draw_line", sk_canvas_draw_line}, // SkiaSharp
    {"sk_canvas_draw_link_destination_annotation", sk_canvas_draw_link_destination_annotation}, // SkiaSharp
    {"sk_canvas_draw_named_destination_annotation", sk_canvas_draw_named_destination_annotation}, // SkiaSharp
    {"sk_canvas_draw_oval", sk_canvas_draw_oval}, // SkiaSharp
    {"sk_canvas_draw_paint", sk_canvas_draw_paint}, // SkiaSharp
    {"sk_canvas_draw_patch", sk_canvas_draw_patch}, // SkiaSharp
    {"sk_canvas_draw_path", sk_canvas_draw_path}, // SkiaSharp
    {"sk_canvas_draw_picture", sk_canvas_draw_picture}, // SkiaSharp, Uno.UI.Composition
    {"sk_canvas_draw_point", sk_canvas_draw_point}, // SkiaSharp
    {"sk_canvas_draw_points", sk_canvas_draw_points}, // SkiaSharp
    {"sk_canvas_draw_rect", sk_canvas_draw_rect}, // SkiaSharp
    {"sk_canvas_draw_region", sk_canvas_draw_region}, // SkiaSharp
    {"sk_canvas_draw_round_rect", sk_canvas_draw_round_rect}, // SkiaSharp
    {"sk_canvas_draw_rrect", sk_canvas_draw_rrect}, // SkiaSharp
    {"sk_canvas_draw_simple_text", sk_canvas_draw_simple_text}, // SkiaSharp
    {"sk_canvas_draw_text_blob", sk_canvas_draw_text_blob}, // SkiaSharp, Uno.UI.Composition
    {"sk_canvas_draw_url_annotation", sk_canvas_draw_url_annotation}, // SkiaSharp
    {"sk_canvas_draw_vertices", sk_canvas_draw_vertices}, // SkiaSharp
    {"sk_canvas_get_device_clip_bounds", sk_canvas_get_device_clip_bounds}, // SkiaSharp
    {"sk_canvas_get_local_clip_bounds", sk_canvas_get_local_clip_bounds}, // SkiaSharp
    {"sk_canvas_get_matrix", sk_canvas_get_matrix}, // SkiaSharp
    {"sk_canvas_get_save_count", sk_canvas_get_save_count}, // SkiaSharp
    {"sk_canvas_is_clip_empty", sk_canvas_is_clip_empty}, // SkiaSharp
    {"sk_canvas_is_clip_rect", sk_canvas_is_clip_rect}, // SkiaSharp
    {"sk_canvas_new_from_bitmap", sk_canvas_new_from_bitmap}, // SkiaSharp
    {"sk_canvas_new_from_raster", sk_canvas_new_from_raster}, // SkiaSharp
    {"sk_canvas_quick_reject", sk_canvas_quick_reject}, // SkiaSharp
    {"sk_canvas_reset_matrix", sk_canvas_reset_matrix}, // SkiaSharp
    {"sk_canvas_restore", sk_canvas_restore}, // SkiaSharp
    {"sk_canvas_restore_to_count", sk_canvas_restore_to_count}, // SkiaSharp
    {"sk_canvas_rotate_degrees", sk_canvas_rotate_degrees}, // SkiaSharp
    {"sk_canvas_rotate_radians", sk_canvas_rotate_radians}, // SkiaSharp
    {"sk_canvas_save", sk_canvas_save}, // SkiaSharp
    {"sk_canvas_save_layer", sk_canvas_save_layer}, // SkiaSharp
    {"sk_canvas_save_layer_rec", sk_canvas_save_layer_rec}, // SkiaSharp
    {"sk_canvas_scale", sk_canvas_scale}, // SkiaSharp
    {"sk_canvas_set_matrix", sk_canvas_set_matrix}, // SkiaSharp, Uno.UI.Composition
    {"sk_canvas_skew", sk_canvas_skew}, // SkiaSharp
    {"sk_canvas_translate", sk_canvas_translate}, // SkiaSharp
    {"sk_codec_destroy", sk_codec_destroy}, // SkiaSharp
    {"sk_codec_get_encoded_format", sk_codec_get_encoded_format}, // SkiaSharp
    {"sk_codec_get_frame_count", sk_codec_get_frame_count}, // SkiaSharp
    {"sk_codec_get_frame_info", sk_codec_get_frame_info}, // SkiaSharp
    {"sk_codec_get_frame_info_for_index", sk_codec_get_frame_info_for_index}, // SkiaSharp
    {"sk_codec_get_info", sk_codec_get_info}, // SkiaSharp
    {"sk_codec_get_origin", sk_codec_get_origin}, // SkiaSharp
    {"sk_codec_get_pixels", sk_codec_get_pixels}, // SkiaSharp
    {"sk_codec_get_repetition_count", sk_codec_get_repetition_count}, // SkiaSharp
    {"sk_codec_get_scaled_dimensions", sk_codec_get_scaled_dimensions}, // SkiaSharp
    {"sk_codec_get_scanline_order", sk_codec_get_scanline_order}, // SkiaSharp
    {"sk_codec_get_scanlines", sk_codec_get_scanlines}, // SkiaSharp
    {"sk_codec_get_valid_subset", sk_codec_get_valid_subset}, // SkiaSharp
    {"sk_codec_incremental_decode", sk_codec_incremental_decode}, // SkiaSharp
    {"sk_codec_min_buffered_bytes_needed", sk_codec_min_buffered_bytes_needed}, // SkiaSharp
    {"sk_codec_new_from_data", sk_codec_new_from_data}, // SkiaSharp
    {"sk_codec_new_from_stream", sk_codec_new_from_stream}, // SkiaSharp
    {"sk_codec_next_scanline", sk_codec_next_scanline}, // SkiaSharp
    {"sk_codec_output_scanline", sk_codec_output_scanline}, // SkiaSharp
    {"sk_codec_skip_scanlines", sk_codec_skip_scanlines}, // SkiaSharp
    {"sk_codec_start_incremental_decode", sk_codec_start_incremental_decode}, // SkiaSharp
    {"sk_codec_start_scanline_decode", sk_codec_start_scanline_decode}, // SkiaSharp
    {"sk_color4f_from_color", sk_color4f_from_color}, // SkiaSharp
    {"sk_color4f_to_color", sk_color4f_to_color}, // SkiaSharp
    {"sk_color_get_bit_shift", sk_color_get_bit_shift}, // SkiaSharp
    {"sk_color_premultiply", sk_color_premultiply}, // SkiaSharp
    {"sk_color_premultiply_array", sk_color_premultiply_array}, // SkiaSharp
    {"sk_color_unpremultiply", sk_color_unpremultiply}, // SkiaSharp
    {"sk_color_unpremultiply_array", sk_color_unpremultiply_array}, // SkiaSharp
    {"sk_colorfilter_new_color_matrix", sk_colorfilter_new_color_matrix}, // SkiaSharp
    {"sk_colorfilter_new_compose", sk_colorfilter_new_compose}, // SkiaSharp
    {"sk_colorfilter_new_high_contrast", sk_colorfilter_new_high_contrast}, // SkiaSharp
    {"sk_colorfilter_new_hsla_matrix", sk_colorfilter_new_hsla_matrix}, // SkiaSharp
    {"sk_colorfilter_new_lerp", sk_colorfilter_new_lerp}, // SkiaSharp
    {"sk_colorfilter_new_lighting", sk_colorfilter_new_lighting}, // SkiaSharp
    {"sk_colorfilter_new_linear_to_srgb_gamma", sk_colorfilter_new_linear_to_srgb_gamma}, // SkiaSharp
    {"sk_colorfilter_new_luma_color", sk_colorfilter_new_luma_color}, // SkiaSharp
    {"sk_colorfilter_new_mode", sk_colorfilter_new_mode}, // SkiaSharp
    {"sk_colorfilter_new_srgb_to_linear_gamma", sk_colorfilter_new_srgb_to_linear_gamma}, // SkiaSharp
    {"sk_colorfilter_new_table", sk_colorfilter_new_table}, // SkiaSharp
    {"sk_colorfilter_new_table_argb", sk_colorfilter_new_table_argb}, // SkiaSharp
    {"sk_colorfilter_unref", sk_colorfilter_unref}, // SkiaSharp
    {"sk_colorspace_equals", sk_colorspace_equals}, // SkiaSharp
    {"sk_colorspace_gamma_close_to_srgb", sk_colorspace_gamma_close_to_srgb}, // SkiaSharp
    {"sk_colorspace_gamma_is_linear", sk_colorspace_gamma_is_linear}, // SkiaSharp
    {"sk_colorspace_icc_profile_delete", sk_colorspace_icc_profile_delete}, // SkiaSharp
    {"sk_colorspace_icc_profile_get_buffer", sk_colorspace_icc_profile_get_buffer}, // SkiaSharp
    {"sk_colorspace_icc_profile_get_to_xyzd50", sk_colorspace_icc_profile_get_to_xyzd50}, // SkiaSharp
    {"sk_colorspace_icc_profile_new", sk_colorspace_icc_profile_new}, // SkiaSharp
    {"sk_colorspace_icc_profile_parse", sk_colorspace_icc_profile_parse}, // SkiaSharp
    {"sk_colorspace_is_numerical_transfer_fn", sk_colorspace_is_numerical_transfer_fn}, // SkiaSharp
    {"sk_colorspace_is_srgb", sk_colorspace_is_srgb}, // SkiaSharp
    {"sk_colorspace_make_linear_gamma", sk_colorspace_make_linear_gamma}, // SkiaSharp
    {"sk_colorspace_make_srgb_gamma", sk_colorspace_make_srgb_gamma}, // SkiaSharp
    {"sk_colorspace_new_icc", sk_colorspace_new_icc}, // SkiaSharp
    {"sk_colorspace_new_rgb", sk_colorspace_new_rgb}, // SkiaSharp
    {"sk_colorspace_new_srgb", sk_colorspace_new_srgb}, // SkiaSharp
    {"sk_colorspace_new_srgb_linear", sk_colorspace_new_srgb_linear}, // SkiaSharp
    {"sk_colorspace_primaries_to_xyzd50", sk_colorspace_primaries_to_xyzd50}, // SkiaSharp
    {"sk_colorspace_ref", sk_colorspace_ref}, // SkiaSharp
    {"sk_colorspace_to_profile", sk_colorspace_to_profile}, // SkiaSharp
    {"sk_colorspace_to_xyzd50", sk_colorspace_to_xyzd50}, // SkiaSharp
    {"sk_colorspace_transfer_fn_eval", sk_colorspace_transfer_fn_eval}, // SkiaSharp
    {"sk_colorspace_transfer_fn_invert", sk_colorspace_transfer_fn_invert}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_2dot2", sk_colorspace_transfer_fn_named_2dot2}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_hlg", sk_colorspace_transfer_fn_named_hlg}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_linear", sk_colorspace_transfer_fn_named_linear}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_pq", sk_colorspace_transfer_fn_named_pq}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_rec2020", sk_colorspace_transfer_fn_named_rec2020}, // SkiaSharp
    {"sk_colorspace_transfer_fn_named_srgb", sk_colorspace_transfer_fn_named_srgb}, // SkiaSharp
    {"sk_colorspace_unref", sk_colorspace_unref}, // SkiaSharp
    {"sk_colorspace_xyz_concat", sk_colorspace_xyz_concat}, // SkiaSharp
    {"sk_colorspace_xyz_invert", sk_colorspace_xyz_invert}, // SkiaSharp
    {"sk_colorspace_xyz_named_adobe_rgb", sk_colorspace_xyz_named_adobe_rgb}, // SkiaSharp
    {"sk_colorspace_xyz_named_display_p3", sk_colorspace_xyz_named_display_p3}, // SkiaSharp
    {"sk_colorspace_xyz_named_rec2020", sk_colorspace_xyz_named_rec2020}, // SkiaSharp
    {"sk_colorspace_xyz_named_srgb", sk_colorspace_xyz_named_srgb}, // SkiaSharp
    {"sk_colorspace_xyz_named_xyz", sk_colorspace_xyz_named_xyz}, // SkiaSharp
    {"sk_colortype_get_default_8888", sk_colortype_get_default_8888}, // SkiaSharp
    {"sk_compatpaint_clone", sk_compatpaint_clone}, // SkiaSharp
    {"sk_compatpaint_delete", sk_compatpaint_delete}, // SkiaSharp
    {"sk_compatpaint_get_filter_quality", sk_compatpaint_get_filter_quality}, // SkiaSharp
    {"sk_compatpaint_get_font", sk_compatpaint_get_font}, // SkiaSharp
    {"sk_compatpaint_get_lcd_render_text", sk_compatpaint_get_lcd_render_text}, // SkiaSharp
    {"sk_compatpaint_get_text_align", sk_compatpaint_get_text_align}, // SkiaSharp
    {"sk_compatpaint_get_text_encoding", sk_compatpaint_get_text_encoding}, // SkiaSharp
    {"sk_compatpaint_make_font", sk_compatpaint_make_font}, // SkiaSharp
    {"sk_compatpaint_new", sk_compatpaint_new}, // SkiaSharp
    {"sk_compatpaint_new_with_font", sk_compatpaint_new_with_font}, // SkiaSharp
    {"sk_compatpaint_reset", sk_compatpaint_reset}, // SkiaSharp
    {"sk_compatpaint_set_filter_quality", sk_compatpaint_set_filter_quality}, // SkiaSharp
    {"sk_compatpaint_set_is_antialias", sk_compatpaint_set_is_antialias}, // SkiaSharp
    {"sk_compatpaint_set_lcd_render_text", sk_compatpaint_set_lcd_render_text}, // SkiaSharp
    {"sk_compatpaint_set_text_align", sk_compatpaint_set_text_align}, // SkiaSharp
    {"sk_compatpaint_set_text_encoding", sk_compatpaint_set_text_encoding}, // SkiaSharp
    {"sk_data_get_bytes", sk_data_get_bytes}, // SkiaSharp
    {"sk_data_get_data", sk_data_get_data}, // SkiaSharp
    {"sk_data_get_size", sk_data_get_size}, // SkiaSharp
    {"sk_data_new_empty", sk_data_new_empty}, // SkiaSharp
    {"sk_data_new_from_file", sk_data_new_from_file}, // SkiaSharp
    {"sk_data_new_from_stream", sk_data_new_from_stream}, // SkiaSharp
    {"sk_data_new_subset", sk_data_new_subset}, // SkiaSharp
    {"sk_data_new_uninitialized", sk_data_new_uninitialized}, // SkiaSharp
    {"sk_data_new_with_copy", sk_data_new_with_copy}, // SkiaSharp
    {"sk_data_new_with_proc", sk_data_new_with_proc}, // SkiaSharp
    {"sk_data_ref", sk_data_ref}, // SkiaSharp
    {"sk_data_unref", sk_data_unref}, // SkiaSharp
    {"sk_document_abort", sk_document_abort}, // SkiaSharp
    {"sk_document_begin_page", sk_document_begin_page}, // SkiaSharp
    {"sk_document_close", sk_document_close}, // SkiaSharp
    {"sk_document_create_pdf_from_stream", sk_document_create_pdf_from_stream}, // SkiaSharp
    {"sk_document_create_pdf_from_stream_with_metadata", sk_document_create_pdf_from_stream_with_metadata}, // SkiaSharp
    {"sk_document_create_xps_from_stream", sk_document_create_xps_from_stream}, // SkiaSharp
    {"sk_document_end_page", sk_document_end_page}, // SkiaSharp
    {"sk_document_unref", sk_document_unref}, // SkiaSharp
    {"sk_drawable_approximate_bytes_used", sk_drawable_approximate_bytes_used}, // SkiaSharp
    {"sk_drawable_draw", sk_drawable_draw}, // SkiaSharp
    {"sk_drawable_get_bounds", sk_drawable_get_bounds}, // SkiaSharp
    {"sk_drawable_get_generation_id", sk_drawable_get_generation_id}, // SkiaSharp
    {"sk_drawable_new_picture_snapshot", sk_drawable_new_picture_snapshot}, // SkiaSharp
    {"sk_drawable_notify_drawing_changed", sk_drawable_notify_drawing_changed}, // SkiaSharp
    {"sk_drawable_unref", sk_drawable_unref}, // SkiaSharp
    {"sk_dynamicmemorywstream_copy_to", sk_dynamicmemorywstream_copy_to}, // SkiaSharp
    {"sk_dynamicmemorywstream_destroy", sk_dynamicmemorywstream_destroy}, // SkiaSharp
    {"sk_dynamicmemorywstream_detach_as_data", sk_dynamicmemorywstream_detach_as_data}, // SkiaSharp
    {"sk_dynamicmemorywstream_detach_as_stream", sk_dynamicmemorywstream_detach_as_stream}, // SkiaSharp
    {"sk_dynamicmemorywstream_new", sk_dynamicmemorywstream_new}, // SkiaSharp
    {"sk_dynamicmemorywstream_write_to_stream", sk_dynamicmemorywstream_write_to_stream}, // SkiaSharp
    {"sk_filestream_destroy", sk_filestream_destroy}, // SkiaSharp
    {"sk_filestream_is_valid", sk_filestream_is_valid}, // SkiaSharp
    {"sk_filestream_new", sk_filestream_new}, // SkiaSharp
    {"sk_filewstream_destroy", sk_filewstream_destroy}, // SkiaSharp
    {"sk_filewstream_is_valid", sk_filewstream_is_valid}, // SkiaSharp
    {"sk_filewstream_new", sk_filewstream_new}, // SkiaSharp
    {"sk_font_break_text", sk_font_break_text}, // SkiaSharp
    {"sk_font_delete", sk_font_delete}, // SkiaSharp
    {"sk_font_get_edging", sk_font_get_edging}, // SkiaSharp
    {"sk_font_get_hinting", sk_font_get_hinting}, // SkiaSharp
    {"sk_font_get_metrics", sk_font_get_metrics}, // SkiaSharp
    {"sk_font_get_path", sk_font_get_path}, // SkiaSharp
    {"sk_font_get_paths", sk_font_get_paths}, // SkiaSharp
    {"sk_font_get_pos", sk_font_get_pos}, // SkiaSharp
    {"sk_font_get_scale_x", sk_font_get_scale_x}, // SkiaSharp
    {"sk_font_get_size", sk_font_get_size}, // SkiaSharp
    {"sk_font_get_skew_x", sk_font_get_skew_x}, // SkiaSharp
    {"sk_font_get_typeface", sk_font_get_typeface}, // SkiaSharp
    {"sk_font_get_widths_bounds", sk_font_get_widths_bounds}, // SkiaSharp
    {"sk_font_get_xpos", sk_font_get_xpos}, // SkiaSharp
    {"sk_font_is_baseline_snap", sk_font_is_baseline_snap}, // SkiaSharp
    {"sk_font_is_embedded_bitmaps", sk_font_is_embedded_bitmaps}, // SkiaSharp
    {"sk_font_is_embolden", sk_font_is_embolden}, // SkiaSharp
    {"sk_font_is_force_auto_hinting", sk_font_is_force_auto_hinting}, // SkiaSharp
    {"sk_font_is_linear_metrics", sk_font_is_linear_metrics}, // SkiaSharp
    {"sk_font_is_subpixel", sk_font_is_subpixel}, // SkiaSharp
    {"sk_font_measure_text", sk_font_measure_text}, // SkiaSharp
    {"sk_font_measure_text_no_return", sk_font_measure_text_no_return}, // SkiaSharp
    {"sk_font_new", sk_font_new}, // SkiaSharp
    {"sk_font_new_with_values", sk_font_new_with_values}, // SkiaSharp
    {"sk_font_set_baseline_snap", sk_font_set_baseline_snap}, // SkiaSharp
    {"sk_font_set_edging", sk_font_set_edging}, // SkiaSharp
    {"sk_font_set_embedded_bitmaps", sk_font_set_embedded_bitmaps}, // SkiaSharp
    {"sk_font_set_embolden", sk_font_set_embolden}, // SkiaSharp
    {"sk_font_set_force_auto_hinting", sk_font_set_force_auto_hinting}, // SkiaSharp
    {"sk_font_set_hinting", sk_font_set_hinting}, // SkiaSharp
    {"sk_font_set_linear_metrics", sk_font_set_linear_metrics}, // SkiaSharp
    {"sk_font_set_scale_x", sk_font_set_scale_x}, // SkiaSharp
    {"sk_font_set_size", sk_font_set_size}, // SkiaSharp
    {"sk_font_set_skew_x", sk_font_set_skew_x}, // SkiaSharp
    {"sk_font_set_subpixel", sk_font_set_subpixel}, // SkiaSharp
    {"sk_font_set_typeface", sk_font_set_typeface}, // SkiaSharp
    {"sk_font_text_to_glyphs", sk_font_text_to_glyphs}, // SkiaSharp
    {"sk_font_unichar_to_glyph", sk_font_unichar_to_glyph}, // SkiaSharp
    {"sk_font_unichars_to_glyphs", sk_font_unichars_to_glyphs}, // SkiaSharp
    {"sk_fontmgr_count_families", sk_fontmgr_count_families}, // SkiaSharp
    {"sk_fontmgr_create_default", sk_fontmgr_create_default}, // SkiaSharp
    {"sk_fontmgr_create_from_data", sk_fontmgr_create_from_data}, // SkiaSharp
    {"sk_fontmgr_create_from_file", sk_fontmgr_create_from_file}, // SkiaSharp
    {"sk_fontmgr_create_from_stream", sk_fontmgr_create_from_stream}, // SkiaSharp
    {"sk_fontmgr_create_styleset", sk_fontmgr_create_styleset}, // SkiaSharp
    {"sk_fontmgr_get_family_name", sk_fontmgr_get_family_name}, // SkiaSharp
    {"sk_fontmgr_match_family", sk_fontmgr_match_family}, // SkiaSharp
    {"sk_fontmgr_match_family_style", sk_fontmgr_match_family_style}, // SkiaSharp
    {"sk_fontmgr_match_family_style_character", sk_fontmgr_match_family_style_character}, // SkiaSharp
    {"sk_fontmgr_ref_default", sk_fontmgr_ref_default}, // SkiaSharp
    {"sk_fontmgr_unref", sk_fontmgr_unref}, // SkiaSharp
    {"sk_fontstyle_delete", sk_fontstyle_delete}, // SkiaSharp
    {"sk_fontstyle_get_slant", sk_fontstyle_get_slant}, // SkiaSharp
    {"sk_fontstyle_get_weight", sk_fontstyle_get_weight}, // SkiaSharp
    {"sk_fontstyle_get_width", sk_fontstyle_get_width}, // SkiaSharp
    {"sk_fontstyle_new", sk_fontstyle_new}, // SkiaSharp
    {"sk_fontstyleset_create_empty", sk_fontstyleset_create_empty}, // SkiaSharp
    {"sk_fontstyleset_create_typeface", sk_fontstyleset_create_typeface}, // SkiaSharp
    {"sk_fontstyleset_get_count", sk_fontstyleset_get_count}, // SkiaSharp
    {"sk_fontstyleset_get_style", sk_fontstyleset_get_style}, // SkiaSharp
    {"sk_fontstyleset_match_style", sk_fontstyleset_match_style}, // SkiaSharp
    {"sk_fontstyleset_unref", sk_fontstyleset_unref}, // SkiaSharp
    {"sk_get_recording_context", sk_get_recording_context}, // SkiaSharp
    {"sk_get_surface", sk_get_surface}, // SkiaSharp
    {"sk_graphics_dump_memory_statistics", sk_graphics_dump_memory_statistics}, // SkiaSharp
    {"sk_graphics_get_font_cache_count_limit", sk_graphics_get_font_cache_count_limit}, // SkiaSharp
    {"sk_graphics_get_font_cache_count_used", sk_graphics_get_font_cache_count_used}, // SkiaSharp
    {"sk_graphics_get_font_cache_limit", sk_graphics_get_font_cache_limit}, // SkiaSharp
    {"sk_graphics_get_font_cache_used", sk_graphics_get_font_cache_used}, // SkiaSharp
    {"sk_graphics_get_resource_cache_single_allocation_byte_limit", sk_graphics_get_resource_cache_single_allocation_byte_limit}, // SkiaSharp
    {"sk_graphics_get_resource_cache_total_byte_limit", sk_graphics_get_resource_cache_total_byte_limit}, // SkiaSharp
    {"sk_graphics_get_resource_cache_total_bytes_used", sk_graphics_get_resource_cache_total_bytes_used}, // SkiaSharp
    {"sk_graphics_init", sk_graphics_init}, // SkiaSharp
    {"sk_graphics_purge_all_caches", sk_graphics_purge_all_caches}, // SkiaSharp
    {"sk_graphics_purge_font_cache", sk_graphics_purge_font_cache}, // SkiaSharp
    {"sk_graphics_purge_resource_cache", sk_graphics_purge_resource_cache}, // SkiaSharp
    {"sk_graphics_set_font_cache_count_limit", sk_graphics_set_font_cache_count_limit}, // SkiaSharp
    {"sk_graphics_set_font_cache_limit", sk_graphics_set_font_cache_limit}, // SkiaSharp
    {"sk_graphics_set_resource_cache_single_allocation_byte_limit", sk_graphics_set_resource_cache_single_allocation_byte_limit}, // SkiaSharp
    {"sk_graphics_set_resource_cache_total_byte_limit", sk_graphics_set_resource_cache_total_byte_limit}, // SkiaSharp
    {"sk_image_get_alpha_type", sk_image_get_alpha_type}, // SkiaSharp
    {"sk_image_get_color_type", sk_image_get_color_type}, // SkiaSharp
    {"sk_image_get_colorspace", sk_image_get_colorspace}, // SkiaSharp
    {"sk_image_get_height", sk_image_get_height}, // SkiaSharp
    {"sk_image_get_unique_id", sk_image_get_unique_id}, // SkiaSharp
    {"sk_image_get_width", sk_image_get_width}, // SkiaSharp
    {"sk_image_is_alpha_only", sk_image_is_alpha_only}, // SkiaSharp
    {"sk_image_is_lazy_generated", sk_image_is_lazy_generated}, // SkiaSharp
    {"sk_image_is_texture_backed", sk_image_is_texture_backed}, // SkiaSharp
    {"sk_image_is_valid", sk_image_is_valid}, // SkiaSharp
    {"sk_image_make_non_texture_image", sk_image_make_non_texture_image}, // SkiaSharp
    {"sk_image_make_raster_image", sk_image_make_raster_image}, // SkiaSharp
    {"sk_image_make_raw_shader", sk_image_make_raw_shader}, // SkiaSharp
    {"sk_image_make_shader", sk_image_make_shader}, // SkiaSharp
    {"sk_image_make_subset", sk_image_make_subset}, // SkiaSharp
    {"sk_image_make_subset_raster", sk_image_make_subset_raster}, // SkiaSharp
    {"sk_image_make_texture_image", sk_image_make_texture_image}, // SkiaSharp
    {"sk_image_make_with_filter", sk_image_make_with_filter}, // SkiaSharp
    {"sk_image_make_with_filter_raster", sk_image_make_with_filter_raster}, // SkiaSharp
    {"sk_image_new_from_adopted_texture", sk_image_new_from_adopted_texture}, // SkiaSharp
    {"sk_image_new_from_bitmap", sk_image_new_from_bitmap}, // SkiaSharp
    {"sk_image_new_from_encoded", sk_image_new_from_encoded}, // SkiaSharp
    {"sk_image_new_from_picture", sk_image_new_from_picture}, // SkiaSharp
    {"sk_image_new_from_texture", sk_image_new_from_texture}, // SkiaSharp
    {"sk_image_new_raster", sk_image_new_raster}, // SkiaSharp
    {"sk_image_new_raster_copy", sk_image_new_raster_copy}, // SkiaSharp
    {"sk_image_new_raster_copy_with_pixmap", sk_image_new_raster_copy_with_pixmap}, // SkiaSharp
    {"sk_image_new_raster_data", sk_image_new_raster_data}, // SkiaSharp
    {"sk_image_peek_pixels", sk_image_peek_pixels}, // SkiaSharp
    {"sk_image_read_pixels", sk_image_read_pixels}, // SkiaSharp
    {"sk_image_read_pixels_into_pixmap", sk_image_read_pixels_into_pixmap}, // SkiaSharp
    {"sk_image_ref", sk_image_ref}, // SkiaSharp
    {"sk_image_ref_encoded", sk_image_ref_encoded}, // SkiaSharp
    {"sk_image_scale_pixels", sk_image_scale_pixels}, // SkiaSharp
    {"sk_image_unref", sk_image_unref}, // SkiaSharp
    {"sk_imagefilter_new_arithmetic", sk_imagefilter_new_arithmetic}, // SkiaSharp
    {"sk_imagefilter_new_blend", sk_imagefilter_new_blend}, // SkiaSharp
    {"sk_imagefilter_new_blender", sk_imagefilter_new_blender}, // SkiaSharp
    {"sk_imagefilter_new_blur", sk_imagefilter_new_blur}, // SkiaSharp
    {"sk_imagefilter_new_color_filter", sk_imagefilter_new_color_filter}, // SkiaSharp
    {"sk_imagefilter_new_compose", sk_imagefilter_new_compose}, // SkiaSharp
    {"sk_imagefilter_new_dilate", sk_imagefilter_new_dilate}, // SkiaSharp
    {"sk_imagefilter_new_displacement_map_effect", sk_imagefilter_new_displacement_map_effect}, // SkiaSharp
    {"sk_imagefilter_new_distant_lit_diffuse", sk_imagefilter_new_distant_lit_diffuse}, // SkiaSharp
    {"sk_imagefilter_new_distant_lit_specular", sk_imagefilter_new_distant_lit_specular}, // SkiaSharp
    {"sk_imagefilter_new_drop_shadow", sk_imagefilter_new_drop_shadow}, // SkiaSharp
    {"sk_imagefilter_new_drop_shadow_only", sk_imagefilter_new_drop_shadow_only}, // SkiaSharp
    {"sk_imagefilter_new_erode", sk_imagefilter_new_erode}, // SkiaSharp
    {"sk_imagefilter_new_image", sk_imagefilter_new_image}, // SkiaSharp
    {"sk_imagefilter_new_image_simple", sk_imagefilter_new_image_simple}, // SkiaSharp
    {"sk_imagefilter_new_magnifier", sk_imagefilter_new_magnifier}, // SkiaSharp
    {"sk_imagefilter_new_matrix_convolution", sk_imagefilter_new_matrix_convolution}, // SkiaSharp
    {"sk_imagefilter_new_matrix_transform", sk_imagefilter_new_matrix_transform}, // SkiaSharp
    {"sk_imagefilter_new_merge", sk_imagefilter_new_merge}, // SkiaSharp
    {"sk_imagefilter_new_merge_simple", sk_imagefilter_new_merge_simple}, // SkiaSharp
    {"sk_imagefilter_new_offset", sk_imagefilter_new_offset}, // SkiaSharp
    {"sk_imagefilter_new_picture", sk_imagefilter_new_picture}, // SkiaSharp
    {"sk_imagefilter_new_picture_with_rect", sk_imagefilter_new_picture_with_rect}, // SkiaSharp
    {"sk_imagefilter_new_point_lit_diffuse", sk_imagefilter_new_point_lit_diffuse}, // SkiaSharp
    {"sk_imagefilter_new_point_lit_specular", sk_imagefilter_new_point_lit_specular}, // SkiaSharp
    {"sk_imagefilter_new_shader", sk_imagefilter_new_shader}, // SkiaSharp
    {"sk_imagefilter_new_spot_lit_diffuse", sk_imagefilter_new_spot_lit_diffuse}, // SkiaSharp
    {"sk_imagefilter_new_spot_lit_specular", sk_imagefilter_new_spot_lit_specular}, // SkiaSharp
    {"sk_imagefilter_new_tile", sk_imagefilter_new_tile}, // SkiaSharp
    {"sk_imagefilter_unref", sk_imagefilter_unref}, // SkiaSharp
    {"sk_jpegencoder_encode", sk_jpegencoder_encode}, // SkiaSharp
    {"sk_linker_keep_alive", sk_linker_keep_alive}, // SkiaSharp
    {"sk_manageddrawable_new", sk_manageddrawable_new}, // SkiaSharp
    {"sk_manageddrawable_set_procs", sk_manageddrawable_set_procs}, // SkiaSharp
    {"sk_manageddrawable_unref", sk_manageddrawable_unref}, // SkiaSharp
    {"sk_managedstream_destroy", sk_managedstream_destroy}, // SkiaSharp
    {"sk_managedstream_new", sk_managedstream_new}, // SkiaSharp
    {"sk_managedstream_set_procs", sk_managedstream_set_procs}, // SkiaSharp
    {"sk_managedtracememorydump_delete", sk_managedtracememorydump_delete}, // SkiaSharp
    {"sk_managedtracememorydump_new", sk_managedtracememorydump_new}, // SkiaSharp
    {"sk_managedtracememorydump_set_procs", sk_managedtracememorydump_set_procs}, // SkiaSharp
    {"sk_managedwstream_destroy", sk_managedwstream_destroy}, // SkiaSharp
    {"sk_managedwstream_new", sk_managedwstream_new}, // SkiaSharp
    {"sk_managedwstream_set_procs", sk_managedwstream_set_procs}, // SkiaSharp
    {"sk_maskfilter_new_blur", sk_maskfilter_new_blur}, // SkiaSharp
    {"sk_maskfilter_new_blur_with_flags", sk_maskfilter_new_blur_with_flags}, // SkiaSharp
    {"sk_maskfilter_new_clip", sk_maskfilter_new_clip}, // SkiaSharp
    {"sk_maskfilter_new_gamma", sk_maskfilter_new_gamma}, // SkiaSharp
    {"sk_maskfilter_new_shader", sk_maskfilter_new_shader}, // SkiaSharp
    {"sk_maskfilter_new_table", sk_maskfilter_new_table}, // SkiaSharp
    {"sk_maskfilter_ref", sk_maskfilter_ref}, // SkiaSharp
    {"sk_maskfilter_unref", sk_maskfilter_unref}, // SkiaSharp
    {"sk_matrix_concat", sk_matrix_concat}, // SkiaSharp
    {"sk_matrix_map_points", sk_matrix_map_points}, // SkiaSharp
    {"sk_matrix_map_radius", sk_matrix_map_radius}, // SkiaSharp
    {"sk_matrix_map_rect", sk_matrix_map_rect}, // SkiaSharp
    {"sk_matrix_map_vector", sk_matrix_map_vector}, // SkiaSharp
    {"sk_matrix_map_vectors", sk_matrix_map_vectors}, // SkiaSharp
    {"sk_matrix_map_xy", sk_matrix_map_xy}, // SkiaSharp
    {"sk_matrix_post_concat", sk_matrix_post_concat}, // SkiaSharp
    {"sk_matrix_pre_concat", sk_matrix_pre_concat}, // SkiaSharp
    {"sk_matrix_try_invert", sk_matrix_try_invert}, // SkiaSharp
    {"sk_memorystream_destroy", sk_memorystream_destroy}, // SkiaSharp
    {"sk_memorystream_new", sk_memorystream_new}, // SkiaSharp
    {"sk_memorystream_new_with_data", sk_memorystream_new_with_data}, // SkiaSharp
    {"sk_memorystream_new_with_length", sk_memorystream_new_with_length}, // SkiaSharp
    {"sk_memorystream_new_with_skdata", sk_memorystream_new_with_skdata}, // SkiaSharp
    {"sk_memorystream_set_memory", sk_memorystream_set_memory}, // SkiaSharp
    {"sk_nodraw_canvas_destroy", sk_nodraw_canvas_destroy}, // SkiaSharp
    {"sk_nodraw_canvas_new", sk_nodraw_canvas_new}, // SkiaSharp
    {"sk_nvrefcnt_get_ref_count", sk_nvrefcnt_get_ref_count}, // SkiaSharp
    {"sk_nvrefcnt_safe_ref", sk_nvrefcnt_safe_ref}, // SkiaSharp
    {"sk_nvrefcnt_safe_unref", sk_nvrefcnt_safe_unref}, // SkiaSharp
    {"sk_nvrefcnt_unique", sk_nvrefcnt_unique}, // SkiaSharp
    {"sk_nway_canvas_add_canvas", sk_nway_canvas_add_canvas}, // SkiaSharp
    {"sk_nway_canvas_destroy", sk_nway_canvas_destroy}, // SkiaSharp
    {"sk_nway_canvas_new", sk_nway_canvas_new}, // SkiaSharp
    {"sk_nway_canvas_remove_all", sk_nway_canvas_remove_all}, // SkiaSharp
    {"sk_nway_canvas_remove_canvas", sk_nway_canvas_remove_canvas}, // SkiaSharp
    {"sk_opbuilder_add", sk_opbuilder_add}, // SkiaSharp
    {"sk_opbuilder_destroy", sk_opbuilder_destroy}, // SkiaSharp
    {"sk_opbuilder_new", sk_opbuilder_new}, // SkiaSharp
    {"sk_opbuilder_resolve", sk_opbuilder_resolve}, // SkiaSharp
    {"sk_overdraw_canvas_destroy", sk_overdraw_canvas_destroy}, // SkiaSharp
    {"sk_overdraw_canvas_new", sk_overdraw_canvas_new}, // SkiaSharp
    {"sk_paint_clone", sk_paint_clone}, // SkiaSharp
    {"sk_paint_delete", sk_paint_delete}, // SkiaSharp
    {"sk_paint_get_blender", sk_paint_get_blender}, // SkiaSharp
    {"sk_paint_get_blendmode", sk_paint_get_blendmode}, // SkiaSharp
    {"sk_paint_get_color", sk_paint_get_color}, // SkiaSharp
    {"sk_paint_get_color4f", sk_paint_get_color4f}, // SkiaSharp
    {"sk_paint_get_colorfilter", sk_paint_get_colorfilter}, // SkiaSharp
    {"sk_paint_get_fill_path", sk_paint_get_fill_path}, // SkiaSharp
    {"sk_paint_get_imagefilter", sk_paint_get_imagefilter}, // SkiaSharp
    {"sk_paint_get_maskfilter", sk_paint_get_maskfilter}, // SkiaSharp
    {"sk_paint_get_path_effect", sk_paint_get_path_effect}, // SkiaSharp
    {"sk_paint_get_shader", sk_paint_get_shader}, // SkiaSharp
    {"sk_paint_get_stroke_cap", sk_paint_get_stroke_cap}, // SkiaSharp
    {"sk_paint_get_stroke_join", sk_paint_get_stroke_join}, // SkiaSharp
    {"sk_paint_get_stroke_miter", sk_paint_get_stroke_miter}, // SkiaSharp
    {"sk_paint_get_stroke_width", sk_paint_get_stroke_width}, // SkiaSharp
    {"sk_paint_get_style", sk_paint_get_style}, // SkiaSharp
    {"sk_paint_is_antialias", sk_paint_is_antialias}, // SkiaSharp
    {"sk_paint_is_dither", sk_paint_is_dither}, // SkiaSharp
    {"sk_paint_new", sk_paint_new}, // SkiaSharp
    {"sk_paint_reset", sk_paint_reset}, // SkiaSharp
    {"sk_paint_set_antialias", sk_paint_set_antialias}, // SkiaSharp
    {"sk_paint_set_blender", sk_paint_set_blender}, // SkiaSharp
    {"sk_paint_set_blendmode", sk_paint_set_blendmode}, // SkiaSharp
    {"sk_paint_set_color", sk_paint_set_color}, // SkiaSharp
    {"sk_paint_set_color4f", sk_paint_set_color4f}, // SkiaSharp
    {"sk_paint_set_colorfilter", sk_paint_set_colorfilter}, // SkiaSharp
    {"sk_paint_set_dither", sk_paint_set_dither}, // SkiaSharp
    {"sk_paint_set_imagefilter", sk_paint_set_imagefilter}, // SkiaSharp
    {"sk_paint_set_maskfilter", sk_paint_set_maskfilter}, // SkiaSharp
    {"sk_paint_set_path_effect", sk_paint_set_path_effect}, // SkiaSharp
    {"sk_paint_set_shader", sk_paint_set_shader}, // SkiaSharp
    {"sk_paint_set_stroke_cap", sk_paint_set_stroke_cap}, // SkiaSharp
    {"sk_paint_set_stroke_join", sk_paint_set_stroke_join}, // SkiaSharp
    {"sk_paint_set_stroke_miter", sk_paint_set_stroke_miter}, // SkiaSharp
    {"sk_paint_set_stroke_width", sk_paint_set_stroke_width}, // SkiaSharp
    {"sk_paint_set_style", sk_paint_set_style}, // SkiaSharp
    {"sk_path_add_arc", sk_path_add_arc}, // SkiaSharp
    {"sk_path_add_circle", sk_path_add_circle}, // SkiaSharp
    {"sk_path_add_oval", sk_path_add_oval}, // SkiaSharp
    {"sk_path_add_path", sk_path_add_path}, // SkiaSharp
    {"sk_path_add_path_matrix", sk_path_add_path_matrix}, // SkiaSharp
    {"sk_path_add_path_offset", sk_path_add_path_offset}, // SkiaSharp
    {"sk_path_add_path_reverse", sk_path_add_path_reverse}, // SkiaSharp
    {"sk_path_add_poly", sk_path_add_poly}, // SkiaSharp
    {"sk_path_add_rect", sk_path_add_rect}, // SkiaSharp
    {"sk_path_add_rect_start", sk_path_add_rect_start}, // SkiaSharp
    {"sk_path_add_rounded_rect", sk_path_add_rounded_rect}, // SkiaSharp
    {"sk_path_add_rrect", sk_path_add_rrect}, // SkiaSharp
    {"sk_path_add_rrect_start", sk_path_add_rrect_start}, // SkiaSharp
    {"sk_path_arc_to", sk_path_arc_to}, // SkiaSharp
    {"sk_path_arc_to_with_oval", sk_path_arc_to_with_oval}, // SkiaSharp
    {"sk_path_arc_to_with_points", sk_path_arc_to_with_points}, // SkiaSharp
    {"sk_path_clone", sk_path_clone}, // SkiaSharp
    {"sk_path_close", sk_path_close}, // SkiaSharp
    {"sk_path_compute_tight_bounds", sk_path_compute_tight_bounds}, // SkiaSharp
    {"sk_path_conic_to", sk_path_conic_to}, // SkiaSharp
    {"sk_path_contains", sk_path_contains}, // SkiaSharp
    {"sk_path_convert_conic_to_quads", sk_path_convert_conic_to_quads}, // SkiaSharp
    {"sk_path_count_points", sk_path_count_points}, // SkiaSharp
    {"sk_path_count_verbs", sk_path_count_verbs}, // SkiaSharp
    {"sk_path_create_iter", sk_path_create_iter}, // SkiaSharp
    {"sk_path_create_rawiter", sk_path_create_rawiter}, // SkiaSharp
    {"sk_path_cubic_to", sk_path_cubic_to}, // SkiaSharp
    {"sk_path_delete", sk_path_delete}, // SkiaSharp
    {"sk_path_effect_create_1d_path", sk_path_effect_create_1d_path}, // SkiaSharp
    {"sk_path_effect_create_2d_line", sk_path_effect_create_2d_line}, // SkiaSharp
    {"sk_path_effect_create_2d_path", sk_path_effect_create_2d_path}, // SkiaSharp
    {"sk_path_effect_create_compose", sk_path_effect_create_compose}, // SkiaSharp
    {"sk_path_effect_create_corner", sk_path_effect_create_corner}, // SkiaSharp
    {"sk_path_effect_create_dash", sk_path_effect_create_dash}, // SkiaSharp
    {"sk_path_effect_create_discrete", sk_path_effect_create_discrete}, // SkiaSharp
    {"sk_path_effect_create_sum", sk_path_effect_create_sum}, // SkiaSharp
    {"sk_path_effect_create_trim", sk_path_effect_create_trim}, // SkiaSharp
    {"sk_path_effect_unref", sk_path_effect_unref}, // SkiaSharp
    {"sk_path_get_bounds", sk_path_get_bounds}, // SkiaSharp
    {"sk_path_get_filltype", sk_path_get_filltype}, // SkiaSharp
    {"sk_path_get_last_point", sk_path_get_last_point}, // SkiaSharp
    {"sk_path_get_point", sk_path_get_point}, // SkiaSharp
    {"sk_path_get_points", sk_path_get_points}, // SkiaSharp
    {"sk_path_get_segment_masks", sk_path_get_segment_masks}, // SkiaSharp
    {"sk_path_is_convex", sk_path_is_convex}, // SkiaSharp
    {"sk_path_is_line", sk_path_is_line}, // SkiaSharp
    {"sk_path_is_oval", sk_path_is_oval}, // SkiaSharp
    {"sk_path_is_rect", sk_path_is_rect}, // SkiaSharp
    {"sk_path_is_rrect", sk_path_is_rrect}, // SkiaSharp
    {"sk_path_iter_conic_weight", sk_path_iter_conic_weight}, // SkiaSharp
    {"sk_path_iter_destroy", sk_path_iter_destroy}, // SkiaSharp
    {"sk_path_iter_is_close_line", sk_path_iter_is_close_line}, // SkiaSharp
    {"sk_path_iter_is_closed_contour", sk_path_iter_is_closed_contour}, // SkiaSharp
    {"sk_path_iter_next", sk_path_iter_next}, // SkiaSharp
    {"sk_path_line_to", sk_path_line_to}, // SkiaSharp
    {"sk_path_move_to", sk_path_move_to}, // SkiaSharp
    {"sk_path_new", sk_path_new}, // SkiaSharp
    {"sk_path_parse_svg_string", sk_path_parse_svg_string}, // SkiaSharp
    {"sk_path_quad_to", sk_path_quad_to}, // SkiaSharp
    {"sk_path_rarc_to", sk_path_rarc_to}, // SkiaSharp
    {"sk_path_rawiter_conic_weight", sk_path_rawiter_conic_weight}, // SkiaSharp
    {"sk_path_rawiter_destroy", sk_path_rawiter_destroy}, // SkiaSharp
    {"sk_path_rawiter_next", sk_path_rawiter_next}, // SkiaSharp
    {"sk_path_rawiter_peek", sk_path_rawiter_peek}, // SkiaSharp
    {"sk_path_rconic_to", sk_path_rconic_to}, // SkiaSharp
    {"sk_path_rcubic_to", sk_path_rcubic_to}, // SkiaSharp
    {"sk_path_reset", sk_path_reset}, // SkiaSharp
    {"sk_path_rewind", sk_path_rewind}, // SkiaSharp
    {"sk_path_rline_to", sk_path_rline_to}, // SkiaSharp
    {"sk_path_rmove_to", sk_path_rmove_to}, // SkiaSharp
    {"sk_path_rquad_to", sk_path_rquad_to}, // SkiaSharp
    {"sk_path_set_filltype", sk_path_set_filltype}, // SkiaSharp
    {"sk_path_to_svg_string", sk_path_to_svg_string}, // SkiaSharp
    {"sk_path_transform", sk_path_transform}, // SkiaSharp
    {"sk_path_transform_to_dest", sk_path_transform_to_dest}, // SkiaSharp
    {"sk_pathmeasure_destroy", sk_pathmeasure_destroy}, // SkiaSharp
    {"sk_pathmeasure_get_length", sk_pathmeasure_get_length}, // SkiaSharp
    {"sk_pathmeasure_get_matrix", sk_pathmeasure_get_matrix}, // SkiaSharp
    {"sk_pathmeasure_get_pos_tan", sk_pathmeasure_get_pos_tan}, // SkiaSharp
    {"sk_pathmeasure_get_segment", sk_pathmeasure_get_segment}, // SkiaSharp
    {"sk_pathmeasure_is_closed", sk_pathmeasure_is_closed}, // SkiaSharp
    {"sk_pathmeasure_new", sk_pathmeasure_new}, // SkiaSharp
    {"sk_pathmeasure_new_with_path", sk_pathmeasure_new_with_path}, // SkiaSharp
    {"sk_pathmeasure_next_contour", sk_pathmeasure_next_contour}, // SkiaSharp
    {"sk_pathmeasure_set_path", sk_pathmeasure_set_path}, // SkiaSharp
    {"sk_pathop_as_winding", sk_pathop_as_winding}, // SkiaSharp
    {"sk_pathop_op", sk_pathop_op}, // SkiaSharp
    {"sk_pathop_simplify", sk_pathop_simplify}, // SkiaSharp
    {"sk_pathop_tight_bounds", sk_pathop_tight_bounds}, // SkiaSharp
    {"sk_picture_approximate_bytes_used", sk_picture_approximate_bytes_used}, // SkiaSharp
    {"sk_picture_approximate_op_count", sk_picture_approximate_op_count}, // SkiaSharp
    {"sk_picture_deserialize_from_data", sk_picture_deserialize_from_data}, // SkiaSharp
    {"sk_picture_deserialize_from_memory", sk_picture_deserialize_from_memory}, // SkiaSharp
    {"sk_picture_deserialize_from_stream", sk_picture_deserialize_from_stream}, // SkiaSharp
    {"sk_picture_get_cull_rect", sk_picture_get_cull_rect}, // SkiaSharp
    {"sk_picture_get_recording_canvas", sk_picture_get_recording_canvas}, // SkiaSharp
    {"sk_picture_get_unique_id", sk_picture_get_unique_id}, // SkiaSharp
    {"sk_picture_make_shader", sk_picture_make_shader}, // SkiaSharp
    {"sk_picture_playback", sk_picture_playback}, // SkiaSharp
    {"sk_picture_recorder_begin_recording", sk_picture_recorder_begin_recording}, // SkiaSharp
    {"sk_picture_recorder_begin_recording_with_bbh_factory", sk_picture_recorder_begin_recording_with_bbh_factory}, // SkiaSharp
    {"sk_picture_recorder_delete", sk_picture_recorder_delete}, // SkiaSharp
    {"sk_picture_recorder_end_recording", sk_picture_recorder_end_recording}, // SkiaSharp, Uno.UI.Composition
    {"sk_picture_recorder_end_recording_as_drawable", sk_picture_recorder_end_recording_as_drawable}, // SkiaSharp
    {"sk_picture_recorder_new", sk_picture_recorder_new}, // SkiaSharp
    {"sk_picture_ref", sk_picture_ref}, // SkiaSharp
    {"sk_picture_serialize_to_data", sk_picture_serialize_to_data}, // SkiaSharp
    {"sk_picture_serialize_to_stream", sk_picture_serialize_to_stream}, // SkiaSharp
    {"sk_picture_unref", sk_picture_unref}, // SkiaSharp
    {"sk_pixmap_compute_is_opaque", sk_pixmap_compute_is_opaque}, // SkiaSharp
    {"sk_pixmap_destructor", sk_pixmap_destructor}, // SkiaSharp
    {"sk_pixmap_erase_color", sk_pixmap_erase_color}, // SkiaSharp
    {"sk_pixmap_erase_color4f", sk_pixmap_erase_color4f}, // SkiaSharp
    {"sk_pixmap_extract_subset", sk_pixmap_extract_subset}, // SkiaSharp
    {"sk_pixmap_get_colorspace", sk_pixmap_get_colorspace}, // SkiaSharp
    {"sk_pixmap_get_info", sk_pixmap_get_info}, // SkiaSharp
    {"sk_pixmap_get_pixel_alphaf", sk_pixmap_get_pixel_alphaf}, // SkiaSharp
    {"sk_pixmap_get_pixel_color", sk_pixmap_get_pixel_color}, // SkiaSharp
    {"sk_pixmap_get_pixel_color4f", sk_pixmap_get_pixel_color4f}, // SkiaSharp
    {"sk_pixmap_get_row_bytes", sk_pixmap_get_row_bytes}, // SkiaSharp
    {"sk_pixmap_get_writable_addr", sk_pixmap_get_writable_addr}, // SkiaSharp
    {"sk_pixmap_get_writeable_addr_with_xy", sk_pixmap_get_writeable_addr_with_xy}, // SkiaSharp
    {"sk_pixmap_new", sk_pixmap_new}, // SkiaSharp
    {"sk_pixmap_new_with_params", sk_pixmap_new_with_params}, // SkiaSharp
    {"sk_pixmap_read_pixels", sk_pixmap_read_pixels}, // SkiaSharp
    {"sk_pixmap_reset", sk_pixmap_reset}, // SkiaSharp
    {"sk_pixmap_reset_with_params", sk_pixmap_reset_with_params}, // SkiaSharp
    {"sk_pixmap_scale_pixels", sk_pixmap_scale_pixels}, // SkiaSharp
    {"sk_pixmap_set_colorspace", sk_pixmap_set_colorspace}, // SkiaSharp
    {"sk_pngencoder_encode", sk_pngencoder_encode}, // SkiaSharp
    {"sk_refcnt_get_ref_count", sk_refcnt_get_ref_count}, // SkiaSharp
    {"sk_refcnt_safe_ref", sk_refcnt_safe_ref}, // SkiaSharp
    {"sk_refcnt_safe_unref", sk_refcnt_safe_unref}, // SkiaSharp, Uno.UI.Composition
    {"sk_refcnt_unique", sk_refcnt_unique}, // SkiaSharp
    {"sk_region_cliperator_delete", sk_region_cliperator_delete}, // SkiaSharp
    {"sk_region_cliperator_done", sk_region_cliperator_done}, // SkiaSharp
    {"sk_region_cliperator_new", sk_region_cliperator_new}, // SkiaSharp
    {"sk_region_cliperator_next", sk_region_cliperator_next}, // SkiaSharp
    {"sk_region_cliperator_rect", sk_region_cliperator_rect}, // SkiaSharp
    {"sk_region_contains", sk_region_contains}, // SkiaSharp
    {"sk_region_contains_point", sk_region_contains_point}, // SkiaSharp
    {"sk_region_contains_rect", sk_region_contains_rect}, // SkiaSharp
    {"sk_region_delete", sk_region_delete}, // SkiaSharp
    {"sk_region_get_boundary_path", sk_region_get_boundary_path}, // SkiaSharp
    {"sk_region_get_bounds", sk_region_get_bounds}, // SkiaSharp
    {"sk_region_intersects", sk_region_intersects}, // SkiaSharp
    {"sk_region_intersects_rect", sk_region_intersects_rect}, // SkiaSharp
    {"sk_region_is_complex", sk_region_is_complex}, // SkiaSharp
    {"sk_region_is_empty", sk_region_is_empty}, // SkiaSharp
    {"sk_region_is_rect", sk_region_is_rect}, // SkiaSharp
    {"sk_region_iterator_delete", sk_region_iterator_delete}, // SkiaSharp
    {"sk_region_iterator_done", sk_region_iterator_done}, // SkiaSharp
    {"sk_region_iterator_new", sk_region_iterator_new}, // SkiaSharp
    {"sk_region_iterator_next", sk_region_iterator_next}, // SkiaSharp
    {"sk_region_iterator_rect", sk_region_iterator_rect}, // SkiaSharp
    {"sk_region_iterator_rewind", sk_region_iterator_rewind}, // SkiaSharp
    {"sk_region_new", sk_region_new}, // SkiaSharp
    {"sk_region_op", sk_region_op}, // SkiaSharp
    {"sk_region_op_rect", sk_region_op_rect}, // SkiaSharp
    {"sk_region_quick_contains", sk_region_quick_contains}, // SkiaSharp
    {"sk_region_quick_reject", sk_region_quick_reject}, // SkiaSharp
    {"sk_region_quick_reject_rect", sk_region_quick_reject_rect}, // SkiaSharp
    {"sk_region_set_empty", sk_region_set_empty}, // SkiaSharp
    {"sk_region_set_path", sk_region_set_path}, // SkiaSharp
    {"sk_region_set_rect", sk_region_set_rect}, // SkiaSharp
    {"sk_region_set_rects", sk_region_set_rects}, // SkiaSharp
    {"sk_region_set_region", sk_region_set_region}, // SkiaSharp
    {"sk_region_spanerator_delete", sk_region_spanerator_delete}, // SkiaSharp
    {"sk_region_spanerator_new", sk_region_spanerator_new}, // SkiaSharp
    {"sk_region_spanerator_next", sk_region_spanerator_next}, // SkiaSharp
    {"sk_region_translate", sk_region_translate}, // SkiaSharp
    {"sk_rrect_contains", sk_rrect_contains}, // SkiaSharp
    {"sk_rrect_delete", sk_rrect_delete}, // SkiaSharp
    {"sk_rrect_get_height", sk_rrect_get_height}, // SkiaSharp
    {"sk_rrect_get_radii", sk_rrect_get_radii}, // SkiaSharp
    {"sk_rrect_get_rect", sk_rrect_get_rect}, // SkiaSharp
    {"sk_rrect_get_type", sk_rrect_get_type}, // SkiaSharp
    {"sk_rrect_get_width", sk_rrect_get_width}, // SkiaSharp
    {"sk_rrect_inset", sk_rrect_inset}, // SkiaSharp
    {"sk_rrect_is_valid", sk_rrect_is_valid}, // SkiaSharp
    {"sk_rrect_new", sk_rrect_new}, // SkiaSharp
    {"sk_rrect_new_copy", sk_rrect_new_copy}, // SkiaSharp
    {"sk_rrect_offset", sk_rrect_offset}, // SkiaSharp
    {"sk_rrect_outset", sk_rrect_outset}, // SkiaSharp
    {"sk_rrect_set_empty", sk_rrect_set_empty}, // SkiaSharp
    {"sk_rrect_set_nine_patch", sk_rrect_set_nine_patch}, // SkiaSharp
    {"sk_rrect_set_oval", sk_rrect_set_oval}, // SkiaSharp
    {"sk_rrect_set_rect", sk_rrect_set_rect}, // SkiaSharp
    {"sk_rrect_set_rect_radii", sk_rrect_set_rect_radii}, // SkiaSharp, Uno.UI.Composition
    {"sk_rrect_set_rect_xy", sk_rrect_set_rect_xy}, // SkiaSharp
    {"sk_rrect_transform", sk_rrect_transform}, // SkiaSharp
    {"sk_rtree_factory_delete", sk_rtree_factory_delete}, // SkiaSharp
    {"sk_rtree_factory_new", sk_rtree_factory_new}, // SkiaSharp
    {"sk_runtimeeffect_get_child_from_index", sk_runtimeeffect_get_child_from_index}, // SkiaSharp
    {"sk_runtimeeffect_get_child_from_name", sk_runtimeeffect_get_child_from_name}, // SkiaSharp
    {"sk_runtimeeffect_get_child_name", sk_runtimeeffect_get_child_name}, // SkiaSharp
    {"sk_runtimeeffect_get_children_size", sk_runtimeeffect_get_children_size}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_byte_size", sk_runtimeeffect_get_uniform_byte_size}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_from_index", sk_runtimeeffect_get_uniform_from_index}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_from_name", sk_runtimeeffect_get_uniform_from_name}, // SkiaSharp
    {"sk_runtimeeffect_get_uniform_name", sk_runtimeeffect_get_uniform_name}, // SkiaSharp
    {"sk_runtimeeffect_get_uniforms_size", sk_runtimeeffect_get_uniforms_size}, // SkiaSharp
    {"sk_runtimeeffect_make_blender", sk_runtimeeffect_make_blender}, // SkiaSharp
    {"sk_runtimeeffect_make_color_filter", sk_runtimeeffect_make_color_filter}, // SkiaSharp
    {"sk_runtimeeffect_make_for_blender", sk_runtimeeffect_make_for_blender}, // SkiaSharp
    {"sk_runtimeeffect_make_for_color_filter", sk_runtimeeffect_make_for_color_filter}, // SkiaSharp
    {"sk_runtimeeffect_make_for_shader", sk_runtimeeffect_make_for_shader}, // SkiaSharp
    {"sk_runtimeeffect_make_shader", sk_runtimeeffect_make_shader}, // SkiaSharp
    {"sk_runtimeeffect_unref", sk_runtimeeffect_unref}, // SkiaSharp
    {"sk_shader_new_blend", sk_shader_new_blend}, // SkiaSharp
    {"sk_shader_new_blender", sk_shader_new_blender}, // SkiaSharp
    {"sk_shader_new_color", sk_shader_new_color}, // SkiaSharp
    {"sk_shader_new_color4f", sk_shader_new_color4f}, // SkiaSharp
    {"sk_shader_new_empty", sk_shader_new_empty}, // SkiaSharp
    {"sk_shader_new_linear_gradient", sk_shader_new_linear_gradient}, // SkiaSharp
    {"sk_shader_new_linear_gradient_color4f", sk_shader_new_linear_gradient_color4f}, // SkiaSharp
    {"sk_shader_new_perlin_noise_fractal_noise", sk_shader_new_perlin_noise_fractal_noise}, // SkiaSharp
    {"sk_shader_new_perlin_noise_turbulence", sk_shader_new_perlin_noise_turbulence}, // SkiaSharp
    {"sk_shader_new_radial_gradient", sk_shader_new_radial_gradient}, // SkiaSharp
    {"sk_shader_new_radial_gradient_color4f", sk_shader_new_radial_gradient_color4f}, // SkiaSharp
    {"sk_shader_new_sweep_gradient", sk_shader_new_sweep_gradient}, // SkiaSharp
    {"sk_shader_new_sweep_gradient_color4f", sk_shader_new_sweep_gradient_color4f}, // SkiaSharp
    {"sk_shader_new_two_point_conical_gradient", sk_shader_new_two_point_conical_gradient}, // SkiaSharp
    {"sk_shader_new_two_point_conical_gradient_color4f", sk_shader_new_two_point_conical_gradient_color4f}, // SkiaSharp
    {"sk_shader_ref", sk_shader_ref}, // SkiaSharp
    {"sk_shader_unref", sk_shader_unref}, // SkiaSharp
    {"sk_shader_with_color_filter", sk_shader_with_color_filter}, // SkiaSharp
    {"sk_shader_with_local_matrix", sk_shader_with_local_matrix}, // SkiaSharp
    {"sk_stream_asset_destroy", sk_stream_asset_destroy}, // SkiaSharp
    {"sk_stream_destroy", sk_stream_destroy}, // SkiaSharp
    {"sk_stream_duplicate", sk_stream_duplicate}, // SkiaSharp
    {"sk_stream_fork", sk_stream_fork}, // SkiaSharp
    {"sk_stream_get_length", sk_stream_get_length}, // SkiaSharp
    {"sk_stream_get_memory_base", sk_stream_get_memory_base}, // SkiaSharp
    {"sk_stream_get_position", sk_stream_get_position}, // SkiaSharp
    {"sk_stream_has_length", sk_stream_has_length}, // SkiaSharp
    {"sk_stream_has_position", sk_stream_has_position}, // SkiaSharp
    {"sk_stream_is_at_end", sk_stream_is_at_end}, // SkiaSharp
    {"sk_stream_move", sk_stream_move}, // SkiaSharp
    {"sk_stream_peek", sk_stream_peek}, // SkiaSharp
    {"sk_stream_read", sk_stream_read}, // SkiaSharp
    {"sk_stream_read_bool", sk_stream_read_bool}, // SkiaSharp
    {"sk_stream_read_s16", sk_stream_read_s16}, // SkiaSharp
    {"sk_stream_read_s32", sk_stream_read_s32}, // SkiaSharp
    {"sk_stream_read_s8", sk_stream_read_s8}, // SkiaSharp
    {"sk_stream_read_u16", sk_stream_read_u16}, // SkiaSharp
    {"sk_stream_read_u32", sk_stream_read_u32}, // SkiaSharp
    {"sk_stream_read_u8", sk_stream_read_u8}, // SkiaSharp
    {"sk_stream_rewind", sk_stream_rewind}, // SkiaSharp
    {"sk_stream_seek", sk_stream_seek}, // SkiaSharp
    {"sk_stream_skip", sk_stream_skip}, // SkiaSharp
    {"sk_string_destructor", sk_string_destructor}, // SkiaSharp
    {"sk_string_get_c_str", sk_string_get_c_str}, // SkiaSharp
    {"sk_string_get_size", sk_string_get_size}, // SkiaSharp
    {"sk_string_new_empty", sk_string_new_empty}, // SkiaSharp
    {"sk_string_new_with_copy", sk_string_new_with_copy}, // SkiaSharp
    {"sk_surface_draw", sk_surface_draw}, // SkiaSharp
    {"sk_surface_get_canvas", sk_surface_get_canvas}, // SkiaSharp
    {"sk_surface_get_props", sk_surface_get_props}, // SkiaSharp
    {"sk_surface_get_recording_context", sk_surface_get_recording_context}, // SkiaSharp
    {"sk_surface_new_backend_render_target", sk_surface_new_backend_render_target}, // SkiaSharp
    {"sk_surface_new_backend_texture", sk_surface_new_backend_texture}, // SkiaSharp
    {"sk_surface_new_image_snapshot", sk_surface_new_image_snapshot}, // SkiaSharp
    {"sk_surface_new_image_snapshot_with_crop", sk_surface_new_image_snapshot_with_crop}, // SkiaSharp
    {"sk_surface_new_metal_layer", sk_surface_new_metal_layer}, // SkiaSharp
    {"sk_surface_new_metal_view", sk_surface_new_metal_view}, // SkiaSharp
    {"sk_surface_new_null", sk_surface_new_null}, // SkiaSharp
    {"sk_surface_new_raster", sk_surface_new_raster}, // SkiaSharp
    {"sk_surface_new_raster_direct", sk_surface_new_raster_direct}, // SkiaSharp
    {"sk_surface_new_render_target", sk_surface_new_render_target}, // SkiaSharp
    {"sk_surface_peek_pixels", sk_surface_peek_pixels}, // SkiaSharp
    {"sk_surface_read_pixels", sk_surface_read_pixels}, // SkiaSharp
    {"sk_surface_unref", sk_surface_unref}, // SkiaSharp
    {"sk_surfaceprops_delete", sk_surfaceprops_delete}, // SkiaSharp
    {"sk_surfaceprops_get_flags", sk_surfaceprops_get_flags}, // SkiaSharp
    {"sk_surfaceprops_get_pixel_geometry", sk_surfaceprops_get_pixel_geometry}, // SkiaSharp
    {"sk_surfaceprops_new", sk_surfaceprops_new}, // SkiaSharp
    {"sk_svgcanvas_create_with_stream", sk_svgcanvas_create_with_stream}, // SkiaSharp
    {"sk_swizzle_swap_rb", sk_swizzle_swap_rb}, // SkiaSharp
    {"sk_text_utils_get_path", sk_text_utils_get_path}, // SkiaSharp
    {"sk_text_utils_get_pos_path", sk_text_utils_get_pos_path}, // SkiaSharp
    {"sk_textblob_builder_alloc_run", sk_textblob_builder_alloc_run}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_pos", sk_textblob_builder_alloc_run_pos}, // SkiaSharp, Uno.UI.Composition
    {"sk_textblob_builder_alloc_run_pos_h", sk_textblob_builder_alloc_run_pos_h}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_rsxform", sk_textblob_builder_alloc_run_rsxform}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text", sk_textblob_builder_alloc_run_text}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text_pos", sk_textblob_builder_alloc_run_text_pos}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text_pos_h", sk_textblob_builder_alloc_run_text_pos_h}, // SkiaSharp
    {"sk_textblob_builder_alloc_run_text_rsxform", sk_textblob_builder_alloc_run_text_rsxform}, // SkiaSharp
    {"sk_textblob_builder_delete", sk_textblob_builder_delete}, // SkiaSharp
    {"sk_textblob_builder_make", sk_textblob_builder_make}, // SkiaSharp, Uno.UI.Composition
    {"sk_textblob_builder_new", sk_textblob_builder_new}, // SkiaSharp
    {"sk_textblob_get_bounds", sk_textblob_get_bounds}, // SkiaSharp
    {"sk_textblob_get_intercepts", sk_textblob_get_intercepts}, // SkiaSharp
    {"sk_textblob_get_unique_id", sk_textblob_get_unique_id}, // SkiaSharp
    {"sk_textblob_ref", sk_textblob_ref}, // SkiaSharp
    {"sk_textblob_unref", sk_textblob_unref}, // SkiaSharp, Uno.UI.Composition
    {"sk_typeface_copy_table_data", sk_typeface_copy_table_data}, // SkiaSharp
    {"sk_typeface_count_glyphs", sk_typeface_count_glyphs}, // SkiaSharp
    {"sk_typeface_count_tables", sk_typeface_count_tables}, // SkiaSharp
    {"sk_typeface_create_default", sk_typeface_create_default}, // SkiaSharp
    {"sk_typeface_create_from_data", sk_typeface_create_from_data}, // SkiaSharp
    {"sk_typeface_create_from_file", sk_typeface_create_from_file}, // SkiaSharp
    {"sk_typeface_create_from_name", sk_typeface_create_from_name}, // SkiaSharp
    {"sk_typeface_create_from_stream", sk_typeface_create_from_stream}, // SkiaSharp
    {"sk_typeface_get_family_name", sk_typeface_get_family_name}, // SkiaSharp
    {"sk_typeface_get_font_slant", sk_typeface_get_font_slant}, // SkiaSharp
    {"sk_typeface_get_font_weight", sk_typeface_get_font_weight}, // SkiaSharp
    {"sk_typeface_get_font_width", sk_typeface_get_font_width}, // SkiaSharp
    {"sk_typeface_get_fontstyle", sk_typeface_get_fontstyle}, // SkiaSharp
    {"sk_typeface_get_kerning_pair_adjustments", sk_typeface_get_kerning_pair_adjustments}, // SkiaSharp
    {"sk_typeface_get_post_script_name", sk_typeface_get_post_script_name}, // SkiaSharp
    {"sk_typeface_get_table_data", sk_typeface_get_table_data}, // SkiaSharp
    {"sk_typeface_get_table_size", sk_typeface_get_table_size}, // SkiaSharp
    {"sk_typeface_get_table_tags", sk_typeface_get_table_tags}, // SkiaSharp
    {"sk_typeface_get_units_per_em", sk_typeface_get_units_per_em}, // SkiaSharp
    {"sk_typeface_is_fixed_pitch", sk_typeface_is_fixed_pitch}, // SkiaSharp
    {"sk_typeface_open_stream", sk_typeface_open_stream}, // SkiaSharp
    {"sk_typeface_ref_default", sk_typeface_ref_default}, // SkiaSharp
    {"sk_typeface_unichar_to_glyph", sk_typeface_unichar_to_glyph}, // SkiaSharp
    {"sk_typeface_unichars_to_glyphs", sk_typeface_unichars_to_glyphs}, // SkiaSharp
    {"sk_typeface_unref", sk_typeface_unref}, // SkiaSharp
    {"sk_version_get_increment", sk_version_get_increment}, // SkiaSharp
    {"sk_version_get_milestone", sk_version_get_milestone}, // SkiaSharp
    {"sk_version_get_string", sk_version_get_string}, // SkiaSharp
    {"sk_vertices_make_copy", sk_vertices_make_copy}, // SkiaSharp
    {"sk_vertices_ref", sk_vertices_ref}, // SkiaSharp
    {"sk_vertices_unref", sk_vertices_unref}, // SkiaSharp
    {"sk_webpencoder_encode", sk_webpencoder_encode}, // SkiaSharp
    {"sk_wstream_bytes_written", sk_wstream_bytes_written}, // SkiaSharp
    {"sk_wstream_flush", sk_wstream_flush}, // SkiaSharp
    {"sk_wstream_get_size_of_packed_uint", sk_wstream_get_size_of_packed_uint}, // SkiaSharp
    {"sk_wstream_newline", sk_wstream_newline}, // SkiaSharp
    {"sk_wstream_write", sk_wstream_write}, // SkiaSharp
    {"sk_wstream_write_16", sk_wstream_write_16}, // SkiaSharp
    {"sk_wstream_write_32", sk_wstream_write_32}, // SkiaSharp
    {"sk_wstream_write_8", sk_wstream_write_8}, // SkiaSharp
    {"sk_wstream_write_bigdec_as_text", sk_wstream_write_bigdec_as_text}, // SkiaSharp
    {"sk_wstream_write_bool", sk_wstream_write_bool}, // SkiaSharp
    {"sk_wstream_write_dec_as_text", sk_wstream_write_dec_as_text}, // SkiaSharp
    {"sk_wstream_write_hex_as_text", sk_wstream_write_hex_as_text}, // SkiaSharp
    {"sk_wstream_write_packed_uint", sk_wstream_write_packed_uint}, // SkiaSharp
    {"sk_wstream_write_scalar", sk_wstream_write_scalar}, // SkiaSharp
    {"sk_wstream_write_scalar_as_text", sk_wstream_write_scalar_as_text}, // SkiaSharp
    {"sk_wstream_write_stream", sk_wstream_write_stream}, // SkiaSharp
    {"sk_wstream_write_text", sk_wstream_write_text}, // SkiaSharp
    {"skottie_animation_builder_delete", skottie_animation_builder_delete}, // SkiaSharp.Skottie
    {"skottie_animation_builder_get_stats", skottie_animation_builder_get_stats}, // SkiaSharp.Skottie
    {"skottie_animation_builder_make_from_data", skottie_animation_builder_make_from_data}, // SkiaSharp.Skottie
    {"skottie_animation_builder_make_from_file", skottie_animation_builder_make_from_file}, // SkiaSharp.Skottie
    {"skottie_animation_builder_make_from_stream", skottie_animation_builder_make_from_stream}, // SkiaSharp.Skottie
    {"skottie_animation_builder_make_from_string", skottie_animation_builder_make_from_string}, // SkiaSharp.Skottie
    {"skottie_animation_builder_new", skottie_animation_builder_new}, // SkiaSharp.Skottie
    {"skottie_animation_builder_set_font_manager", skottie_animation_builder_set_font_manager}, // SkiaSharp.Skottie
    {"skottie_animation_builder_set_resource_provider", skottie_animation_builder_set_resource_provider}, // SkiaSharp.Skottie
    {"skottie_animation_delete", skottie_animation_delete}, // SkiaSharp.Skottie
    {"skottie_animation_get_duration", skottie_animation_get_duration}, // SkiaSharp.Skottie
    {"skottie_animation_get_fps", skottie_animation_get_fps}, // SkiaSharp.Skottie
    {"skottie_animation_get_in_point", skottie_animation_get_in_point}, // SkiaSharp.Skottie
    {"skottie_animation_get_out_point", skottie_animation_get_out_point}, // SkiaSharp.Skottie
    {"skottie_animation_get_size", skottie_animation_get_size}, // SkiaSharp.Skottie
    {"skottie_animation_get_version", skottie_animation_get_version}, // SkiaSharp.Skottie
    {"skottie_animation_make_from_data", skottie_animation_make_from_data}, // SkiaSharp.Skottie
    {"skottie_animation_make_from_file", skottie_animation_make_from_file}, // SkiaSharp.Skottie
    {"skottie_animation_make_from_stream", skottie_animation_make_from_stream}, // SkiaSharp.Skottie
    {"skottie_animation_make_from_string", skottie_animation_make_from_string}, // SkiaSharp.Skottie
    {"skottie_animation_ref", skottie_animation_ref}, // SkiaSharp.Skottie
    {"skottie_animation_render", skottie_animation_render}, // SkiaSharp.Skottie
    {"skottie_animation_render_with_flags", skottie_animation_render_with_flags}, // SkiaSharp.Skottie
    {"skottie_animation_seek", skottie_animation_seek}, // SkiaSharp.Skottie
    {"skottie_animation_seek_frame", skottie_animation_seek_frame}, // SkiaSharp.Skottie
    {"skottie_animation_seek_frame_time", skottie_animation_seek_frame_time}, // SkiaSharp.Skottie
    {"skottie_animation_unref", skottie_animation_unref}, // SkiaSharp.Skottie
    {"skresources_caching_resource_provider_proxy_make", skresources_caching_resource_provider_proxy_make}, // SkiaSharp.Resources
    {"skresources_data_uri_resource_provider_proxy_make", skresources_data_uri_resource_provider_proxy_make}, // SkiaSharp.Resources
    {"skresources_file_resource_provider_make", skresources_file_resource_provider_make}, // SkiaSharp.Resources
    {"skresources_resource_provider_delete", skresources_resource_provider_delete}, // SkiaSharp.Resources
    {"skresources_resource_provider_load", skresources_resource_provider_load}, // SkiaSharp.Resources
    {"skresources_resource_provider_load_audio_asset", skresources_resource_provider_load_audio_asset}, // SkiaSharp.Resources
    {"skresources_resource_provider_load_image_asset", skresources_resource_provider_load_image_asset}, // SkiaSharp.Resources
    {"skresources_resource_provider_load_typeface", skresources_resource_provider_load_typeface}, // SkiaSharp.Resources
    {"skresources_resource_provider_ref", skresources_resource_provider_ref}, // SkiaSharp.Resources
    {"skresources_resource_provider_unref", skresources_resource_provider_unref}, // SkiaSharp.Resources
    {"sksg_invalidation_controller_begin", sksg_invalidation_controller_begin}, // SkiaSharp.SceneGraph
    {"sksg_invalidation_controller_delete", sksg_invalidation_controller_delete}, // SkiaSharp.SceneGraph
    {"sksg_invalidation_controller_end", sksg_invalidation_controller_end}, // SkiaSharp.SceneGraph
    {"sksg_invalidation_controller_get_bounds", sksg_invalidation_controller_get_bounds}, // SkiaSharp.SceneGraph
    {"sksg_invalidation_controller_inval", sksg_invalidation_controller_inval}, // SkiaSharp.SceneGraph
    {"sksg_invalidation_controller_new", sksg_invalidation_controller_new}, // SkiaSharp.SceneGraph
    {"sksg_invalidation_controller_reset", sksg_invalidation_controller_reset}, // SkiaSharp.SceneGraph
    {NULL, NULL}
};

static PinvokeImport libSystem_Globalization_Native_imports [] = {
    {"GlobalizationNative_ChangeCase", GlobalizationNative_ChangeCase}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseInvariant", GlobalizationNative_ChangeCaseInvariant}, // System.Private.CoreLib
    {"GlobalizationNative_ChangeCaseTurkish", GlobalizationNative_ChangeCaseTurkish}, // System.Private.CoreLib
    {"GlobalizationNative_CloseSortHandle", GlobalizationNative_CloseSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_CompareString", GlobalizationNative_CompareString}, // System.Private.CoreLib
    {"GlobalizationNative_EndsWith", GlobalizationNative_EndsWith}, // System.Private.CoreLib
    {"GlobalizationNative_EnumCalendarInfo", GlobalizationNative_EnumCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendarInfo", GlobalizationNative_GetCalendarInfo}, // System.Private.CoreLib
    {"GlobalizationNative_GetCalendars", GlobalizationNative_GetCalendars}, // System.Private.CoreLib
    {"GlobalizationNative_GetDefaultLocaleName", GlobalizationNative_GetDefaultLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetICUVersion", GlobalizationNative_GetICUVersion}, // System.Private.CoreLib
    {"GlobalizationNative_GetJapaneseEraStartDate", GlobalizationNative_GetJapaneseEraStartDate}, // System.Private.CoreLib
    {"GlobalizationNative_GetLatestJapaneseEra", GlobalizationNative_GetLatestJapaneseEra}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoGroupingSizes", GlobalizationNative_GetLocaleInfoGroupingSizes}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoInt", GlobalizationNative_GetLocaleInfoInt}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleInfoString", GlobalizationNative_GetLocaleInfoString}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleName", GlobalizationNative_GetLocaleName}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocaleTimeFormat", GlobalizationNative_GetLocaleTimeFormat}, // System.Private.CoreLib
    {"GlobalizationNative_GetLocales", GlobalizationNative_GetLocales}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortHandle", GlobalizationNative_GetSortHandle}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortKey", GlobalizationNative_GetSortKey}, // System.Private.CoreLib
    {"GlobalizationNative_GetSortVersion", GlobalizationNative_GetSortVersion}, // System.Private.CoreLib
    {"GlobalizationNative_IndexOf", GlobalizationNative_IndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_InitICUFunctions", GlobalizationNative_InitICUFunctions}, // System.Private.CoreLib
    {"GlobalizationNative_InitOrdinalCasingPage", GlobalizationNative_InitOrdinalCasingPage}, // System.Private.CoreLib
    {"GlobalizationNative_IsNormalized", GlobalizationNative_IsNormalized}, // System.Private.CoreLib
    {"GlobalizationNative_IsPredefinedLocale", GlobalizationNative_IsPredefinedLocale}, // System.Private.CoreLib
    {"GlobalizationNative_LastIndexOf", GlobalizationNative_LastIndexOf}, // System.Private.CoreLib
    {"GlobalizationNative_LoadICU", GlobalizationNative_LoadICU}, // System.Private.CoreLib
    {"GlobalizationNative_NormalizeString", GlobalizationNative_NormalizeString}, // System.Private.CoreLib
    {"GlobalizationNative_StartsWith", GlobalizationNative_StartsWith}, // System.Private.CoreLib
    {"GlobalizationNative_ToAscii", GlobalizationNative_ToAscii}, // System.Private.CoreLib
    {"GlobalizationNative_ToUnicode", GlobalizationNative_ToUnicode}, // System.Private.CoreLib
    {NULL, NULL}
};

static PinvokeImport libSystem_IO_Compression_Native_imports [] = {
    {"CompressionNative_Crc32", CompressionNative_Crc32}, // System.IO.Compression
    {"CompressionNative_Deflate", CompressionNative_Deflate}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_DeflateEnd", CompressionNative_DeflateEnd}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_DeflateInit2_", CompressionNative_DeflateInit2_}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_Inflate", CompressionNative_Inflate}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_InflateEnd", CompressionNative_InflateEnd}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_InflateInit2_", CompressionNative_InflateInit2_}, // System.IO.Compression, System.Net.WebSockets
    {"CompressionNative_InflateReset2_", CompressionNative_InflateReset2_}, // System.IO.Compression
    {NULL, NULL}
};

static PinvokeImport libSystem_Native_imports [] = {
    {"SystemNative_Access", SystemNative_Access}, // System.Private.CoreLib
    {"SystemNative_AlignedAlloc", SystemNative_AlignedAlloc}, // System.Private.CoreLib
    {"SystemNative_AlignedFree", SystemNative_AlignedFree}, // System.Private.CoreLib
    {"SystemNative_AlignedRealloc", SystemNative_AlignedRealloc}, // System.Private.CoreLib
    {"SystemNative_Calloc", SystemNative_Calloc}, // System.Private.CoreLib
    {"SystemNative_CanGetHiddenFlag", SystemNative_CanGetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_ChDir", SystemNative_ChDir}, // System.Private.CoreLib
    {"SystemNative_ChMod", SystemNative_ChMod}, // System.Private.CoreLib
    {"SystemNative_Close", SystemNative_Close}, // System.Private.CoreLib
    {"SystemNative_CloseDir", SystemNative_CloseDir}, // System.Private.CoreLib
    {"SystemNative_ConvertErrorPalToPlatform", SystemNative_ConvertErrorPalToPlatform}, // System.Console, System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
    {"SystemNative_ConvertErrorPlatformToPal", SystemNative_ConvertErrorPlatformToPal}, // System.Console, System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
    {"SystemNative_CopyFile", SystemNative_CopyFile}, // System.Private.CoreLib
    {"SystemNative_Dup", SystemNative_Dup}, // System.Console
    {"SystemNative_FAllocate", SystemNative_FAllocate}, // System.Private.CoreLib
    {"SystemNative_FChMod", SystemNative_FChMod}, // System.Private.CoreLib
    {"SystemNative_FChflags", SystemNative_FChflags}, // System.Private.CoreLib
    {"SystemNative_FLock", SystemNative_FLock}, // System.Private.CoreLib
    {"SystemNative_FStat", SystemNative_FStat}, // System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_FSync", SystemNative_FSync}, // System.Private.CoreLib
    {"SystemNative_FTruncate", SystemNative_FTruncate}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_FUTimens", SystemNative_FUTimens}, // System.Private.CoreLib
    {"SystemNative_FcntlSetFD", SystemNative_FcntlSetFD}, // System.IO.MemoryMappedFiles
    {"SystemNative_Free", SystemNative_Free}, // System.Private.CoreLib
    {"SystemNative_FreeEnviron", SystemNative_FreeEnviron}, // System.Private.CoreLib
    {"SystemNative_GetAddressFamily", SystemNative_GetAddressFamily}, // System.Net.Primitives
    {"SystemNative_GetCpuUtilization", SystemNative_GetCpuUtilization}, // System.Private.CoreLib
    {"SystemNative_GetCryptographicallySecureRandomBytes", SystemNative_GetCryptographicallySecureRandomBytes}, // System.Private.CoreLib, System.Security.Cryptography
    {"SystemNative_GetCwd", SystemNative_GetCwd}, // System.Private.CoreLib
    {"SystemNative_GetDefaultSearchOrderPseudoHandle", SystemNative_GetDefaultSearchOrderPseudoHandle}, // System.Private.CoreLib
    {"SystemNative_GetEnv", SystemNative_GetEnv}, // System.Private.CoreLib
    {"SystemNative_GetEnviron", SystemNative_GetEnviron}, // System.Private.CoreLib
    {"SystemNative_GetErrNo", SystemNative_GetErrNo}, // System.Private.CoreLib
    {"SystemNative_GetFileSystemType", SystemNative_GetFileSystemType}, // System.Private.CoreLib
    {"SystemNative_GetIPv4Address", SystemNative_GetIPv4Address}, // System.Net.Primitives
    {"SystemNative_GetIPv6Address", SystemNative_GetIPv6Address}, // System.Net.Primitives
    {"SystemNative_GetLowResolutionTimestamp", SystemNative_GetLowResolutionTimestamp}, // System.Private.CoreLib
    {"SystemNative_GetNonCryptographicallySecureRandomBytes", SystemNative_GetNonCryptographicallySecureRandomBytes}, // System.Private.CoreLib
    {"SystemNative_GetPort", SystemNative_GetPort}, // System.Net.Primitives
    {"SystemNative_GetSocketAddressSizes", SystemNative_GetSocketAddressSizes}, // System.Net.Primitives
    {"SystemNative_GetSystemTimeAsTicks", SystemNative_GetSystemTimeAsTicks}, // System.Private.CoreLib
    {"SystemNative_GetTimeZoneData", SystemNative_GetTimeZoneData}, // System.Private.CoreLib
    {"SystemNative_GetTimestamp", SystemNative_GetTimestamp}, // System.Private.CoreLib
    {"SystemNative_IsMemfdSupported", SystemNative_IsMemfdSupported}, // System.IO.MemoryMappedFiles
    {"SystemNative_LChflags", SystemNative_LChflags}, // System.Private.CoreLib
    {"SystemNative_LChflagsCanSetHiddenFlag", SystemNative_LChflagsCanSetHiddenFlag}, // System.Private.CoreLib
    {"SystemNative_LSeek", SystemNative_LSeek}, // System.Private.CoreLib
    {"SystemNative_LStat", SystemNative_LStat}, // System.Private.CoreLib
    {"SystemNative_Link", SystemNative_Link}, // System.Private.CoreLib
    {"SystemNative_LockFileRegion", SystemNative_LockFileRegion}, // System.Private.CoreLib
    {"SystemNative_Log", SystemNative_Log}, // System.Private.CoreLib
    {"SystemNative_LogError", SystemNative_LogError}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Acquire", SystemNative_LowLevelMonitor_Acquire}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Create", SystemNative_LowLevelMonitor_Create}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Destroy", SystemNative_LowLevelMonitor_Destroy}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Release", SystemNative_LowLevelMonitor_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Signal_Release", SystemNative_LowLevelMonitor_Signal_Release}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_TimedWait", SystemNative_LowLevelMonitor_TimedWait}, // System.Private.CoreLib
    {"SystemNative_LowLevelMonitor_Wait", SystemNative_LowLevelMonitor_Wait}, // System.Private.CoreLib
    {"SystemNative_MAdvise", SystemNative_MAdvise}, // System.IO.MemoryMappedFiles
    {"SystemNative_MMap", SystemNative_MMap}, // System.IO.MemoryMappedFiles
    {"SystemNative_MSync", SystemNative_MSync}, // System.IO.MemoryMappedFiles
    {"SystemNative_MUnmap", SystemNative_MUnmap}, // System.IO.MemoryMappedFiles
    {"SystemNative_Malloc", SystemNative_Malloc}, // System.Private.CoreLib
    {"SystemNative_MemfdCreate", SystemNative_MemfdCreate}, // System.IO.MemoryMappedFiles
    {"SystemNative_MkDir", SystemNative_MkDir}, // System.Private.CoreLib
    {"SystemNative_MkdTemp", SystemNative_MkdTemp}, // System.Private.CoreLib
    {"SystemNative_MksTemps", SystemNative_MksTemps}, // System.Private.CoreLib
    {"SystemNative_Open", SystemNative_Open}, // System.Private.CoreLib
    {"SystemNative_OpenDir", SystemNative_OpenDir}, // System.Private.CoreLib
    {"SystemNative_PRead", SystemNative_PRead}, // System.Private.CoreLib
    {"SystemNative_PReadV", SystemNative_PReadV}, // System.Private.CoreLib
    {"SystemNative_PWrite", SystemNative_PWrite}, // System.Private.CoreLib
    {"SystemNative_PWriteV", SystemNative_PWriteV}, // System.Private.CoreLib
    {"SystemNative_PosixFAdvise", SystemNative_PosixFAdvise}, // System.Private.CoreLib
    {"SystemNative_Read", SystemNative_Read}, // System.Private.CoreLib
    {"SystemNative_ReadDir", SystemNative_ReadDir}, // System.Private.CoreLib
    {"SystemNative_ReadLink", SystemNative_ReadLink}, // System.Private.CoreLib
    {"SystemNative_Realloc", SystemNative_Realloc}, // System.Private.CoreLib
    {"SystemNative_Rename", SystemNative_Rename}, // System.Private.CoreLib
    {"SystemNative_RmDir", SystemNative_RmDir}, // System.Private.CoreLib
    {"SystemNative_SchedGetCpu", SystemNative_SchedGetCpu}, // System.Private.CoreLib
    {"SystemNative_SetAddressFamily", SystemNative_SetAddressFamily}, // System.Net.Primitives
    {"SystemNative_SetErrNo", SystemNative_SetErrNo}, // System.Private.CoreLib
    {"SystemNative_SetIPv4Address", SystemNative_SetIPv4Address}, // System.Net.Primitives
    {"SystemNative_SetIPv6Address", SystemNative_SetIPv6Address}, // System.Net.Primitives
    {"SystemNative_SetPort", SystemNative_SetPort}, // System.Net.Primitives
    {"SystemNative_ShmOpen", SystemNative_ShmOpen}, // System.IO.MemoryMappedFiles
    {"SystemNative_ShmUnlink", SystemNative_ShmUnlink}, // System.IO.MemoryMappedFiles
    {"SystemNative_Stat", SystemNative_Stat}, // System.IO.Compression.ZipFile, System.Private.CoreLib
    {"SystemNative_StrErrorR", SystemNative_StrErrorR}, // System.Console, System.IO.Compression.ZipFile, System.IO.MemoryMappedFiles, System.Net.Primitives, System.Private.CoreLib
    {"SystemNative_SymLink", SystemNative_SymLink}, // System.Private.CoreLib
    {"SystemNative_SysConf", SystemNative_SysConf}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_SysLog", SystemNative_SysLog}, // System.Private.CoreLib
    {"SystemNative_TryGetUInt32OSThreadId", SystemNative_TryGetUInt32OSThreadId}, // System.Private.CoreLib
    {"SystemNative_UTimensat", SystemNative_UTimensat}, // System.Private.CoreLib
    {"SystemNative_Unlink", SystemNative_Unlink}, // System.IO.MemoryMappedFiles, System.Private.CoreLib
    {"SystemNative_Write", SystemNative_Write}, // System.Console, System.Private.CoreLib
    {NULL, NULL}
};

static PinvokeTable pinvoke_tables[] = {
    {"__Internal", __Internal_imports, 0},
    {"__Native", __Native_imports, 0},
    {"libHarfBuzzSharp", libHarfBuzzSharp_imports, 319},
    {"libSkiaSharp", libSkiaSharp_imports, 922},
    {"libSystem.Globalization.Native", libSystem_Globalization_Native_imports, 33},
    {"libSystem.IO.Compression.Native", libSystem_IO_Compression_Native_imports, 8},
    {"libSystem.Native", libSystem_Native_imports, 98}
};

InterpFtnDesc wasm_native_to_interp_ftndescs[278] = {};

uint32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_CCW_AddRef (void * arg0) {
    typedef void (*InterpEntry_T0) (int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "CCW", "AddRef", 100666592, 1);
    }

    ((InterpEntry_T0)wasm_native_to_interp_ftndescs [0].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [0].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_AddressOfMember (void * arg0, int32_t arg1, int32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T1) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "AddressOfMember", 100664291, 4);
    }

    ((InterpEntry_T1)wasm_native_to_interp_ftndescs [1].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [1].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler () {
    typedef void (*InterpEntry_T2) (int*);

    if (!(InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "ThreadPool", "BackgroundJobHandler", 100680304, 0);
    }

    ((InterpEntry_T2)wasm_native_to_interp_ftndescs [2].func) ((int*)wasm_native_to_interp_ftndescs [2].arg);
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeComp_Bind (void * arg0, void * arg1, uint32_t arg2, uint32_t arg3, void * arg4, void * arg5, void * arg6) {
    typedef void (*InterpEntry_T3) (int*, int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T3)wasm_native_to_interp_ftndescs [3].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeComp", "Bind", 100664706, 7);
    }

    ((InterpEntry_T3)wasm_native_to_interp_ftndescs [3].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)wasm_native_to_interp_ftndescs [3].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_BindToObject (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T4) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T4)wasm_native_to_interp_ftndescs [4].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "BindToObject", 100664551, 5);
    }

    ((InterpEntry_T4)wasm_native_to_interp_ftndescs [4].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [4].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_BindToStorage (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T5) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T5)wasm_native_to_interp_ftndescs [5].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "BindToStorage", 100664554, 5);
    }

    ((InterpEntry_T5)wasm_native_to_interp_ftndescs [5].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [5].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeComp_BindType (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T6) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T6)wasm_native_to_interp_ftndescs [6].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeComp", "BindType", 100664708, 5);
    }

    ((InterpEntry_T6)wasm_native_to_interp_ftndescs [6].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [6].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Diagnostics_Tracing_EventPipeEventProvider_Callback (void * arg0, int32_t arg1, uint32_t arg2, int64_t arg3, int64_t arg4, void * arg5, void * arg6) {
    typedef void (*InterpEntry_T7) (int*, int*, int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T7)wasm_native_to_interp_ftndescs [7].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Diagnostics.Tracing", "EventPipeEventProvider", "Callback", 100700529, 7);
    }

    ((InterpEntry_T7)wasm_native_to_interp_ftndescs [7].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)wasm_native_to_interp_ftndescs [7].arg);
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Clone (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T8) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T8)wasm_native_to_interp_ftndescs [8].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IEnumSTATSTG", "Clone", 100664762, 2);
    }

    ((InterpEntry_T8)wasm_native_to_interp_ftndescs [8].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [8].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Clone (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T9) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T9)wasm_native_to_interp_ftndescs [9].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumFORMATETC", "Clone", 100664446, 2);
    }

    ((InterpEntry_T9)wasm_native_to_interp_ftndescs [9].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [9].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Clone (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T10) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T10)wasm_native_to_interp_ftndescs [10].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumMoniker", "Clone", 100664462, 2);
    }

    ((InterpEntry_T10)wasm_native_to_interp_ftndescs [10].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [10].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Clone (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T11) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T11)wasm_native_to_interp_ftndescs [11].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumSTATDATA", "Clone", 100664479, 2);
    }

    ((InterpEntry_T11)wasm_native_to_interp_ftndescs [11].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [11].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Clone (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T12) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T12)wasm_native_to_interp_ftndescs [12].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumString", "Clone", 100664496, 2);
    }

    ((InterpEntry_T12)wasm_native_to_interp_ftndescs [12].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [12].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Clone (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T13) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T13)wasm_native_to_interp_ftndescs [13].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumUnknown", "Clone", 100664512, 2);
    }

    ((InterpEntry_T13)wasm_native_to_interp_ftndescs [13].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [13].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Clone (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T14) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T14)wasm_native_to_interp_ftndescs [14].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "Clone", 100664695, 2);
    }

    ((InterpEntry_T14)wasm_native_to_interp_ftndescs [14].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [14].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_Commit (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T15) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T15)wasm_native_to_interp_ftndescs [15].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "Commit", 100664790, 2);
    }

    ((InterpEntry_T15)wasm_native_to_interp_ftndescs [15].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [15].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Commit (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T16) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T16)wasm_native_to_interp_ftndescs [16].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "Commit", 100664684, 2);
    }

    ((InterpEntry_T16)wasm_native_to_interp_ftndescs [16].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [16].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_CommonPrefixWith (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T17) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T17)wasm_native_to_interp_ftndescs [17].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "CommonPrefixWith", 100664574, 3);
    }

    ((InterpEntry_T17)wasm_native_to_interp_ftndescs [17].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [17].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_ComposeWith (void * arg0, void * arg1, int32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T18) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T18)wasm_native_to_interp_ftndescs [18].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "ComposeWith", 100664558, 4);
    }

    ((InterpEntry_T18)wasm_native_to_interp_ftndescs [18].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [18].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_CopyTo (void * arg0, uint32_t arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T19) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T19)wasm_native_to_interp_ftndescs [19].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "CopyTo", 100664785, 5);
    }

    ((InterpEntry_T19)wasm_native_to_interp_ftndescs [19].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [19].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_CopyTo (void * arg0, void * arg1, uint64_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T20) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T20)wasm_native_to_interp_ftndescs [20].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "CopyTo", 100664682, 5);
    }

    ((InterpEntry_T20)wasm_native_to_interp_ftndescs [20].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [20].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_CreateInstance (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T21) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T21)wasm_native_to_interp_ftndescs [21].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "CreateInstance", 100664294, 4);
    }

    ((InterpEntry_T21)wasm_native_to_interp_ftndescs [21].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [21].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_CreateStorage (void * arg0, void * arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, void * arg5) {
    typedef void (*InterpEntry_T22) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T22)wasm_native_to_interp_ftndescs [22].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "CreateStorage", 100664779, 6);
    }

    ((InterpEntry_T22)wasm_native_to_interp_ftndescs [22].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [22].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_CreateStream (void * arg0, void * arg1, uint32_t arg2, uint32_t arg3, uint32_t arg4, void * arg5) {
    typedef void (*InterpEntry_T23) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T23)wasm_native_to_interp_ftndescs [23].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "CreateStream", 100664773, 6);
    }

    ((InterpEntry_T23)wasm_native_to_interp_ftndescs [23].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [23].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_DAdvise (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T24) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T24)wasm_native_to_interp_ftndescs [24].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "DAdvise", 100664425, 5);
    }

    ((InterpEntry_T24)wasm_native_to_interp_ftndescs [24].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [24].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_DUnadvise (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T25) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T25)wasm_native_to_interp_ftndescs [25].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "DUnadvise", 100664427, 2);
    }

    ((InterpEntry_T25)wasm_native_to_interp_ftndescs [25].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [25].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_DeleteMemberByDispID (void * arg0, int32_t arg1) {
    typedef void (*InterpEntry_T26) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T26)wasm_native_to_interp_ftndescs [26].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "DeleteMemberByDispID", 100663972, 2);
    }

    ((InterpEntry_T26)wasm_native_to_interp_ftndescs [26].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [26].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_DeleteMemberByName (void * arg0, void * arg1, uint32_t arg2) {
    typedef void (*InterpEntry_T27) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T27)wasm_native_to_interp_ftndescs [27].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "DeleteMemberByName", 100663970, 3);
    }

    ((InterpEntry_T27)wasm_native_to_interp_ftndescs [27].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [27].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_DestroyElement (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T28) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T28)wasm_native_to_interp_ftndescs [28].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "DestroyElement", 100664798, 2);
    }

    ((InterpEntry_T28)wasm_native_to_interp_ftndescs [28].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [28].arg);
    return result;
}

void
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_DestroyProxyImplementation (void * arg0) {
    typedef void (*InterpEntry_T29) (int*, int*);

    if (!(InterpEntry_T29)wasm_native_to_interp_ftndescs [29].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "DestroyProxyImplementation", 100663408, 1);
    }

    ((InterpEntry_T29)wasm_native_to_interp_ftndescs [29].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [29].arg);
}

void
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_DestroyProxyImplementationForMulti (void * arg0) {
    typedef void (*InterpEntry_T30) (int*, int*);

    if (!(InterpEntry_T30)wasm_native_to_interp_ftndescs [30].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "DestroyProxyImplementationForMulti", 100663409, 1);
    }

    ((InterpEntry_T30)wasm_native_to_interp_ftndescs [30].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [30].arg);
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_DragEnter (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T31) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T31)wasm_native_to_interp_ftndescs [31].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropTarget", "DragEnter", 100664017, 5);
    }

    ((InterpEntry_T31)wasm_native_to_interp_ftndescs [31].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [31].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_DragEnter (void * arg0, void * arg1, void * arg2, void * arg3, uint32_t arg4) {
    typedef void (*InterpEntry_T32) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T32)wasm_native_to_interp_ftndescs [32].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDropTargetHelper", "DragEnter", 100663814, 5);
    }

    ((InterpEntry_T32)wasm_native_to_interp_ftndescs [32].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [32].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSourceNotify_DragEnterTarget (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T33) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T33)wasm_native_to_interp_ftndescs [33].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropSourceNotify", "DragEnterTarget", 100664004, 2);
    }

    ((InterpEntry_T33)wasm_native_to_interp_ftndescs [33].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [33].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_DragLeave (void * arg0) {
    typedef void (*InterpEntry_T34) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T34)wasm_native_to_interp_ftndescs [34].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropTarget", "DragLeave", 100664022, 1);
    }

    ((InterpEntry_T34)wasm_native_to_interp_ftndescs [34].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [34].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_DragLeave (void * arg0) {
    typedef void (*InterpEntry_T35) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T35)wasm_native_to_interp_ftndescs [35].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDropTargetHelper", "DragLeave", 100663816, 1);
    }

    ((InterpEntry_T35)wasm_native_to_interp_ftndescs [35].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [35].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSourceNotify_DragLeaveTarget (void * arg0) {
    typedef void (*InterpEntry_T36) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T36)wasm_native_to_interp_ftndescs [36].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropSourceNotify", "DragLeaveTarget", 100664006, 1);
    }

    ((InterpEntry_T36)wasm_native_to_interp_ftndescs [36].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [36].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_DragOver (void * arg0, void * arg1, uint32_t arg2) {
    typedef void (*InterpEntry_T37) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T37)wasm_native_to_interp_ftndescs [37].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDropTargetHelper", "DragOver", 100663819, 3);
    }

    ((InterpEntry_T37)wasm_native_to_interp_ftndescs [37].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [37].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_DragOver (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T38) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T38)wasm_native_to_interp_ftndescs [38].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropTarget", "DragOver", 100664020, 4);
    }

    ((InterpEntry_T38)wasm_native_to_interp_ftndescs [38].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [38].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_Drop (void * arg0, void * arg1, void * arg2, uint32_t arg3) {
    typedef void (*InterpEntry_T39) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T39)wasm_native_to_interp_ftndescs [39].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDropTargetHelper", "Drop", 100663822, 4);
    }

    ((InterpEntry_T39)wasm_native_to_interp_ftndescs [39].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [39].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_Drop (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T40) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T40)wasm_native_to_interp_ftndescs [40].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropTarget", "Drop", 100664025, 5);
    }

    ((InterpEntry_T40)wasm_native_to_interp_ftndescs [40].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [40].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_EndOperation (void * arg0, int32_t arg1, void * arg2, uint32_t arg3) {
    typedef void (*InterpEntry_T41) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T41)wasm_native_to_interp_ftndescs [41].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDataObjectAsyncCapability", "EndOperation", 100663773, 4);
    }

    ((InterpEntry_T41)wasm_native_to_interp_ftndescs [41].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [41].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Enum (void * arg0, int32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T42) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T42)wasm_native_to_interp_ftndescs [42].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "Enum", 100664560, 3);
    }

    ((InterpEntry_T42)wasm_native_to_interp_ftndescs [42].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [42].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Globalization_CalendarData_EnumCalendarInfoCallback (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T43) (int*, int*, int*);

    if (!(InterpEntry_T43)wasm_native_to_interp_ftndescs [43].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Globalization", "CalendarData", "EnumCalendarInfoCallback", 100676774, 2);
    }

    ((InterpEntry_T43)wasm_native_to_interp_ftndescs [43].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [43].arg);
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_EnumChildWindowsNativeCallback (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T44) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T44)wasm_native_to_interp_ftndescs [44].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32", "PInvokeCore", "EnumChildWindowsNativeCallback", 100663331, 2);
    }

    ((InterpEntry_T44)wasm_native_to_interp_ftndescs [44].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [44].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_EnumDAdvise (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T45) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T45)wasm_native_to_interp_ftndescs [45].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "EnumDAdvise", 100664429, 2);
    }

    ((InterpEntry_T45)wasm_native_to_interp_ftndescs [45].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [45].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_EnumDisplayMonitorsNativeCallback (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T46) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T46)wasm_native_to_interp_ftndescs [46].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32", "PInvokeCore", "EnumDisplayMonitorsNativeCallback", 100663333, 4);
    }

    ((InterpEntry_T46)wasm_native_to_interp_ftndescs [46].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [46].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_EnumElements (void * arg0, uint32_t arg1, void * arg2, uint32_t arg3, void * arg4) {
    typedef void (*InterpEntry_T47) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T47)wasm_native_to_interp_ftndescs [47].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "EnumElements", 100664795, 5);
    }

    ((InterpEntry_T47)wasm_native_to_interp_ftndescs [47].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [47].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_EnumFormatEtc (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T48) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T48)wasm_native_to_interp_ftndescs [48].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "EnumFormatEtc", 100664422, 3);
    }

    ((InterpEntry_T48)wasm_native_to_interp_ftndescs [48].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [48].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_EnumObjectParam (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T49) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T49)wasm_native_to_interp_ftndescs [49].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "EnumObjectParam", 100664395, 2);
    }

    ((InterpEntry_T49)wasm_native_to_interp_ftndescs [49].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [49].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_EnumRunning (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T50) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T50)wasm_native_to_interp_ftndescs [50].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IRunningObjectTable", "EnumRunning", 100664641, 2);
    }

    ((InterpEntry_T50)wasm_native_to_interp_ftndescs [50].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [50].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_EnumWindowsNativeCallback (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T51) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T51)wasm_native_to_interp_ftndescs [51].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32", "PInvokeCore", "EnumWindowsNativeCallback", 100663337, 2);
    }

    ((InterpEntry_T51)wasm_native_to_interp_ftndescs [51].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [51].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_FindName (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T52) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T52)wasm_native_to_interp_ftndescs [52].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "FindName", 100664740, 6);
    }

    ((InterpEntry_T52)wasm_native_to_interp_ftndescs [52].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [52].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetFontExtentsProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T53) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T53)wasm_native_to_interp_ftndescs [53].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetFontExtentsProxyImplementation", 100663410, 4);
    }

    ((InterpEntry_T53)wasm_native_to_interp_ftndescs [53].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [53].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphAdvanceProxyImplementation (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T54) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T54)wasm_native_to_interp_ftndescs [54].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphAdvanceProxyImplementation", 100663411, 4);
    }

    ((InterpEntry_T54)wasm_native_to_interp_ftndescs [54].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [54].arg);
    return result;
}

void
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphAdvancesProxyImplementation (void * arg0, void * arg1, uint32_t arg2, void * arg3, uint32_t arg4, void * arg5, uint32_t arg6, void * arg7) {
    typedef void (*InterpEntry_T55) (int*, int*, int*, int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T55)wasm_native_to_interp_ftndescs [55].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphAdvancesProxyImplementation", 100663412, 8);
    }

    ((InterpEntry_T55)wasm_native_to_interp_ftndescs [55].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, (int*)wasm_native_to_interp_ftndescs [55].arg);
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphContourPointProxyImplementation (void * arg0, void * arg1, uint32_t arg2, uint32_t arg3, void * arg4, void * arg5, void * arg6) {
    typedef void (*InterpEntry_T56) (int*, int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T56)wasm_native_to_interp_ftndescs [56].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphContourPointProxyImplementation", 100663413, 7);
    }

    ((InterpEntry_T56)wasm_native_to_interp_ftndescs [56].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)wasm_native_to_interp_ftndescs [56].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphExtentsProxyImplementation (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T57) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T57)wasm_native_to_interp_ftndescs [57].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphExtentsProxyImplementation", 100663414, 5);
    }

    ((InterpEntry_T57)wasm_native_to_interp_ftndescs [57].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [57].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphFromNameProxyImplementation (void * arg0, void * arg1, void * arg2, int32_t arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T58) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T58)wasm_native_to_interp_ftndescs [58].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphFromNameProxyImplementation", 100663415, 6);
    }

    ((InterpEntry_T58)wasm_native_to_interp_ftndescs [58].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [58].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphKerningProxyImplementation (void * arg0, void * arg1, uint32_t arg2, uint32_t arg3, void * arg4) {
    typedef void (*InterpEntry_T59) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T59)wasm_native_to_interp_ftndescs [59].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphKerningProxyImplementation", 100663416, 5);
    }

    ((InterpEntry_T59)wasm_native_to_interp_ftndescs [59].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [59].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphNameProxyImplementation (void * arg0, void * arg1, uint32_t arg2, void * arg3, uint32_t arg4, void * arg5) {
    typedef void (*InterpEntry_T60) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T60)wasm_native_to_interp_ftndescs [60].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphNameProxyImplementation", 100663417, 6);
    }

    ((InterpEntry_T60)wasm_native_to_interp_ftndescs [60].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [60].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphOriginProxyImplementation (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T61) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T61)wasm_native_to_interp_ftndescs [61].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetGlyphOriginProxyImplementation", 100663418, 6);
    }

    ((InterpEntry_T61)wasm_native_to_interp_ftndescs [61].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [61].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetNominalGlyphProxyImplementation (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T62) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T62)wasm_native_to_interp_ftndescs [62].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetNominalGlyphProxyImplementation", 100663419, 5);
    }

    ((InterpEntry_T62)wasm_native_to_interp_ftndescs [62].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [62].arg);
    return result;
}

uint32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetNominalGlyphsProxyImplementation (void * arg0, void * arg1, uint32_t arg2, void * arg3, uint32_t arg4, void * arg5, uint32_t arg6, void * arg7) {
    typedef void (*InterpEntry_T63) (int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T63)wasm_native_to_interp_ftndescs [63].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetNominalGlyphsProxyImplementation", 100663420, 8);
    }

    ((InterpEntry_T63)wasm_native_to_interp_ftndescs [63].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, (int*)wasm_native_to_interp_ftndescs [63].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetVariationGlyphProxyImplementation (void * arg0, void * arg1, uint32_t arg2, uint32_t arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T64) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T64)wasm_native_to_interp_ftndescs [64].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "FontGetVariationGlyphProxyImplementation", 100663421, 6);
    }

    ((InterpEntry_T64)wasm_native_to_interp_ftndescs [64].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [64].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRGlGetProcProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T65) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T65)wasm_native_to_interp_ftndescs [65].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "GRGlGetProcProxyImplementation", 100663504, 2);
    }

    ((InterpEntry_T65)wasm_native_to_interp_ftndescs [65].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [65].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRVkGetProcProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T66) (int*, int*, int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T66)wasm_native_to_interp_ftndescs [66].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "GRVkGetProcProxyImplementation", 100663505, 4);
    }

    ((InterpEntry_T66)wasm_native_to_interp_ftndescs [66].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [66].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_GetAsyncMode (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T67) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T67)wasm_native_to_interp_ftndescs [67].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDataObjectAsyncCapability", "GetAsyncMode", 100663766, 2);
    }

    ((InterpEntry_T67)wasm_native_to_interp_ftndescs [67].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [67].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_GetBindOptions (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T68) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T68)wasm_native_to_interp_ftndescs [68].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "GetBindOptions", 100664387, 2);
    }

    ((InterpEntry_T68)wasm_native_to_interp_ftndescs [68].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [68].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_GetCanonicalFormatEtc (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T69) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T69)wasm_native_to_interp_ftndescs [69].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "GetCanonicalFormatEtc", 100664417, 3);
    }

    ((InterpEntry_T69)wasm_native_to_interp_ftndescs [69].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [69].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetClassID (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T70) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T70)wasm_native_to_interp_ftndescs [70].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "GetClassID", 100664539, 2);
    }

    ((InterpEntry_T70)wasm_native_to_interp_ftndescs [70].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [70].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersist_GetClassID (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T71) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T71)wasm_native_to_interp_ftndescs [71].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IPersist", "GetClassID", 100664596, 2);
    }

    ((InterpEntry_T71)wasm_native_to_interp_ftndescs [71].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [71].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_GetClassID (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T72) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T72)wasm_native_to_interp_ftndescs [72].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IPersistStream", "GetClassID", 100664607, 2);
    }

    ((InterpEntry_T72)wasm_native_to_interp_ftndescs [72].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [72].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetContainingTypeLib (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T73) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T73)wasm_native_to_interp_ftndescs [73].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetContainingTypeLib", 100664299, 3);
    }

    ((InterpEntry_T73)wasm_native_to_interp_ftndescs [73].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [73].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_GetData (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T74) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T74)wasm_native_to_interp_ftndescs [74].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "GetData", 100664408, 3);
    }

    ((InterpEntry_T74)wasm_native_to_interp_ftndescs [74].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [74].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_GetDataHere (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T75) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T75)wasm_native_to_interp_ftndescs [75].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "GetDataHere", 100664411, 3);
    }

    ((InterpEntry_T75)wasm_native_to_interp_ftndescs [75].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [75].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetDispID (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T76) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T76)wasm_native_to_interp_ftndescs [76].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "GetDispID", 100663965, 4);
    }

    ((InterpEntry_T76)wasm_native_to_interp_ftndescs [76].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [76].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetDisplayName (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T77) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T77)wasm_native_to_interp_ftndescs [77].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "GetDisplayName", 100664579, 4);
    }

    ((InterpEntry_T77)wasm_native_to_interp_ftndescs [77].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [77].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetDllEntry (void * arg0, int32_t arg1, int32_t arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T78) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T78)wasm_native_to_interp_ftndescs [78].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetDllEntry", 100664286, 6);
    }

    ((InterpEntry_T78)wasm_native_to_interp_ftndescs [78].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [78].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetDocumentation (void * arg0, int32_t arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T79) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T79)wasm_native_to_interp_ftndescs [79].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetDocumentation", 100664283, 6);
    }

    ((InterpEntry_T79)wasm_native_to_interp_ftndescs [79].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [79].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetDocumentation (void * arg0, int32_t arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T80) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T80)wasm_native_to_interp_ftndescs [80].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "GetDocumentation", 100664734, 6);
    }

    ((InterpEntry_T80)wasm_native_to_interp_ftndescs [80].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [80].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetField (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T81) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T81)wasm_native_to_interp_ftndescs [81].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "GetField", 100664114, 4);
    }

    ((InterpEntry_T81)wasm_native_to_interp_ftndescs [81].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [81].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetFieldNames (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T82) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T82)wasm_native_to_interp_ftndescs [82].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "GetFieldNames", 100664126, 3);
    }

    ((InterpEntry_T82)wasm_native_to_interp_ftndescs [82].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [82].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetFieldNoCopy (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T83) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T83)wasm_native_to_interp_ftndescs [83].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "GetFieldNoCopy", 100664117, 5);
    }

    ((InterpEntry_T83)wasm_native_to_interp_ftndescs [83].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [83].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetFuncDesc (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T84) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T84)wasm_native_to_interp_ftndescs [84].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetFuncDesc", 100664262, 3);
    }

    ((InterpEntry_T84)wasm_native_to_interp_ftndescs [84].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [84].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T85) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T85)wasm_native_to_interp_ftndescs [85].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "GetFunctionPointer", 100663586, 6);
    }

    ((InterpEntry_T85)wasm_native_to_interp_ftndescs [85].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [85].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetGuid (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T86) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T86)wasm_native_to_interp_ftndescs [86].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "GetGuid", 100664104, 2);
    }

    ((InterpEntry_T86)wasm_native_to_interp_ftndescs [86].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [86].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetIDsOfNames (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T87) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T87)wasm_native_to_interp_ftndescs [87].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetIDsOfNames", 100664277, 4);
    }

    ((InterpEntry_T87)wasm_native_to_interp_ftndescs [87].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [87].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_GetIDsOfNames (void * arg0, void * arg1, void * arg2, uint32_t arg3, uint32_t arg4, void * arg5) {
    typedef void (*InterpEntry_T88) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T88)wasm_native_to_interp_ftndescs [88].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDispatch", "GetIDsOfNames", 100664208, 6);
    }

    ((InterpEntry_T88)wasm_native_to_interp_ftndescs [88].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [88].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetImplTypeFlags (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T89) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T89)wasm_native_to_interp_ftndescs [89].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetImplTypeFlags", 100664274, 3);
    }

    ((InterpEntry_T89)wasm_native_to_interp_ftndescs [89].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [89].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IGlobalInterfaceTable_GetInterfaceFromGlobal (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T90) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T90)wasm_native_to_interp_ftndescs [90].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IGlobalInterfaceTable", "GetInterfaceFromGlobal", 100664528, 4);
    }

    ((InterpEntry_T90)wasm_native_to_interp_ftndescs [90].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [90].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetLibAttr (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T91) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T91)wasm_native_to_interp_ftndescs [91].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "GetLibAttr", 100664729, 2);
    }

    ((InterpEntry_T91)wasm_native_to_interp_ftndescs [91].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [91].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetMemberName (void * arg0, int32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T92) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T92)wasm_native_to_interp_ftndescs [92].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "GetMemberName", 100663977, 3);
    }

    ((InterpEntry_T92)wasm_native_to_interp_ftndescs [92].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [92].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetMemberProperties (void * arg0, int32_t arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T93) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T93)wasm_native_to_interp_ftndescs [93].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "GetMemberProperties", 100663975, 4);
    }

    ((InterpEntry_T93)wasm_native_to_interp_ftndescs [93].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [93].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetMops (void * arg0, int32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T94) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T94)wasm_native_to_interp_ftndescs [94].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetMops", 100664296, 3);
    }

    ((InterpEntry_T94)wasm_native_to_interp_ftndescs [94].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [94].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetName (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T95) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T95)wasm_native_to_interp_ftndescs [95].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "GetName", 100664106, 2);
    }

    ((InterpEntry_T95)wasm_native_to_interp_ftndescs [95].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [95].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetNameSpaceParent (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T96) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T96)wasm_native_to_interp_ftndescs [96].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "GetNameSpaceParent", 100663982, 2);
    }

    ((InterpEntry_T96)wasm_native_to_interp_ftndescs [96].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [96].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetNames (void * arg0, int32_t arg1, void * arg2, uint32_t arg3, void * arg4) {
    typedef void (*InterpEntry_T97) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T97)wasm_native_to_interp_ftndescs [97].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetNames", 100664268, 5);
    }

    ((InterpEntry_T97)wasm_native_to_interp_ftndescs [97].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [97].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetNextDispID (void * arg0, uint32_t arg1, int32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T98) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T98)wasm_native_to_interp_ftndescs [98].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "GetNextDispID", 100663980, 4);
    }

    ((InterpEntry_T98)wasm_native_to_interp_ftndescs [98].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [98].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_GetObject (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T99) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T99)wasm_native_to_interp_ftndescs [99].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IRunningObjectTable", "GetObject", 100664633, 3);
    }

    ((InterpEntry_T99)wasm_native_to_interp_ftndescs [99].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [99].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_GetObjectParam (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T100) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T100)wasm_native_to_interp_ftndescs [100].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "GetObjectParam", 100664393, 3);
    }

    ((InterpEntry_T100)wasm_native_to_interp_ftndescs [100].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [100].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetRefTypeInfo (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T101) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T101)wasm_native_to_interp_ftndescs [101].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetRefTypeInfo", 100664288, 3);
    }

    ((InterpEntry_T101)wasm_native_to_interp_ftndescs [101].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [101].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetRefTypeOfImplType (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T102) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T102)wasm_native_to_interp_ftndescs [102].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetRefTypeOfImplType", 100664271, 3);
    }

    ((InterpEntry_T102)wasm_native_to_interp_ftndescs [102].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [102].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_GetRunningObjectTable (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T103) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T103)wasm_native_to_interp_ftndescs [103].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "GetRunningObjectTable", 100664389, 2);
    }

    ((InterpEntry_T103)wasm_native_to_interp_ftndescs [103].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [103].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetSize (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T104) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T104)wasm_native_to_interp_ftndescs [104].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "GetSize", 100664109, 2);
    }

    ((InterpEntry_T104)wasm_native_to_interp_ftndescs [104].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [104].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetSizeMax (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T105) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T105)wasm_native_to_interp_ftndescs [105].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "GetSizeMax", 100664548, 2);
    }

    ((InterpEntry_T105)wasm_native_to_interp_ftndescs [105].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [105].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_GetSizeMax (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T106) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T106)wasm_native_to_interp_ftndescs [106].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IPersistStream", "GetSizeMax", 100664616, 2);
    }

    ((InterpEntry_T106)wasm_native_to_interp_ftndescs [106].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [106].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_GetTimeOfLastChange (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T107) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T107)wasm_native_to_interp_ftndescs [107].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IRunningObjectTable", "GetTimeOfLastChange", 100664639, 3);
    }

    ((InterpEntry_T107)wasm_native_to_interp_ftndescs [107].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [107].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetTimeOfLastChange (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T108) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T108)wasm_native_to_interp_ftndescs [108].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "GetTimeOfLastChange", 100664570, 4);
    }

    ((InterpEntry_T108)wasm_native_to_interp_ftndescs [108].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [108].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetTypeAttr (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T109) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T109)wasm_native_to_interp_ftndescs [109].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetTypeAttr", 100664257, 2);
    }

    ((InterpEntry_T109)wasm_native_to_interp_ftndescs [109].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [109].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetTypeComp (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T110) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T110)wasm_native_to_interp_ftndescs [110].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetTypeComp", 100664259, 2);
    }

    ((InterpEntry_T110)wasm_native_to_interp_ftndescs [110].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [110].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeComp (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T111) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T111)wasm_native_to_interp_ftndescs [111].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "GetTypeComp", 100664731, 2);
    }

    ((InterpEntry_T111)wasm_native_to_interp_ftndescs [111].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [111].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetTypeInfo (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T112) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T112)wasm_native_to_interp_ftndescs [112].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "GetTypeInfo", 100664111, 2);
    }

    ((InterpEntry_T112)wasm_native_to_interp_ftndescs [112].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [112].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfo (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T113) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T113)wasm_native_to_interp_ftndescs [113].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "GetTypeInfo", 100664720, 3);
    }

    ((InterpEntry_T113)wasm_native_to_interp_ftndescs [113].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [113].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_GetTypeInfo (void * arg0, uint32_t arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T114) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T114)wasm_native_to_interp_ftndescs [114].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDispatch", "GetTypeInfo", 100664207, 4);
    }

    ((InterpEntry_T114)wasm_native_to_interp_ftndescs [114].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [114].arg);
    return result;
}

uint32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfoCount (void * arg0) {
    typedef void (*InterpEntry_T115) (int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T115)wasm_native_to_interp_ftndescs [115].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "GetTypeInfoCount", 100664718, 1);
    }

    ((InterpEntry_T115)wasm_native_to_interp_ftndescs [115].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [115].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_GetTypeInfoCount (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T116) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T116)wasm_native_to_interp_ftndescs [116].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDispatch", "GetTypeInfoCount", 100664206, 2);
    }

    ((InterpEntry_T116)wasm_native_to_interp_ftndescs [116].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [116].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfoOfGuid (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T117) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T117)wasm_native_to_interp_ftndescs [117].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "GetTypeInfoOfGuid", 100664726, 3);
    }

    ((InterpEntry_T117)wasm_native_to_interp_ftndescs [117].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [117].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfoType (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T118) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T118)wasm_native_to_interp_ftndescs [118].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "GetTypeInfoType", 100664723, 3);
    }

    ((InterpEntry_T118)wasm_native_to_interp_ftndescs [118].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [118].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetVarDesc (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T119) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T119)wasm_native_to_interp_ftndescs [119].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "GetVarDesc", 100664265, 3);
    }

    ((InterpEntry_T119)wasm_native_to_interp_ftndescs [119].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [119].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSource_GiveFeedback (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T120) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T120)wasm_native_to_interp_ftndescs [120].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropSource", "GiveFeedback", 100663994, 2);
    }

    ((InterpEntry_T120)wasm_native_to_interp_ftndescs [120].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [120].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_HandleEnumThreadWindowsNativeCallback (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T121) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T121)wasm_native_to_interp_ftndescs [121].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32", "PInvokeCore", "HandleEnumThreadWindowsNativeCallback", 100663335, 2);
    }

    ((InterpEntry_T121)wasm_native_to_interp_ftndescs [121].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [121].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Hash (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T122) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T122)wasm_native_to_interp_ftndescs [122].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "Hash", 100664565, 2);
    }

    ((InterpEntry_T122)wasm_native_to_interp_ftndescs [122].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [122].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_InOperation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T123) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T123)wasm_native_to_interp_ftndescs [123].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDataObjectAsyncCapability", "InOperation", 100663771, 2);
    }

    ((InterpEntry_T123)wasm_native_to_interp_ftndescs [123].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [123].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper_InitializeFromBitmap (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T124) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T124)wasm_native_to_interp_ftndescs [124].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDragSourceHelper", "InitializeFromBitmap", 100663784, 3);
    }

    ((InterpEntry_T124)wasm_native_to_interp_ftndescs [124].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [124].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper2_InitializeFromBitmap (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T125) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T125)wasm_native_to_interp_ftndescs [125].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDragSourceHelper2", "InitializeFromBitmap", 100663798, 3);
    }

    ((InterpEntry_T125)wasm_native_to_interp_ftndescs [125].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [125].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper_InitializeFromWindow (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T126) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T126)wasm_native_to_interp_ftndescs [126].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDragSourceHelper", "InitializeFromWindow", 100663787, 4);
    }

    ((InterpEntry_T126)wasm_native_to_interp_ftndescs [126].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [126].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper2_InitializeFromWindow (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T127) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T127)wasm_native_to_interp_ftndescs [127].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDragSourceHelper2", "InitializeFromWindow", 100663801, 4);
    }

    ((InterpEntry_T127)wasm_native_to_interp_ftndescs [127].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [127].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Inverse (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T128) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T128)wasm_native_to_interp_ftndescs [128].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "Inverse", 100664572, 2);
    }

    ((InterpEntry_T128)wasm_native_to_interp_ftndescs [128].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [128].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_Invoke (void * arg0, void * arg1, int32_t arg2, uint32_t arg3, void * arg4, void * arg5, void * arg6, void * arg7) {
    typedef void (*InterpEntry_T129) (int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T129)wasm_native_to_interp_ftndescs [129].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "Invoke", 100664280, 8);
    }

    ((InterpEntry_T129)wasm_native_to_interp_ftndescs [129].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, (int*)wasm_native_to_interp_ftndescs [129].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_Invoke (void * arg0, int32_t arg1, void * arg2, uint32_t arg3, uint32_t arg4, void * arg5, void * arg6, void * arg7, void * arg8) {
    typedef void (*InterpEntry_T130) (int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T130)wasm_native_to_interp_ftndescs [130].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDispatch", "Invoke", 100664209, 9);
    }

    ((InterpEntry_T130)wasm_native_to_interp_ftndescs [130].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, (int*)&arg8, (int*)wasm_native_to_interp_ftndescs [130].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_InvokeEx (void * arg0, int32_t arg1, uint32_t arg2, uint32_t arg3, void * arg4, void * arg5, void * arg6, void * arg7) {
    typedef void (*InterpEntry_T131) (int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T131)wasm_native_to_interp_ftndescs [131].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDispatchEx", "InvokeEx", 100663968, 8);
    }

    ((InterpEntry_T131)wasm_native_to_interp_ftndescs [131].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, (int*)wasm_native_to_interp_ftndescs [131].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsDirty (void * arg0) {
    typedef void (*InterpEntry_T132) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T132)wasm_native_to_interp_ftndescs [132].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "IsDirty", 100664541, 1);
    }

    ((InterpEntry_T132)wasm_native_to_interp_ftndescs [132].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [132].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_IsDirty (void * arg0) {
    typedef void (*InterpEntry_T133) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T133)wasm_native_to_interp_ftndescs [133].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IPersistStream", "IsDirty", 100664609, 1);
    }

    ((InterpEntry_T133)wasm_native_to_interp_ftndescs [133].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [133].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsEqual (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T134) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T134)wasm_native_to_interp_ftndescs [134].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "IsEqual", 100664562, 2);
    }

    ((InterpEntry_T134)wasm_native_to_interp_ftndescs [134].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [134].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_IsMatchingType (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T135) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T135)wasm_native_to_interp_ftndescs [135].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "IsMatchingType", 100664128, 2);
    }

    ((InterpEntry_T135)wasm_native_to_interp_ftndescs [135].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [135].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_IsName (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T136) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T136)wasm_native_to_interp_ftndescs [136].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "IsName", 100664737, 4);
    }

    ((InterpEntry_T136)wasm_native_to_interp_ftndescs [136].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [136].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_IsRunning (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T137) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T137)wasm_native_to_interp_ftndescs [137].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IRunningObjectTable", "IsRunning", 100664631, 2);
    }

    ((InterpEntry_T137)wasm_native_to_interp_ftndescs [137].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [137].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsRunning (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T138) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T138)wasm_native_to_interp_ftndescs [138].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "IsRunning", 100664567, 4);
    }

    ((InterpEntry_T138)wasm_native_to_interp_ftndescs [138].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [138].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsSystemMoniker (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T139) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T139)wasm_native_to_interp_ftndescs [139].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "IsSystemMoniker", 100664585, 2);
    }

    ((InterpEntry_T139)wasm_native_to_interp_ftndescs [139].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [139].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Load (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T140) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T140)wasm_native_to_interp_ftndescs [140].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "Load", 100664543, 2);
    }

    ((InterpEntry_T140)wasm_native_to_interp_ftndescs [140].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [140].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_Load (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T141) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T141)wasm_native_to_interp_ftndescs [141].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IPersistStream", "Load", 100664611, 2);
    }

    ((InterpEntry_T141)wasm_native_to_interp_ftndescs [141].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [141].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssembly (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T142) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T142)wasm_native_to_interp_ftndescs [142].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssembly", 100663583, 3);
    }

    ((InterpEntry_T142)wasm_native_to_interp_ftndescs [142].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [142].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyAndGetFunctionPointer (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T143) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T143)wasm_native_to_interp_ftndescs [143].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssemblyAndGetFunctionPointer", 100663582, 6);
    }

    ((InterpEntry_T143)wasm_native_to_interp_ftndescs [143].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [143].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyBytes (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T144) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T144)wasm_native_to_interp_ftndescs [144].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "Internal.Runtime.InteropServices", "ComponentActivator", "LoadAssemblyBytes", 100663585, 6);
    }

    ((InterpEntry_T144)wasm_native_to_interp_ftndescs [144].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [144].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_LockRegion (void * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3) {
    typedef void (*InterpEntry_T145) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T145)wasm_native_to_interp_ftndescs [145].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "LockRegion", 100664688, 4);
    }

    ((InterpEntry_T145)wasm_native_to_interp_ftndescs [145].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [145].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_MoveElementTo (void * arg0, void * arg1, void * arg2, void * arg3, uint32_t arg4) {
    typedef void (*InterpEntry_T146) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T146)wasm_native_to_interp_ftndescs [146].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "MoveElementTo", 100664788, 5);
    }

    ((InterpEntry_T146)wasm_native_to_interp_ftndescs [146].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [146].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Next (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T147) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T147)wasm_native_to_interp_ftndescs [147].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IEnumSTATSTG", "Next", 100664756, 4);
    }

    ((InterpEntry_T147)wasm_native_to_interp_ftndescs [147].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [147].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Next (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T148) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T148)wasm_native_to_interp_ftndescs [148].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumFORMATETC", "Next", 100664440, 4);
    }

    ((InterpEntry_T148)wasm_native_to_interp_ftndescs [148].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [148].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Next (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T149) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T149)wasm_native_to_interp_ftndescs [149].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumMoniker", "Next", 100664456, 4);
    }

    ((InterpEntry_T149)wasm_native_to_interp_ftndescs [149].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [149].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Next (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T150) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T150)wasm_native_to_interp_ftndescs [150].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumSTATDATA", "Next", 100664473, 4);
    }

    ((InterpEntry_T150)wasm_native_to_interp_ftndescs [150].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [150].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Next (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T151) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T151)wasm_native_to_interp_ftndescs [151].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumString", "Next", 100664490, 4);
    }

    ((InterpEntry_T151)wasm_native_to_interp_ftndescs [151].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [151].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Next (void * arg0, uint32_t arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T152) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T152)wasm_native_to_interp_ftndescs [152].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumUnknown", "Next", 100664506, 4);
    }

    ((InterpEntry_T152)wasm_native_to_interp_ftndescs [152].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [152].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_NoteChangeTime (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T153) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T153)wasm_native_to_interp_ftndescs [153].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IRunningObjectTable", "NoteChangeTime", 100664636, 3);
    }

    ((InterpEntry_T153)wasm_native_to_interp_ftndescs [153].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [153].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnClose (void * arg0) {
    typedef void (*InterpEntry_T154) (int*, int*);

    if (!(InterpEntry_T154)wasm_native_to_interp_ftndescs [154].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IAdviseSink", "OnClose", 100664367, 1);
    }

    ((InterpEntry_T154)wasm_native_to_interp_ftndescs [154].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [154].arg);
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnDataChange (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T155) (int*, int*, int*, int*);

    if (!(InterpEntry_T155)wasm_native_to_interp_ftndescs [155].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IAdviseSink", "OnDataChange", 100664359, 3);
    }

    ((InterpEntry_T155)wasm_native_to_interp_ftndescs [155].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [155].arg);
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnRename (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T156) (int*, int*, int*);

    if (!(InterpEntry_T156)wasm_native_to_interp_ftndescs [156].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IAdviseSink", "OnRename", 100664363, 2);
    }

    ((InterpEntry_T156)wasm_native_to_interp_ftndescs [156].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [156].arg);
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnSave (void * arg0) {
    typedef void (*InterpEntry_T157) (int*, int*);

    if (!(InterpEntry_T157)wasm_native_to_interp_ftndescs [157].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IAdviseSink", "OnSave", 100664365, 1);
    }

    ((InterpEntry_T157)wasm_native_to_interp_ftndescs [157].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [157].arg);
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnViewChange (void * arg0, uint32_t arg1, int32_t arg2) {
    typedef void (*InterpEntry_T158) (int*, int*, int*, int*);

    if (!(InterpEntry_T158)wasm_native_to_interp_ftndescs [158].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IAdviseSink", "OnViewChange", 100664361, 3);
    }

    ((InterpEntry_T158)wasm_native_to_interp_ftndescs [158].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [158].arg);
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_OpenStorage (void * arg0, void * arg1, void * arg2, uint32_t arg3, void * arg4, uint32_t arg5, void * arg6) {
    typedef void (*InterpEntry_T159) (int*, int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T159)wasm_native_to_interp_ftndescs [159].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "OpenStorage", 100664782, 7);
    }

    ((InterpEntry_T159)wasm_native_to_interp_ftndescs [159].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)wasm_native_to_interp_ftndescs [159].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_OpenStream (void * arg0, void * arg1, void * arg2, uint32_t arg3, uint32_t arg4, void * arg5) {
    typedef void (*InterpEntry_T160) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T160)wasm_native_to_interp_ftndescs [160].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "OpenStream", 100664776, 6);
    }

    ((InterpEntry_T160)wasm_native_to_interp_ftndescs [160].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [160].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_ParseDisplayName (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, void * arg5) {
    typedef void (*InterpEntry_T161) (int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T161)wasm_native_to_interp_ftndescs [161].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "ParseDisplayName", 100664582, 6);
    }

    ((InterpEntry_T161)wasm_native_to_interp_ftndescs [161].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [161].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_PictureChanged (void * arg0) {
    typedef void (*InterpEntry_T162) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T162)wasm_native_to_interp_ftndescs [162].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "PictureChanged", 100664066, 1);
    }

    ((InterpEntry_T162)wasm_native_to_interp_ftndescs [162].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [162].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_PutField (void * arg0, uint32_t arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T163) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T163)wasm_native_to_interp_ftndescs [163].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "PutField", 100664120, 5);
    }

    ((InterpEntry_T163)wasm_native_to_interp_ftndescs [163].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [163].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_PutFieldNoCopy (void * arg0, uint32_t arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T164) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T164)wasm_native_to_interp_ftndescs [164].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "PutFieldNoCopy", 100664123, 5);
    }

    ((InterpEntry_T164)wasm_native_to_interp_ftndescs [164].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [164].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSource_QueryContinueDrag (void * arg0, int32_t arg1, uint32_t arg2) {
    typedef void (*InterpEntry_T165) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T165)wasm_native_to_interp_ftndescs [165].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IDropSource", "QueryContinueDrag", 100663992, 3);
    }

    ((InterpEntry_T165)wasm_native_to_interp_ftndescs [165].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [165].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_QueryGetData (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T166) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T166)wasm_native_to_interp_ftndescs [166].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "QueryGetData", 100664414, 2);
    }

    ((InterpEntry_T166)wasm_native_to_interp_ftndescs [166].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [166].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_CCW_QueryInterface (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T167) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T167)wasm_native_to_interp_ftndescs [167].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "CCW", "QueryInterface", 100666591, 3);
    }

    ((InterpEntry_T167)wasm_native_to_interp_ftndescs [167].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [167].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IServiceProvider_QueryService (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T168) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T168)wasm_native_to_interp_ftndescs [168].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IServiceProvider", "QueryService", 100664664, 4);
    }

    ((InterpEntry_T168)wasm_native_to_interp_ftndescs [168].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [168].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ISequentialStream_Read (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T169) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T169)wasm_native_to_interp_ftndescs [169].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ISequentialStream", "Read", 100664651, 4);
    }

    ((InterpEntry_T169)wasm_native_to_interp_ftndescs [169].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [169].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Read (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T170) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T170)wasm_native_to_interp_ftndescs [170].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "Read", 100664674, 4);
    }

    ((InterpEntry_T170)wasm_native_to_interp_ftndescs [170].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [170].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordClear (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T171) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T171)wasm_native_to_interp_ftndescs [171].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "RecordClear", 100664099, 2);
    }

    ((InterpEntry_T171)wasm_native_to_interp_ftndescs [171].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [171].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordCopy (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T172) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T172)wasm_native_to_interp_ftndescs [172].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "RecordCopy", 100664101, 3);
    }

    ((InterpEntry_T172)wasm_native_to_interp_ftndescs [172].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [172].arg);
    return result;
}

void *
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordCreate (void * arg0) {
    typedef void (*InterpEntry_T173) (int*, int*, int*);
    void * result;

    if (!(InterpEntry_T173)wasm_native_to_interp_ftndescs [173].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "RecordCreate", 100664130, 1);
    }

    ((InterpEntry_T173)wasm_native_to_interp_ftndescs [173].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [173].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordCreateCopy (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T174) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T174)wasm_native_to_interp_ftndescs [174].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "RecordCreateCopy", 100664133, 3);
    }

    ((InterpEntry_T174)wasm_native_to_interp_ftndescs [174].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [174].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordDestroy (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T175) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T175)wasm_native_to_interp_ftndescs [175].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "RecordDestroy", 100664135, 2);
    }

    ((InterpEntry_T175)wasm_native_to_interp_ftndescs [175].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [175].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordInit (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T176) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T176)wasm_native_to_interp_ftndescs [176].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IRecordInfo", "RecordInit", 100664097, 2);
    }

    ((InterpEntry_T176)wasm_native_to_interp_ftndescs [176].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [176].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Reduce (void * arg0, void * arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T177) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T177)wasm_native_to_interp_ftndescs [177].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "Reduce", 100664556, 5);
    }

    ((InterpEntry_T177)wasm_native_to_interp_ftndescs [177].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [177].arg);
    return result;
}

void *
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_ReferenceTableProxyImplementation (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T178) (int*, int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T178)wasm_native_to_interp_ftndescs [178].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "ReferenceTableProxyImplementation", 100663422, 3);
    }

    ((InterpEntry_T178)wasm_native_to_interp_ftndescs [178].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [178].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_Register (void * arg0, uint32_t arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T179) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T179)wasm_native_to_interp_ftndescs [179].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IRunningObjectTable", "Register", 100664627, 5);
    }

    ((InterpEntry_T179)wasm_native_to_interp_ftndescs [179].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [179].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IGlobalInterfaceTable_RegisterInterfaceInGlobal (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T180) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T180)wasm_native_to_interp_ftndescs [180].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IGlobalInterfaceTable", "RegisterInterfaceInGlobal", 100664523, 4);
    }

    ((InterpEntry_T180)wasm_native_to_interp_ftndescs [180].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [180].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RegisterObjectBound (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T181) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T181)wasm_native_to_interp_ftndescs [181].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "RegisterObjectBound", 100664377, 2);
    }

    ((InterpEntry_T181)wasm_native_to_interp_ftndescs [181].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [181].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RegisterObjectParam (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T182) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T182)wasm_native_to_interp_ftndescs [182].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "RegisterObjectParam", 100664391, 3);
    }

    ((InterpEntry_T182)wasm_native_to_interp_ftndescs [182].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [182].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_RelativePathTo (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T183) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T183)wasm_native_to_interp_ftndescs [183].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "RelativePathTo", 100664576, 3);
    }

    ((InterpEntry_T183)wasm_native_to_interp_ftndescs [183].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [183].arg);
    return result;
}

uint32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_CCW_Release (void * arg0) {
    typedef void (*InterpEntry_T184) (int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T184)wasm_native_to_interp_ftndescs [184].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "CCW", "Release", 100666593, 1);
    }

    ((InterpEntry_T184)wasm_native_to_interp_ftndescs [184].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [184].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_ReleaseBoundObjects (void * arg0) {
    typedef void (*InterpEntry_T185) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T185)wasm_native_to_interp_ftndescs [185].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "ReleaseBoundObjects", 100664381, 1);
    }

    ((InterpEntry_T185)wasm_native_to_interp_ftndescs [185].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [185].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_ReleaseFuncDesc (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T186) (int*, int*, int*);

    if (!(InterpEntry_T186)wasm_native_to_interp_ftndescs [186].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "ReleaseFuncDesc", 100664305, 2);
    }

    ((InterpEntry_T186)wasm_native_to_interp_ftndescs [186].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [186].arg);
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_ReleaseTLibAttr (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T187) (int*, int*, int*);

    if (!(InterpEntry_T187)wasm_native_to_interp_ftndescs [187].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeLib", "ReleaseTLibAttr", 100664743, 2);
    }

    ((InterpEntry_T187)wasm_native_to_interp_ftndescs [187].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [187].arg);
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_ReleaseTypeAttr (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T188) (int*, int*, int*);

    if (!(InterpEntry_T188)wasm_native_to_interp_ftndescs [188].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "ReleaseTypeAttr", 100664302, 2);
    }

    ((InterpEntry_T188)wasm_native_to_interp_ftndescs [188].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [188].arg);
}

void
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_ReleaseVarDesc (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T189) (int*, int*, int*);

    if (!(InterpEntry_T189)wasm_native_to_interp_ftndescs [189].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ITypeInfo", "ReleaseVarDesc", 100664308, 2);
    }

    ((InterpEntry_T189)wasm_native_to_interp_ftndescs [189].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [189].arg);
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_RenameElement (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T190) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T190)wasm_native_to_interp_ftndescs [190].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "RenameElement", 100664801, 3);
    }

    ((InterpEntry_T190)wasm_native_to_interp_ftndescs [190].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [190].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_Render (void * arg0, void * arg1, int32_t arg2, int32_t arg3, int32_t arg4, int32_t arg5, int32_t arg6, int32_t arg7, int32_t arg8, int32_t arg9, void * arg10) {
    typedef void (*InterpEntry_T191) (int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T191)wasm_native_to_interp_ftndescs [191].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "Render", 100664051, 11);
    }

    ((InterpEntry_T191)wasm_native_to_interp_ftndescs [191].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)&arg6, (int*)&arg7, (int*)&arg8, (int*)&arg9, (int*)&arg10, (int*)wasm_native_to_interp_ftndescs [191].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Reset (void * arg0) {
    typedef void (*InterpEntry_T192) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T192)wasm_native_to_interp_ftndescs [192].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IEnumSTATSTG", "Reset", 100664760, 1);
    }

    ((InterpEntry_T192)wasm_native_to_interp_ftndescs [192].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [192].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Reset (void * arg0) {
    typedef void (*InterpEntry_T193) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T193)wasm_native_to_interp_ftndescs [193].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumFORMATETC", "Reset", 100664444, 1);
    }

    ((InterpEntry_T193)wasm_native_to_interp_ftndescs [193].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [193].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Reset (void * arg0) {
    typedef void (*InterpEntry_T194) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T194)wasm_native_to_interp_ftndescs [194].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumMoniker", "Reset", 100664460, 1);
    }

    ((InterpEntry_T194)wasm_native_to_interp_ftndescs [194].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [194].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Reset (void * arg0) {
    typedef void (*InterpEntry_T195) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T195)wasm_native_to_interp_ftndescs [195].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumSTATDATA", "Reset", 100664477, 1);
    }

    ((InterpEntry_T195)wasm_native_to_interp_ftndescs [195].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [195].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Reset (void * arg0) {
    typedef void (*InterpEntry_T196) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T196)wasm_native_to_interp_ftndescs [196].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumString", "Reset", 100664494, 1);
    }

    ((InterpEntry_T196)wasm_native_to_interp_ftndescs [196].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [196].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Reset (void * arg0) {
    typedef void (*InterpEntry_T197) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T197)wasm_native_to_interp_ftndescs [197].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumUnknown", "Reset", 100664510, 1);
    }

    ((InterpEntry_T197)wasm_native_to_interp_ftndescs [197].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [197].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_Revert (void * arg0) {
    typedef void (*InterpEntry_T198) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T198)wasm_native_to_interp_ftndescs [198].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "Revert", 100664792, 1);
    }

    ((InterpEntry_T198)wasm_native_to_interp_ftndescs [198].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [198].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Revert (void * arg0) {
    typedef void (*InterpEntry_T199) (int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T199)wasm_native_to_interp_ftndescs [199].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "Revert", 100664686, 1);
    }

    ((InterpEntry_T199)wasm_native_to_interp_ftndescs [199].func) ((int*)&result, (int*)&arg0, (int*)wasm_native_to_interp_ftndescs [199].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_Revoke (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T200) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T200)wasm_native_to_interp_ftndescs [200].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IRunningObjectTable", "Revoke", 100664629, 2);
    }

    ((InterpEntry_T200)wasm_native_to_interp_ftndescs [200].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [200].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IGlobalInterfaceTable_RevokeInterfaceFromGlobal (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T201) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T201)wasm_native_to_interp_ftndescs [201].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IGlobalInterfaceTable", "RevokeInterfaceFromGlobal", 100664525, 2);
    }

    ((InterpEntry_T201)wasm_native_to_interp_ftndescs [201].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [201].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RevokeObjectBound (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T202) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T202)wasm_native_to_interp_ftndescs [202].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "RevokeObjectBound", 100664379, 2);
    }

    ((InterpEntry_T202)wasm_native_to_interp_ftndescs [202].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [202].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RevokeObjectParam (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T203) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T203)wasm_native_to_interp_ftndescs [203].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "RevokeObjectParam", 100664397, 2);
    }

    ((InterpEntry_T203)wasm_native_to_interp_ftndescs [203].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [203].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKBitmapReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T204) (int*, int*, int*);

    if (!(InterpEntry_T204)wasm_native_to_interp_ftndescs [204].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKBitmapReleaseProxyImplementation", 100663506, 2);
    }

    ((InterpEntry_T204)wasm_native_to_interp_ftndescs [204].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [204].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKDataReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T205) (int*, int*, int*);

    if (!(InterpEntry_T205)wasm_native_to_interp_ftndescs [205].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKDataReleaseProxyImplementation", 100663507, 2);
    }

    ((InterpEntry_T205)wasm_native_to_interp_ftndescs [205].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [205].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKGlyphPathProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T206) (int*, int*, int*, int*);

    if (!(InterpEntry_T206)wasm_native_to_interp_ftndescs [206].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKGlyphPathProxyImplementation", 100663508, 3);
    }

    ((InterpEntry_T206)wasm_native_to_interp_ftndescs [206].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [206].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T207) (int*, int*, int*);

    if (!(InterpEntry_T207)wasm_native_to_interp_ftndescs [207].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKImageRasterReleaseProxyImplementation", 100663509, 2);
    }

    ((InterpEntry_T207)wasm_native_to_interp_ftndescs [207].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [207].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementationForCoTaskMem (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T208) (int*, int*, int*);

    if (!(InterpEntry_T208)wasm_native_to_interp_ftndescs [208].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKImageRasterReleaseProxyImplementationForCoTaskMem", 100663510, 2);
    }

    ((InterpEntry_T208)wasm_native_to_interp_ftndescs [208].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [208].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageTextureReleaseProxyImplementation (void * arg0) {
    typedef void (*InterpEntry_T209) (int*, int*);

    if (!(InterpEntry_T209)wasm_native_to_interp_ftndescs [209].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKImageTextureReleaseProxyImplementation", 100663511, 1);
    }

    ((InterpEntry_T209)wasm_native_to_interp_ftndescs [209].func) ((int*)&arg0, (int*)wasm_native_to_interp_ftndescs [209].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableApproximateBytesUsedProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T210) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T210)wasm_native_to_interp_ftndescs [210].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableApproximateBytesUsedProxyImplementation", 100663512, 2);
    }

    ((InterpEntry_T210)wasm_native_to_interp_ftndescs [210].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [210].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDestroyProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T211) (int*, int*, int*);

    if (!(InterpEntry_T211)wasm_native_to_interp_ftndescs [211].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableDestroyProxyImplementation", 100663513, 2);
    }

    ((InterpEntry_T211)wasm_native_to_interp_ftndescs [211].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [211].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDrawProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T212) (int*, int*, int*, int*);

    if (!(InterpEntry_T212)wasm_native_to_interp_ftndescs [212].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableDrawProxyImplementation", 100663514, 3);
    }

    ((InterpEntry_T212)wasm_native_to_interp_ftndescs [212].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [212].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableGetBoundsProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T213) (int*, int*, int*, int*);

    if (!(InterpEntry_T213)wasm_native_to_interp_ftndescs [213].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableGetBoundsProxyImplementation", 100663515, 3);
    }

    ((InterpEntry_T213)wasm_native_to_interp_ftndescs [213].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [213].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableMakePictureSnapshotProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T214) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T214)wasm_native_to_interp_ftndescs [214].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedDrawableMakePictureSnapshotProxyImplementation", 100663516, 2);
    }

    ((InterpEntry_T214)wasm_native_to_interp_ftndescs [214].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [214].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDestroyProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T215) (int*, int*, int*);

    if (!(InterpEntry_T215)wasm_native_to_interp_ftndescs [215].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamDestroyProxyImplementation", 100663517, 2);
    }

    ((InterpEntry_T215)wasm_native_to_interp_ftndescs [215].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [215].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDuplicateProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T216) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T216)wasm_native_to_interp_ftndescs [216].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamDuplicateProxyImplementation", 100663518, 2);
    }

    ((InterpEntry_T216)wasm_native_to_interp_ftndescs [216].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [216].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamForkProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T217) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T217)wasm_native_to_interp_ftndescs [217].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamForkProxyImplementation", 100663519, 2);
    }

    ((InterpEntry_T217)wasm_native_to_interp_ftndescs [217].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [217].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetLengthProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T218) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T218)wasm_native_to_interp_ftndescs [218].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamGetLengthProxyImplementation", 100663520, 2);
    }

    ((InterpEntry_T218)wasm_native_to_interp_ftndescs [218].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [218].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetPositionProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T219) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T219)wasm_native_to_interp_ftndescs [219].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamGetPositionProxyImplementation", 100663521, 2);
    }

    ((InterpEntry_T219)wasm_native_to_interp_ftndescs [219].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [219].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasLengthProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T220) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T220)wasm_native_to_interp_ftndescs [220].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamHasLengthProxyImplementation", 100663522, 2);
    }

    ((InterpEntry_T220)wasm_native_to_interp_ftndescs [220].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [220].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasPositionProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T221) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T221)wasm_native_to_interp_ftndescs [221].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamHasPositionProxyImplementation", 100663523, 2);
    }

    ((InterpEntry_T221)wasm_native_to_interp_ftndescs [221].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [221].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamIsAtEndProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T222) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T222)wasm_native_to_interp_ftndescs [222].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamIsAtEndProxyImplementation", 100663524, 2);
    }

    ((InterpEntry_T222)wasm_native_to_interp_ftndescs [222].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [222].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamMoveProxyImplementation (void * arg0, void * arg1, int32_t arg2) {
    typedef void (*InterpEntry_T223) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T223)wasm_native_to_interp_ftndescs [223].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamMoveProxyImplementation", 100663525, 3);
    }

    ((InterpEntry_T223)wasm_native_to_interp_ftndescs [223].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [223].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamPeekProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T224) (int*, int*, int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T224)wasm_native_to_interp_ftndescs [224].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamPeekProxyImplementation", 100663526, 4);
    }

    ((InterpEntry_T224)wasm_native_to_interp_ftndescs [224].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [224].arg);
    return result;
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamReadProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T225) (int*, int*, int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T225)wasm_native_to_interp_ftndescs [225].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamReadProxyImplementation", 100663527, 4);
    }

    ((InterpEntry_T225)wasm_native_to_interp_ftndescs [225].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [225].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamRewindProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T226) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T226)wasm_native_to_interp_ftndescs [226].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamRewindProxyImplementation", 100663528, 2);
    }

    ((InterpEntry_T226)wasm_native_to_interp_ftndescs [226].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [226].arg);
    return result;
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamSeekProxyImplementation (void * arg0, void * arg1, void * arg2) {
    typedef void (*InterpEntry_T227) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T227)wasm_native_to_interp_ftndescs [227].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedStreamSeekProxyImplementation", 100663529, 3);
    }

    ((InterpEntry_T227)wasm_native_to_interp_ftndescs [227].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [227].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4, uint64_t arg5) {
    typedef void (*InterpEntry_T228) (int*, int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T228)wasm_native_to_interp_ftndescs [228].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation", 100663530, 6);
    }

    ((InterpEntry_T228)wasm_native_to_interp_ftndescs [228].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)&arg5, (int*)wasm_native_to_interp_ftndescs [228].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpStringValueProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T229) (int*, int*, int*, int*, int*, int*);

    if (!(InterpEntry_T229)wasm_native_to_interp_ftndescs [229].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedTraceMemoryDumpDumpStringValueProxyImplementation", 100663531, 5);
    }

    ((InterpEntry_T229)wasm_native_to_interp_ftndescs [229].func) ((int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [229].arg);
}

void *
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamBytesWrittenProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T230) (int*, int*, int*, int*);
    void * result;

    if (!(InterpEntry_T230)wasm_native_to_interp_ftndescs [230].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamBytesWrittenProxyImplementation", 100663532, 2);
    }

    ((InterpEntry_T230)wasm_native_to_interp_ftndescs [230].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [230].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamDestroyProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T231) (int*, int*, int*);

    if (!(InterpEntry_T231)wasm_native_to_interp_ftndescs [231].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamDestroyProxyImplementation", 100663533, 2);
    }

    ((InterpEntry_T231)wasm_native_to_interp_ftndescs [231].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [231].arg);
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamFlushProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T232) (int*, int*, int*);

    if (!(InterpEntry_T232)wasm_native_to_interp_ftndescs [232].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamFlushProxyImplementation", 100663534, 2);
    }

    ((InterpEntry_T232)wasm_native_to_interp_ftndescs [232].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [232].arg);
}

int32_t
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamWriteProxyImplementation (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T233) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T233)wasm_native_to_interp_ftndescs [233].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKManagedWStreamWriteProxyImplementation", 100663535, 4);
    }

    ((InterpEntry_T233)wasm_native_to_interp_ftndescs [233].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [233].arg);
    return result;
}

void
wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKSurfaceRasterReleaseProxyImplementation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T234) (int*, int*, int*);

    if (!(InterpEntry_T234)wasm_native_to_interp_ftndescs [234].func) {
        mono_wasm_marshal_get_managed_wrapper ("SkiaSharp", "SkiaSharp", "DelegateProxies", "SKSurfaceRasterReleaseProxyImplementation", 100663536, 2);
    }

    ((InterpEntry_T234)wasm_native_to_interp_ftndescs [234].func) ((int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [234].arg);
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Save (void * arg0, void * arg1, int32_t arg2) {
    typedef void (*InterpEntry_T235) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T235)wasm_native_to_interp_ftndescs [235].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IMoniker", "Save", 100664545, 3);
    }

    ((InterpEntry_T235)wasm_native_to_interp_ftndescs [235].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [235].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_Save (void * arg0, void * arg1, int32_t arg2) {
    typedef void (*InterpEntry_T236) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T236)wasm_native_to_interp_ftndescs [236].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IPersistStream", "Save", 100664613, 3);
    }

    ((InterpEntry_T236)wasm_native_to_interp_ftndescs [236].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [236].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_SaveAsFile (void * arg0, void * arg1, int32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T237) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T237)wasm_native_to_interp_ftndescs [237].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "SaveAsFile", 100664069, 4);
    }

    ((InterpEntry_T237)wasm_native_to_interp_ftndescs [237].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [237].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Seek (void * arg0, int64_t arg1, int32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T238) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T238)wasm_native_to_interp_ftndescs [238].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "Seek", 100664678, 4);
    }

    ((InterpEntry_T238)wasm_native_to_interp_ftndescs [238].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [238].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_SelectPicture (void * arg0, void * arg1, void * arg2, void * arg3) {
    typedef void (*InterpEntry_T239) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T239)wasm_native_to_interp_ftndescs [239].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "SelectPicture", 100664059, 4);
    }

    ((InterpEntry_T239)wasm_native_to_interp_ftndescs [239].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [239].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_SetAsyncMode (void * arg0, int32_t arg1) {
    typedef void (*InterpEntry_T240) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T240)wasm_native_to_interp_ftndescs [240].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDataObjectAsyncCapability", "SetAsyncMode", 100663763, 2);
    }

    ((InterpEntry_T240)wasm_native_to_interp_ftndescs [240].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [240].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_SetBindOptions (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T241) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T241)wasm_native_to_interp_ftndescs [241].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IBindCtx", "SetBindOptions", 100664384, 2);
    }

    ((InterpEntry_T241)wasm_native_to_interp_ftndescs [241].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [241].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_SetClass (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T242) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T242)wasm_native_to_interp_ftndescs [242].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "SetClass", 100664807, 2);
    }

    ((InterpEntry_T242)wasm_native_to_interp_ftndescs [242].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [242].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_SetData (void * arg0, void * arg1, void * arg2, int32_t arg3) {
    typedef void (*InterpEntry_T243) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T243)wasm_native_to_interp_ftndescs [243].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IDataObject", "SetData", 100664420, 4);
    }

    ((InterpEntry_T243)wasm_native_to_interp_ftndescs [243].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [243].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_SetElementTimes (void * arg0, void * arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T244) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T244)wasm_native_to_interp_ftndescs [244].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "SetElementTimes", 100664804, 5);
    }

    ((InterpEntry_T244)wasm_native_to_interp_ftndescs [244].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [244].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper2_SetFlags (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T245) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T245)wasm_native_to_interp_ftndescs [245].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDragSourceHelper2", "SetFlags", 100663803, 2);
    }

    ((InterpEntry_T245)wasm_native_to_interp_ftndescs [245].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [245].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_SetSize (void * arg0, uint64_t arg1) {
    typedef void (*InterpEntry_T246) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T246)wasm_native_to_interp_ftndescs [246].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "SetSize", 100664680, 2);
    }

    ((InterpEntry_T246)wasm_native_to_interp_ftndescs [246].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [246].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_SetStateBits (void * arg0, uint32_t arg1, uint32_t arg2) {
    typedef void (*InterpEntry_T247) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T247)wasm_native_to_interp_ftndescs [247].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "SetStateBits", 100664809, 3);
    }

    ((InterpEntry_T247)wasm_native_to_interp_ftndescs [247].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [247].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_Show (void * arg0, int32_t arg1) {
    typedef void (*InterpEntry_T248) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T248)wasm_native_to_interp_ftndescs [248].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDropTargetHelper", "Show", 100663824, 2);
    }

    ((InterpEntry_T248)wasm_native_to_interp_ftndescs [248].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [248].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Skip (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T249) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T249)wasm_native_to_interp_ftndescs [249].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IEnumSTATSTG", "Skip", 100664758, 2);
    }

    ((InterpEntry_T249)wasm_native_to_interp_ftndescs [249].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [249].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Skip (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T250) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T250)wasm_native_to_interp_ftndescs [250].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumFORMATETC", "Skip", 100664442, 2);
    }

    ((InterpEntry_T250)wasm_native_to_interp_ftndescs [250].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [250].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Skip (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T251) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T251)wasm_native_to_interp_ftndescs [251].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumMoniker", "Skip", 100664458, 2);
    }

    ((InterpEntry_T251)wasm_native_to_interp_ftndescs [251].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [251].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Skip (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T252) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T252)wasm_native_to_interp_ftndescs [252].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumSTATDATA", "Skip", 100664475, 2);
    }

    ((InterpEntry_T252)wasm_native_to_interp_ftndescs [252].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [252].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Skip (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T253) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T253)wasm_native_to_interp_ftndescs [253].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumString", "Skip", 100664492, 2);
    }

    ((InterpEntry_T253)wasm_native_to_interp_ftndescs [253].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [253].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Skip (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T254) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T254)wasm_native_to_interp_ftndescs [254].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IEnumUnknown", "Skip", 100664508, 2);
    }

    ((InterpEntry_T254)wasm_native_to_interp_ftndescs [254].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [254].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_StartOperation (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T255) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T255)wasm_native_to_interp_ftndescs [255].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.UI.Shell", "IDataObjectAsyncCapability", "StartOperation", 100663768, 2);
    }

    ((InterpEntry_T255)wasm_native_to_interp_ftndescs [255].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [255].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_Stat (void * arg0, void * arg1, uint32_t arg2) {
    typedef void (*InterpEntry_T256) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T256)wasm_native_to_interp_ftndescs [256].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com.StructuredStorage", "IStorage", "Stat", 100664812, 3);
    }

    ((InterpEntry_T256)wasm_native_to_interp_ftndescs [256].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [256].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Stat (void * arg0, void * arg1, uint32_t arg2) {
    typedef void (*InterpEntry_T257) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T257)wasm_native_to_interp_ftndescs [257].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "Stat", 100664693, 3);
    }

    ((InterpEntry_T257)wasm_native_to_interp_ftndescs [257].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [257].arg);
    return result;
}

void
wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler () {
    typedef void (*InterpEntry_T258) (int*);

    if (!(InterpEntry_T258)wasm_native_to_interp_ftndescs [258].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.CoreLib", "System.Threading", "TimerQueue", "TimerHandler", 100680379, 0);
    }

    ((InterpEntry_T258)wasm_native_to_interp_ftndescs [258].func) ((int*)wasm_native_to_interp_ftndescs [258].arg);
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeCombiningClassProxyImplementation (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T259) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T259)wasm_native_to_interp_ftndescs [259].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "UnicodeCombiningClassProxyImplementation", 100663423, 3);
    }

    ((InterpEntry_T259)wasm_native_to_interp_ftndescs [259].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [259].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeComposeProxyImplementation (void * arg0, uint32_t arg1, uint32_t arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T260) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T260)wasm_native_to_interp_ftndescs [260].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "UnicodeComposeProxyImplementation", 100663424, 5);
    }

    ((InterpEntry_T260)wasm_native_to_interp_ftndescs [260].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [260].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeDecomposeProxyImplementation (void * arg0, uint32_t arg1, void * arg2, void * arg3, void * arg4) {
    typedef void (*InterpEntry_T261) (int*, int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T261)wasm_native_to_interp_ftndescs [261].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "UnicodeDecomposeProxyImplementation", 100663425, 5);
    }

    ((InterpEntry_T261)wasm_native_to_interp_ftndescs [261].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)&arg4, (int*)wasm_native_to_interp_ftndescs [261].arg);
    return result;
}

int32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeGeneralCategoryProxyImplementation (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T262) (int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T262)wasm_native_to_interp_ftndescs [262].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "UnicodeGeneralCategoryProxyImplementation", 100663426, 3);
    }

    ((InterpEntry_T262)wasm_native_to_interp_ftndescs [262].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [262].arg);
    return result;
}

uint32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeMirroringProxyImplementation (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T263) (int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T263)wasm_native_to_interp_ftndescs [263].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "UnicodeMirroringProxyImplementation", 100663427, 3);
    }

    ((InterpEntry_T263)wasm_native_to_interp_ftndescs [263].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [263].arg);
    return result;
}

uint32_t
wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeScriptProxyImplementation (void * arg0, uint32_t arg1, void * arg2) {
    typedef void (*InterpEntry_T264) (int*, int*, int*, int*, int*);
    uint32_t result;

    if (!(InterpEntry_T264)wasm_native_to_interp_ftndescs [264].func) {
        mono_wasm_marshal_get_managed_wrapper ("HarfBuzzSharp", "HarfBuzzSharp", "DelegateProxies", "UnicodeScriptProxyImplementation", 100663428, 3);
    }

    ((InterpEntry_T264)wasm_native_to_interp_ftndescs [264].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)wasm_native_to_interp_ftndescs [264].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_UnlockRegion (void * arg0, uint64_t arg1, uint64_t arg2, uint32_t arg3) {
    typedef void (*InterpEntry_T265) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T265)wasm_native_to_interp_ftndescs [265].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "UnlockRegion", 100664690, 4);
    }

    ((InterpEntry_T265)wasm_native_to_interp_ftndescs [265].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [265].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ISequentialStream_Write (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T266) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T266)wasm_native_to_interp_ftndescs [266].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "ISequentialStream", "Write", 100664653, 4);
    }

    ((InterpEntry_T266)wasm_native_to_interp_ftndescs [266].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [266].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Write (void * arg0, void * arg1, uint32_t arg2, void * arg3) {
    typedef void (*InterpEntry_T267) (int*, int*, int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T267)wasm_native_to_interp_ftndescs [267].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Com", "IStream", "Write", 100664676, 4);
    }

    ((InterpEntry_T267)wasm_native_to_interp_ftndescs [267].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)&arg2, (int*)&arg3, (int*)wasm_native_to_interp_ftndescs [267].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Attributes (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T268) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T268)wasm_native_to_interp_ftndescs [268].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_Attributes", 100664072, 2);
    }

    ((InterpEntry_T268)wasm_native_to_interp_ftndescs [268].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [268].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_CurDC (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T269) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T269)wasm_native_to_interp_ftndescs [269].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_CurDC", 100664056, 2);
    }

    ((InterpEntry_T269)wasm_native_to_interp_ftndescs [269].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [269].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Handle (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T270) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T270)wasm_native_to_interp_ftndescs [270].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_Handle", 100664036, 2);
    }

    ((InterpEntry_T270)wasm_native_to_interp_ftndescs [270].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [270].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Height (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T271) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T271)wasm_native_to_interp_ftndescs [271].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_Height", 100664048, 2);
    }

    ((InterpEntry_T271)wasm_native_to_interp_ftndescs [271].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [271].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_KeepOriginalFormat (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T272) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T272)wasm_native_to_interp_ftndescs [272].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_KeepOriginalFormat", 100664062, 2);
    }

    ((InterpEntry_T272)wasm_native_to_interp_ftndescs [272].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [272].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Type (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T273) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T273)wasm_native_to_interp_ftndescs [273].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_Type", 100664042, 2);
    }

    ((InterpEntry_T273)wasm_native_to_interp_ftndescs [273].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [273].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Width (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T274) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T274)wasm_native_to_interp_ftndescs [274].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_Width", 100664045, 2);
    }

    ((InterpEntry_T274)wasm_native_to_interp_ftndescs [274].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [274].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_hPal (void * arg0, void * arg1) {
    typedef void (*InterpEntry_T275) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T275)wasm_native_to_interp_ftndescs [275].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "get_hPal", 100664039, 2);
    }

    ((InterpEntry_T275)wasm_native_to_interp_ftndescs [275].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [275].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_put_KeepOriginalFormat (void * arg0, int32_t arg1) {
    typedef void (*InterpEntry_T276) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T276)wasm_native_to_interp_ftndescs [276].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "put_KeepOriginalFormat", 100664064, 2);
    }

    ((InterpEntry_T276)wasm_native_to_interp_ftndescs [276].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [276].arg);
    return result;
}

int32_t
wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_set_hPal (void * arg0, uint32_t arg1) {
    typedef void (*InterpEntry_T277) (int*, int*, int*, int*);
    int32_t result;

    if (!(InterpEntry_T277)wasm_native_to_interp_ftndescs [277].func) {
        mono_wasm_marshal_get_managed_wrapper ("System.Private.Windows.Core", "Windows.Win32.System.Ole", "IPicture", "set_hPal", 100664053, 2);
    }

    ((InterpEntry_T277)wasm_native_to_interp_ftndescs [277].func) ((int*)&result, (int*)&arg0, (int*)&arg1, (int*)wasm_native_to_interp_ftndescs [277].arg);
    return result;
}

static UnmanagedExport wasm_native_to_interp_table[] = {
    {"AddRef#1:System.Private.Windows.Core:Windows.Win32.System.Com:CCW", 100666592, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_CCW_AddRef},
    {"AddressOfMember#4:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664291, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_AddressOfMember},
    {"BackgroundJobHandler#0:System.Private.CoreLib:System.Threading:ThreadPool", 100680304, wasm_native_to_interp_System_Private_CoreLib_System_Threading_ThreadPool_BackgroundJobHandler},
    {"Bind#7:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeComp", 100664706, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeComp_Bind},
    {"BindToObject#5:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664551, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_BindToObject},
    {"BindToStorage#5:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664554, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_BindToStorage},
    {"BindType#5:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeComp", 100664708, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeComp_BindType},
    {"Callback#7:System.Private.CoreLib:System.Diagnostics.Tracing:EventPipeEventProvider", 100700529, wasm_native_to_interp_System_Private_CoreLib_System_Diagnostics_Tracing_EventPipeEventProvider_Callback},
    {"Clone#2:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IEnumSTATSTG", 100664762, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Clone},
    {"Clone#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumFORMATETC", 100664446, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Clone},
    {"Clone#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumMoniker", 100664462, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Clone},
    {"Clone#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumSTATDATA", 100664479, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Clone},
    {"Clone#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumString", 100664496, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Clone},
    {"Clone#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumUnknown", 100664512, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Clone},
    {"Clone#2:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664695, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Clone},
    {"Commit#2:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664790, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_Commit},
    {"Commit#2:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664684, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Commit},
    {"CommonPrefixWith#3:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664574, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_CommonPrefixWith},
    {"ComposeWith#4:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664558, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_ComposeWith},
    {"CopyTo#5:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664785, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_CopyTo},
    {"CopyTo#5:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664682, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_CopyTo},
    {"CreateInstance#4:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664294, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_CreateInstance},
    {"CreateStorage#6:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664779, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_CreateStorage},
    {"CreateStream#6:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664773, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_CreateStream},
    {"DAdvise#5:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664425, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_DAdvise},
    {"DUnadvise#2:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664427, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_DUnadvise},
    {"DeleteMemberByDispID#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663972, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_DeleteMemberByDispID},
    {"DeleteMemberByName#3:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663970, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_DeleteMemberByName},
    {"DestroyElement#2:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664798, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_DestroyElement},
    {"DestroyProxyImplementation#1:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663408, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_DestroyProxyImplementation},
    {"DestroyProxyImplementationForMulti#1:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663409, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_DestroyProxyImplementationForMulti},
    {"DragEnter#5:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropTarget", 100664017, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_DragEnter},
    {"DragEnter#5:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDropTargetHelper", 100663814, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_DragEnter},
    {"DragEnterTarget#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropSourceNotify", 100664004, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSourceNotify_DragEnterTarget},
    {"DragLeave#1:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropTarget", 100664022, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_DragLeave},
    {"DragLeave#1:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDropTargetHelper", 100663816, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_DragLeave},
    {"DragLeaveTarget#1:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropSourceNotify", 100664006, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSourceNotify_DragLeaveTarget},
    {"DragOver#3:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDropTargetHelper", 100663819, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_DragOver},
    {"DragOver#4:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropTarget", 100664020, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_DragOver},
    {"Drop#4:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDropTargetHelper", 100663822, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_Drop},
    {"Drop#5:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropTarget", 100664025, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropTarget_Drop},
    {"EndOperation#4:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDataObjectAsyncCapability", 100663773, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_EndOperation},
    {"Enum#3:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664560, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Enum},
    {"EnumCalendarInfoCallback#2:System.Private.CoreLib:System.Globalization:CalendarData", 100676774, wasm_native_to_interp_System_Private_CoreLib_System_Globalization_CalendarData_EnumCalendarInfoCallback},
    {"EnumChildWindowsNativeCallback#2:System.Private.Windows.Core:Windows.Win32:PInvokeCore", 100663331, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_EnumChildWindowsNativeCallback},
    {"EnumDAdvise#2:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664429, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_EnumDAdvise},
    {"EnumDisplayMonitorsNativeCallback#4:System.Private.Windows.Core:Windows.Win32:PInvokeCore", 100663333, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_EnumDisplayMonitorsNativeCallback},
    {"EnumElements#5:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664795, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_EnumElements},
    {"EnumFormatEtc#3:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664422, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_EnumFormatEtc},
    {"EnumObjectParam#2:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664395, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_EnumObjectParam},
    {"EnumRunning#2:System.Private.Windows.Core:Windows.Win32.System.Com:IRunningObjectTable", 100664641, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_EnumRunning},
    {"EnumWindowsNativeCallback#2:System.Private.Windows.Core:Windows.Win32:PInvokeCore", 100663337, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_EnumWindowsNativeCallback},
    {"FindName#6:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664740, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_FindName},
    {"FontGetFontExtentsProxyImplementation#4:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663410, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetFontExtentsProxyImplementation},
    {"FontGetGlyphAdvanceProxyImplementation#4:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663411, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphAdvanceProxyImplementation},
    {"FontGetGlyphAdvancesProxyImplementation#8:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663412, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphAdvancesProxyImplementation},
    {"FontGetGlyphContourPointProxyImplementation#7:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663413, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphContourPointProxyImplementation},
    {"FontGetGlyphExtentsProxyImplementation#5:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663414, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphExtentsProxyImplementation},
    {"FontGetGlyphFromNameProxyImplementation#6:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663415, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphFromNameProxyImplementation},
    {"FontGetGlyphKerningProxyImplementation#5:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663416, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphKerningProxyImplementation},
    {"FontGetGlyphNameProxyImplementation#6:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663417, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphNameProxyImplementation},
    {"FontGetGlyphOriginProxyImplementation#6:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663418, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetGlyphOriginProxyImplementation},
    {"FontGetNominalGlyphProxyImplementation#5:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663419, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetNominalGlyphProxyImplementation},
    {"FontGetNominalGlyphsProxyImplementation#8:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663420, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetNominalGlyphsProxyImplementation},
    {"FontGetVariationGlyphProxyImplementation#6:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663421, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_FontGetVariationGlyphProxyImplementation},
    {"GRGlGetProcProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663504, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRGlGetProcProxyImplementation},
    {"GRVkGetProcProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663505, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_GRVkGetProcProxyImplementation},
    {"GetAsyncMode#2:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDataObjectAsyncCapability", 100663766, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_GetAsyncMode},
    {"GetBindOptions#2:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664387, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_GetBindOptions},
    {"GetCanonicalFormatEtc#3:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664417, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_GetCanonicalFormatEtc},
    {"GetClassID#2:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664539, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetClassID},
    {"GetClassID#2:System.Private.Windows.Core:Windows.Win32.System.Com:IPersist", 100664596, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersist_GetClassID},
    {"GetClassID#2:System.Private.Windows.Core:Windows.Win32.System.Com:IPersistStream", 100664607, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_GetClassID},
    {"GetContainingTypeLib#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664299, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetContainingTypeLib},
    {"GetData#3:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664408, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_GetData},
    {"GetDataHere#3:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664411, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_GetDataHere},
    {"GetDispID#4:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663965, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetDispID},
    {"GetDisplayName#4:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664579, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetDisplayName},
    {"GetDllEntry#6:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664286, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetDllEntry},
    {"GetDocumentation#6:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664283, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetDocumentation},
    {"GetDocumentation#6:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664734, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetDocumentation},
    {"GetField#4:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664114, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetField},
    {"GetFieldNames#3:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664126, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetFieldNames},
    {"GetFieldNoCopy#5:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664117, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetFieldNoCopy},
    {"GetFuncDesc#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664262, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetFuncDesc},
    {"GetFunctionPointer#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663586, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_GetFunctionPointer},
    {"GetGuid#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664104, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetGuid},
    {"GetIDsOfNames#4:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664277, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetIDsOfNames},
    {"GetIDsOfNames#6:System.Private.Windows.Core:Windows.Win32.System.Com:IDispatch", 100664208, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_GetIDsOfNames},
    {"GetImplTypeFlags#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664274, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetImplTypeFlags},
    {"GetInterfaceFromGlobal#4:System.Private.Windows.Core:Windows.Win32.System.Com:IGlobalInterfaceTable", 100664528, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IGlobalInterfaceTable_GetInterfaceFromGlobal},
    {"GetLibAttr#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664729, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetLibAttr},
    {"GetMemberName#3:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663977, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetMemberName},
    {"GetMemberProperties#4:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663975, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetMemberProperties},
    {"GetMops#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664296, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetMops},
    {"GetName#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664106, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetName},
    {"GetNameSpaceParent#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663982, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetNameSpaceParent},
    {"GetNames#5:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664268, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetNames},
    {"GetNextDispID#4:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663980, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_GetNextDispID},
    {"GetObject#3:System.Private.Windows.Core:Windows.Win32.System.Com:IRunningObjectTable", 100664633, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_GetObject},
    {"GetObjectParam#3:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664393, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_GetObjectParam},
    {"GetRefTypeInfo#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664288, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetRefTypeInfo},
    {"GetRefTypeOfImplType#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664271, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetRefTypeOfImplType},
    {"GetRunningObjectTable#2:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664389, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_GetRunningObjectTable},
    {"GetSize#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664109, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetSize},
    {"GetSizeMax#2:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664548, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetSizeMax},
    {"GetSizeMax#2:System.Private.Windows.Core:Windows.Win32.System.Com:IPersistStream", 100664616, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_GetSizeMax},
    {"GetTimeOfLastChange#3:System.Private.Windows.Core:Windows.Win32.System.Com:IRunningObjectTable", 100664639, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_GetTimeOfLastChange},
    {"GetTimeOfLastChange#4:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664570, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_GetTimeOfLastChange},
    {"GetTypeAttr#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664257, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetTypeAttr},
    {"GetTypeComp#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664259, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetTypeComp},
    {"GetTypeComp#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664731, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeComp},
    {"GetTypeInfo#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664111, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_GetTypeInfo},
    {"GetTypeInfo#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664720, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfo},
    {"GetTypeInfo#4:System.Private.Windows.Core:Windows.Win32.System.Com:IDispatch", 100664207, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_GetTypeInfo},
    {"GetTypeInfoCount#1:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664718, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfoCount},
    {"GetTypeInfoCount#2:System.Private.Windows.Core:Windows.Win32.System.Com:IDispatch", 100664206, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_GetTypeInfoCount},
    {"GetTypeInfoOfGuid#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664726, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfoOfGuid},
    {"GetTypeInfoType#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664723, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_GetTypeInfoType},
    {"GetVarDesc#3:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664265, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_GetVarDesc},
    {"GiveFeedback#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropSource", 100663994, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSource_GiveFeedback},
    {"HandleEnumThreadWindowsNativeCallback#2:System.Private.Windows.Core:Windows.Win32:PInvokeCore", 100663335, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_PInvokeCore_HandleEnumThreadWindowsNativeCallback},
    {"Hash#2:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664565, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Hash},
    {"InOperation#2:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDataObjectAsyncCapability", 100663771, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_InOperation},
    {"InitializeFromBitmap#3:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDragSourceHelper", 100663784, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper_InitializeFromBitmap},
    {"InitializeFromBitmap#3:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDragSourceHelper2", 100663798, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper2_InitializeFromBitmap},
    {"InitializeFromWindow#4:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDragSourceHelper", 100663787, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper_InitializeFromWindow},
    {"InitializeFromWindow#4:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDragSourceHelper2", 100663801, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper2_InitializeFromWindow},
    {"Inverse#2:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664572, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Inverse},
    {"Invoke#8:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664280, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_Invoke},
    {"Invoke#9:System.Private.Windows.Core:Windows.Win32.System.Com:IDispatch", 100664209, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDispatch_Invoke},
    {"InvokeEx#8:System.Private.Windows.Core:Windows.Win32.System.Ole:IDispatchEx", 100663968, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDispatchEx_InvokeEx},
    {"IsDirty#1:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664541, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsDirty},
    {"IsDirty#1:System.Private.Windows.Core:Windows.Win32.System.Com:IPersistStream", 100664609, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_IsDirty},
    {"IsEqual#2:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664562, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsEqual},
    {"IsMatchingType#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664128, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_IsMatchingType},
    {"IsName#4:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664737, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_IsName},
    {"IsRunning#2:System.Private.Windows.Core:Windows.Win32.System.Com:IRunningObjectTable", 100664631, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_IsRunning},
    {"IsRunning#4:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664567, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsRunning},
    {"IsSystemMoniker#2:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664585, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_IsSystemMoniker},
    {"Load#2:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664543, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Load},
    {"Load#2:System.Private.Windows.Core:Windows.Win32.System.Com:IPersistStream", 100664611, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_Load},
    {"LoadAssembly#3:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663583, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssembly},
    {"LoadAssemblyAndGetFunctionPointer#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663582, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyAndGetFunctionPointer},
    {"LoadAssemblyBytes#6:System.Private.CoreLib:Internal.Runtime.InteropServices:ComponentActivator", 100663585, wasm_native_to_interp_System_Private_CoreLib_Internal_Runtime_InteropServices_ComponentActivator_LoadAssemblyBytes},
    {"LockRegion#4:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664688, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_LockRegion},
    {"MoveElementTo#5:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664788, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_MoveElementTo},
    {"Next#4:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IEnumSTATSTG", 100664756, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Next},
    {"Next#4:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumFORMATETC", 100664440, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Next},
    {"Next#4:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumMoniker", 100664456, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Next},
    {"Next#4:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumSTATDATA", 100664473, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Next},
    {"Next#4:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumString", 100664490, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Next},
    {"Next#4:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumUnknown", 100664506, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Next},
    {"NoteChangeTime#3:System.Private.Windows.Core:Windows.Win32.System.Com:IRunningObjectTable", 100664636, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_NoteChangeTime},
    {"OnClose#1:System.Private.Windows.Core:Windows.Win32.System.Com:IAdviseSink", 100664367, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnClose},
    {"OnDataChange#3:System.Private.Windows.Core:Windows.Win32.System.Com:IAdviseSink", 100664359, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnDataChange},
    {"OnRename#2:System.Private.Windows.Core:Windows.Win32.System.Com:IAdviseSink", 100664363, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnRename},
    {"OnSave#1:System.Private.Windows.Core:Windows.Win32.System.Com:IAdviseSink", 100664365, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnSave},
    {"OnViewChange#3:System.Private.Windows.Core:Windows.Win32.System.Com:IAdviseSink", 100664361, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IAdviseSink_OnViewChange},
    {"OpenStorage#7:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664782, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_OpenStorage},
    {"OpenStream#6:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664776, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_OpenStream},
    {"ParseDisplayName#6:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664582, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_ParseDisplayName},
    {"PictureChanged#1:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664066, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_PictureChanged},
    {"PutField#5:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664120, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_PutField},
    {"PutFieldNoCopy#5:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664123, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_PutFieldNoCopy},
    {"QueryContinueDrag#3:System.Private.Windows.Core:Windows.Win32.System.Ole:IDropSource", 100663992, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IDropSource_QueryContinueDrag},
    {"QueryGetData#2:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664414, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_QueryGetData},
    {"QueryInterface#3:System.Private.Windows.Core:Windows.Win32.System.Com:CCW", 100666591, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_CCW_QueryInterface},
    {"QueryService#4:System.Private.Windows.Core:Windows.Win32.System.Com:IServiceProvider", 100664664, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IServiceProvider_QueryService},
    {"Read#4:System.Private.Windows.Core:Windows.Win32.System.Com:ISequentialStream", 100664651, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ISequentialStream_Read},
    {"Read#4:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664674, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Read},
    {"RecordClear#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664099, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordClear},
    {"RecordCopy#3:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664101, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordCopy},
    {"RecordCreate#1:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664130, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordCreate},
    {"RecordCreateCopy#3:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664133, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordCreateCopy},
    {"RecordDestroy#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664135, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordDestroy},
    {"RecordInit#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IRecordInfo", 100664097, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IRecordInfo_RecordInit},
    {"Reduce#5:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664556, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Reduce},
    {"ReferenceTableProxyImplementation#3:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663422, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_ReferenceTableProxyImplementation},
    {"Register#5:System.Private.Windows.Core:Windows.Win32.System.Com:IRunningObjectTable", 100664627, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_Register},
    {"RegisterInterfaceInGlobal#4:System.Private.Windows.Core:Windows.Win32.System.Com:IGlobalInterfaceTable", 100664523, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IGlobalInterfaceTable_RegisterInterfaceInGlobal},
    {"RegisterObjectBound#2:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664377, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RegisterObjectBound},
    {"RegisterObjectParam#3:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664391, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RegisterObjectParam},
    {"RelativePathTo#3:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664576, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_RelativePathTo},
    {"Release#1:System.Private.Windows.Core:Windows.Win32.System.Com:CCW", 100666593, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_CCW_Release},
    {"ReleaseBoundObjects#1:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664381, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_ReleaseBoundObjects},
    {"ReleaseFuncDesc#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664305, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_ReleaseFuncDesc},
    {"ReleaseTLibAttr#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeLib", 100664743, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeLib_ReleaseTLibAttr},
    {"ReleaseTypeAttr#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664302, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_ReleaseTypeAttr},
    {"ReleaseVarDesc#2:System.Private.Windows.Core:Windows.Win32.System.Com:ITypeInfo", 100664308, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ITypeInfo_ReleaseVarDesc},
    {"RenameElement#3:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664801, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_RenameElement},
    {"Render#11:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664051, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_Render},
    {"Reset#1:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IEnumSTATSTG", 100664760, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Reset},
    {"Reset#1:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumFORMATETC", 100664444, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Reset},
    {"Reset#1:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumMoniker", 100664460, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Reset},
    {"Reset#1:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumSTATDATA", 100664477, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Reset},
    {"Reset#1:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumString", 100664494, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Reset},
    {"Reset#1:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumUnknown", 100664510, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Reset},
    {"Revert#1:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664792, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_Revert},
    {"Revert#1:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664686, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Revert},
    {"Revoke#2:System.Private.Windows.Core:Windows.Win32.System.Com:IRunningObjectTable", 100664629, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IRunningObjectTable_Revoke},
    {"RevokeInterfaceFromGlobal#2:System.Private.Windows.Core:Windows.Win32.System.Com:IGlobalInterfaceTable", 100664525, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IGlobalInterfaceTable_RevokeInterfaceFromGlobal},
    {"RevokeObjectBound#2:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664379, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RevokeObjectBound},
    {"RevokeObjectParam#2:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664397, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_RevokeObjectParam},
    {"SKBitmapReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663506, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKBitmapReleaseProxyImplementation},
    {"SKDataReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663507, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKDataReleaseProxyImplementation},
    {"SKGlyphPathProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663508, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKGlyphPathProxyImplementation},
    {"SKImageRasterReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663509, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementation},
    {"SKImageRasterReleaseProxyImplementationForCoTaskMem#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663510, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageRasterReleaseProxyImplementationForCoTaskMem},
    {"SKImageTextureReleaseProxyImplementation#1:SkiaSharp:SkiaSharp:DelegateProxies", 100663511, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKImageTextureReleaseProxyImplementation},
    {"SKManagedDrawableApproximateBytesUsedProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663512, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableApproximateBytesUsedProxyImplementation},
    {"SKManagedDrawableDestroyProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663513, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDestroyProxyImplementation},
    {"SKManagedDrawableDrawProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663514, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableDrawProxyImplementation},
    {"SKManagedDrawableGetBoundsProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663515, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableGetBoundsProxyImplementation},
    {"SKManagedDrawableMakePictureSnapshotProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663516, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedDrawableMakePictureSnapshotProxyImplementation},
    {"SKManagedStreamDestroyProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663517, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDestroyProxyImplementation},
    {"SKManagedStreamDuplicateProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663518, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamDuplicateProxyImplementation},
    {"SKManagedStreamForkProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663519, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamForkProxyImplementation},
    {"SKManagedStreamGetLengthProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663520, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetLengthProxyImplementation},
    {"SKManagedStreamGetPositionProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663521, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamGetPositionProxyImplementation},
    {"SKManagedStreamHasLengthProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663522, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasLengthProxyImplementation},
    {"SKManagedStreamHasPositionProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663523, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamHasPositionProxyImplementation},
    {"SKManagedStreamIsAtEndProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663524, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamIsAtEndProxyImplementation},
    {"SKManagedStreamMoveProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663525, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamMoveProxyImplementation},
    {"SKManagedStreamPeekProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663526, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamPeekProxyImplementation},
    {"SKManagedStreamReadProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663527, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamReadProxyImplementation},
    {"SKManagedStreamRewindProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663528, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamRewindProxyImplementation},
    {"SKManagedStreamSeekProxyImplementation#3:SkiaSharp:SkiaSharp:DelegateProxies", 100663529, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedStreamSeekProxyImplementation},
    {"SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation#6:SkiaSharp:SkiaSharp:DelegateProxies", 100663530, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpNumericValueProxyImplementation},
    {"SKManagedTraceMemoryDumpDumpStringValueProxyImplementation#5:SkiaSharp:SkiaSharp:DelegateProxies", 100663531, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedTraceMemoryDumpDumpStringValueProxyImplementation},
    {"SKManagedWStreamBytesWrittenProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663532, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamBytesWrittenProxyImplementation},
    {"SKManagedWStreamDestroyProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663533, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamDestroyProxyImplementation},
    {"SKManagedWStreamFlushProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663534, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamFlushProxyImplementation},
    {"SKManagedWStreamWriteProxyImplementation#4:SkiaSharp:SkiaSharp:DelegateProxies", 100663535, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKManagedWStreamWriteProxyImplementation},
    {"SKSurfaceRasterReleaseProxyImplementation#2:SkiaSharp:SkiaSharp:DelegateProxies", 100663536, wasm_native_to_interp_SkiaSharp_SkiaSharp_DelegateProxies_SKSurfaceRasterReleaseProxyImplementation},
    {"Save#3:System.Private.Windows.Core:Windows.Win32.System.Com:IMoniker", 100664545, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IMoniker_Save},
    {"Save#3:System.Private.Windows.Core:Windows.Win32.System.Com:IPersistStream", 100664613, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IPersistStream_Save},
    {"SaveAsFile#4:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664069, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_SaveAsFile},
    {"Seek#4:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664678, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Seek},
    {"SelectPicture#4:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664059, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_SelectPicture},
    {"SetAsyncMode#2:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDataObjectAsyncCapability", 100663763, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_SetAsyncMode},
    {"SetBindOptions#2:System.Private.Windows.Core:Windows.Win32.System.Com:IBindCtx", 100664384, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IBindCtx_SetBindOptions},
    {"SetClass#2:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664807, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_SetClass},
    {"SetData#4:System.Private.Windows.Core:Windows.Win32.System.Com:IDataObject", 100664420, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IDataObject_SetData},
    {"SetElementTimes#5:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664804, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_SetElementTimes},
    {"SetFlags#2:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDragSourceHelper2", 100663803, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDragSourceHelper2_SetFlags},
    {"SetSize#2:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664680, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_SetSize},
    {"SetStateBits#3:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664809, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_SetStateBits},
    {"Show#2:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDropTargetHelper", 100663824, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDropTargetHelper_Show},
    {"Skip#2:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IEnumSTATSTG", 100664758, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IEnumSTATSTG_Skip},
    {"Skip#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumFORMATETC", 100664442, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumFORMATETC_Skip},
    {"Skip#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumMoniker", 100664458, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumMoniker_Skip},
    {"Skip#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumSTATDATA", 100664475, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumSTATDATA_Skip},
    {"Skip#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumString", 100664492, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumString_Skip},
    {"Skip#2:System.Private.Windows.Core:Windows.Win32.System.Com:IEnumUnknown", 100664508, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IEnumUnknown_Skip},
    {"StartOperation#2:System.Private.Windows.Core:Windows.Win32.UI.Shell:IDataObjectAsyncCapability", 100663768, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_UI_Shell_IDataObjectAsyncCapability_StartOperation},
    {"Stat#3:System.Private.Windows.Core:Windows.Win32.System.Com.StructuredStorage:IStorage", 100664812, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_StructuredStorage_IStorage_Stat},
    {"Stat#3:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664693, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Stat},
    {"TimerHandler#0:System.Private.CoreLib:System.Threading:TimerQueue", 100680379, wasm_native_to_interp_System_Private_CoreLib_System_Threading_TimerQueue_TimerHandler},
    {"UnicodeCombiningClassProxyImplementation#3:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663423, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeCombiningClassProxyImplementation},
    {"UnicodeComposeProxyImplementation#5:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663424, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeComposeProxyImplementation},
    {"UnicodeDecomposeProxyImplementation#5:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663425, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeDecomposeProxyImplementation},
    {"UnicodeGeneralCategoryProxyImplementation#3:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663426, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeGeneralCategoryProxyImplementation},
    {"UnicodeMirroringProxyImplementation#3:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663427, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeMirroringProxyImplementation},
    {"UnicodeScriptProxyImplementation#3:HarfBuzzSharp:HarfBuzzSharp:DelegateProxies", 100663428, wasm_native_to_interp_HarfBuzzSharp_HarfBuzzSharp_DelegateProxies_UnicodeScriptProxyImplementation},
    {"UnlockRegion#4:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664690, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_UnlockRegion},
    {"Write#4:System.Private.Windows.Core:Windows.Win32.System.Com:ISequentialStream", 100664653, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_ISequentialStream_Write},
    {"Write#4:System.Private.Windows.Core:Windows.Win32.System.Com:IStream", 100664676, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Com_IStream_Write},
    {"get_Attributes#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664072, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Attributes},
    {"get_CurDC#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664056, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_CurDC},
    {"get_Handle#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664036, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Handle},
    {"get_Height#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664048, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Height},
    {"get_KeepOriginalFormat#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664062, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_KeepOriginalFormat},
    {"get_Type#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664042, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Type},
    {"get_Width#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664045, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_Width},
    {"get_hPal#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664039, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_get_hPal},
    {"put_KeepOriginalFormat#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664064, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_put_KeepOriginalFormat},
    {"set_hPal#2:System.Private.Windows.Core:Windows.Win32.System.Ole:IPicture", 100664053, wasm_native_to_interp_System_Private_Windows_Core_Windows_Win32_System_Ole_IPicture_set_hPal}
};
