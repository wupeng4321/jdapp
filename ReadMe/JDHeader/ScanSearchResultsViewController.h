//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "HomePageChannelActionBlockProvider-Protocol.h"
#import "HomePageChannelActionManagerDelegate-Protocol.h"
#import "JDSHPzgCropImageViewDelegate-Protocol.h"
#import "ScanSearchResultsControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class HomePageChannelActionManager, JDSHPzgCropImageView, NSMutableArray, NSMutableSet, NSString, ScanSearchResultInfoView, ScanSearchResultMainCategoriesHeaderView, ScanSearchResultsController, ScanSearchResultsListView, ScanSearchResultsLoadingView, UIButton, UIImage, UIImageView, UIView;

@interface ScanSearchResultsViewController : JDViewController <UITableViewDataSource, UITableViewDelegate, ScanSearchResultsControllerDelegate, HomePageChannelActionManagerDelegate, JDSHPzgCropImageViewDelegate, HomePageChannelActionBlockProvider>
{
    _Bool _firstLoad;
    _Bool _headerViewHidden;
    _Bool _animating;
    UIImage *_image;
    NSString *_imageURL;
    ScanSearchResultsController *_resultsController;
    UIView *_titleView;
    UIImageView *_titleImageView;
    UIView *_headerView;
    UIView *_tableFooterView;
    UIButton *_scrollToTopButton;
    ScanSearchResultMainCategoriesHeaderView *_sectionHeader;
    JDSHPzgCropImageView *_cropImageView;
    ScanSearchResultsLoadingView *_loadingView;
    ScanSearchResultsListView *_listView;
    ScanSearchResultInfoView *_infoView;
    HomePageChannelActionManager *_actionManager;
    NSMutableSet *_impUrlSet;
    NSMutableArray *_impUrlArray;
    NSMutableArray *_exposureIndexpathSet;
    struct CGPoint _tableViewStartOffset;
    struct CGRect _selectedBounds;
}

@property(retain, nonatomic) NSMutableArray *exposureIndexpathSet; // @synthesize exposureIndexpathSet=_exposureIndexpathSet;
@property(retain, nonatomic) NSMutableArray *impUrlArray; // @synthesize impUrlArray=_impUrlArray;
@property(retain, nonatomic) NSMutableSet *impUrlSet; // @synthesize impUrlSet=_impUrlSet;
@property(nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
@property(nonatomic) struct CGPoint tableViewStartOffset; // @synthesize tableViewStartOffset=_tableViewStartOffset;
@property(nonatomic, getter=isHeaderViewHidden) _Bool headerViewHidden; // @synthesize headerViewHidden=_headerViewHidden;
@property(nonatomic, getter=isFirstLoad) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) HomePageChannelActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property(retain, nonatomic) ScanSearchResultInfoView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) ScanSearchResultsListView *listView; // @synthesize listView=_listView;
@property(retain, nonatomic) ScanSearchResultsLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) JDSHPzgCropImageView *cropImageView; // @synthesize cropImageView=_cropImageView;
@property(retain, nonatomic) ScanSearchResultMainCategoriesHeaderView *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property(retain, nonatomic) UIButton *scrollToTopButton; // @synthesize scrollToTopButton=_scrollToTopButton;
@property(retain, nonatomic) UIView *tableFooterView; // @synthesize tableFooterView=_tableFooterView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) ScanSearchResultsController *resultsController; // @synthesize resultsController=_resultsController;
@property(copy, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(nonatomic) struct CGRect selectedBounds; // @synthesize selectedBounds=_selectedBounds;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (void)jdshpzgMainBodyDidSelect:(id)arg1 croppedFrame:(struct CGRect)arg2 indexPath:(long long)arg3;
- (void)jdshpzgCropImageViewDidFinishCropping:(id)arg1 croppedFrame:(struct CGRect)arg2;
- (void)jdshCropImageViewControllerDidFinishCropping:(id)arg1 croppedFrame:(struct CGRect)arg2;
- (void)scanSearchResultsController:(id)arg1 didCompleteWithResults:(id)arg2 error:(id)arg3;
- (void)scanSearchResultsController:(id)arg1 prepareForRequest:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)selectCat;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showOrHiddenHeadView:(_Bool)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)retryButtonMaidian:(id)arg1;
- (CDUnknownBlockType)actionBlock;
- (void)exposureIndexpathSet:(id)arg1;
- (void)exposureUrlsSet;
- (void)scrollToTopButtonClicked:(id)arg1;
- (void)configureInfoView;
- (id)cellDataForRowAtIndexPath:(id)arg1;
- (Class)cellClassForRowAtIndexPath:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithSource:(id)arg1 image:(id)arg2 selectedBounds:(struct CGRect)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
