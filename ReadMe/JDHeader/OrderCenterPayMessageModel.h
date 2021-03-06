//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableArray, NSString;

@interface OrderCenterPayMessageModel : JDModel
{
    _Bool _canSelectCoupons;
    int _canUsedCouponSize;
    NSString *_orderId;
    NSString *_totlePriceText;
    NSString *_totlePrice;
    NSString *_shouldBalanceText;
    NSString *_shouldBalanceTip;
    NSString *_shouldBalance;
    NSString *_actualBalanceText;
    NSString *_actualBalancePrice;
    NSString *_actualBalance;
    NSString *_selectedCouponSizeTip;
    NSString *_couponDiscountTip;
    NSString *_couponDiscount;
    NSString *_yushouBargin;
    NSString *_warnTip;
    NSString *_warnTipColor;
    NSMutableArray *_selectedCouponIds;
    NSMutableArray *_preSellPriceList;
    NSMutableArray *_feeList;
    NSString *_yunfeiPrice;
    NSString *_yunfeiFreight;
    NSString *_primeSelectedCouponSizeTip;
}

@property(nonatomic) _Bool canSelectCoupons; // @synthesize canSelectCoupons=_canSelectCoupons;
@property(retain, nonatomic) NSString *primeSelectedCouponSizeTip; // @synthesize primeSelectedCouponSizeTip=_primeSelectedCouponSizeTip;
@property(retain, nonatomic) NSString *yunfeiFreight; // @synthesize yunfeiFreight=_yunfeiFreight;
@property(retain, nonatomic) NSString *yunfeiPrice; // @synthesize yunfeiPrice=_yunfeiPrice;
@property(nonatomic) int canUsedCouponSize; // @synthesize canUsedCouponSize=_canUsedCouponSize;
@property(retain, nonatomic) NSMutableArray *feeList; // @synthesize feeList=_feeList;
@property(retain, nonatomic) NSMutableArray *preSellPriceList; // @synthesize preSellPriceList=_preSellPriceList;
@property(retain, nonatomic) NSMutableArray *selectedCouponIds; // @synthesize selectedCouponIds=_selectedCouponIds;
@property(retain, nonatomic) NSString *warnTipColor; // @synthesize warnTipColor=_warnTipColor;
@property(retain, nonatomic) NSString *warnTip; // @synthesize warnTip=_warnTip;
@property(retain, nonatomic) NSString *yushouBargin; // @synthesize yushouBargin=_yushouBargin;
@property(retain, nonatomic) NSString *couponDiscount; // @synthesize couponDiscount=_couponDiscount;
@property(retain, nonatomic) NSString *couponDiscountTip; // @synthesize couponDiscountTip=_couponDiscountTip;
@property(retain, nonatomic) NSString *selectedCouponSizeTip; // @synthesize selectedCouponSizeTip=_selectedCouponSizeTip;
@property(retain, nonatomic) NSString *actualBalance; // @synthesize actualBalance=_actualBalance;
@property(retain, nonatomic) NSString *actualBalancePrice; // @synthesize actualBalancePrice=_actualBalancePrice;
@property(retain, nonatomic) NSString *actualBalanceText; // @synthesize actualBalanceText=_actualBalanceText;
@property(retain, nonatomic) NSString *shouldBalance; // @synthesize shouldBalance=_shouldBalance;
@property(retain, nonatomic) NSString *shouldBalanceTip; // @synthesize shouldBalanceTip=_shouldBalanceTip;
@property(retain, nonatomic) NSString *shouldBalanceText; // @synthesize shouldBalanceText=_shouldBalanceText;
@property(retain, nonatomic) NSString *totlePrice; // @synthesize totlePrice=_totlePrice;
@property(retain, nonatomic) NSString *totlePriceText; // @synthesize totlePriceText=_totlePriceText;
@property(retain, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

