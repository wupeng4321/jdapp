//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPOPCouponModel, NSArray, NSAttributedString, NSDictionary, NSNumber, NSString;

@interface SCDataAccessModel : NSObject
{
    _Bool _isCartAllCheck;
    _Bool _isNoCheck;
    _Bool _sp_isShowShare;
    _Bool _sp_isModifyProperty;
    _Bool _sp_isOldStyle;
    _Bool _sp_isShopCeiling;
    _Bool _sp_isDowngrade;
    _Bool _userIdentity;
    _Bool _cartClearShow;
    _Bool _plusCartShow;
    NSString *_imageURLPrefix;
    NSString *_emptyCartButtonTitle;
    NSString *_emptyCartButtonURL;
    NSArray *_emptyCartArr;
    JDPOPCouponModel *_emptyCouponModel;
    long long _noticeType;
    NSString *_noticeIconImageURL;
    NSString *_noticeCloseImageURL;
    NSString *_noticeRedirectURL;
    NSString *_noticeReductionMessage;
    NSString *_freeShipString;
    NSString *_bestPromotCheckPlan;
    NSString *_bestPromotionSavePrice;
    long long _bestPromotionSwitchStatus;
    NSDictionary *_bestPromotionRelation;
    long long _limitWareBuyNumber;
    long long _checkedWareNumber;
    NSString *_overseaSKUsTip;
    NSString *_mixtedSKUsTip;
    long long _configVersion;
    double _originPrice;
    double _discount;
    double _cashBack;
    NSString *_priceShow;
    NSString *_samReplaceSkus;
    NSString *_activity618Tag;
    NSString *_IOUNoticeServicePlan;
    NSString *_onSaleNoticeServicePlan;
    NSAttributedString *_wholeSpendString;
    NSAttributedString *_realSpendString;
    NSNumber *_cartClearGuide;
    long long _maxLimitBuyNum;
    long long _orderGlobalSkusNumber;
    long long _orderNormalSkusNumber;
    long long _orderOTCDurgSkuNumber;
}

