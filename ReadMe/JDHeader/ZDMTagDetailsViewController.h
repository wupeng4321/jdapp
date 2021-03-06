//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMFullscreenViewController.h"

#import "UICollectionViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "ZDMListAdapterDataSource-Protocol.h"
#import "ZDMListAdapterDelegate-Protocol.h"

@class NSLayoutConstraint, NSMutableArray, NSString, UIButton, UICollectionView, ZDMBanner, ZDMListAdapter, ZDMRouter, ZDMSession, ZDMTag;

@interface ZDMTagDetailsViewController : ZDMFullscreenViewController <ZDMListAdapterDataSource, UICollectionViewDelegate, UIScrollViewDelegate, ZDMListAdapterDelegate>
{
    _Bool _isInsideChannel;
    _Bool _hasConfigNavigation;
    ZDMTag *_tag;
    UICollectionView *_collectionView;
    UIButton *_scrollToTopButton;
    NSLayoutConstraint *_bottomSpaceOfScrollButton;
    long long _currentPageNumber;
    ZDMSession *_currentSession;
    ZDMBanner *_banner;
    NSMutableArray *_posts;
    NSMutableArray *_viewedPosts;
    double _contentInset;
    ZDMListAdapter *_adapter;
    ZDMRouter *_router;
}

@property(nonatomic) _Bool hasConfigNavigation; // @synthesize hasConfigNavigation=_hasConfigNavigation;
@property(nonatomic) _Bool isInsideChannel; // @synthesize isInsideChannel=_isInsideChannel;
@property(retain, nonatomic) ZDMRouter *router; // @synthesize router=_router;
@property(retain, nonatomic) ZDMListAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic) double contentInset; // @synthesize contentInset=_contentInset;
@property(retain, nonatomic) NSMutableArray *viewedPosts; // @synthesize viewedPosts=_viewedPosts;
@property(retain, nonatomic) NSMutableArray *posts; // @synthesize posts=_posts;
@property(retain, nonatomic) ZDMBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) ZDMSession *currentSession; // @synthesize currentSession=_currentSession;
@property(nonatomic) long long currentPageNumber; // @synthesize currentPageNumber=_currentPageNumber;
@property(retain, nonatomic) NSLayoutConstraint *bottomSpaceOfScrollButton; // @synthesize bottomSpaceOfScrollButton=_bottomSpaceOfScrollButton;
@property(retain, nonatomic) UIButton *scrollToTopButton; // @synthesize scrollToTopButton=_scrollToTopButton;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(readonly, nonatomic) ZDMTag *tag; // @synthesize tag=_tag;
- (void).cxx_destruct;
- (void)on:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)listAdatper:(id)arg1 willDisplayObject:(id)arg2 atIndex:(long long)arg3;
- (id)listAdapter:(id)arg1 sectionControllerForObject:(id)arg2;
- (id)objectsForListAdapter:(id)arg1;
- (void)backAction;
- (void)requestTagDetails;
- (void)setFullscreen:(_Bool)arg1;
- (void)render;
- (void)reconnect;
- (void)recordPV;
- (void)clickScrollToTopButton;
- (void)setupScrollToTopButton;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithSubmodule:(long long)arg1 parameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

