//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseViewController.h"

#import "SSSCategoryLandBannerViewDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSMutableDictionary, NSString, SSSCategoryMenuListView, SSSNCategoryBannerView, SSSpikeGoodsTableViewPositionHelper, SeckillTitleView, UICollectionView;

@interface SSSNCategoryViewController : SecKillBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, SSSCategoryLandBannerViewDelegate>
{
    _Bool _isPagerScroll;
    _Bool _isCateFinishReload;
    _Bool _isPagerFinishReload;
    _Bool _isFirstRefresh;
    _Bool _isFirstAppear;
    SSSCategoryMenuListView *_menuView;
    UICollectionView *_pagerView;
    SSSNCategoryBannerView *_cateMenusView;
    NSArray *_categoryItemsArray;
    CDUnknownBlockType _clickBlock;
    NSIndexPath *_currentIndex;
    NSString *_selectCateId;
    NSString *_titleImageUrl;
    SeckillTitleView *_titleImage;
    NSMutableDictionary *_goodsModelDic;
    SSSpikeGoodsTableViewPositionHelper *_positionHelper;
    struct CGPoint _startPoint;
}

@property(retain, nonatomic) SSSpikeGoodsTableViewPositionHelper *positionHelper; // @synthesize positionHelper=_positionHelper;
@property(retain, nonatomic) NSMutableDictionary *goodsModelDic; // @synthesize goodsModelDic=_goodsModelDic;
@property(retain, nonatomic) SeckillTitleView *titleImage; // @synthesize titleImage=_titleImage;
@property(nonatomic) _Bool isFirstAppear; // @synthesize isFirstAppear=_isFirstAppear;
@property(nonatomic) _Bool isFirstRefresh; // @synthesize isFirstRefresh=_isFirstRefresh;
@property(nonatomic) _Bool isPagerFinishReload; // @synthesize isPagerFinishReload=_isPagerFinishReload;
@property(nonatomic) _Bool isCateFinishReload; // @synthesize isCateFinishReload=_isCateFinishReload;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(nonatomic) _Bool isPagerScroll; // @synthesize isPagerScroll=_isPagerScroll;
@property(retain, nonatomic) NSString *titleImageUrl; // @synthesize titleImageUrl=_titleImageUrl;
@property(retain, nonatomic) NSString *selectCateId; // @synthesize selectCateId=_selectCateId;
@property(retain, nonatomic) NSIndexPath *currentIndex; // @synthesize currentIndex=_currentIndex;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) NSArray *categoryItemsArray; // @synthesize categoryItemsArray=_categoryItemsArray;
@property(retain, nonatomic) SSSNCategoryBannerView *cateMenusView; // @synthesize cateMenusView=_cateMenusView;
@property(retain, nonatomic) UICollectionView *pagerView; // @synthesize pagerView=_pagerView;
@property(retain, nonatomic) SSSCategoryMenuListView *menuView; // @synthesize menuView=_menuView;
- (void).cxx_destruct;
- (id)creatIndexPath:(long long)arg1;
- (id)fetchCategoryItemsIndex:(long long)arg1;
- (void)toRemindView;
- (void)updateRightItem;
- (void)setupFrame;
- (void)setupUI;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)registerPageViewCellWithNumOfCategory:(long long)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)bannerCategoryCellSelect:(id)arg1;
- (void)bannerCategoryButtonClick:(_Bool)arg1;
- (void)scrollToselectCateMenuWithPagerNodeAnimated:(_Bool)arg1;
- (void)scrollToSelectCateMenuPager;
- (void)cateWithPagerFinishReload;
- (void)checkItems;
- (void)drawTitleImage;
- (void)showNetworkError;
- (void)categoryRequest;
- (void)reconnect;
- (void)JDScrollNavScreenDicCancleScroll:(id)arg1;
- (void)JDScrollNavScreenWillScroll:(id)arg1;
- (void)registerNotificationForCancleSwipeRight2Parent;
- (void)registerNotificationForSwipeRight2Parent;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)initWithCategoryItems:(id)arg1 select:(unsigned long long)arg2;
- (id)initWithCategoryId:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