@property(nonatomic) long long orderOTCDurgSkuNumber; // @synthesize orderOTCDurgSkuNumber=_orderOTCDurgSkuNumber;
@property(nonatomic) long long orderNormalSkusNumber; // @synthesize orderNormalSkusNumber=_orderNormalSkusNumber;
@property(nonatomic) long long orderGlobalSkusNumber; // @synthesize orderGlobalSkusNumber=_orderGlobalSkusNumber;
@property(nonatomic) long long maxLimitBuyNum; // @synthesize maxLimitBuyNum=_maxLimitBuyNum;
@property(nonatomic) _Bool plusCartShow; // @synthesize plusCartShow=_plusCartShow;
@property(nonatomic) _Bool cartClearShow; // @synthesize cartClearShow=_cartClearShow;
@property(retain, nonatomic) NSNumber *cartClearGuide; // @synthesize cartClearGuide=_cartClearGuide;
@property(nonatomic) _Bool userIdentity; // @synthesize userIdentity=_userIdentity;
@property(retain, nonatomic) NSAttributedString *realSpendString; // @synthesize realSpendString=_realSpendString;
@property(retain, nonatomic) NSAttributedString *wholeSpendString; // @synthesize wholeSpendString=_wholeSpendString;
@property(copy, nonatomic) NSString *onSaleNoticeServicePlan; // @synthesize onSaleNoticeServicePlan=_onSaleNoticeServicePlan;
@property(copy, nonatomic) NSString *IOUNoticeServicePlan; // @synthesize IOUNoticeServicePlan=_IOUNoticeServicePlan;
@property(copy, nonatomic) NSString *activity618Tag; // @synthesize activity618Tag=_activity618Tag;
@property(nonatomic) _Bool sp_isDowngrade; // @synthesize sp_isDowngrade=_sp_isDowngrade;
@property(nonatomic) _Bool sp_isShopCeiling; // @synthesize sp_isShopCeiling=_sp_isShopCeiling;
@property(nonatomic) _Bool sp_isOldStyle; // @synthesize sp_isOldStyle=_sp_isOldStyle;
@property(nonatomic) _Bool sp_isModifyProperty; // @synthesize sp_isModifyProperty=_sp_isModifyProperty;
@property(nonatomic) _Bool sp_isShowShare; // @synthesize sp_isShowShare=_sp_isShowShare;
@property(copy, nonatomic) NSString *samReplaceSkus; // @synthesize samReplaceSkus=_samReplaceSkus;
@property(copy, nonatomic) NSString *priceShow; // @synthesize priceShow=_priceShow;
@property(nonatomic) double cashBack; // @synthesize cashBack=_cashBack;
@property(nonatomic) double discount; // @synthesize discount=_discount;
@property(nonatomic) double originPrice; // @synthesize originPrice=_originPrice;
@property(nonatomic) long long configVersion; // @synthesize configVersion=_configVersion;
@property(copy, nonatomic) NSString *mixtedSKUsTip; // @synthesize mixtedSKUsTip=_mixtedSKUsTip;
@property(copy, nonatomic) NSString *overseaSKUsTip; // @synthesize overseaSKUsTip=_overseaSKUsTip;
@property(nonatomic) long long checkedWareNumber; // @synthesize checkedWareNumber=_checkedWareNumber;
@property(nonatomic) long long limitWareBuyNumber; // @synthesize limitWareBuyNumber=_limitWareBuyNumber;
@property(retain, nonatomic) NSDictionary *bestPromotionRelation; // @synthesize bestPromotionRelation=_bestPromotionRelation;
@property(nonatomic) long long bestPromotionSwitchStatus; // @synthesize bestPromotionSwitchStatus=_bestPromotionSwitchStatus;
@property(copy, nonatomic) NSString *bestPromotionSavePrice; // @synthesize bestPromotionSavePrice=_bestPromotionSavePrice;
@property(copy, nonatomic) NSString *bestPromotCheckPlan; // @synthesize bestPromotCheckPlan=_bestPromotCheckPlan;
@property(nonatomic) _Bool isNoCheck; // @synthesize isNoCheck=_isNoCheck;
@property(nonatomic) _Bool isCartAllCheck; // @synthesize isCartAllCheck=_isCartAllCheck;
@property(copy, nonatomic) NSString *freeShipString; // @synthesize freeShipString=_freeShipString;
@property(copy, nonatomic) NSString *noticeReductionMessage; // @synthesize noticeReductionMessage=_noticeReductionMessage;
@property(copy, nonatomic) NSString *noticeRedirectURL; // @synthesize noticeRedirectURL=_noticeRedirectURL;
@property(copy, nonatomic) NSString *noticeCloseImageURL; // @synthesize noticeCloseImageURL=_noticeCloseImageURL;
@property(copy, nonatomic) NSString *noticeIconImageURL; // @synthesize noticeIconImageURL=_noticeIconImageURL;
@property(nonatomic) long long noticeType; // @synthesize noticeType=_noticeType;
@property(retain, nonatomic) JDPOPCouponModel *emptyCouponModel; // @synthesize emptyCouponModel=_emptyCouponModel;
@property(retain, nonatomic) NSArray *emptyCartArr; // @synthesize emptyCartArr=_emptyCartArr;
@property(copy, nonatomic) NSString *emptyCartButtonURL; // @synthesize emptyCartButtonURL=_emptyCartButtonURL;
@property(copy, nonatomic) NSString *emptyCartButtonTitle; // @synthesize emptyCartButtonTitle=_emptyCartButtonTitle;
@property(copy, nonatomic) NSString *imageURLPrefix; // @synthesize imageURLPrefix=_imageURLPrefix;
- (void).cxx_destruct;
- (id)copy;

@end
