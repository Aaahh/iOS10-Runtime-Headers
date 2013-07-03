/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingRequestInternal, NSURLRequest, NSURLResponse, AVAssetResourceLoadingDataRequest;

@interface AVAssetResourceLoadingRequest : NSObject  {
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}

@property(readonly) NSURLRequest * request;
@property(getter=isFinished,readonly) BOOL finished;
@property(getter=isCancelled,readonly) BOOL cancelled;
@property(readonly) AVAssetResourceLoadingContentInformationRequest * contentInformationRequest;
@property(readonly) AVAssetResourceLoadingDataRequest * dataRequest;
@property(copy) NSURLResponse * response;
@property(copy) NSURLRequest * redirect;


- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(id)arg4;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id*)arg4;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;
- (void)finishLoadingWithError:(id)arg1;
- (id)serializableRepresentation;
- (void)finishLoading;
- (void)setRedirect:(id)arg1;
- (id)_getAndClearCachedData;
- (void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2;
- (void)_setDataRequest:(id)arg1;
- (void)_setContentInformationRequest:(id)arg1;
- (id)dataRequest;
- (id)contentInformationRequest;
- (id)redirect;
- (void)_appendToCachedData:(id)arg1;
- (void)_sendDataIncrementally:(id)arg1 data:(id)arg2;
- (id)_resourceLoader;
- (id)_requestDictionary;
- (BOOL)_tryToMarkAsCancelled;
- (id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2;
- (void)_addFigPlaybackItemListeners;
- (void)_removeFigPlaybackItemListeners;
- (id)_weakReference;
- (void)finalize;
- (void)dealloc;
- (id)description;
- (BOOL)finished;
- (id)response;
- (void)setResponse:(id)arg1;
- (id)request;
- (BOOL)isFinished;
- (BOOL)isCancelled;

@end