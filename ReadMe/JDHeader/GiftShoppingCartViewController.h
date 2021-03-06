//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class GiftCartModel, GiftGreentingsModel, GiftMainSkuView, GiftPackSelectView, GiftPackView, GiftSettlementBottomView, JDImageView, NSArray, NSMutableDictionary, UIScrollView, UIView;

@interface GiftShoppingCartViewController : JDViewController
{
    UIScrollView *scrollView;
    GiftMainSkuView *wareView;
    GiftPackView *packView;
    GiftSettlementBottomView *priceView;
    GiftPackSelectView *packSelectView;
    UIView *shadowView;
    UIView *imgBackGroundView;
    struct CGRect defaultRect;
    GiftCartModel *cartModel;
    NSArray *wrapArr;
    JDImageView *bigPicView;
    _Bool isWriteCart;
    GiftGreentingsModel *greetingsModel;
    _Bool isGotoSettlement;
    NSMutableDictionary *_deleteWareDict;
}

@property(retain, nonatomic) NSMutableDictionary *deleteWareDict; // @synthesize deleteWareDict=_deleteWareDict;
@property(retain, nonatomic) GiftGreentingsModel *greetingsModel; // @synthesize greetingsModel;
@property(retain, nonatomic) JDImageView *bigPicView; // @synthesize bigPicView;
@property(retain, nonatomic) NSArray *wrapArr; // @synthesize wrapArr;
@property(retain, nonatomic) GiftCartModel *cartModel; // @synthesize cartModel;
@property(retain, nonatomic) UIView *imgBackGroundView; // @synthesize imgBackGroundView;
- (void).cxx_destruct;
- (void)reconnect;
- (void)completeCard:(id)arg1;
- (void)goToSettlement;
- (void)selectCardButtonClicked:(id)arg1;
- (void)selectPackButtonClicked:(id)arg1;
- (void)didChangeSkuNum:(id)arg1;
- (void)goToWriteCart;
- (void)didTapWareView:(id)arg1;
- (void)didChoosePack:(id)arg1;
- (void)changePackBtnClicked;
- (void)orderSubmitSuccess;
- (void)deleteGift:(id)arg1;
- (void)getQueryGiftSkusStockState;
- (void)didGetGiftStock:(id)arg1;
- (void)didGetGiftWraps:(id)arg1;
- (void)didGetGiftCart:(id)arg1;
- (void)showKeyBoard;
- (id)buildUpOrderRequestSetupModelParams;
- (void)layoutSubViews;
- (void)hideBigPic:(id)arg1;
- (void)showBigPic:(id)arg1;
- (void)hidePackSelectView;
- (void)showPackSelectView;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

