//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "CategoryPromotionViewDelegate-Protocol.h"
#import "SHCategorySubListViewControllerDelegate-Protocol.h"
#import "SubNavTabBarDelegate-Protocol.h"

@class CategoryPromotionService, CategoryPromotionView, NSArray, NSString, SubNavTabBar, UIColor, UIScrollView, UIView;
@protocol SHCategoryNavTabSubListViewControllerDelegate;

@interface SHCategoryNavTabSubListViewController : JDViewController <SubNavTabBarDelegate, SHCategorySubListViewControllerDelegate, CategoryPromotionViewDelegate>
{
    long long _currentIndex;
    double _contentOffSetX;
    SubNavTabBar *_navTabBar;
    UIScrollView *_mainView;
    UIView *_contentView;
    CategoryPromotionView *promotionHeader_;
    CategoryPromotionService *_service;
    UIScrollView *_currentScrollView;
    int _promotionId;
    NSArray *_subViewControllers;
    NSArray *_titles;
    UIColor *_navTabBarColor;
    UIColor *_navTabBarLineColor;
    long long _sourceType;
    id <SHCategoryNavTabSubListViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <SHCategoryNavTabSubListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property(nonatomic) int promotionId; // @synthesize promotionId=_promotionId;
@property(retain, nonatomic) UIColor *navTabBarLineColor; // @synthesize navTabBarLineColor=_navTabBarLineColor;
@property(retain, nonatomic) UIColor *navTabBarColor; // @synthesize navTabBarColor=_navTabBarColor;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) NSArray *subViewControllers; // @synthesize subViewControllers=_subViewControllers;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)scrollToTop;
- (void)reloadDataListWhenLoadFail;
- (void)subDidSelectRankingWithCategorySecondModel:(id)arg1 level1Cid:(int)arg2;
- (void)subDidSelectWithCategoryThirdItem:(id)arg1 indexPath:(id)arg2;
- (void)categoryPromotionViewDidClickWithBannerSource:(id)arg1 categoryPromotionItem:(id)arg2 index:(long long)arg3;
- (void)showPromotionViewWithModel:(id)arg1;
- (void)loadPromotion;
- (void)reloadMergePromotion;
- (void)subListCollectionViewDidScrollView:(id)arg1;
- (void)subListCollectionViewWillBeginScrollView:(id)arg1;
- (void)jumpToSelectedIndex:(long long)arg1;
- (void)jumpNextTab:(long long)arg1;
- (void)itemDidSelectedWithIndex:(long long)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)jumpSubCtrl:(long long)arg1;
- (void)loadCategoryData;
- (void)viewInit;
- (void)viewConfig;
- (void)initConfig;
- (void)createUI;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

