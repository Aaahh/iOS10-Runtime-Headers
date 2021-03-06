/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAnalytics : NSObject {
    long long  _defaultCategoryType;
    NSObject<OS_dispatch_queue> * _queue;
    <AFAnalyticsService> * _service;
}

@property (nonatomic, readonly) long long defaultCategoryType;

+ (id)sharedAnalytics;
+ (id)syncAnalytics;

- (void).cxx_destruct;
- (id)_service:(bool)arg1;
- (void)_stageEvent:(id)arg1;
- (void)_stageEvents:(id)arg1;
- (long long)defaultCategoryType;
- (id)init;
- (id)initWithDefaultCategoryType:(long long)arg1;
- (void)logEvent:(id)arg1;
- (void)logEventWithType:(long long)arg1 context:(id)arg2;
- (void)logEventWithType:(long long)arg1 context:(id)arg2 contextNoCopy:(bool)arg3;
- (void)logEventWithType:(long long)arg1 contextProvider:(id /* block */)arg2;
- (void)logEventWithType:(long long)arg1 contextProvider:(id /* block */)arg2 contextProvidingQueue:(id)arg3;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 categoryType:(long long)arg3 context:(id)arg4 contextNoCopy:(bool)arg5;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 categoryType:(long long)arg3 contextProvider:(id /* block */)arg4 contextProvidingQueue:(id)arg5;
- (void)logEventWithType:(long long)arg1 machAbsoluteTime:(unsigned long long)arg2 context:(id)arg3;
- (void)logEvents:(id)arg1;
- (void)setService:(id)arg1;

@end
