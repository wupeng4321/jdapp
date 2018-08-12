//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface COCheckoutOrderVirtualPayModel : JDModel
{
    _Bool _isShortPwd;
    NSNumber *_MoneyBalance;
    NSNumber *_TotalFee;
    NSNumber *_CouponDiscount;
    NSNumber *_DiscountLipinka;
    NSNumber *_isUsedVirtualPay;
    NSNumber *_isOpenPaymentPassword;
    NSNumber *_IsUseBalance;
    NSNumber *_PromotionPrice;
    NSNumber *_CurrentUsedJdBean;
    NSNumber *_PrimitivePrice;
    NSNumber *_needRemark;
    NSNumber *_RePrice;
    NSNumber *_Price;
    NSNumber *_Discount;
    NSString *_BalanceMessage;
    NSNumber *_FreeFreight;
    NSNumber *_FactPrice;
    NSString *_inputPasswordExplain;
    NSNumber *_DeliveryFee;
    NSNumber *_commidtyPrice;
    NSNumber *_ConsignmentGiftDiscount;
}

@property(retain, nonatomic) NSNumber *ConsignmentGiftDiscount; // @synthesize ConsignmentGiftDiscount=_ConsignmentGiftDiscount;
@property(retain, nonatomic) NSNumber *commidtyPrice; // @synthesize commidtyPrice=_commidtyPrice;
@property(retain, nonatomic) NSNumber *DeliveryFee; // @synthesize DeliveryFee=_DeliveryFee;
@property(nonatomic) _Bool isShortPwd; // @synthesize isShortPwd=_isShortPwd;
@property(copy, nonatomic) NSString *inputPasswordExplain; // @synthesize inputPasswordExplain=_inputPasswordExplain;
@property(retain, nonatomic) NSNumber *FactPrice; // @synthesize FactPrice=_FactPrice;
@property(retain, nonatomic) NSNumber *FreeFreight; // @synthesize FreeFreight=_FreeFreight;
@property(copy, nonatomic) NSString *BalanceMessage; // @synthesize BalanceMessage=_BalanceMessage;
@property(retain, nonatomic) NSNumber *Discount; // @synthesize Discount=_Discount;
@property(retain, nonatomic) NSNumber *Price; // @synthesize Price=_Price;
@property(retain, nonatomic) NSNumber *RePrice; // @synthesize RePrice=_RePrice;
@property(retain, nonatomic) NSNumber *needRemark; // @synthesize needRemark=_needRemark;
@property(retain, nonatomic) NSNumber *PrimitivePrice; // @synthesize PrimitivePrice=_PrimitivePrice;
@property(retain, nonatomic) NSNumber *CurrentUsedJdBean; // @synthesize CurrentUsedJdBean=_CurrentUsedJdBean;
@property(retain, nonatomic) NSNumber *PromotionPrice; // @synthesize PromotionPrice=_PromotionPrice;
@property(retain, nonatomic) NSNumber *IsUseBalance; // @synthesize IsUseBalance=_IsUseBalance;
@property(retain, nonatomic) NSNumber *isOpenPaymentPassword; // @synthesize isOpenPaymentPassword=_isOpenPaymentPassword;
@property(retain, nonatomic) NSNumber *isUsedVirtualPay; // @synthesize isUsedVirtualPay=_isUsedVirtualPay;
@property(retain, nonatomic) NSNumber *DiscountLipinka; // @synthesize DiscountLipinka=_DiscountLipinka;
@property(retain, nonatomic) NSNumber *CouponDiscount; // @synthesize CouponDiscount=_CouponDiscount;
@property(retain, nonatomic) NSNumber *TotalFee; // @synthesize TotalFee=_TotalFee;
@property(retain, nonatomic) NSNumber *MoneyBalance; // @synthesize MoneyBalance=_MoneyBalance;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
