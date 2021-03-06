/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPlaceCardRequester : NSObject <GEOPlaceDataProxy> {
    <GEOPlaceDataProxy> * _proxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedRequester;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;

- (void)applyRAPUpdatedMapItems:(id)arg1;
- (void)calculateFreeableSpaceWithHandler:(id /* block */)arg1;
- (void)cancelRequest:(id)arg1;
- (void)clearCache;
- (void)dealloc;
- (void)fetchAllCacheEntriesWithRequesterHandler:(id /* block */)arg1;
- (id)init;
- (void)performPlaceDataRequest:(id)arg1 traits:(id)arg2 timeout:(double)arg3 auditToken:(id)arg4 networkActivity:(id /* block */)arg5 requesterHandler:(id /* block */)arg6;
- (void)requestComponentsFromNetwork:(id)arg1 muid:(unsigned long long)arg2 resultProviderID:(int)arg3 traits:(id)arg4 auditToken:(id)arg5 requesterHandler:(id /* block */)arg6;
- (void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(bool)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 networkActivity:(id /* block */)arg7 requesterHandler:(id /* block */)arg8;
- (void)requestMUIDs:(id)arg1 resultProviderID:(int)arg2 includeETA:(bool)arg3 traits:(id)arg4 options:(unsigned long long)arg5 auditToken:(id)arg6 requesterHandler:(id /* block */)arg7;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3 auditToken:(id)arg4 networkActivity:(id /* block */)arg5 requesterHandler:(id /* block */)arg6;
- (void)requestPhoneNumbers:(id)arg1 allowCellularDataForLookup:(bool)arg2 traits:(id)arg3 auditToken:(id)arg4 requesterHandler:(id /* block */)arg5;
- (void)shrinkBySize:(unsigned long long)arg1 finished:(id /* block */)arg2;
- (void)trackPlaceData:(id)arg1;

@end
