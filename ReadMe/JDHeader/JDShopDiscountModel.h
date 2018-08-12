//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface JDShopDiscountModel : JDModel
{
    NSString *_act;
    NSString *_beginTime;
    NSString *_endTime;
    NSString *_name;
    NSNumber *_applicability;
    NSNumber *_couponId;
    NSString *_crmCouponId;
    NSNumber *_discount;
    NSNumber *_platformType;
    NSNumber *_quota;
    NSNumber *_takeRule;
    NSNumber *_remain;
    NSNumber *_type;
    NSNumber *_style;
    NSNumber *_venderId;
    NSString *_minDiscount;
    NSString *_maxDiscount;
    NSString *_discountQuotaDesc;
    NSString *_batchId;
    NSString *_imageUrl;
    NSNumber *_couponStatus;
    NSNumber *_crmCoupon;
}

@property(retain, nonatomic) NSNumber *crmCoupon; // @synthesize crmCoupon=_crmCoupon;
@property(retain, nonatomic) NSNumber *couponStatus; // @synthesize couponStatus=_couponStatus;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(retain, nonatomic) NSString *discountQuotaDesc; // @synthesize discountQuotaDesc=_discountQuotaDesc;
@property(retain, nonatomic) NSString *maxDiscount; // @synthesize maxDiscount=_maxDiscount;
@property(retain, nonatomic) NSString *minDiscount; // @synthesize minDiscount=_minDiscount;
@property(retain, nonatomic) NSNumber *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSNumber *style; // @synthesize style=_style;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *remain; // @synthesize remain=_remain;
@property(retain, nonatomic) NSNumber *takeRule; // @synthesize takeRule=_takeRule;
@property(retain, nonatomic) NSNumber *quota; // @synthesize quota=_quota;
@property(retain, nonatomic) NSNumber *platformType; // @synthesize platformType=_platformType;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount=_discount;
@property(retain, nonatomic) NSString *crmCouponId; // @synthesize crmCouponId=_crmCouponId;
@property(retain, nonatomic) NSNumber *couponId; // @synthesize couponId=_couponId;
@property(retain, nonatomic) NSNumber *applicability; // @synthesize applicability=_applicability;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *act; // @synthesize act=_act;
- (void).cxx_destruct;
- (void)setDataWithStowShopCouponModel:(id)arg1;
- (id)toDictionary;
- (void)setDataWithDic:(id)arg1;

@end

