//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FSSearchRecommendViewDelegate-Protocol.h"
#import "FinalSearchSortAllViewDelegate-Protocol.h"

@class FSAdShopModel, FSSearchActivityModel, FSSearchNewGiftModel, FSSearchRecommendView, FinalSearchSortAllView, NSString;
@protocol FinalSearchTopViewSortDelegate><FinalSearchTopViewRecommendDelegate;

@interface FSSearchTopView : UIView <FinalSearchSortAllViewDelegate, FSSearchRecommendViewDelegate>
{
    FSSearchActivityModel *_sModel;
    FSSearchNewGiftModel *_newGiftModel;
    FSSearchRecommendView *_recommendView;
    FSAdShopModel *_adShopModel;
    double _tempHeight;
    id <FinalSearchTopViewSortDelegate><FinalSearchTopViewRecommendDelegate> _delegate;
    NSString *_maidian;
    FinalSearchSortAllView *_sortAllBar;
    struct CGRect _frameNow;
}

@property(retain, nonatomic) FinalSearchSortAllView *sortAllBar; // @synthesize sortAllBar=_sortAllBar;
@property(nonatomic) struct CGRect frameNow; // @synthesize frameNow=_frameNow;
@property(copy, nonatomic) NSString *maidian; // @synthesize maidian=_maidian;
@property(nonatomic) __weak id <FinalSearchTopViewSortDelegate><FinalSearchTopViewRecommendDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)shopExpoMaidian:(id)arg1 withType:(int)arg2;
- (void)pauseShopCycleAnimation;
- (void)resumeShopCycleAnimation;
- (void)sortTabExtendedDidClick;
- (id)getTabExtendedButton;
- (void)sortHideTabExtendedButton;
- (void)sortShowTabExtendedButtonWithTitle:(id)arg1 notShowRedPointkey:(id)arg2 showRedPointTimekey:(id)arg3;
- (id)allCategoryBtnTitleText;
- (_Bool)sortBarIsHiddenUnderView;
- (void)otherButtonClickHiddenView;
- (void)filterBtnColorRed:(_Bool)arg1;
- (void)shopCycleDidClickWithModel:(id)arg1 index:(long long)arg2;
- (void)searchRecommendViewClickWithChildLinkItem:(id)arg1;
- (void)shopCorrectViewDidClick;
- (void)shopViewDidClick;
- (void)imageActivityViewDidClick;
- (void)activityViewDidClick;
- (void)isHiddenView:(_Bool)arg1;
- (void)sortAllView:(id)arg1 didSelectIndex:(int)arg2 SortInfo:(id)arg3;
- (void)secondLevelCategoryClickedMaindianWithParamValue:(id)arg1;
- (void)tapCateWithCid:(id)arg1 secondThirdStr:(id)arg2 mainDianParamValue:(id)arg3;
- (_Bool)currentShowSpecialEffectWord;
- (void)hideRecommendViewAndSortBar;
- (void)hideRecommendViewAndShowSortBar;
- (void)showRecommendViewAndSortBar;
- (void)displayRecommendViewWithMobileShopModel:(id)arg1 correctShop:(id)arg2 activityModel:(id)arg3 newGiftModel:(id)arg4 adShopModel:(id)arg5 multiShops:(id)arg6 specialEffect:(id)arg7;
- (void)refreshBoardWithPromotionCategoryViewModel:(id)arg1;
- (void)resetTopViewWithSelectIndex:(int)arg1 needShowAllCate:(_Bool)arg2 needShowBookCate:(_Bool)arg3;
- (void)resetSearchTop;
- (id)initWithBookCateClickBlock:(CDUnknownBlockType)arg1 filterButtonClickBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

