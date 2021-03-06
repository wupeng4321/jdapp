//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface PDShopInfoModel : NSObject
{
    _Bool _hasCoupon;
    _Bool _diamond;
    _Bool _isSquareLogo;
    NSNumber *_shopId;
    NSString *_name;
    NSString *_nameB;
    double _score;
    NSString *_url;
    NSString *_logo;
    NSString *_squareLogo;
    long long _followCount;
    long long _newNum;
    long long _promotionNum;
    NSString *_brief;
    NSDictionary *_shopCouponsList;
    NSString *_venderType;
    double _wareScore;
    double _avgWareScore;
    double _efficiencyScore;
    double _avgEfficiencyScore;
    double _serviceScore;
    double _avgServiceScore;
    long long _shopActivityTotalNum;
    long long _totalNum;
    NSString *_scoreText;
    NSString *_giftIcon;
    NSString *_followText;
    NSString *_skuCntText;
    NSString *_skuText;
    NSString *_serverText;
    NSString *_logisticsText;
    NSString *_shopStateText;
    NSString *_shopImage;
    NSArray *_categoryInfo;
    NSString *_signboardUrl;
    NSString *_hotcatestr;
    NSArray *_hotcates;
    long long _cardType;
    NSString *_allGoodJumpUrl;
    NSString *_inShopLookJumpUrl;
}

+ (id)objectClassInArray;
@property(copy, nonatomic) NSString *inShopLookJumpUrl; // @synthesize inShopLookJumpUrl=_inShopLookJumpUrl;
@property(copy, nonatomic) NSString *allGoodJumpUrl; // @synthesize allGoodJumpUrl=_allGoodJumpUrl;
@property(nonatomic) _Bool isSquareLogo; // @synthesize isSquareLogo=_isSquareLogo;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(retain, nonatomic) NSArray *hotcates; // @synthesize hotcates=_hotcates;
@property(copy, nonatomic) NSString *hotcatestr; // @synthesize hotcatestr=_hotcatestr;
@property(copy, nonatomic) NSString *signboardUrl; // @synthesize signboardUrl=_signboardUrl;
@property(retain, nonatomic) NSArray *categoryInfo; // @synthesize categoryInfo=_categoryInfo;
@property(copy, nonatomic) NSString *shopImage; // @synthesize shopImage=_shopImage;
@property(copy, nonatomic) NSString *shopStateText; // @synthesize shopStateText=_shopStateText;
@property(copy, nonatomic) NSString *logisticsText; // @synthesize logisticsText=_logisticsText;
@property(copy, nonatomic) NSString *serverText; // @synthesize serverText=_serverText;
@property(copy, nonatomic) NSString *skuText; // @synthesize skuText=_skuText;
@property(copy, nonatomic) NSString *skuCntText; // @synthesize skuCntText=_skuCntText;
@property(copy, nonatomic) NSString *followText; // @synthesize followText=_followText;
@property(copy, nonatomic) NSString *giftIcon; // @synthesize giftIcon=_giftIcon;
@property(copy, nonatomic) NSString *scoreText; // @synthesize scoreText=_scoreText;
@property(nonatomic) long long totalNum; // @synthesize totalNum=_totalNum;
@property(nonatomic) long long shopActivityTotalNum; // @synthesize shopActivityTotalNum=_shopActivityTotalNum;
@property(nonatomic) double avgServiceScore; // @synthesize avgServiceScore=_avgServiceScore;
@property(nonatomic) double serviceScore; // @synthesize serviceScore=_serviceScore;
@property(nonatomic) double avgEfficiencyScore; // @synthesize avgEfficiencyScore=_avgEfficiencyScore;
@property(nonatomic) double efficiencyScore; // @synthesize efficiencyScore=_efficiencyScore;
@property(nonatomic) double avgWareScore; // @synthesize avgWareScore=_avgWareScore;
@property(nonatomic) double wareScore; // @synthesize wareScore=_wareScore;
@property(nonatomic) _Bool diamond; // @synthesize diamond=_diamond;
@property(copy, nonatomic) NSString *venderType; // @synthesize venderType=_venderType;
@property(retain, nonatomic) NSDictionary *shopCouponsList; // @synthesize shopCouponsList=_shopCouponsList;
@property(copy, nonatomic) NSString *brief; // @synthesize brief=_brief;
@property(nonatomic) _Bool hasCoupon; // @synthesize hasCoupon=_hasCoupon;
@property(nonatomic) long long promotionNum; // @synthesize promotionNum=_promotionNum;
@property(nonatomic) long long newNum; // @synthesize newNum=_newNum;
@property(nonatomic) long long followCount; // @synthesize followCount=_followCount;
@property(copy, nonatomic) NSString *squareLogo; // @synthesize squareLogo=_squareLogo;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) double score; // @synthesize score=_score;
@property(copy, nonatomic) NSString *nameB; // @synthesize nameB=_nameB;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;

@end

