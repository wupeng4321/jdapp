//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BJMarketCouponModel : NSObject
{
    _Bool _isReceived;
    _Bool _ynShelling;
    _Bool _isReceiveOver;
    NSString *_sellId;
    NSString *_denomination;
    NSString *_limitStr;
    NSString *_quota;
    long long _couponType;
    NSString *_batchId;
    NSString *_needBean;
    NSString *_shellPelpleNum;
    NSString *_LastTime;
    NSString *_showImgOne;
    NSString *_showImgTwo;
    NSString *_showImgThree;
    NSString *_couponId;
    NSString *_effectEndDate;
    NSString *_unifyFaceValue;
    NSString *_unifyQuota;
    NSString *_receiveBean;
    NSString *_shopImg;
    long long _jumpFlag;
    NSString *_mySellCouponImg;
    NSString *_successLabel;
    NSString *_shopId;
    NSString *_jumpUrl;
}

+ (id)marketCouponModelToChoiceCouponModel:(id)arg1;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) _Bool isReceiveOver; // @synthesize isReceiveOver=_isReceiveOver;
@property(copy, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
@property(readonly, copy, nonatomic) NSString *successLabel; // @synthesize successLabel=_successLabel;
@property(readonly, copy, nonatomic) NSString *mySellCouponImg; // @synthesize mySellCouponImg=_mySellCouponImg;
@property(readonly, nonatomic) long long jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(copy, nonatomic) NSString *shopImg; // @synthesize shopImg=_shopImg;
@property(copy, nonatomic) NSString *receiveBean; // @synthesize receiveBean=_receiveBean;
@property(copy, nonatomic) NSString *unifyQuota; // @synthesize unifyQuota=_unifyQuota;
@property(copy, nonatomic) NSString *unifyFaceValue; // @synthesize unifyFaceValue=_unifyFaceValue;
@property(readonly, copy, nonatomic) NSString *effectEndDate; // @synthesize effectEndDate=_effectEndDate;
@property(readonly, copy, nonatomic) NSString *couponId; // @synthesize couponId=_couponId;
@property(nonatomic) _Bool ynShelling; // @synthesize ynShelling=_ynShelling;
@property(nonatomic) _Bool isReceived; // @synthesize isReceived=_isReceived;
@property(readonly, copy, nonatomic) NSString *showImgThree; // @synthesize showImgThree=_showImgThree;
@property(readonly, copy, nonatomic) NSString *showImgTwo; // @synthesize showImgTwo=_showImgTwo;
@property(readonly, copy, nonatomic) NSString *showImgOne; // @synthesize showImgOne=_showImgOne;
@property(readonly, copy, nonatomic) NSString *LastTime; // @synthesize LastTime=_LastTime;
@property(readonly, copy, nonatomic) NSString *shellPelpleNum; // @synthesize shellPelpleNum=_shellPelpleNum;
@property(readonly, copy, nonatomic) NSString *needBean; // @synthesize needBean=_needBean;
@property(readonly, copy, nonatomic) NSString *batchId; // @synthesize batchId=_batchId;
@property(readonly, nonatomic) long long couponType; // @synthesize couponType=_couponType;
@property(readonly, copy, nonatomic) NSString *quota; // @synthesize quota=_quota;
@property(readonly, copy, nonatomic) NSString *limitStr; // @synthesize limitStr=_limitStr;
@property(readonly, copy, nonatomic) NSString *denomination; // @synthesize denomination=_denomination;
@property(readonly, copy, nonatomic) NSString *sellId; // @synthesize sellId=_sellId;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;

@end
