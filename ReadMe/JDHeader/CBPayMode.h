//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class CBBankCardInfoModel, JDPCommonCouponInfoModel, JDPCouponInfoModel, JDPPaymentCombinChannelModel, JDPPlanInfoModel, NSString;

@interface CBPayMode : JDPayModel
{
    _Bool _needCheckPwd;
    _Bool _canUse;
    _Bool _needConfirm;
    _Bool _needCombin;
    _Bool _isSmallfree;
    _Bool _bindCardSwitch;
    _Bool _isQrCodeLimit;
    _Bool _isValidateSign;
    long long _payModeType;
    NSString *_channelID;
    NSString *_channelSign;
    NSString *_desc;
    NSString *_remark;
    NSString *_logo;
    NSString *_promotionDesc;
    NSString *_promotionAmount;
    NSString *_realAmount;
    NSString *_payEnum;
    NSString *_ownerLabel;
    NSString *_ownerMask;
    NSString *_discountLabel;
    NSString *_discountDesc;
    NSString *_topDiscountDesc;
    NSString *_orderForexDesc;
    NSString *_shouldPayDesc;
    CBBankCardInfoModel *_bankCardInfoModel;
    JDPPlanInfoModel *_planInfoModel;
    JDPCouponInfoModel *_couponInfoModel;
    JDPCommonCouponInfoModel *_commonCouponInfoModel;
    NSString *_needCombinDesc;
    NSString *_bizMethod;
    NSString *_token;
    NSString *_commendPayWay;
    NSString *_cardLabel;
    NSString *_needTdSigned;
    JDPPaymentCombinChannelModel *_combinChannelModel;
}

@property(retain, nonatomic) JDPPaymentCombinChannelModel *combinChannelModel; // @synthesize combinChannelModel=_combinChannelModel;
@property(nonatomic) _Bool isValidateSign; // @synthesize isValidateSign=_isValidateSign;
@property(nonatomic) _Bool isQrCodeLimit; // @synthesize isQrCodeLimit=_isQrCodeLimit;
@property(nonatomic) _Bool bindCardSwitch; // @synthesize bindCardSwitch=_bindCardSwitch;
@property(copy, nonatomic) NSString *needTdSigned; // @synthesize needTdSigned=_needTdSigned;
@property(copy, nonatomic) NSString *cardLabel; // @synthesize cardLabel=_cardLabel;
@property(copy, nonatomic) NSString *commendPayWay; // @synthesize commendPayWay=_commendPayWay;
@property(nonatomic) _Bool isSmallfree; // @synthesize isSmallfree=_isSmallfree;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *bizMethod; // @synthesize bizMethod=_bizMethod;
@property(copy, nonatomic) NSString *needCombinDesc; // @synthesize needCombinDesc=_needCombinDesc;
@property(nonatomic) _Bool needCombin; // @synthesize needCombin=_needCombin;
@property(retain, nonatomic) JDPCommonCouponInfoModel *commonCouponInfoModel; // @synthesize commonCouponInfoModel=_commonCouponInfoModel;
@property(retain, nonatomic) JDPCouponInfoModel *couponInfoModel; // @synthesize couponInfoModel=_couponInfoModel;
@property(retain, nonatomic) JDPPlanInfoModel *planInfoModel; // @synthesize planInfoModel=_planInfoModel;
@property(retain, nonatomic) CBBankCardInfoModel *bankCardInfoModel; // @synthesize bankCardInfoModel=_bankCardInfoModel;
@property(copy, nonatomic) NSString *shouldPayDesc; // @synthesize shouldPayDesc=_shouldPayDesc;
@property(copy, nonatomic) NSString *orderForexDesc; // @synthesize orderForexDesc=_orderForexDesc;
@property(copy, nonatomic) NSString *topDiscountDesc; // @synthesize topDiscountDesc=_topDiscountDesc;
@property(copy, nonatomic) NSString *discountDesc; // @synthesize discountDesc=_discountDesc;
@property(copy, nonatomic) NSString *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(copy, nonatomic) NSString *ownerMask; // @synthesize ownerMask=_ownerMask;
@property(copy, nonatomic) NSString *ownerLabel; // @synthesize ownerLabel=_ownerLabel;
@property(copy, nonatomic) NSString *payEnum; // @synthesize payEnum=_payEnum;
@property(nonatomic) _Bool needConfirm; // @synthesize needConfirm=_needConfirm;
@property(copy, nonatomic) NSString *realAmount; // @synthesize realAmount=_realAmount;
@property(copy, nonatomic) NSString *promotionAmount; // @synthesize promotionAmount=_promotionAmount;
@property(copy, nonatomic) NSString *promotionDesc; // @synthesize promotionDesc=_promotionDesc;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(nonatomic) _Bool needCheckPwd; // @synthesize needCheckPwd=_needCheckPwd;
@property(copy, nonatomic) NSString *channelSign; // @synthesize channelSign=_channelSign;
@property(copy, nonatomic) NSString *channelID; // @synthesize channelID=_channelID;
@property(nonatomic) long long payModeType; // @synthesize payModeType=_payModeType;
- (void).cxx_destruct;
- (long long)commendPayWayEnum;
- (void)changeDefaultChannelPlanWithIdentifier:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

