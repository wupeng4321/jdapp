//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreSemiPopupView.h"

#import "PDColorSizeViewModelDelegate-Protocol.h"

@class NSMutableArray, NSString, PDColorSizeInfoModel, PDColorSizeViewModel, SCShopCartPropertyDetailButtonAnimateView, SCShopCartPropertyHeaderView, SCShopCartPropertyModel, SCShopCartPropertyViewModel, UIButton, UIScrollView;

@interface SCShopCartPropertyDetailView : JDCoreSemiPopupView <PDColorSizeViewModelDelegate>
{
    NSMutableArray *_skuDetailPool;
    NSMutableArray *_btnPool;
    SCShopCartPropertyHeaderView *_headerView;
    SCShopCartPropertyDetailButtonAnimateView *_animateView;
    UIScrollView *_mainScrollView;
    SCShopCartPropertyModel *_firstLoadSku;
    SCShopCartPropertyViewModel *_skuDetailViewModel;
    PDColorSizeInfoModel *_colorSizeInfo;
    PDColorSizeViewModel *_colorSizeViewModel;
    CDUnknownBlockType _deleteOriginSkuAction;
    UIButton *_confirmBtn;
}

@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(copy, nonatomic) CDUnknownBlockType deleteOriginSkuAction; // @synthesize deleteOriginSkuAction=_deleteOriginSkuAction;
@property(retain, nonatomic) PDColorSizeViewModel *colorSizeViewModel; // @synthesize colorSizeViewModel=_colorSizeViewModel;
@property(retain, nonatomic) PDColorSizeInfoModel *colorSizeInfo; // @synthesize colorSizeInfo=_colorSizeInfo;
@property(retain, nonatomic) SCShopCartPropertyViewModel *skuDetailViewModel; // @synthesize skuDetailViewModel=_skuDetailViewModel;
@property(retain, nonatomic) SCShopCartPropertyModel *firstLoadSku; // @synthesize firstLoadSku=_firstLoadSku;
- (void).cxx_destruct;
- (void)skuChanged:(id)arg1;
- (void)refreshSkuDetailInfo;
- (void)removeErrorView;
- (void)showErrorView;
- (void)refreshHeadInfo;
- (void)deleteItem;
- (void)confirmBtnClicked;
- (void)initUI;
- (void)loadData;
- (void)setDefaultInfo;
- (void)closeButtonAction:(id)arg1;
- (void)hideFromDeletNotification;
- (void)cancelNetwork;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
