//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface JDShopAddCartWareModel : NSObject
{
    _Bool _hasPromotion;
    _Bool _hasSimilar;
    _Bool _canAddCart;
    _Bool _canReportPrice;
    _Bool _showMartPrice;
    _Bool _showHandSpecialPrice;
    _Bool _canConsultFlag;
    _Bool _eBookFlag;
    _Bool _eche;
    _Bool _isFlashBuy;
    _Bool _international;
    _Bool _needShield;
    _Bool _loc;
    _Bool _groupBuyFlag;
    _Bool _Jdself;
    _Bool _priceKeep;
    _Bool _isBooking;
    _Bool _onPanicBuying;
    _Bool _preSale;
    _Bool _fsIsRealShowMultiShopName;
    _Bool _fsExposeSkus;
    _Bool _tideUp;
    int _totalCount;
    NSString *_name;
    NSString *_productCode;
    NSString *_adWords;
    NSString *_jdPrice;
    NSString *_iconC;
    NSString *_author;
    NSNumber *_marketPrice;
    NSNumber *_memberPrice;
    NSString *_levelStr;
    NSString *_imgUrl;
    NSString *_longImgUrl;
    NSString *_imgUrlN1;
    NSString *_imgUrlN2;
    NSString *_imgUrlN3;
    NSString *_imgUrlN4;
    NSString *_imgUrlN5;
    NSArray *_pdImgs;
    NSString *_priceImgUrl;
    NSString *_mPrice;
    NSString *_promotionInfoTitle;
    NSString *_promotionInfo;
    NSString *_miaosha;
    NSString *_PriceShow;
    NSString *_targetUrl;
    NSString *_adIconUrl;
    NSString *_clickUrl;
    NSString *_descriptionString;
    NSString *_priority;
    NSString *_fsPriorityTagName;
    NSString *_buyCount;
    NSString *_price;
    NSNumber *_discount;
    NSNumber *_suitsID;
    NSString *_productImageUrl;
    NSString *_SourceType;
    NSString *_SourceValue;
    NSArray *_promotionFlag;
    NSString *_xiangStr;
    double _averageScore;
    NSString *_good;
    NSString *_index;
    NSString *_eBookUrl;
    NSString *_toMURL;
    NSDictionary *_fsMultiSuppliers;
    NSString *_fsMultiShopName;
    NSDictionary *_fsOldWare;
    NSString *_deliveryId;
    NSString *_sType;
    long long _activePromotionId;
    NSString *_availableInStore;
    NSString *_stockState;
    NSString *_interlImgUrl;
    NSString *_promotionIconUrl;
    NSString *_customAttr;
    NSArray *_customAttrList;
    NSString *_totalScore;
    NSString *_disPrice;
    NSString *_diffMobilePrice;
    NSDictionary *_wareRank;
    long long _stockQuantity;
    long long _stagesKinds;
    NSString *_floworder;
    NSArray *_tags;
    NSString *_catid;
    NSString *_p13nFlags;
    NSString *_flags;
    NSString *_ebookId;
    NSString *_lowestBuy;
    NSString *_samsTag;
    NSString *_smprice;
    NSString *_gaiaAttr;
    NSString *_abt;
    NSString *_plusPrice;
    NSString *_fsNoPriceMsg;
    NSString *_fsStoreName;
    NSString *_fsDeliveryTime;
    NSString *_fsSkuTag;
    NSString *_fsWareType;
    NSString *_weight;
    NSString *_dist;
    NSDictionary *_fsConfigDatas;
    NSString *_fsExcPrice;
    NSString *_fsArticleType;
    NSString *_fsArticleId;
    NSString *_fsPageViews;
    NSString *_fsColumnImgUrl;
    NSString *_fsColumnBigImgUrl;
    NSString *_locShopId;
}

