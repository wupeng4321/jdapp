//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class JDImageView, JDLabel, JDView, NSString, NewProductModel, PDBottomButtonView, PDPostCostOpenPlusBottomBarView, UIImageView, VerticalButton;
@protocol FunctionButtonsViewDelegate;

@interface WareBBottomButtonsView : UIView <CAAnimationDelegate>
{
    _Bool _isAddToCartAnimating;
    NewProductModel *_model;
    id <FunctionButtonsViewDelegate> _buttonDelegate;
    VerticalButton *_customerServiceBtn;
    VerticalButton *_shopButton;
    VerticalButton *_addshopcartButton;
    VerticalButton *_goshopcartButton;
    VerticalButton *_bookButton;
    VerticalButton *_right_FirstButton;
    VerticalButton *_hospitalButton;
    JDImageView *_addCartAniV;
    JDView *_reasonsTipView;
    JDLabel *_reasonsTipsLabel;
    UIView *_line2;
    PDPostCostOpenPlusBottomBarView *_openPlusBottomBar;
    UIImageView *_customerImageView;
    NSString *_mtaService;
    NSString *_mtaShop;
    NSString *_mtaFavorite;
    NSString *_mtaCart;
    NSString *_mtaAddCart;
    PDBottomButtonView *_pinGouLeftView;
    PDBottomButtonView *_pinGouRightView;
}

@property(retain, nonatomic) PDBottomButtonView *pinGouRightView; // @synthesize pinGouRightView=_pinGouRightView;
@property(retain, nonatomic) PDBottomButtonView *pinGouLeftView; // @synthesize pinGouLeftView=_pinGouLeftView;
@property(retain, nonatomic) NSString *mtaAddCart; // @synthesize mtaAddCart=_mtaAddCart;
@property(retain, nonatomic) NSString *mtaCart; // @synthesize mtaCart=_mtaCart;
@property(retain, nonatomic) NSString *mtaFavorite; // @synthesize mtaFavorite=_mtaFavorite;
@property(retain, nonatomic) NSString *mtaShop; // @synthesize mtaShop=_mtaShop;
@property(retain, nonatomic) NSString *mtaService; // @synthesize mtaService=_mtaService;
@property(retain, nonatomic) UIImageView *customerImageView; // @synthesize customerImageView=_customerImageView;
@property(retain, nonatomic) PDPostCostOpenPlusBottomBarView *openPlusBottomBar; // @synthesize openPlusBottomBar=_openPlusBottomBar;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) JDLabel *reasonsTipsLabel; // @synthesize reasonsTipsLabel=_reasonsTipsLabel;
@property(retain, nonatomic) JDView *reasonsTipView; // @synthesize reasonsTipView=_reasonsTipView;
@property(retain, nonatomic) JDImageView *addCartAniV; // @synthesize addCartAniV=_addCartAniV;
@property(retain, nonatomic) VerticalButton *hospitalButton; // @synthesize hospitalButton=_hospitalButton;
@property(retain, nonatomic) VerticalButton *right_FirstButton; // @synthesize right_FirstButton=_right_FirstButton;
@property(retain, nonatomic) VerticalButton *bookButton; // @synthesize bookButton=_bookButton;
@property(retain, nonatomic) VerticalButton *goshopcartButton; // @synthesize goshopcartButton=_goshopcartButton;
@property(retain, nonatomic) VerticalButton *addshopcartButton; // @synthesize addshopcartButton=_addshopcartButton;
@property(retain, nonatomic) VerticalButton *shopButton; // @synthesize shopButton=_shopButton;
@property(retain, nonatomic) VerticalButton *customerServiceBtn; // @synthesize customerServiceBtn=_customerServiceBtn;
@property(nonatomic) __weak id <FunctionButtonsViewDelegate> buttonDelegate; // @synthesize buttonDelegate=_buttonDelegate;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)changeButtoninfo:(id)arg1 butttonInfo:(id)arg2;
- (void)rederAddCartAndRightFirstButton;
- (void)enableYuYueBtn:(_Bool)arg1;
- (void)setNewBookBtnTitle:(id)arg1;
- (void)setCartButtonBtnTitle:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)showFreeFreighView:(id)arg1;
- (void)addCarAnimateWithShopCartView;
- (void)skuDetailAddCarAnimateWithShopCartView;
- (void)addToCartWithAnimation:(long long)arg1;
- (void)updateShopcart:(id)arg1 animated:(_Bool)arg2;
- (void)updateTip:(id)arg1;
- (void)resetButtonState;
- (void)showPlusFeeTipsView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)buttonAction:(id)arg1;
- (void)renderBottomBarUI;
- (void)renderCardList:(id)arg1;
- (void)updateYuyueState;
- (void)changeSkin:(id)arg1;
- (void)renderAddCartButton:(long long)arg1;
- (void)renderRight_firstButton:(long long)arg1;
- (void)renderPrintBagButton:(id)arg1;
- (void)renderDrugInfoButton:(id)arg1;
- (void)renderGoShopCart:(id)arg1;
- (void)renderShopButton:(id)arg1;
- (void)showCustomerServiceBubble:(id)arg1;
- (void)renderCustomerServiceButton:(id)arg1;
- (void)renderJxButton:(id)arg1;
- (void)setWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

