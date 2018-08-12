//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseViewController.h"

@class NSMutableArray, TTTHeadTabContainerView, UIScrollView, UIView;

@interface TTTChannelTopNavViewController : TTTBaseViewController
{
    _Bool _isTapButton;
    _Bool _isFisrtIn;
    UIView *_containerView;
    UIScrollView *_pageScrollView;
    TTTHeadTabContainerView *_headTabView;
    NSMutableArray *_containerViewControllers;
    TTTBaseViewController *_currentChannelViewController;
    unsigned long long _currentPageNum;
}

@property(nonatomic) _Bool isFisrtIn; // @synthesize isFisrtIn=_isFisrtIn;
@property(nonatomic) unsigned long long currentPageNum; // @synthesize currentPageNum=_currentPageNum;
@property(nonatomic) _Bool isTapButton; // @synthesize isTapButton=_isTapButton;
@property(retain, nonatomic) TTTBaseViewController *currentChannelViewController; // @synthesize currentChannelViewController=_currentChannelViewController;
@property(retain, nonatomic) NSMutableArray *containerViewControllers; // @synthesize containerViewControllers=_containerViewControllers;
@property(retain, nonatomic) TTTHeadTabContainerView *headTabView; // @synthesize headTabView=_headTabView;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)changeNavToImmersive:(double)arg1;
- (void)p_copyNavBar;
- (void)p_loadVC:(long long)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)p_replaceTopTabVC:(id)arg1 toWebVC:(id)arg2 index:(long long)arg3;
- (void)p_adjustScrollToTop;
- (void)goToHeaderChannelViewController:(id)arg1;
- (void)p_firstVCLoading;
- (void)p_updateHeadTabList;
- (void)viewDidLayoutSubviews;
- (void)p_initViewDatas;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithVC:(id)arg1;

@end

