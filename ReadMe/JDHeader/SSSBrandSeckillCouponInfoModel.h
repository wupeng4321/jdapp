//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSString, SSSBrandSecKillCouponInfoDeatilModel;

@interface SSSBrandSeckillCouponInfoModel : NSObject
{
    NSString *_moduleId;
    NSString *_moduleStatus;
    NSString *_canUserGet;
    NSString *_canUserNowGet;
    SSSBrandSecKillCouponInfoDeatilModel *_award;
    long long _couponStatus;
    NSAttributedString *_moneyAttributed;
}

@property(copy, nonatomic) NSAttributedString *moneyAttributed; // @synthesize moneyAttributed=_moneyAttributed;
@property(nonatomic) long long couponStatus; // @synthesize couponStatus=_couponStatus;
@property(retain, nonatomic) SSSBrandSecKillCouponInfoDeatilModel *award; // @synthesize award=_award;
@property(copy, nonatomic) NSString *canUserNowGet; // @synthesize canUserNowGet=_canUserNowGet;
@property(copy, nonatomic) NSString *canUserGet; // @synthesize canUserGet=_canUserGet;
@property(copy, nonatomic) NSString *moduleStatus; // @synthesize moduleStatus=_moduleStatus;
@property(copy, nonatomic) NSString *moduleId; // @synthesize moduleId=_moduleId;
- (void).cxx_destruct;
- (void)changeAwardStatusWithReceiveResultType:(long long)arg1;
- (long long)fetchAwardStaus;
- (void)keyValuesDidFinishConvertingToObject;

@end

