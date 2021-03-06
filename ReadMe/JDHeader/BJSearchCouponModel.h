//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BJSearchCouponModel : NSObject
{
    NSString *_key;
    NSString *_roleId;
    NSString *_batchId;
    NSString *_unifyFaceValue;
    NSString *_unifyQuota;
    long long _couponState;
    NSString *_limitInfo;
    long long _couponType;
    long long _couponSort;
    long long _jumpFlag;
    NSString *_receiveKey;
    NSString *_shopId;
    NSString *_venderId;
}

+ (id)searchCouponModelToChoiceCouponModel:(id)arg1;
+ (id)replacedKeyFromPropertyName;
@property(readonly, copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(readonly, copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(readonly, copy, nonatomic) NSString *receiveKey; // @synthesize receiveKey=_receiveKey;
@property(readonly, nonatomic) long long jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(readonly, nonatomic) long long couponSort; // @synthesize couponSort=_couponSort;
@property(readonly, nonatomic) long long couponType; // @synthesize couponType=_couponType;
@property(readonly, copy, nonatomic) NSString *limitInfo; // @synthesize limitInfo=_limitInfo;
@property(nonatomic) long long couponState; // @synthesize couponState=_couponState;
@property(readonly, copy, nonatomic) NSString *unifyQuota; // @synthesize unifyQuota=_unifyQuota;
@property(readonly, copy, nonatomic) NSString *unifyFaceValue; // @synthesize unifyFaceValue=_unifyFaceValue;
@property(readonly, copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(readonly, copy, nonatomic) NSString *roleId; // @synthesize roleId=_roleId;
@property(readonly, copy, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

