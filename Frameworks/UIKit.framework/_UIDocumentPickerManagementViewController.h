/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray;

@interface _UIDocumentPickerManagementViewController : UITableViewController  {
    NSArray *_allPickers;
}

@property(retain) NSArray * allPickers;


- (id)init;
- (void)switchToggled:(id)arg1;
- (void)setAllPickers:(id)arg1;
- (void)_doneButtonPressed;
- (id)allPickers;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end