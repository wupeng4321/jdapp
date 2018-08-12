//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;

@interface JDSKUModel : JDModel
{
    NSNumber *AwardType;
    NSNumber *Num;
    NSString *PriceImg;
    NSNumber *targetId;
    NSString *PriceShow;
    NSString *Name;
    NSArray *Tags;
    NSString *ImgUrl;
    NSNumber *RePrice;
    NSNumber *CheckType;
    NSNumber *Price;
    NSNumber *Discount;
    NSString *Id;
    NSNumber *Point;
    NSNumber *cid;
    NSString *msg;
    NSMutableArray *NSMutableArray;
    NSArray *YbSkus;
    NSString *SourceType;
    NSString *SourceValue;
    NSArray *Gifts;
    int index;
    _Bool isLastModel;
    NSString *stock;
    NSArray *giftPools;
    _Bool _isBook;
    _Bool _sp_isGlobalSku;
    _Bool _sp_isMobileVIP;
    _Bool _sp_isShopVIP;
    _Bool _sp_isPreBuy;
    _Bool _sp_isOTCSku;
    _Bool _sp_isSamsVIP;
    _Bool _sp_isSamsVIPPrice;
    _Bool _sp_isSoldOutSku;
    _Bool _sp_isJDPlusVIP;
    _Bool _sp_isGlobalHunter;
    _Bool _sp_isJDSelectedProduct;
    _Bool _csp_isSales;
    _Bool _csp_isIOU;
    _Bool _sp_isJDFreshSku;
    _Bool _sp_isSupportGiftBuy;
    NSString *giftMsg;
    NSMutableArray *CanSelectYB;
    NSArray *canSelectPromotions;
    NSDictionary *propertyTags;
    NSString *_suitID;
    NSArray *_affixes;
    NSNumber *_lowestBuyCount;
    NSString *_remainNum;
    NSString *_remainNumInt;
    NSString *_skuWeight;
    NSString *_orderType;
    NSString *_dist;
    long long _limitNumber;
    NSArray *_giftPackings;
    NSArray *_skuheadIcons;
    NSArray *_priceTopIcons;
}

