//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDWebViewDelegate-Protocol.h"

@class CustomActivityIndicatorView, JDWebView, NSString;

@interface AgreementViewController : JDViewController <JDWebViewDelegate>
{
    JDWebView *webView_;
    CustomActivityIndicatorView *activityView_;
    NSString *_agreementUrlString;
    CDUnknownBlockType _completion;
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) NSString *agreementUrlString; // @synthesize agreementUrlString=_agreementUrlString;
- (void).cxx_destruct;
- (void)backButtonClicked;
- (void)recursion:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)initNav;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

