/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFAtomBackgroundView : UIView  {
    int _style;
    BOOL _selected;
    float _scalingFactor;
}

@property int style;
@property BOOL selected;
@property float scalingFactor;


- (void)setScalingFactor:(float)arg1;
- (float)scalingFactor;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (BOOL)selected;
- (void)setSelected:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 style:(int)arg2;

@end