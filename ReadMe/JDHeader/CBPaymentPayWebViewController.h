//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPBaseWebViewController.h"

#import "UIWebViewDelegate-Protocol.h"

@class CBPaymentPayWebViewParamModel, NSString;

@interface CBPaymentPayWebViewController : JDPBaseWebViewController <UIWebViewDelegate>
{
    CBPaymentPayWebViewParamModel *_paramModel;
}

@property(retain, nonatomic) CBPaymentPayWebViewParamModel *paramModel; // @synthesize paramModel=_paramModel;
- (void).cxx_destruct;
- (void)closeWebViewWithType:(long long)arg1 callBackName:(id)arg2;
- (void)navBarLeftCloseButtonAction:(id)arg1;
- (void)addCookieWithUrl:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithParamModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
