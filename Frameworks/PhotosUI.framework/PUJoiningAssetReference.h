/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUJoiningAssetReference : PUAssetReference {
    PUAssetReference * _containedAssetReference;
    int  _hintDataSourceIndex;
}

@property (nonatomic, readonly) PUAssetReference *containedAssetReference;
@property (nonatomic, readonly) int hintDataSourceIndex;

- (void).cxx_destruct;
- (id)containedAssetReference;
- (id)description;
- (int)hintDataSourceIndex;
- (id)initWithAsset:(id)arg1 assetCollection:(id)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;
- (id)initWithContainedAssetReference:(id)arg1 hintDataSourceIndex:(int)arg2 indexPath:(id)arg3 dataSourceIdentifier:(id)arg4;

@end