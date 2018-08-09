//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class COCheckoutGoodsMarkModel, NSArray, NSNumber, NSString;

@interface COCheckoutMainVenderCommodityRM : NSObject
{
    NSString *_promoId;
    NSString *_ID;
    NSString *_name;
    NSString *_jdPrice;
    NSString *_rePrice;
    NSString *_rePriceIcon;
    NSString *_point;
    NSString *_stockStatus;
    NSString *_num;
    NSNumber *_num_int;
    NSNumber *_type;
    NSString *_unUseCouponsType;
    NSString *_imageUrl;
    NSString *_desc;
    NSNumber *_isMainSku;
    NSString *_internationalIcon;
    NSString *_smallInternationalIcon;
    NSString *_returnGoodsMsg;
    NSString *_returnGoodsIcon;
    NSString *_JDBeanPromotion;
    NSString *_JDBeanPromotionIcon;
    NSString *_venderCashBackMsg;
    NSString *_venderCashBackIcon;
    NSString *_JDChoiceIcon;
    NSString *_JDChoiceMsg;
    NSString *_woErMaIcon;
    NSString *_woErMaMsg;
    NSString *_jingZunDaIcon;
    NSString *_jingZunDaMsg;
    NSNumber *_isBigItem;
    NSString *_venderId;
    NSNumber *_venderType;
    NSString *_reJdBean;
    NSString *_reJdBeanIcon;
    NSString *_phoneExclusiveIcon;
    NSString *_colorName;
    NSString *_colorValue;
    NSString *_sizeName;
    NSString *_hierarchy;
    NSString *_bigItemInstallIcon;
    NSString *_bigItemInstallMsg;
    NSNumber *_overseaPurchase;
    NSString *_bigItemInstallVender;
    NSNumber *_taxAmount;
    NSString *_isSeptax;
    NSNumber *_templateId;
    NSNumber *_volume;
    NSNumber *_weight;
    NSNumber *_serviceItemId;
    NSString *_serviceItemName;
    NSNumber *_isSamGoods;
    NSNumber *_isSamMemberPrice;
    NSString *_samGoodsIcon;
    NSString *_samGoodsMsg;
    NSString *_samPriceIcon;
    NSNumber *_thirdCategoryId;
    NSString *_mainSku;
    NSString *_priceHide;
    NSNumber *_hideJdPrice;
    NSString *_weightAndNum;
    NSString *_locShopId;
    NSString *_locShopName;
    NSString *_locShopAddress;
    NSNumber *_isLoc;
    NSString *_minBuyNum;
    NSString *_maxBuyNum;
    NSNumber *_internationalType;
    NSString *_internationalMsg;
    NSArray *_dimAttributes;
    NSArray *_iconList;
    NSString *_priceAndNum;
    COCheckoutGoodsMarkModel *_mark;
    NSNumber *_isFresh;
    NSNumber *_price;
    NSNumber *_clildType;
    NSString *_vPromoId;
    NSString *_plusPriceIcon;
    NSString *_plusPrice;
    NSString *_titleTag;
    NSNumber *_realVenderType;
    NSNumber *_isCanBuyWithoutGift;
    NSArray *_affiliatedVoList;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(readonly, nonatomic) NSArray *affiliatedVoList; // @synthesize affiliatedVoList=_affiliatedVoList;
@property(readonly, nonatomic) NSNumber *isCanBuyWithoutGift; // @synthesize isCanBuyWithoutGift=_isCanBuyWithoutGift;
@property(readonly, nonatomic) NSNumber *realVenderType; // @synthesize realVenderType=_realVenderType;
@property(readonly, nonatomic) NSString *titleTag; // @synthesize titleTag=_titleTag;
@property(readonly, nonatomic) NSString *plusPrice; // @synthesize plusPrice=_plusPrice;
@property(readonly, nonatomic) NSString *plusPriceIcon; // @synthesize plusPriceIcon=_plusPriceIcon;
@property(readonly, nonatomic) NSString *vPromoId; // @synthesize vPromoId=_vPromoId;
@property(readonly, nonatomic) NSNumber *clildType; // @synthesize clildType=_clildType;
@property(readonly, nonatomic) NSNumber *price; // @synthesize price=_price;
@property(readonly, nonatomic) NSNumber *isFresh; // @synthesize isFresh=_isFresh;
@property(readonly, nonatomic) COCheckoutGoodsMarkModel *mark; // @synthesize mark=_mark;
@property(readonly, nonatomic) NSString *priceAndNum; // @synthesize priceAndNum=_priceAndNum;
@property(readonly, nonatomic) NSArray *iconList; // @synthesize iconList=_iconList;
@property(readonly, nonatomic) NSArray *dimAttributes; // @synthesize dimAttributes=_dimAttributes;
@property(readonly, nonatomic) NSString *internationalMsg; // @synthesize internationalMsg=_internationalMsg;
@property(readonly, nonatomic) NSNumber *internationalType; // @synthesize internationalType=_internationalType;
@property(readonly, nonatomic) NSString *maxBuyNum; // @synthesize maxBuyNum=_maxBuyNum;
@property(readonly, nonatomic) NSString *minBuyNum; // @synthesize minBuyNum=_minBuyNum;
@property(readonly, nonatomic) NSNumber *isLoc; // @synthesize isLoc=_isLoc;
@property(readonly, nonatomic) NSString *locShopAddress; // @synthesize locShopAddress=_locShopAddress;
@property(readonly, nonatomic) NSString *locShopName; // @synthesize locShopName=_locShopName;
@property(readonly, nonatomic) NSString *locShopId; // @synthesize locShopId=_locShopId;
@property(readonly, nonatomic) NSString *weightAndNum; // @synthesize weightAndNum=_weightAndNum;
@property(readonly, nonatomic) NSNumber *hideJdPrice; // @synthesize hideJdPrice=_hideJdPrice;
@property(readonly, nonatomic) NSString *priceHide; // @synthesize priceHide=_priceHide;
@property(readonly, nonatomic) NSString *mainSku; // @synthesize mainSku=_mainSku;
@property(readonly, nonatomic) NSNumber *thirdCategoryId; // @synthesize thirdCategoryId=_thirdCategoryId;
@property(readonly, nonatomic) NSString *samPriceIcon; // @synthesize samPriceIcon=_samPriceIcon;
@property(readonly, nonatomic) NSString *samGoodsMsg; // @synthesize samGoodsMsg=_samGoodsMsg;
@property(readonly, nonatomic) NSString *samGoodsIcon; // @synthesize samGoodsIcon=_samGoodsIcon;
@property(readonly, nonatomic) NSNumber *isSamMemberPrice; // @synthesize isSamMemberPrice=_isSamMemberPrice;
@property(readonly, nonatomic) NSNumber *isSamGoods; // @synthesize isSamGoods=_isSamGoods;
@property(readonly, nonatomic) NSString *serviceItemName; // @synthesize serviceItemName=_serviceItemName;
@property(readonly, nonatomic) NSNumber *serviceItemId; // @synthesize serviceItemId=_serviceItemId;
@property(readonly, nonatomic) NSNumber *weight; // @synthesize weight=_weight;
@property(readonly, nonatomic) NSNumber *volume; // @synthesize volume=_volume;
@property(readonly, nonatomic) NSNumber *templateId; // @synthesize templateId=_templateId;
@property(readonly, nonatomic) NSString *isSeptax; // @synthesize isSeptax=_isSeptax;
@property(readonly, nonatomic) NSNumber *taxAmount; // @synthesize taxAmount=_taxAmount;
@property(readonly, nonatomic) NSString *bigItemInstallVender; // @synthesize bigItemInstallVender=_bigItemInstallVender;
@property(readonly, nonatomic) NSNumber *overseaPurchase; // @synthesize overseaPurchase=_overseaPurchase;
@property(readonly, nonatomic) NSString *bigItemInstallMsg; // @synthesize bigItemInstallMsg=_bigItemInstallMsg;
@property(readonly, nonatomic) NSString *bigItemInstallIcon; // @synthesize bigItemInstallIcon=_bigItemInstallIcon;
@property(readonly, nonatomic) NSString *hierarchy; // @synthesize hierarchy=_hierarchy;
@property(readonly, nonatomic) NSString *sizeName; // @synthesize sizeName=_sizeName;
@property(readonly, nonatomic) NSString *colorValue; // @synthesize colorValue=_colorValue;
@property(readonly, nonatomic) NSString *colorName; // @synthesize colorName=_colorName;
@property(readonly, nonatomic) NSString *phoneExclusiveIcon; // @synthesize phoneExclusiveIcon=_phoneExclusiveIcon;
@property(readonly, nonatomic) NSString *reJdBeanIcon; // @synthesize reJdBeanIcon=_reJdBeanIcon;
@property(readonly, nonatomic) NSString *reJdBean; // @synthesize reJdBean=_reJdBean;
@property(readonly, nonatomic) NSNumber *venderType; // @synthesize venderType=_venderType;
@property(readonly, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(readonly, nonatomic) NSNumber *isBigItem; // @synthesize isBigItem=_isBigItem;
@property(readonly, nonatomic) NSString *jingZunDaMsg; // @synthesize jingZunDaMsg=_jingZunDaMsg;
@property(readonly, nonatomic) NSString *jingZunDaIcon; // @synthesize jingZunDaIcon=_jingZunDaIcon;
@property(readonly, nonatomic) NSString *woErMaMsg; // @synthesize woErMaMsg=_woErMaMsg;
@property(readonly, nonatomic) NSString *woErMaIcon; // @synthesize woErMaIcon=_woErMaIcon;
@property(readonly, nonatomic) NSString *JDChoiceMsg; // @synthesize JDChoiceMsg=_JDChoiceMsg;
@property(readonly, nonatomic) NSString *JDChoiceIcon; // @synthesize JDChoiceIcon=_JDChoiceIcon;
@property(readonly, nonatomic) NSString *venderCashBackIcon; // @synthesize venderCashBackIcon=_venderCashBackIcon;
@property(readonly, nonatomic) NSString *venderCashBackMsg; // @synthesize venderCashBackMsg=_venderCashBackMsg;
@property(readonly, nonatomic) NSString *JDBeanPromotionIcon; // @synthesize JDBeanPromotionIcon=_JDBeanPromotionIcon;
@property(readonly, nonatomic) NSString *JDBeanPromotion; // @synthesize JDBeanPromotion=_JDBeanPromotion;
@property(readonly, nonatomic) NSString *returnGoodsIcon; // @synthesize returnGoodsIcon=_returnGoodsIcon;
@property(readonly, nonatomic) NSString *returnGoodsMsg; // @synthesize returnGoodsMsg=_returnGoodsMsg;
@property(readonly, nonatomic) NSString *smallInternationalIcon; // @synthesize smallInternationalIcon=_smallInternationalIcon;
@property(readonly, nonatomic) NSString *internationalIcon; // @synthesize internationalIcon=_internationalIcon;
@property(readonly, nonatomic) NSNumber *isMainSku; // @synthesize isMainSku=_isMainSku;
@property(readonly, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(readonly, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(readonly, nonatomic) NSString *unUseCouponsType; // @synthesize unUseCouponsType=_unUseCouponsType;
@property(readonly, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(readonly, nonatomic) NSNumber *num_int; // @synthesize num_int=_num_int;
@property(readonly, nonatomic) NSString *num; // @synthesize num=_num;
@property(readonly, nonatomic) NSString *stockStatus; // @synthesize stockStatus=_stockStatus;
@property(readonly, nonatomic) NSString *point; // @synthesize point=_point;
@property(readonly, nonatomic) NSString *rePriceIcon; // @synthesize rePriceIcon=_rePriceIcon;
@property(readonly, nonatomic) NSString *rePrice; // @synthesize rePrice=_rePrice;
@property(readonly, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) NSString *ID; // @synthesize ID=_ID;
@property(readonly, nonatomic) NSString *promoId; // @synthesize promoId=_promoId;
- (void).cxx_destruct;

@end