@property(nonatomic) _Bool tideUp; // @synthesize tideUp=_tideUp;
@property(copy, nonatomic) NSString *locShopId; // @synthesize locShopId=_locShopId;
@property(copy, nonatomic) NSString *fsColumnBigImgUrl; // @synthesize fsColumnBigImgUrl=_fsColumnBigImgUrl;
@property(copy, nonatomic) NSString *fsColumnImgUrl; // @synthesize fsColumnImgUrl=_fsColumnImgUrl;
@property(copy, nonatomic) NSString *fsPageViews; // @synthesize fsPageViews=_fsPageViews;
@property(copy, nonatomic) NSString *fsArticleId; // @synthesize fsArticleId=_fsArticleId;
@property(copy, nonatomic) NSString *fsArticleType; // @synthesize fsArticleType=_fsArticleType;
@property(copy, nonatomic) NSString *fsExcPrice; // @synthesize fsExcPrice=_fsExcPrice;
@property(copy, nonatomic) NSDictionary *fsConfigDatas; // @synthesize fsConfigDatas=_fsConfigDatas;
@property(copy, nonatomic) NSString *dist; // @synthesize dist=_dist;
@property(nonatomic) _Bool fsExposeSkus; // @synthesize fsExposeSkus=_fsExposeSkus;
@property(nonatomic) _Bool fsIsRealShowMultiShopName; // @synthesize fsIsRealShowMultiShopName=_fsIsRealShowMultiShopName;
@property(copy, nonatomic) NSString *weight; // @synthesize weight=_weight;
@property(copy, nonatomic) NSString *fsWareType; // @synthesize fsWareType=_fsWareType;
@property(copy, nonatomic) NSString *fsSkuTag; // @synthesize fsSkuTag=_fsSkuTag;
@property(copy, nonatomic) NSString *fsDeliveryTime; // @synthesize fsDeliveryTime=_fsDeliveryTime;
@property(copy, nonatomic) NSString *fsStoreName; // @synthesize fsStoreName=_fsStoreName;
@property(copy, nonatomic) NSString *fsNoPriceMsg; // @synthesize fsNoPriceMsg=_fsNoPriceMsg;
@property(copy, nonatomic) NSString *plusPrice; // @synthesize plusPrice=_plusPrice;
@property(copy, nonatomic) NSString *abt; // @synthesize abt=_abt;
@property(copy, nonatomic) NSString *gaiaAttr; // @synthesize gaiaAttr=_gaiaAttr;
@property(copy, nonatomic) NSString *smprice; // @synthesize smprice=_smprice;
@property(copy, nonatomic) NSString *samsTag; // @synthesize samsTag=_samsTag;
@property(copy, nonatomic) NSString *lowestBuy; // @synthesize lowestBuy=_lowestBuy;
@property(copy, nonatomic) NSString *ebookId; // @synthesize ebookId=_ebookId;
@property(nonatomic) _Bool preSale; // @synthesize preSale=_preSale;
@property(nonatomic) _Bool onPanicBuying; // @synthesize onPanicBuying=_onPanicBuying;
@property(nonatomic) _Bool isBooking; // @synthesize isBooking=_isBooking;
@property(nonatomic) _Bool priceKeep; // @synthesize priceKeep=_priceKeep;
@property(retain, nonatomic) NSString *flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *p13nFlags; // @synthesize p13nFlags=_p13nFlags;
@property(retain, nonatomic) NSString *catid; // @synthesize catid=_catid;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) NSString *floworder; // @synthesize floworder=_floworder;
@property(nonatomic) _Bool Jdself; // @synthesize Jdself=_Jdself;
@property(nonatomic) long long stagesKinds; // @synthesize stagesKinds=_stagesKinds;
@property(nonatomic) long long stockQuantity; // @synthesize stockQuantity=_stockQuantity;
@property(nonatomic) _Bool groupBuyFlag; // @synthesize groupBuyFlag=_groupBuyFlag;
@property(retain, nonatomic) NSDictionary *wareRank; // @synthesize wareRank=_wareRank;
@property(nonatomic) _Bool loc; // @synthesize loc=_loc;
@property(retain, nonatomic) NSString *diffMobilePrice; // @synthesize diffMobilePrice=_diffMobilePrice;
@property(retain, nonatomic) NSString *disPrice; // @synthesize disPrice=_disPrice;
@property(retain, nonatomic) NSString *totalScore; // @synthesize totalScore=_totalScore;
@property(retain, nonatomic) NSArray *customAttrList; // @synthesize customAttrList=_customAttrList;
@property(retain, nonatomic) NSString *customAttr; // @synthesize customAttr=_customAttr;
@property(nonatomic) _Bool needShield; // @synthesize needShield=_needShield;
@property(retain, nonatomic) NSString *promotionIconUrl; // @synthesize promotionIconUrl=_promotionIconUrl;
@property(retain, nonatomic) NSString *interlImgUrl; // @synthesize interlImgUrl=_interlImgUrl;
@property(nonatomic) _Bool international; // @synthesize international=_international;
@property(retain, nonatomic) NSString *stockState; // @synthesize stockState=_stockState;
@property(retain, nonatomic) NSString *availableInStore; // @synthesize availableInStore=_availableInStore;
@property(nonatomic) long long activePromotionId; // @synthesize activePromotionId=_activePromotionId;
@property(retain, nonatomic) NSString *sType; // @synthesize sType=_sType;
@property(retain, nonatomic) NSString *deliveryId; // @synthesize deliveryId=_deliveryId;
@property(nonatomic) _Bool isFlashBuy; // @synthesize isFlashBuy=_isFlashBuy;
@property(retain, nonatomic) NSDictionary *fsOldWare; // @synthesize fsOldWare=_fsOldWare;
@property(retain, nonatomic) NSString *fsMultiShopName; // @synthesize fsMultiShopName=_fsMultiShopName;
@property(retain, nonatomic) NSDictionary *fsMultiSuppliers; // @synthesize fsMultiSuppliers=_fsMultiSuppliers;
@property(retain, nonatomic) NSString *toMURL; // @synthesize toMURL=_toMURL;
@property(nonatomic) _Bool eche; // @synthesize eche=_eche;
@property(retain, nonatomic) NSString *eBookUrl; // @synthesize eBookUrl=_eBookUrl;
@property(nonatomic) _Bool eBookFlag; // @synthesize eBookFlag=_eBookFlag;
@property(retain, nonatomic) NSString *index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *good; // @synthesize good=_good;
@property(nonatomic) int totalCount; // @synthesize totalCount=_totalCount;
@property(nonatomic) double averageScore; // @synthesize averageScore=_averageScore;
@property(retain, nonatomic) NSString *xiangStr; // @synthesize xiangStr=_xiangStr;
@property(retain, nonatomic) NSArray *promotionFlag; // @synthesize promotionFlag=_promotionFlag;
@property(nonatomic) _Bool canConsultFlag; // @synthesize canConsultFlag=_canConsultFlag;
@property(copy, nonatomic) NSString *SourceValue; // @synthesize SourceValue=_SourceValue;
@property(copy, nonatomic) NSString *SourceType; // @synthesize SourceType=_SourceType;
@property(copy, nonatomic) NSString *productImageUrl; // @synthesize productImageUrl=_productImageUrl;
@property(retain, nonatomic) NSNumber *suitsID; // @synthesize suitsID=_suitsID;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount=_discount;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *buyCount; // @synthesize buyCount=_buyCount;
@property(copy, nonatomic) NSString *fsPriorityTagName; // @synthesize fsPriorityTagName=_fsPriorityTagName;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=_priority;
@property(nonatomic) _Bool showHandSpecialPrice; // @synthesize showHandSpecialPrice=_showHandSpecialPrice;
@property(copy, nonatomic) NSString *descriptionString; // @synthesize descriptionString=_descriptionString;
@property(nonatomic) _Bool showMartPrice; // @synthesize showMartPrice=_showMartPrice;
@property(nonatomic) _Bool canReportPrice; // @synthesize canReportPrice=_canReportPrice;
@property(nonatomic) _Bool canAddCart; // @synthesize canAddCart=_canAddCart;
@property(nonatomic) _Bool hasSimilar; // @synthesize hasSimilar=_hasSimilar;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *adIconUrl; // @synthesize adIconUrl=_adIconUrl;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=_targetUrl;
@property(copy, nonatomic) NSString *PriceShow; // @synthesize PriceShow=_PriceShow;
@property(copy, nonatomic) NSString *miaosha; // @synthesize miaosha=_miaosha;
@property(copy, nonatomic) NSString *promotionInfo; // @synthesize promotionInfo=_promotionInfo;
@property(copy, nonatomic) NSString *promotionInfoTitle; // @synthesize promotionInfoTitle=_promotionInfoTitle;
@property(nonatomic) _Bool hasPromotion; // @synthesize hasPromotion=_hasPromotion;
@property(copy, nonatomic) NSString *mPrice; // @synthesize mPrice=_mPrice;
@property(copy, nonatomic) NSString *priceImgUrl; // @synthesize priceImgUrl=_priceImgUrl;
@property(retain, nonatomic) NSArray *pdImgs; // @synthesize pdImgs=_pdImgs;
@property(retain, nonatomic) NSString *imgUrlN5; // @synthesize imgUrlN5=_imgUrlN5;
@property(retain, nonatomic) NSString *imgUrlN4; // @synthesize imgUrlN4=_imgUrlN4;
@property(retain, nonatomic) NSString *imgUrlN3; // @synthesize imgUrlN3=_imgUrlN3;
@property(retain, nonatomic) NSString *imgUrlN2; // @synthesize imgUrlN2=_imgUrlN2;
@property(retain, nonatomic) NSString *imgUrlN1; // @synthesize imgUrlN1=_imgUrlN1;
@property(copy, nonatomic) NSString *longImgUrl; // @synthesize longImgUrl=_longImgUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *levelStr; // @synthesize levelStr=_levelStr;
@property(retain, nonatomic) NSNumber *memberPrice; // @synthesize memberPrice=_memberPrice;
@property(retain, nonatomic) NSNumber *marketPrice; // @synthesize marketPrice=_marketPrice;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(copy, nonatomic) NSString *iconC; // @synthesize iconC=_iconC;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(copy, nonatomic) NSString *adWords; // @synthesize adWords=_adWords;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=_productCode;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)transformToDic;

@end

