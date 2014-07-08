/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@class NSString, NSArray, CKNotificationID, NSNumber;

@interface CKNotification : NSObject <NSSecureCoding> {
    bool_isPruned;
    long long _notificationType;
    CKNotificationID *_notificationID;
    NSString *_containerIdentifier;
    NSString *_alertBody;
    NSString *_alertLocalizationKey;
    NSArray *_alertLocalizationArgs;
    NSString *_alertActionLocalizationKey;
    NSString *_alertLaunchImage;
    NSNumber *_badge;
    NSString *_soundName;
}

@property long long notificationType;
@property(copy) CKNotificationID * notificationID;
@property(copy) NSString * containerIdentifier;
@property bool isPruned;
@property(copy) NSString * alertBody;
@property(copy) NSString * alertLocalizationKey;
@property(copy) NSArray * alertLocalizationArgs;
@property(copy) NSString * alertActionLocalizationKey;
@property(copy) NSString * alertLaunchImage;
@property(copy) NSNumber * badge;
@property(copy) NSString * soundName;

+ (id)notificationFromRemoteNotificationDictionary:(id)arg1;
+ (id)_realNotificationFromRemoteNotificationDictionary:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)setBadge:(id)arg1;
- (id)badge;
- (id)alertActionLocalizationKey;
- (id)alertLocalizationArgs;
- (id)alertLocalizationKey;
- (bool)isPruned;
- (long long)notificationType;
- (void)setAlertActionLocalizationKey:(id)arg1;
- (void)setAlertLocalizationArgs:(id)arg1;
- (void)setAlertLocalizationKey:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setIsPruned:(bool)arg1;
- (void)setNotificationID:(id)arg1;
- (void)setNotificationType:(long long)arg1;
- (id)initWithRemoteNotificationDictionary:(id)arg1;
- (id)_initBare;
- (id)CKPropertiesDescription;
- (id)containerIdentifier;
- (id)notificationID;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (bool)isRead;
- (id)alertLaunchImage;
- (void)setSoundName:(id)arg1;
- (void)setAlertLaunchImage:(id)arg1;
- (void)setAlertBody:(id)arg1;
- (id)soundName;
- (id)alertBody;

@end