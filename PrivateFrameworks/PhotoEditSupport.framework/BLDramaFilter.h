/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLDramaFilter : CIFilter {
    CIFilter *_colorCubeFilterDrama;
    NSNumber *_inputAmount;
    CIVector *_inputHueStrengthArray;
    CIImage *_inputImage;
    NSNumber *_inputNeutralGamma;
    NSNumber *_inputPhototone;
    float _lastAmount;
    CIVector *_lastHueStrengthArray;
    float _lastNeutralGamma;
    float _lastPhototone;
    BOOL _needsReprocess;
    NSData *_precomputedCube;
}

@property (nonatomic, retain) CIFilter *colorCubeFilterDrama;
@property (nonatomic, copy) NSNumber *inputAmount;
@property (nonatomic, copy) CIVector *inputHueStrengthArray;
@property (nonatomic, retain) CIImage *inputImage;
@property (nonatomic, copy) NSNumber *inputNeutralGamma;
@property (nonatomic, copy) NSNumber *inputPhototone;
@property (nonatomic, retain) CIVector *lastHueStrengthArray;
@property (nonatomic, retain) NSData *precomputedCube;

- (void).cxx_destruct;
- (id)colorCubeFilterDrama;
- (id)init;
- (id)inputAmount;
- (id)inputHueStrengthArray;
- (id)inputImage;
- (id)inputNeutralGamma;
- (id)inputPhototone;
- (id)lastHueStrengthArray;
- (id)outputImage;
- (id)precomputedCube;
- (void)setColorCubeFilterDrama:(id)arg1;
- (void)setDefaults;
- (void)setInputAmount:(id)arg1;
- (void)setInputHueStrengthArray:(id)arg1;
- (void)setInputImage:(id)arg1;
- (void)setInputNeutralGamma:(id)arg1;
- (void)setInputPhototone:(id)arg1;
- (void)setLastHueStrengthArray:(id)arg1;
- (void)setPrecomputedCube:(id)arg1;

@end