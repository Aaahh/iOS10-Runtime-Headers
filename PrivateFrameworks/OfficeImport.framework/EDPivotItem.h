/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection;

@interface EDPivotItem : NSObject  {
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection *mItemIndexes;
}

+ (id)pivotItem;

- (id)itemIndexes;
- (void)setRepeatedItemCounts:(unsigned int)arg1;
- (unsigned int)repeatedItemCounts;
- (void)setType:(int)arg1;
- (id)init;
- (void)dealloc;
- (int)type;

@end