//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface JDPOPCouponModel : NSObject
{
    _Bool _applicability;
    _Bool _showArrow;
    _Bool _couponKind;
    _Bool _showNotice;
    NSString *_couponId;
    NSString *_name;
    long long _type;
    long long _discount;
    long long _quota;
    long long _batchId;
    NSString *_act;
    NSString *_beginTime;
    NSString *_endTime;
    NSString *_beginHour;
    NSString *_endHour;
    long long _hourCoupon;
    long long _platformType;
    NSString *_remain;
    long long _roleId;
    NSString *_venderId;
    NSString *_venderType;
    long long _limitType;
    long long _addDays;
    long long _overLap;
    NSString *_overLapDesc;
    NSArray *_items;
    NSMutableArray *_subItems;
    long long _checkSkuNum;
    NSString *_price;
    NSString *_reprice;
    NSString *_needMoney;
    NSString *_canDiscount;
    NSString *_low;
    NSString *_high;
    long long _couponStyle;
    NSString *_discountDesc;
    long long _discountLevel;
    NSString *_discountShotDesc;
    struct CGPoint _scrollPointOfItems;
}

@property(readonly, copy, nonatomic) NSString *discountShotDesc; // @synthesize discountShotDesc=_discountShotDesc;
@property(readonly, nonatomic) long long discountLevel; // @synthesize discountLevel=_discountLevel;
@property(readonly, copy, nonatomic) NSString *discountDesc; // @synthesize discountDesc=_discountDesc;
@property(readonly, nonatomic) long long couponStyle; // @synthesize couponStyle=_couponStyle;
@property(readonly, copy, nonatomic) NSString *high; // @synthesize high=_high;
@property(readonly, copy, nonatomic) NSString *low; // @synthesize low=_low;
@property(readonly, copy, nonatomic) NSString *canDiscount; // @synthesize canDiscount=_canDiscount;
@property(readonly, copy, nonatomic) NSString *needMoney; // @synthesize needMoney=_needMoney;
@property(readonly, copy, nonatomic) NSString *reprice; // @synthesize reprice=_reprice;
@property(readonly, copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(nonatomic) long long checkSkuNum; // @synthesize checkSkuNum=_checkSkuNum;
@property(nonatomic) struct CGPoint scrollPointOfItems; // @synthesize scrollPointOfItems=_scrollPointOfItems;
@property(retain, nonatomic) NSMutableArray *subItems; // @synthesize subItems=_subItems;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(nonatomic) _Bool showNotice; // @synthesize showNotice=_showNotice;
@property(copy, nonatomic) NSString *overLapDesc; // @synthesize overLapDesc=_overLapDesc;
@property(nonatomic) long long overLap; // @synthesize overLap=_overLap;
@property(nonatomic) _Bool couponKind; // @synthesize couponKind=_couponKind;
@property(readonly, nonatomic) long long addDays; // @synthesize addDays=_addDays;
@property(readonly, nonatomic) long long limitType; // @synthesize limitType=_limitType;
@property(nonatomic) _Bool showArrow; // @synthesize showArrow=_showArrow;
@property(copy, nonatomic) NSString *venderType; // @synthesize venderType=_venderType;
@property(readonly, copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(readonly, nonatomic) long long roleId; // @synthesize roleId=_roleId;
@property(readonly, copy, nonatomic) NSString *remain; // @synthesize remain=_remain;
@property(readonly, nonatomic) long long platformType; // @synthesize platformType=_platformType;
@property(readonly, nonatomic) long long hourCoupon; // @synthesize hourCoupon=_hourCoupon;
@property(readonly, copy, nonatomic) NSString *endHour; // @synthesize endHour=_endHour;
@property(readonly, copy, nonatomic) NSString *beginHour; // @synthesize beginHour=_beginHour;
@property(readonly, copy, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(readonly, copy, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(readonly, copy, nonatomic) NSString *act; // @synthesize act=_act;
@property(readonly, nonatomic) long long batchId; // @synthesize batchId=_batchId;
@property(nonatomic) _Bool applicability; // @synthesize applicability=_applicability;
@property(readonly, nonatomic) long long quota; // @synthesize quota=_quota;
@property(readonly, nonatomic) long long discount; // @synthesize discount=_discount;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
- (void).cxx_destruct;
- (id)showDiscountDesc;

@end

