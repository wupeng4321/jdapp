//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JDSHNavItemViewShareDelegate-Protocol.h"

@class NSString, UIWebView;

@interface JDSHNavWebViewShareController : NSObject <JDSHNavItemViewShareDelegate>
{
    UIWebView *_webView;
}

@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
- (void).cxx_destruct;
- (void)shareWithInfo:(id)arg1 channelParams:(id)arg2 webView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

