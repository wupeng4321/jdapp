//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDWebViewController.h"

@interface ThirdPartyLoginWebViewController : JDWebViewController
{
    unsigned long long servicetype;
}

+ (id)SplitStringWithSpecialStr:(id)arg1;
+ (id)URLDecodedString:(id)arg1;
+ (void)BackToThridPartyApp;
- (void)recursion:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)backButtonClicked;
- (void)dealloc;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidLoad;
- (id)init;

@end
