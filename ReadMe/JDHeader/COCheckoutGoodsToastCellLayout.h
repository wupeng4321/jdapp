//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "COCheckoutLayout-Protocol.h"

@class COCheckoutGoodsViewLayout, COCheckoutToastGoods, NSAttributedString, NSString;

@interface COCheckoutGoodsToastCellLayout : NSObject <COCheckoutLayout>
{
    double _width;
    double _height;
    COCheckoutToastGoods *_goods;
    COCheckoutGoodsViewLayout *_goodsViewLayout;
    NSAttributedString *_titleText;
    long long _titleLineNum;
    NSAttributedString *_unitsText;
    NSAttributedString *_priceText;
    NSAttributedString *_purchaseLimitText;
    struct CGRect _titleTextFrame;
    struct CGRect _unitsTextFrame;
    struct CGRect _priceTextFrame;
    struct CGRect _purchaseLimitLabelFrame;
}

@property(retain, nonatomic) NSAttributedString *purchaseLimitText; // @synthesize purchaseLimitText=_purchaseLimitText;
@property(nonatomic) struct CGRect purchaseLimitLabelFrame; // @synthesize purchaseLimitLabelFrame=_purchaseLimitLabelFrame;
@property(retain, nonatomic) NSAttributedString *priceText; // @synthesize priceText=_priceText;
@property(nonatomic) struct CGRect priceTextFrame; // @synthesize priceTextFrame=_priceTextFrame;
@property(retain, nonatomic) NSAttributedString *unitsText; // @synthesize unitsText=_unitsText;
@property(nonatomic) struct CGRect unitsTextFrame; // @synthesize unitsTextFrame=_unitsTextFrame;
@property(nonatomic) long long titleLineNum; // @synthesize titleLineNum=_titleLineNum;
@property(retain, nonatomic) NSAttributedString *titleText; // @synthesize titleText=_titleText;
@property(nonatomic) struct CGRect titleTextFrame; // @synthesize titleTextFrame=_titleTextFrame;
@property(retain, nonatomic) COCheckoutGoodsViewLayout *goodsViewLayout; // @synthesize goodsViewLayout=_goodsViewLayout;
@property(retain, nonatomic) COCheckoutToastGoods *goods; // @synthesize goods=_goods;
@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
- (void).cxx_destruct;
- (struct CGRect)boundingRectOfAttributedText:(id)arg1 withSize:(struct CGSize)arg2;
- (void)layoutUnitsText;
- (void)layoutPriceText;
- (void)layoutPurchaseLimitText;
- (void)layoutTitleText;
- (void)layout;
- (id)initWithToastGoods:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
