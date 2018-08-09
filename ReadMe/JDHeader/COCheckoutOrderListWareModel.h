//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutGoodsMarkModel, NSArray, NSNumber, NSString;

@interface COCheckoutOrderListWareModel : JDModel
{
    _Bool _isMainSku;
    _Bool _isBigItem;
    _Bool _overseaPurchase;
    _Bool _isSamGoods;
    _Bool _isSamMemberPrice;
    _Bool _isLoc;
    _Bool _hidePrice;
    NSString *_number;
    NSArray *_giftList;
    NSString *_Id;
    NSString *_name;
    NSString *_imageUrl;
    NSString *_stockStatus;
    NSString *_priceAndNum;
    NSString *_jdPrice;
    NSString *_preSalePrice;
    NSString *_bigItemInstallVender;
    NSString *_promoId;
    NSString *_priceDisparities;
    long long _internationalType;
    NSArray *_labelModelArray;
    NSString *_venderId;
    NSArray *_dimAttributesArray;
    NSString *_samPriceIcon;
    NSNumber *_wareWeight;
    NSString *_weightAndNum;
    NSNumber *_wareNum;
    COCheckoutGoodsMarkModel *_mark;
    NSString *_plusPriceIcon;
    NSString *_plusPrice;
    NSString *_locShopName;
    NSString *_locShopAddress;
    NSString *_titleTag;
    NSArray *_tags;
    NSArray *_giftArray;
    NSNumber *_typeNum;
    NSNumber *_clildTypenNum;
}

@property(retain, nonatomic) NSNumber *clildTypenNum; // @synthesize clildTypenNum=_clildTypenNum;
@property(retain, nonatomic) NSNumber *typeNum; // @synthesize typeNum=_typeNum;
@property(retain, nonatomic) NSArray *giftArray; // @synthesize giftArray=_giftArray;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) _Bool hidePrice; // @synthesize hidePrice=_hidePrice;
@property(readonly, nonatomic) NSString *titleTag; // @synthesize titleTag=_titleTag;
@property(readonly, nonatomic) NSString *locShopAddress; // @synthesize locShopAddress=_locShopAddress;
@property(readonly, nonatomic) NSString *locShopName; // @synthesize locShopName=_locShopName;
@property(readonly, nonatomic) _Bool isLoc; // @synthesize isLoc=_isLoc;
@property(readonly, nonatomic) NSString *plusPrice; // @synthesize plusPrice=_plusPrice;
@property(readonly, nonatomic) NSString *plusPriceIcon; // @synthesize plusPriceIcon=_plusPriceIcon;
@property(readonly, nonatomic) COCheckoutGoodsMarkModel *mark; // @synthesize mark=_mark;
@property(readonly, nonatomic) NSNumber *wareNum; // @synthesize wareNum=_wareNum;
@property(readonly, nonatomic) NSString *weightAndNum; // @synthesize weightAndNum=_weightAndNum;
@property(readonly, nonatomic) NSNumber *wareWeight; // @synthesize wareWeight=_wareWeight;
@property(readonly, nonatomic) NSString *samPriceIcon; // @synthesize samPriceIcon=_samPriceIcon;
@property(readonly, nonatomic) _Bool isSamMemberPrice; // @synthesize isSamMemberPrice=_isSamMemberPrice;
@property(readonly, nonatomic) _Bool isSamGoods; // @synthesize isSamGoods=_isSamGoods;
@property(readonly, nonatomic) NSArray *dimAttributesArray; // @synthesize dimAttributesArray=_dimAttributesArray;
@property(readonly, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(readonly, nonatomic) NSArray *labelModelArray; // @synthesize labelModelArray=_labelModelArray;
@property(readonly, nonatomic) long long internationalType; // @synthesize internationalType=_internationalType;
@property(readonly, nonatomic) _Bool overseaPurchase; // @synthesize overseaPurchase=_overseaPurchase;
@property(readonly, nonatomic) NSString *priceDisparities; // @synthesize priceDisparities=_priceDisparities;
@property(readonly, nonatomic) NSString *promoId; // @synthesize promoId=_promoId;
@property(readonly, nonatomic) NSString *bigItemInstallVender; // @synthesize bigItemInstallVender=_bigItemInstallVender;
@property(readonly, nonatomic) _Bool isBigItem; // @synthesize isBigItem=_isBigItem;
@property(readonly, nonatomic) NSString *preSalePrice; // @synthesize preSalePrice=_preSalePrice;
@property(readonly, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(readonly, nonatomic) NSString *priceAndNum; // @synthesize priceAndNum=_priceAndNum;
@property(readonly, nonatomic) NSString *stockStatus; // @synthesize stockStatus=_stockStatus;
@property(readonly, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *Id; // @synthesize Id=_Id;
@property(readonly, nonatomic) _Bool isMainSku; // @synthesize isMainSku=_isMainSku;
- (void).cxx_destruct;
- (id)initWithCOCheckoutMainVenderAffiliatedVORM:(id)arg1;
- (id)initWithCOCheckoutMainVenderCommodityRM:(id)arg1;
@property(readonly, nonatomic) NSArray *giftList; // @synthesize giftList=_giftList;
@property(readonly, nonatomic) long long clildType;
@property(readonly, nonatomic) long long type;
- (_Bool)isServiceOrGiftType;
- (id)serviceOrGiftText;
@property(readonly, nonatomic) NSString *number; // @synthesize number=_number;
- (void)co_setGiftlist:(id)arg1;
- (void)co_setStockStatus:(id)arg1;
- (void)co_setImageUrl:(id)arg1;
- (void)setInternationalType:(long long)arg1;
- (id)getWareLabelModels;
- (_Bool)isAccessoryType:(long long)arg1;
- (_Bool)isPromotionWithType:(long long)arg1;
- (_Bool)wareTypeIsServiceOrGiftWithWareModelType:(long long)arg1;
- (void)setImageDomain:(id)arg1;
- (_Bool)isMainWare;
- (_Bool)isPromotion;
- (void)setDataWithDic:(id)arg1;
- (id)convertToToastGoods;
- (id)convertToToastPriceChange;

@end

