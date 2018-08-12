//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class JDDynamicPromotionTabModel, JDShopDynamicActivityModel, NSArray, NSDictionary, NSNumber, NSString;

@interface JDShopDynamicVendorModel : JDModel
{
    _Bool _hasActivity;
    _Bool _hasCoupon;
    _Bool _hasNewWare;
    _Bool _hasPromotion;
    _Bool _diamond;
    _Bool _hasSeckill;
    _Bool _isFollowed;
    _Bool _hasDown;
    _Bool _followed;
    int _isSign;
    JDShopDynamicActivityModel *_activity;
    NSString *_appurl;
    NSArray *_coupons;
    long long _followCount;
    NSString *_logoUrl;
    NSString *_murl;
    double _score;
    NSNumber *_shopId;
    NSString *_shopName;
    NSNumber *_venderId;
    NSNumber *_venderType;
    NSDictionary *_shopDic;
    long long _activityRuleType;
    JDDynamicPromotionTabModel *_promotionTab;
    NSString *_seckillDes;
    NSString *_signboardUrl;
}

@property(retain, nonatomic) NSString *signboardUrl; // @synthesize signboardUrl=_signboardUrl;
@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(nonatomic) _Bool hasDown; // @synthesize hasDown=_hasDown;
@property(nonatomic) _Bool isFollowed; // @synthesize isFollowed=_isFollowed;
@property(retain, nonatomic) NSString *seckillDes; // @synthesize seckillDes=_seckillDes;
@property(nonatomic) _Bool hasSeckill; // @synthesize hasSeckill=_hasSeckill;
@property(retain, nonatomic) JDDynamicPromotionTabModel *promotionTab; // @synthesize promotionTab=_promotionTab;
@property(nonatomic) long long activityRuleType; // @synthesize activityRuleType=_activityRuleType;
@property(nonatomic) _Bool diamond; // @synthesize diamond=_diamond;
@property(nonatomic) int isSign; // @synthesize isSign=_isSign;
@property(retain, nonatomic) NSDictionary *shopDic; // @synthesize shopDic=_shopDic;
@property(retain, nonatomic) NSNumber *venderType; // @synthesize venderType=_venderType;
@property(retain, nonatomic) NSNumber *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSNumber *shopId; // @synthesize shopId=_shopId;
@property(nonatomic) double score; // @synthesize score=_score;
@property(retain, nonatomic) NSString *murl; // @synthesize murl=_murl;
@property(retain, nonatomic) NSString *logoUrl; // @synthesize logoUrl=_logoUrl;
@property(nonatomic) _Bool hasPromotion; // @synthesize hasPromotion=_hasPromotion;
@property(nonatomic) _Bool hasNewWare; // @synthesize hasNewWare=_hasNewWare;
@property(nonatomic) _Bool hasCoupon; // @synthesize hasCoupon=_hasCoupon;
@property(nonatomic) _Bool hasActivity; // @synthesize hasActivity=_hasActivity;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(retain, nonatomic) NSArray *coupons; // @synthesize coupons=_coupons;
@property(retain, nonatomic) NSString *appurl; // @synthesize appurl=_appurl;
@property(retain, nonatomic) JDShopDynamicActivityModel *activity; // @synthesize activity=_activity;
- (void)dealloc;
- (id)toDictionary;
- (id)initWithDictionary:(id)arg1;

@end

