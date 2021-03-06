//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDWebViewController.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class JDImageView, JDTokenDAO, NSString;

@interface JDSecondMainPageViewController : JDWebViewController <UIGestureRecognizerDelegate>
{
    JDImageView *_maskView;
    _Bool _isH5Ready;
    _Bool _isToastShowing;
    _Bool _hasToasted;
    JDTokenDAO *_tokenDAO;
    _Bool _changeNav;
}

@property(nonatomic) _Bool changeNav; // @synthesize changeNav=_changeNav;
- (void).cxx_destruct;
- (_Bool)customSubClassNaviItems;
- (_Bool)customNaviBackgroundDisabled;
- (_Bool)loadingCircleDisabled;
- (void)didClickBackgroundInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)retry;
- (void)cancelCheck;
- (void)beiginCheck;
- (void)reload;
- (void)stopLoading;
- (void)readycheck;
- (void)h5IsReady;
- (void)setUserInfo:(id)arg1;
- (void)exit;
- (void)refreshNavItem;
- (void)customShareButton;
- (void)customBackButton;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

