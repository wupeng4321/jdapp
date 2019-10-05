//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDWebViewController.h"

@class JDReloadView, JDTokenDAO;

@interface SSSSGBWebViewController : JDWebViewController
{
    _Bool _webViewHasLoaded;
    JDReloadView *_reloadView;
    JDTokenDAO *_tokenDAO;
}

@property(nonatomic) _Bool webViewHasLoaded; // @synthesize webViewHasLoaded=_webViewHasLoaded;
@property(retain, nonatomic) JDTokenDAO *tokenDAO; // @synthesize tokenDAO=_tokenDAO;
@property(retain, nonatomic) JDReloadView *reloadView; // @synthesize reloadView=_reloadView;
- (void).cxx_destruct;
- (void)reconnect;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)p_showReloadView:(_Bool)arg1;
- (void)p_basicConfig;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)loadView;

@end
