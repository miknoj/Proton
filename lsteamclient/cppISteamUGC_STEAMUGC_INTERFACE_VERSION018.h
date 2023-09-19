struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t unAccountID;
    uint32_t eListType;
    uint32_t eMatchingUGCType;
    uint32_t eSortOrder;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUserUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    uint32_t unPage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t eQueryType;
    uint32_t eMatchingeMatchingUGCTypeFileType;
    uint32_t nCreatorAppID;
    uint32_t nConsumerAppID;
    const char *pchCursor;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryAllUGCRequest_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateQueryUGCDetailsRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SendQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    winSteamUGCDetails_t_158 *pDetails;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCResult_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t indexTag;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t indexTag;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCTagDisplayName_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchURL;
    uint32_t cchURLSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCPreviewURL_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    char *pchMetadata;
    uint32_t cchMetadatasize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t eStatType;
    uint64_t *pStatValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCStatistic_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t previewIndex;
    char *pchURLOrVideoID;
    uint32_t cchURLSize;
    char *pchOriginalFileName;
    uint32_t cchOriginalFileNameSize;
    uint32_t *pPreviewType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCAdditionalPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCNumKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t keyValueTagIndex;
    char *pchKey;
    uint32_t cchKeySize;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pchKey;
    char *pchValue;
    uint32_t cchValueSize;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCKeyValueTag_2_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint32_t index;
    uint32_t *pvecDescriptors;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetQueryUGCContentDescriptors_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ReleaseQueryUGCRequest_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const SteamParamStringArray_t *pTagGroups;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredTagGroup_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pTagName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddExcludedTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnOnlyIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnOnlyIDs_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnKeyValueTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnLongDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnLongDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnMetadata;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnChildren;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnChildren_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnAdditionalPreviews;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnAdditionalPreviews_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bReturnTotalOnly;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnTotalOnly_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetReturnPlaytimeStats_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowCachedResponse_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pMatchCloudFileName;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetCloudFileNameFilter_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bMatchAnyTag;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetMatchAnyTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pSearchText;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetSearchText_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t unDays;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetRankedByTrendDays_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t rtStart;
    uint32_t rtEnd;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeCreatedDateRange_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t rtStart;
    uint32_t rtEnd;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetTimeUpdatedDateRange_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pKey;
    const char *pValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddRequiredKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t unMaxAgeSeconds;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RequestUGCDetails_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint32_t eFileType;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_CreateItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nConsumerAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchTitle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTitle_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchDescription;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemDescription_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchLanguage;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemUpdateLanguage_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchMetaData;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemMetadata_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t eVisibility;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemVisibility_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t updateHandle;
    const SteamParamStringArray_t *pTags;
    bool bAllowAdminTags;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszContentFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemContent_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    bool bAllowLegacyUpload;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetAllowLegacyUpload_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAllItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemKeyValueTags_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pchKey;
    const char *pchValue;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemKeyValueTag_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszPreviewFile;
    uint32_t type;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszPreviewFile;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewFile_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
    const char *pszVideoID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UpdateItemPreviewVideo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t index;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemPreview_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t descid;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddContentDescriptor_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor_params
{
    void *linux_side;
    bool _ret;
    uint64_t handle;
    uint32_t descid;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveContentDescriptor_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t handle;
    const char *pchChangeNote;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubmitItemUpdate_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t handle;
    uint64_t *punBytesProcessed;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemUpdateProgress_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    bool bVoteUp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserItemVote_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddItemToFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites_params
{
    void *linux_side;
    uint64_t _ret;
    uint32_t nAppId;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveItemFromFavorites_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_UnsubscribeItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetNumSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetSubscribedItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState_params
{
    void *linux_side;
    uint32_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemState_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punSizeOnDisk;
    char *pchFolder;
    uint32_t cchFolderSize;
    uint32_t *punTimeStamp;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemInstallInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    uint64_t *punBytesDownloaded;
    uint64_t *punBytesTotal;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetItemDownloadInfo_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem_params
{
    void *linux_side;
    bool _ret;
    uint64_t nPublishedFileID;
    bool bHighPriority;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DownloadItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer_params
{
    void *linux_side;
    bool _ret;
    uint32_t unWorkshopDepotID;
    const char *pszFolder;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_BInitWorkshopForGameServer_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads_params
{
    void *linux_side;
    bool bSuspend;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_SuspendDownloads_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StartPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t *pvecPublishedFileID;
    uint32_t unNumPublishedFileIDs;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTracking_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_StopPlaytimeTrackingForAllItems_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nParentPublishedFileID;
    uint64_t nChildPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_AddAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
    uint32_t nAppID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_RemoveAppDependency_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetAppDependencies_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem_params
{
    void *linux_side;
    uint64_t _ret;
    uint64_t nPublishedFileID;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_DeleteItem_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA_params
{
    void *linux_side;
    bool _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_ShowWorkshopEULA_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus_params
{
    void *linux_side;
    uint64_t _ret;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetWorkshopEULAStatus_params *params );

struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences_params
{
    void *linux_side;
    uint32_t _ret;
    uint32_t *pvecDescriptors;
    uint32_t cMaxEntries;
};
extern void cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences( struct cppISteamUGC_STEAMUGC_INTERFACE_VERSION018_GetUserContentDescriptorPreferences_params *params );