@property(copy, nonatomic) NSArray *priceTopIcons; // @synthesize priceTopIcons=_priceTopIcons;
@property(copy, nonatomic) NSArray *skuheadIcons; // @synthesize skuheadIcons=_skuheadIcons;
@property(retain, nonatomic) NSArray *giftPackings; // @synthesize giftPackings=_giftPackings;
@property(nonatomic) long long limitNumber; // @synthesize limitNumber=_limitNumber;
@property(copy, nonatomic) NSString *dist; // @synthesize dist=_dist;
@property(copy, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(nonatomic) _Bool sp_isSupportGiftBuy; // @synthesize sp_isSupportGiftBuy=_sp_isSupportGiftBuy;
@property(nonatomic) _Bool sp_isJDFreshSku; // @synthesize sp_isJDFreshSku=_sp_isJDFreshSku;
@property(nonatomic) _Bool csp_isIOU; // @synthesize csp_isIOU=_csp_isIOU;
@property(nonatomic) _Bool csp_isSales; // @synthesize csp_isSales=_csp_isSales;
@property(nonatomic) _Bool sp_isJDSelectedProduct; // @synthesize sp_isJDSelectedProduct=_sp_isJDSelectedProduct;
@property(nonatomic) _Bool sp_isGlobalHunter; // @synthesize sp_isGlobalHunter=_sp_isGlobalHunter;
@property(nonatomic) _Bool sp_isJDPlusVIP; // @synthesize sp_isJDPlusVIP=_sp_isJDPlusVIP;
@property(nonatomic) _Bool sp_isSoldOutSku; // @synthesize sp_isSoldOutSku=_sp_isSoldOutSku;
@property(nonatomic) _Bool sp_isSamsVIPPrice; // @synthesize sp_isSamsVIPPrice=_sp_isSamsVIPPrice;
@property(nonatomic) _Bool sp_isSamsVIP; // @synthesize sp_isSamsVIP=_sp_isSamsVIP;
@property(nonatomic) _Bool sp_isOTCSku; // @synthesize sp_isOTCSku=_sp_isOTCSku;
@property(nonatomic) _Bool sp_isPreBuy; // @synthesize sp_isPreBuy=_sp_isPreBuy;
@property(nonatomic) _Bool sp_isShopVIP; // @synthesize sp_isShopVIP=_sp_isShopVIP;
@property(nonatomic) _Bool sp_isMobileVIP; // @synthesize sp_isMobileVIP=_sp_isMobileVIP;
@property(nonatomic) _Bool sp_isGlobalSku; // @synthesize sp_isGlobalSku=_sp_isGlobalSku;
@property(nonatomic) _Bool isBook; // @synthesize isBook=_isBook;
@property(copy, nonatomic) NSString *skuWeight; // @synthesize skuWeight=_skuWeight;
@property(copy, nonatomic) NSString *remainNumInt; // @synthesize remainNumInt=_remainNumInt;
@property(copy, nonatomic) NSString *remainNum; // @synthesize remainNum=_remainNum;
@property(retain, nonatomic) NSNumber *lowestBuyCount; // @synthesize lowestBuyCount=_lowestBuyCount;
@property(retain, nonatomic) NSArray *affixes; // @synthesize affixes=_affixes;
@property(retain, nonatomic) NSString *suitID; // @synthesize suitID=_suitID;
@property(retain, nonatomic) NSArray *giftPools; // @synthesize giftPools;
@property(retain, nonatomic) NSNumber *cid; // @synthesize cid;
@property(retain, nonatomic) NSDictionary *propertyTags; // @synthesize propertyTags;
@property(copy, nonatomic) NSString *stock; // @synthesize stock;
@property(nonatomic) _Bool isLastModel; // @synthesize isLastModel;
@property(nonatomic) int index; // @synthesize index;
@property(retain, nonatomic) NSArray *canSelectPromotions; // @synthesize canSelectPromotions;
@property(retain, nonatomic) NSArray *Gifts; // @synthesize Gifts;
@property(retain, nonatomic) NSString *SourceValue; // @synthesize SourceValue;
@property(retain, nonatomic) NSString *SourceType; // @synthesize SourceType;
@property(retain, nonatomic) NSArray *YbSkus; // @synthesize YbSkus;
@property(retain, nonatomic) NSMutableArray *CanSelectYB; // @synthesize CanSelectYB;
@property(retain, nonatomic) NSString *giftMsg; // @synthesize giftMsg;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(retain, nonatomic) NSNumber *Point; // @synthesize Point;
@property(retain, nonatomic) NSString *Id; // @synthesize Id;
@property(retain, nonatomic) NSNumber *Discount; // @synthesize Discount;
@property(retain, nonatomic) NSNumber *Price; // @synthesize Price;
@property(retain, nonatomic) NSNumber *CheckType; // @synthesize CheckType;
@property(retain, nonatomic) NSNumber *RePrice; // @synthesize RePrice;
@property(retain, nonatomic) NSString *ImgUrl; // @synthesize ImgUrl;
@property(retain, nonatomic) NSArray *Tags; // @synthesize Tags;
@property(retain, nonatomic) NSString *Name; // @synthesize Name;
@property(retain, nonatomic) NSString *PriceShow; // @synthesize PriceShow;
@property(retain, nonatomic) NSNumber *targetId; // @synthesize targetId;
@property(retain, nonatomic) NSString *PriceImg; // @synthesize PriceImg;
@property(retain, nonatomic) NSNumber *Num; // @synthesize Num;
@property(retain, nonatomic) NSNumber *AwardType; // @synthesize AwardType;
- (void).cxx_destruct;
- (void)setImageDomain:(id)arg1;
- (void)setItemsImageUrlWithImageDomain:(id)arg1 items:(id)arg2;
- (void)dealloc;
- (id)copy;
- (void)setDataWithDic:(id)arg1;
- (id)createGiftPacking:(id)arg1;
- (_Bool)createIsSoldOutValue:(id)arg1;
- (id)createGiftPools:(id)arg1;
- (id)createIcons:(id)arg1;
- (id)createPromotions:(id)arg1;
- (id)createAffixes:(id)arg1;
- (id)createGifts:(id)arg1;
- (id)createYB:(id)arg1;
- (id)createCanSelectYB:(id)arg1;

@end

