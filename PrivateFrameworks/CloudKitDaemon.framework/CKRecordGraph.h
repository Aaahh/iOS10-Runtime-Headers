/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@class NSArray, NSMutableSet;

@interface CKRecordGraph : NSObject  {
    NSMutableSet *_nodes;
    NSArray *_sortedRecords;
}

@property(copy) NSMutableSet * nodes;
@property(retain) NSArray * sortedRecords;


- (id)recordsByTopologicalSortWithError:(id*)arg1;
- (bool)addRecords:(id)arg1 error:(id*)arg2;
- (id)sortedRecords;
- (void)setSortedRecords:(id)arg1;
- (void)setNodes:(id)arg1;
- (id)nodes;
- (id)init;
- (void).cxx_destruct;
- (id)description;

@end