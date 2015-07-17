/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLDismissGestureRecognizer : NSObject {
    NSMutableArray * _actions;
    int  _state;
    QLDismissTrackingInformation * _trackingInformation;
}

@property (nonatomic) int state;
@property (retain) QLDismissTrackingInformation *trackingInformation;

- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)dealloc;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setState:(int)arg1;
- (void)setTrackingInformation:(id)arg1;
- (int)state;
- (id)trackingInformation;

@end