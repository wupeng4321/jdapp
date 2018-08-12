//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, SCShopCartMainFlowDataAccess;

@interface SCShopCartConfigManager : NSObject
{
    _Bool _isShowReducePriceMessage;
    _Bool _isInterfaceDowngrade;
    _Bool _isLocalAddedItem;
    _Bool _closeClearCart;
    NSString *_jdFreightMsg;
    NSString *_fareRuleNote;
    long long _clearCartGuideDayGap;
    long long _cartRecomendFloor;
    long long _serverConfigVersion;
    SCShopCartMainFlowDataAccess *_dataAccess;
    NSDictionary *_currentConfigDic;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSDictionary *currentConfigDic; // @synthesize currentConfigDic=_currentConfigDic;
@property(retain, nonatomic) SCShopCartMainFlowDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(nonatomic) long long serverConfigVersion; // @synthesize serverConfigVersion=_serverConfigVersion;
@property(nonatomic) long long cartRecomendFloor; // @synthesize cartRecomendFloor=_cartRecomendFloor;
@property(nonatomic) long long clearCartGuideDayGap; // @synthesize clearCartGuideDayGap=_clearCartGuideDayGap;
@property _Bool closeClearCart; // @synthesize closeClearCart=_closeClearCart;
@property(readonly, copy, nonatomic) NSString *fareRuleNote; // @synthesize fareRuleNote=_fareRuleNote;
@property(readonly, nonatomic) _Bool isLocalAddedItem; // @synthesize isLocalAddedItem=_isLocalAddedItem;
@property(nonatomic) _Bool isInterfaceDowngrade; // @synthesize isInterfaceDowngrade=_isInterfaceDowngrade;
@property(nonatomic) _Bool isShowReducePriceMessage; // @synthesize isShowReducePriceMessage=_isShowReducePriceMessage;
@property(readonly, copy, nonatomic) NSString *jdFreightMsg; // @synthesize jdFreightMsg=_jdFreightMsg;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *invalidHomeService;
@property(readonly, copy, nonatomic) NSString *cartAddClearPlus;
@property(readonly, copy, nonatomic) NSString *cartClearSelectNum;
@property(readonly, copy, nonatomic) NSString *plusCartTitle;
@property(readonly, copy, nonatomic) NSString *cartTitle;
@property(readonly, copy, nonatomic) NSString *cartAddClearTitle;
@property(readonly, copy, nonatomic) NSString *cartAddClearAlmost;
@property(readonly, copy, nonatomic) NSString *cartAddClearFull;
@property(readonly, copy, nonatomic) NSString *orderNumLimitOK;
@property(readonly, copy, nonatomic) NSString *orderNumLimitMsg;
@property(readonly, copy, nonatomic) NSString *orderNumLimitTitle;
@property(readonly, copy, nonatomic) NSString *cartClearDelRetry;
@property(readonly, copy, nonatomic) NSString *cartClearDelSuccess;
@property(readonly, copy, nonatomic) NSString *cartClearTipClick;
@property(readonly, copy, nonatomic) NSString *cartClearTip;
@property(readonly, copy, nonatomic) NSString *cartFullClear;
@property(readonly, copy, nonatomic) NSString *cartFullCancel;
@property(readonly, copy, nonatomic) NSString *skuService;
@property(readonly, copy, nonatomic) NSString *bestPromotionSuccessMessage;
@property(readonly, nonatomic) NSDictionary *optimalPromotion;
@property(readonly, copy, nonatomic) NSString *addressShowOn;
@property(readonly, copy, nonatomic) NSString *shopCoudanFree;
@property(readonly, copy, nonatomic) NSString *shopCoudanSuffix;
@property(readonly, nonatomic) _Bool giftJumpOn;
- (id)attributeSubTitleWithSpecialId:(id)arg1;
- (_Bool)needNewLineShowSubTitleWithSpecialId:(id)arg1;
- (id)orderTitleWithSpecialId:(id)arg1;
@property(readonly, copy, nonatomic) NSString *shareSuitDetails;
@property(readonly, copy, nonatomic) NSString *shareUnCheck;
@property(readonly, copy, nonatomic) NSString *goShareButton;
@property(readonly, copy, nonatomic) NSString *shareButton;
@property(readonly, copy, nonatomic) NSString *shareCheckAll;
@property(readonly, copy, nonatomic) NSString *shareSoldOut;
@property(readonly, copy, nonatomic) NSString *shareSuit;
@property(readonly, copy, nonatomic) NSString *shareTitle;
@property(readonly, copy, nonatomic) NSString *exclusivePrice;
@property(readonly, copy, nonatomic) NSString *yuyueTip10;
@property(readonly, copy, nonatomic) NSString *yuyueTip9;
@property(readonly, copy, nonatomic) NSString *yuyueTip8;
@property(readonly, copy, nonatomic) NSString *yuyueTip7;
@property(readonly, copy, nonatomic) NSString *yuyueTip6;
@property(readonly, copy, nonatomic) NSString *yuyueTip5;
@property(readonly, copy, nonatomic) NSString *yuyueTip4;
@property(readonly, copy, nonatomic) NSString *yuyueTip3;
@property(readonly, copy, nonatomic) NSString *yuyueTip2;
@property(readonly, copy, nonatomic) NSString *yuyueTip1;
@property(readonly, copy, nonatomic) NSString *flashPurchaseName;
@property(readonly, copy, nonatomic) NSString *flashPurchaseEndTime;
@property(readonly, copy, nonatomic) NSString *flashPurchaseRemainTime;
@property(readonly, copy, nonatomic) NSString *overLapInfoTitle;
@property(readonly, copy, nonatomic) NSString *overLapString;
@property(readonly, copy, nonatomic) NSString *giftCollocation;
@property(readonly, copy, nonatomic) NSString *moveToCareIOS;
@property(readonly, copy, nonatomic) NSString *loginBtn;
@property(readonly, copy, nonatomic) NSString *blance1;
@property(readonly, copy, nonatomic) NSString *blance2;
@property(readonly, copy, nonatomic) NSString *fareRuleBtn;
@property(readonly, copy, nonatomic) NSString *fareRuleTitle;
@property(readonly, copy, nonatomic) NSString *skuNumsOfSuit;
@property(readonly, copy, nonatomic) NSString *selectedYanBao;
@property(readonly, copy, nonatomic) NSString *selectedGiftPacking;
@property(readonly, copy, nonatomic) NSString *confirmDelete;
@property(readonly, copy, nonatomic) NSString *separateBlance;
@property(readonly, copy, nonatomic) NSString *jdPharmacy;
@property(readonly, copy, nonatomic) NSString *emptyCouponReceiveSuccess;
@property(readonly, copy, nonatomic) NSString *emptyCouponReceiveFail;
@property(readonly, copy, nonatomic) NSString *emptyCouponUse;
@property(readonly, copy, nonatomic) NSString *emptyCouponReceive;
@property(readonly, copy, nonatomic) NSString *emptyCouponTitle;
@property(readonly, copy, nonatomic) NSString *jCoupon;
@property(readonly, copy, nonatomic) NSString *dCoupon;
@property(readonly, copy, nonatomic) NSString *couponCondition;
@property(readonly, copy, nonatomic) NSString *effectiveDate;
@property(readonly, copy, nonatomic) NSString *noCoupon;
@property(readonly, copy, nonatomic) NSString *couponIsNull;
@property(readonly, copy, nonatomic) NSString *editException;
@property(readonly, copy, nonatomic) NSString *cartFull;
@property(readonly, copy, nonatomic) NSString *exception2;
@property(readonly, copy, nonatomic) NSString *exception1;
@property(readonly, copy, nonatomic) NSString *minBuyNum;
@property(readonly, copy, nonatomic) NSString *suitLimit;
@property(readonly, copy, nonatomic) NSString *numLimit;
@property(readonly, copy, nonatomic) NSString *remainSuit;
@property(readonly, copy, nonatomic) NSString *remainNumber;
@property(readonly, copy, nonatomic) NSString *jBeanOffer2Buy;
@property(readonly, copy, nonatomic) NSString *giveJCoupon;
@property(readonly, copy, nonatomic) NSString *giveJBean;
@property(readonly, copy, nonatomic) NSString *share;
@property(readonly, copy, nonatomic) NSString *store;
@property(readonly, copy, nonatomic) NSString *noStock;
@property(readonly, copy, nonatomic) NSString *annex;
@property(readonly, copy, nonatomic) NSString *giftGroup;
@property(readonly, copy, nonatomic) NSString *giftPlus;
@property(readonly, copy, nonatomic) NSString *gift;
@property(readonly, copy, nonatomic) NSString *attention;
@property(readonly, copy, nonatomic) NSString *moveExceptSuit;
@property(readonly, copy, nonatomic) NSString *partSkuUnMove;
@property(readonly, copy, nonatomic) NSString *attentionLimit;
@property(readonly, copy, nonatomic) NSString *suitUnMove;
@property(readonly, copy, nonatomic) NSString *unChecked;
@property(readonly, copy, nonatomic) NSString *similar;
@property(readonly, copy, nonatomic) NSString *logOutText;
@property(readonly, copy, nonatomic) NSString *finish;
@property(readonly, copy, nonatomic) NSString *edit;
@property(readonly, copy, nonatomic) NSString *coudanShortMsg;
@property(readonly, copy, nonatomic) NSString *coudanMsg;
@property(readonly, copy, nonatomic) NSString *noGift;
@property(readonly, copy, nonatomic) NSString *couponDisInfoTitle;
@property(readonly, copy, nonatomic) NSString *couponInfoTip;
@property(readonly, copy, nonatomic) NSString *couponReceiveSubtitle;
@property(readonly, copy, nonatomic) NSString *couponSubtitle;
@property(readonly, copy, nonatomic) NSString *receiveCoupon;
@property(readonly, copy, nonatomic) NSString *couponGuide1;
@property(readonly, copy, nonatomic) NSString *couponPrice4;
@property(readonly, copy, nonatomic) NSString *couponPrice3;
@property(readonly, copy, nonatomic) NSString *couponPrice2;
@property(readonly, copy, nonatomic) NSString *couponPrice1;
@property(readonly, copy, nonatomic) NSString *availableCoupon;
@property(readonly, copy, nonatomic) NSString *remindEdit;
@property(readonly, copy, nonatomic) NSString *remindRefreshCart;
@property(readonly, copy, nonatomic) NSString *skuPriceRise;
@property(readonly, copy, nonatomic) NSString *noPriceReduction;
@property(readonly, copy, nonatomic) NSString *decline;
@property(readonly, copy, nonatomic) NSString *jBeanUnEnough;
@property(readonly, copy, nonatomic) NSString *refresh;
@property(readonly, copy, nonatomic) NSString *dataLoadFail;
@property(readonly, copy, nonatomic) NSString *unQuotedPrice;
@property(readonly, copy, nonatomic) NSString *shoppingListText;
@property(readonly, copy, nonatomic) NSString *shoppingList;
@property(readonly, copy, nonatomic) NSString *editPromotion;
@property(readonly, copy, nonatomic) NSString *suitPromotion;
@property(readonly, copy, nonatomic) NSString *promotion;
@property(readonly, copy, nonatomic) NSString *selectServicePop;
@property(readonly, copy, nonatomic) NSString *alterService;
@property(readonly, copy, nonatomic) NSString *selectService;
@property(readonly, copy, nonatomic) NSString *freightFree;
- (id)getTextInfoDic;
@property(readonly, copy, nonatomic) NSString *reduceNoticeMessage;
@property(readonly, copy, nonatomic) NSString *IOUNoticeMessage;
@property(readonly, copy, nonatomic) NSString *normalWeightFreightMsg;
@property(readonly, copy, nonatomic) NSString *overWeightFreightMsg;
@property(readonly, copy, nonatomic) NSString *giftPackingAlertContent;
@property(readonly, copy, nonatomic) NSString *giftPackingAlertTitle;
@property(readonly, copy, nonatomic) NSString *skusShareUrl;
@property(readonly, copy, nonatomic) NSString *otcAuthUrl;
@property(readonly, copy, nonatomic) NSString *selectiveImageKey;
@property(readonly, copy, nonatomic) NSString *freshImageKey;
@property(readonly, copy, nonatomic) NSString *globalImageKey;
@property(readonly, copy, nonatomic) NSString *hunterImageKey;
- (id)getConfigCacheFilePath;
- (id)getConfigCache;
- (id)skuOrderInfo;
- (id)skuFlagInfo;
@property(readonly, copy, nonatomic) NSString *storedAppVersion;
- (long long)cachedConfigVersion;
@property(readonly, nonatomic) _Bool hasExistConfigInfo;
@property(readonly, nonatomic) _Bool shouldUpdateConfig;
- (void)setCurrentConfigVersion:(long long)arg1;
- (void)updateCurrentConfigData:(id)arg1;
- (void)asynchrousConfigRequest;
- (id)init;

@end

