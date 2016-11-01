/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPaymentReaderModeDetailsViewController : PKPaymentSetupProvisioningFieldsViewController {
    PKPaymentSetupProduct * _product;
    bool  _termsAccepted;
}

@property (nonatomic, readonly) PKPaymentSetupProduct *product;

- (void).cxx_destruct;
- (void)_pushReaderModeProvisioning;
- (void)_registerLocalDeviceWithCompletion:(id /* block */)arg1;
- (void)_showTerms;
- (id)defaultFields;
- (id)defaultHeaderViewSubTitle;
- (id)defaultHeaderViewTitle;
- (id)footerView;
- (void)handleNextButtonTapped:(id)arg1;
- (id)initWithProvisioningController:(id)arg1 context:(long long)arg2 setupDelegate:(id)arg3 product:(id)arg4;
- (id)product;
- (void)viewDidDisappear:(bool)arg1;
- (id)visibleFieldIdentifiers;

@end