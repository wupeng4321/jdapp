//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class DiscussionCounterForProductModel, NSArray, NSDictionary, NSNumber, NSString, StockInfoModel;

@interface ProductModel : JDModel
{
    _Bool hasPromotion_;
    _Bool canReportPrice_;
    _Bool showMartPrice;
    _Bool showHandSpecialPrice;
    _Bool canConsultFlag_;
    _Bool eBookFlag_;
    _Bool eche_;
    _Bool hasSimilar_;
    _Bool canAddCart_;
    _Bool international_;
    _Bool loc_;
    _Bool groupBuyFlag_;
    _Bool _isFlashBuy;
    _Bool _needShield;
    _Bool _Jdself;
    _Bool _priceKeep;
    _Bool _isBooking;
    _Bool _onPanicBuying;
    _Bool _preSale;
    _Bool _fsIsRealShowMultiShopName;
    _Bool _fsExposeSkus;
    _Bool _tideUp;
    int totalCount_;
    NSString *name_;
    NSString *productCode_;
    NSString *adWords_;
    NSString *jdPrice_;
    NSNumber *marketPrice_;
    NSString *longImgUrl_;
    NSString *iconC_;
    NSNumber *memberPrice_;
    NSString *levelStr_;
    NSString *imgUrl_;
    NSString *imgUrlN1_;
    NSString *imgUrlN2_;
    NSString *imgUrlN3_;
    NSString *imgUrlN4_;
    NSString *imgUrlN5_;
    NSArray *pdImgs_;
    NSString *priceImgUrl_;
    StockInfoModel *stockInfoModel_;
    DiscussionCounterForProductModel *disCounter_;
    NSString *promotionInfoTitle_;
    NSString *promotionInfo_;
    NSString *miaosha_;
    NSString *priority_;
    NSString *PriceShow_;
    NSString *buyCount_;
    NSString *price_;
    NSNumber *discount_;
    NSNumber *suitsID_;
    NSString *productImageUrl_;
    NSString *SourceType_;
    NSString *SourceValue_;
    NSString *descriptionString_;
    NSArray *promotionFlag_;
    double averageScore_;
    NSString *good_;
    NSString *xiangStr_;
    NSString *index_;
    NSString *eBookUrl_;
    NSString *toMURL_;
    NSString *targetUrl_;
    NSString *clickUrl_;
    NSString *availableInStore;
    NSString *stockState_;
    NSString *interlImgUrl_;
    NSString *promotionIconUrl_;
    NSString *customAttr_;
    NSArray *customAttrList_;
    NSString *disPrice_;
    NSString *diffMobilePrice_;
    NSDictionary *wareRank_;
    NSString *_author;
    NSString *_mPrice;
    NSString *_adIconUrl;
    NSString *_fsPriorityTagName;
    NSDictionary *_fsMultiSuppliers;
    NSString *_fsMultiShopName;
    NSDictionary *_fsOldWare;
    NSString *_deliveryId;
    NSString *_sType;
    long long _activePromotionId;
    NSString *_totalScore;
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
@property(retain, nonatomic) NSString *totalScore; // @synthesize totalScore=_totalScore;
@property(nonatomic) _Bool needShield; // @synthesize needShield=_needShield;
@property(nonatomic) long long activePromotionId; // @synthesize activePromotionId=_activePromotionId;
@property(retain, nonatomic) NSString *sType; // @synthesize sType=_sType;
@property(retain, nonatomic) NSString *deliveryId; // @synthesize deliveryId=_deliveryId;
@property(nonatomic) _Bool isFlashBuy; // @synthesize isFlashBuy=_isFlashBuy;
@property(retain, nonatomic) NSDictionary *fsOldWare; // @synthesize fsOldWare=_fsOldWare;
@property(retain, nonatomic) NSString *fsMultiShopName; // @synthesize fsMultiShopName=_fsMultiShopName;
@property(retain, nonatomic) NSDictionary *fsMultiSuppliers; // @synthesize fsMultiSuppliers=_fsMultiSuppliers;
@property(copy, nonatomic) NSString *fsPriorityTagName; // @synthesize fsPriorityTagName=_fsPriorityTagName;
@property(copy, nonatomic) NSString *adIconUrl; // @synthesize adIconUrl=_adIconUrl;
@property(copy, nonatomic) NSString *mPrice; // @synthesize mPrice=_mPrice;
@property(copy, nonatomic) NSString *author; // @synthesize author=_author;
@property(nonatomic) _Bool groupBuyFlag; // @synthesize groupBuyFlag=groupBuyFlag_;
@property(retain, nonatomic) NSDictionary *wareRank; // @synthesize wareRank=wareRank_;
@property(nonatomic) _Bool loc; // @synthesize loc=loc_;
@property(retain, nonatomic) NSString *diffMobilePrice; // @synthesize diffMobilePrice=diffMobilePrice_;
@property(retain, nonatomic) NSString *disPrice; // @synthesize disPrice=disPrice_;
@property(retain, nonatomic) NSArray *customAttrList; // @synthesize customAttrList=customAttrList_;
@property(retain, nonatomic) NSString *customAttr; // @synthesize customAttr=customAttr_;
@property(retain, nonatomic) NSString *promotionIconUrl; // @synthesize promotionIconUrl=promotionIconUrl_;
@property(retain, nonatomic) NSString *interlImgUrl; // @synthesize interlImgUrl=interlImgUrl_;
@property(nonatomic) _Bool international; // @synthesize international=international_;
@property(retain, nonatomic) NSString *stockState; // @synthesize stockState=stockState_;
@property(retain, nonatomic) NSString *availableInStore; // @synthesize availableInStore;
@property(nonatomic) _Bool canAddCart; // @synthesize canAddCart=canAddCart_;
@property(nonatomic) _Bool hasSimilar; // @synthesize hasSimilar=hasSimilar_;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=clickUrl_;
@property(copy, nonatomic) NSString *targetUrl; // @synthesize targetUrl=targetUrl_;
@property(retain, nonatomic) NSString *toMURL; // @synthesize toMURL=toMURL_;
@property(nonatomic) _Bool eche; // @synthesize eche=eche_;
@property(retain, nonatomic) NSString *eBookUrl; // @synthesize eBookUrl=eBookUrl_;
@property(nonatomic) _Bool eBookFlag; // @synthesize eBookFlag=eBookFlag_;
@property(retain, nonatomic) NSString *index; // @synthesize index=index_;
@property(retain, nonatomic) NSString *xiangStr; // @synthesize xiangStr=xiangStr_;
@property(copy, nonatomic) NSString *good; // @synthesize good=good_;
@property(nonatomic) int totalCount; // @synthesize totalCount=totalCount_;
@property(nonatomic) double averageScore; // @synthesize averageScore=averageScore_;
@property(retain, nonatomic) NSArray *promotionFlag; // @synthesize promotionFlag=promotionFlag_;
@property(nonatomic) _Bool canConsultFlag; // @synthesize canConsultFlag=canConsultFlag_;
@property(copy, nonatomic) NSString *descriptionString; // @synthesize descriptionString=descriptionString_;
@property(nonatomic) _Bool showHandSpecialPrice; // @synthesize showHandSpecialPrice;
@property(nonatomic) _Bool showMartPrice; // @synthesize showMartPrice;
@property(nonatomic) _Bool canReportPrice; // @synthesize canReportPrice=canReportPrice_;
@property(copy, nonatomic) NSString *SourceValue; // @synthesize SourceValue=SourceValue_;
@property(copy, nonatomic) NSString *SourceType; // @synthesize SourceType=SourceType_;
@property(copy, nonatomic) NSString *productImageUrl; // @synthesize productImageUrl=productImageUrl_;
@property(retain, nonatomic) NSNumber *suitsID; // @synthesize suitsID=suitsID_;
@property(retain, nonatomic) NSNumber *discount; // @synthesize discount=discount_;
@property(copy, nonatomic) NSString *price; // @synthesize price=price_;
@property(copy, nonatomic) NSString *buyCount; // @synthesize buyCount=buyCount_;
@property(copy, nonatomic) NSString *PriceShow; // @synthesize PriceShow=PriceShow_;
@property(copy, nonatomic) NSString *priority; // @synthesize priority=priority_;
@property(copy, nonatomic) NSString *miaosha; // @synthesize miaosha=miaosha_;
@property(copy, nonatomic) NSString *promotionInfo; // @synthesize promotionInfo=promotionInfo_;
@property(copy, nonatomic) NSString *promotionInfoTitle; // @synthesize promotionInfoTitle=promotionInfoTitle_;
@property(nonatomic) _Bool hasPromotion; // @synthesize hasPromotion=hasPromotion_;
@property(retain, nonatomic) DiscussionCounterForProductModel *disCounter; // @synthesize disCounter=disCounter_;
@property(retain, nonatomic) StockInfoModel *stockInfoModel; // @synthesize stockInfoModel=stockInfoModel_;
@property(copy, nonatomic) NSString *priceImgUrl; // @synthesize priceImgUrl=priceImgUrl_;
@property(retain, nonatomic) NSArray *pdImgs; // @synthesize pdImgs=pdImgs_;
@property(retain, nonatomic) NSString *imgUrlN5; // @synthesize imgUrlN5=imgUrlN5_;
@property(retain, nonatomic) NSString *imgUrlN4; // @synthesize imgUrlN4=imgUrlN4_;
@property(retain, nonatomic) NSString *imgUrlN3; // @synthesize imgUrlN3=imgUrlN3_;
@property(retain, nonatomic) NSString *imgUrlN2; // @synthesize imgUrlN2=imgUrlN2_;
@property(retain, nonatomic) NSString *imgUrlN1; // @synthesize imgUrlN1=imgUrlN1_;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=imgUrl_;
@property(copy, nonatomic) NSString *levelStr; // @synthesize levelStr=levelStr_;
@property(retain, nonatomic) NSNumber *memberPrice; // @synthesize memberPrice=memberPrice_;
@property(copy, nonatomic) NSString *iconC; // @synthesize iconC=iconC_;
@property(copy, nonatomic) NSString *longImgUrl; // @synthesize longImgUrl=longImgUrl_;
@property(retain, nonatomic) NSNumber *marketPrice; // @synthesize marketPrice=marketPrice_;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=jdPrice_;
@property(copy, nonatomic) NSString *adWords; // @synthesize adWords=adWords_;
@property(copy, nonatomic) NSString *productCode; // @synthesize productCode=productCode_;
@property(copy, nonatomic) NSString *name; // @synthesize name=name_;
- (void)setupDiffSizeImageUrl;
- (void)dealloc;
- (id)copy;
- (void)setDataWithDic:(id)arg1;

@end

