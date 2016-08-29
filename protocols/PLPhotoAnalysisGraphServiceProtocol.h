/* Generated by RuntimeBrowser.
 */

@protocol PLPhotoAnalysisGraphServiceProtocol

@required

- (void)generateMemoriesRelatedDiagnosticsLogsWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)generateMemoriesWithOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)notifyWhenGraphReadyWithCoalescingIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)rebuildGraphWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)requestAllSocialGroupsForFaceCollectionIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestAssetCollectionsRelatedToAssetCollectionWithLocalIdentifier:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestAssetCollectionsRelatedToAssetWithLocalIdentifier:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestAssetCollectionsRelatedToFaceCollectionIdentifiers:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSArray *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestAssetCollectionsRelatedToMomentWithLocalIdentifier:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestAssetsForFaceCollectionIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestCuratedAssetForAssetCollectionWithLocalIdentifier:(void *)arg1 referenceAssetLocalIdentifier:(void *)arg2 precision:(void *)arg3 options:(void *)arg4 context:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, unsigned long long, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestCuratedAssetsForAssetCollectionWithLocalIdentifier:(void *)arg1 duration:(void *)arg2 precision:(void *)arg3 options:(void *)arg4 context:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSString *, unsigned long long, unsigned long long, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestCurationDebugInformationForAsset:(void *)arg1 precision:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestDefaultsObjectForKey:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 12: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, void*, inout unsigned short, void*, const const out const void*, void*
- (void)requestExportGraphServiceForPurpose:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestGraphRebuildFractionCompletedWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (void)requestGraphServiceStatisticWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestGraphServiceStatusWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestInvalidateServicePersistentCachesWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestInvalidateServiceTransientCachesWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestMemoryDebugInformationForMemoryWithLocalIdentifier:(void *)arg1 precision:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestMetadataSnapshotFolderCreationWithContext:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestPerformUpdatesForMomentLocalIdentifiersToInsert:(void *)arg1 momentLocalIdentifiersToDelete:(void *)arg2 momentLocalIdentifiersToReload:(void *)arg3 context:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 10: NSArray *, NSArray *, NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)requestRelatedDebugInformationBetweenAssetForLocalIdentifier:(void *)arg1 andRelatedMomentForLocalIdentifier:(void *)arg2 precision:(void *)arg3 relatedType:(void *)arg4 context:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, unsigned long long, unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestRelatedDebugInformationBetweenMomentForLocalIdentifier:(void *)arg1 andRelatedMomentForLocalIdentifier:(void *)arg2 precision:(void *)arg3 relatedType:(void *)arg4 context:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSString *, unsigned long long, unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)requestRelatedMomentsForFaceCollectionIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestRepresentativeAssetsForAssetCollectionWithLocalIdentifier:(void *)arg1 options:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSString *, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestSetDefaultsObject:(void *)arg1 forKey:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: id, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)requestSnapshotServiceForCurationResultsWithGraphOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestSnapshotServiceForMomentWithLocalIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenAssetForLocalIdentifier:(void *)arg1 andRelatedResultsForLocalIdentifiers:(void *)arg2 precision:(void *)arg3 relatedType:(void *)arg4 context:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: NSString *, NSArray *, unsigned long long, unsigned long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestSnapshotServiceForRelatedDebugInfoBetweenMomentForLocalIdentifier:(void *)arg1 andRelatedResultsForLocalIdentifiers:(void *)arg2 precision:(void *)arg3 relatedType:(void *)arg4 additionalSnapshotSummaryInfo:(void *)arg5 context:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 13: NSString *, NSArray *, unsigned long long, unsigned long long, NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestSnapshotServiceForRelatedResultsWithGraphOptions:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSDictionary *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestSnapshotServiceForRelatedWithAssetLocalIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestSnapshotServiceForRelatedWithMomentLocalIdentifier:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)requestSocialGroupsForFaceCollectionIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestSortedArrayOfFaceCollectionIdentifiers:(void *)arg1 context:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: NSArray *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)requestTitleForAssetCollectionWithLocalIdentifier:(void *)arg1 format:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSString *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)requestTitleForCollectionMomentListWithLocalIdentifier:(void *)arg1 format:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSString *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)requestTitleForPersonIdentifiers:(void *)arg1 format:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 11: NSArray *, long long, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSString *, NSError *, void*
- (void)requestWriteAdditionalDataToSnapshotResults:(void *)arg1 forFilenameKey:(void *)arg2 context:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSData *, NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*

@end