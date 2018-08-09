//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FSSLeftSlipManagerDelegate-Protocol.h"
#import "FSSearchResultCollectionCellProtocol-Protocol.h"

@class FSCoreImageTipView, FSProductListSalesTagView, FSSLeftSlipManager, FSSProductShopBarButton, FSSSkuCircleView, FSSearchIconLabel, FSSearchProductViewModel, FSSearchTransparentBgView, FinaSearchProductMoreLabel, FinalSearchListProductTitleLabel, FinalSearchMainPriceView, FinalSearchSubPriceView, JDIcon, JDImageView, JDLabel, NSString, UIButton, UILabel, UIView;

@interface FSProductListCell : UICollectionViewCell <FSSLeftSlipManagerDelegate, FSSearchResultCollectionCellProtocol>
{
    JDImageView *_noGoodsImageView;
    JDImageView *_hotView;
    FSSearchTransparentBgView *_sellInfoView;
    JDImageView *_ebookFlagView;
    FSProductListSalesTagView *_salesTagView;
    FinalSearchListProductTitleLabel *_productNameLabel;
    UILabel *_gaiaLabel;
    UILabel *_bookDetailLabel;
    UILabel *_bookAuthorLabel;
    FinaSearchProductMoreLabel *_moreLabel;
    FinalSearchMainPriceView *_jdPriceView;
    FinalSearchSubPriceView *_subPriceView;
    FSSearchIconLabel *_promotionIconLabel;
    FSSearchIconLabel *_commentIconLabel;
    JDLabel *_commentNumLabel;
    JDLabel *_commentGoodLabel;
    JDLabel *_shopNameLabel;
    JDImageView *_activityIcon;
    UIButton *_outCartButton;
    FSSSkuCircleView *_spuCircleView;
    FSCoreImageTipView *_spuTipView;
    UIButton *_multiShopsBtn;
    JDImageView *_buyedOrStowedView;
    UIButton *_rankBg;
    UILabel *_rankName;
    JDIcon *_hasEBook;
    FSSProductShopBarButton *_goodShopButton;
    FSSProductShopBarButton *_o2oShopButton;
    UIView *_adBlackPoint;
    UIView *_bottomLine;
    FSSearchProductViewModel *_viewModel;
    UIView *_actualContentView;
    JDImageView *_productImageView;
    JDImageView *_videoImageView;
    JDImageView *_adView;
    FSSLeftSlipManager *_slipManager;
}

@property(retain, nonatomic) FSSLeftSlipManager *slipManager; // @synthesize slipManager=_slipManager;
@property(retain, nonatomic) JDImageView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) JDImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) UIView *actualContentView; // @synthesize actualContentView=_actualContentView;
@property(retain, nonatomic) FSSearchProductViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (id)viewAnimationImageView;
- (void)dealloc;
- (void)o2oShopClick;
- (void)goodShopClick;
- (void)spuCircleViewClicked;
- (void)wareCompareButtonTapped;
- (void)followingButtonTapped;
- (void)addingCartTapped:(id)arg1;
- (void)outAddingCartTapped:(id)arg1;
- (double)widthForSlipViewsOfLeftSlipManager:(id)arg1;
- (void)prepareForReuse;
- (id)leftSlipManager:(id)arg1 leftSlipViewAtIndex:(long long)arg2;
- (long long)numbersOfLeftSlipViewsOfLeftSlipManager:(id)arg1;
- (id)snapshotViewOfLeftSlipManager:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)removeKVO;
- (void)addKVO;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithIsViewed:(_Bool)arg1;
- (void)setContentViewHighLight:(_Bool)arg1;
- (void)onClickMultiShops:(id)arg1;
- (void)animationSpuButton;
- (void)productStyleWithOutStock:(_Bool)arg1;
- (void)setIconAlpha:(float)arg1 View:(id)arg2;
- (void)setUpUIWithFrame:(struct CGRect)arg1;
- (void)removeObservers;
- (void)addObservers;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

