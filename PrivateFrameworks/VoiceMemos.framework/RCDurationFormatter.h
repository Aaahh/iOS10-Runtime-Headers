/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCDurationFormatter : NSObject {
    NSNumberFormatter * _numberFormatter;
    NSMutableDictionary * _positionalParameterFormatStrings;
    NSObject<OS_dispatch_queue> * _queue;
}

+ (id)_localizedDateTimeFormatForDurationFormattingStyle:(int)arg1;
+ (id)_localizedPositionalFormatStringForDurationFormattingStyle:(int)arg1;
+ (id)_localizedPositionalFormatStringForLocalizedDateTimeFormat:(id)arg1;
+ (id)sharedFormatter;

- (void).cxx_destruct;
- (id)_onQueuePositionalFormatStringForStyle:(int)arg1;
- (void)_onQueueReloadLocalizedFormatStrings;
- (id)_onQueueStringFromDuration:(double)arg1 byReplacingDigitsWithDigit:(int)arg2 style:(int)arg3;
- (id)_onQueueStringFromDuration:(double)arg1 style:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)reloadLocalizedFormatStrings;
- (id)stringFromDuration:(double)arg1 replacingDigitsWithDigit:(unsigned int)arg2 style:(int)arg3;
- (id)stringFromDuration:(double)arg1 style:(int)arg2;

@end