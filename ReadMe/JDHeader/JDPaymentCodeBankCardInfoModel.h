//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class JDPaymentCodeCertInfoModel, NSString;

@interface JDPaymentCodeBankCardInfoModel : JDPayModel
{
    _Bool _isHolderName;
    _Bool _isIdCard;
    _Bool _isCVV;
    _Bool _isPayNeedCvv;
    _Bool _isValidate;
    JDPaymentCodeCertInfoModel *_certInfoModel;
    NSString *_bankCode;
    NSString *_bankCodeEn;
    NSString *_bankName;
    NSString *_bankCardType;
    NSString *_bankCardNum;
    NSString *_bankCardNumMask;
    NSString *_telephone;
    NSString *_validYear;
    NSString *_validMonth;
    NSString *_cvv2;
    NSString *_bankServiceTel;
    NSString *_protocolName;
    NSString *_protocolUrl;
    NSString *_bankDiscountDesc;
    NSString *_commonTip;
    NSString *_singleLimit;
    NSString *_dayLimit;
    NSString *_phoneEnd;
    NSString *_bankProtocolName;
    NSString *_bankProtocolURL;
    NSString *_defaultCreditId;
}

@property(copy, nonatomic) NSString *defaultCreditId; // @synthesize defaultCreditId=_defaultCreditId;
@property(copy, nonatomic) NSString *bankProtocolURL; // @synthesize bankProtocolURL=_bankProtocolURL;
@property(copy, nonatomic) NSString *bankProtocolName; // @synthesize bankProtocolName=_bankProtocolName;
@property(copy, nonatomic) NSString *phoneEnd; // @synthesize phoneEnd=_phoneEnd;
@property(copy, nonatomic) NSString *dayLimit; // @synthesize dayLimit=_dayLimit;
@property(copy, nonatomic) NSString *singleLimit; // @synthesize singleLimit=_singleLimit;
@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(copy, nonatomic) NSString *bankDiscountDesc; // @synthesize bankDiscountDesc=_bankDiscountDesc;
@property(copy, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(nonatomic) _Bool isValidate; // @synthesize isValidate=_isValidate;
@property(nonatomic) _Bool isPayNeedCvv; // @synthesize isPayNeedCvv=_isPayNeedCvv;
@property(nonatomic) _Bool isCVV; // @synthesize isCVV=_isCVV;
@property(nonatomic) _Bool isIdCard; // @synthesize isIdCard=_isIdCard;
@property(nonatomic) _Bool isHolderName; // @synthesize isHolderName=_isHolderName;
@property(copy, nonatomic) NSString *bankServiceTel; // @synthesize bankServiceTel=_bankServiceTel;
@property(copy, nonatomic) NSString *cvv2; // @synthesize cvv2=_cvv2;
@property(copy, nonatomic) NSString *validMonth; // @synthesize validMonth=_validMonth;
@property(copy, nonatomic) NSString *validYear; // @synthesize validYear=_validYear;
@property(copy, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(copy, nonatomic) NSString *bankCardNumMask; // @synthesize bankCardNumMask=_bankCardNumMask;
@property(copy, nonatomic) NSString *bankCardNum; // @synthesize bankCardNum=_bankCardNum;
@property(copy, nonatomic) NSString *bankCardType; // @synthesize bankCardType=_bankCardType;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *bankCodeEn; // @synthesize bankCodeEn=_bankCodeEn;
@property(copy, nonatomic) NSString *bankCode; // @synthesize bankCode=_bankCode;
@property(retain, nonatomic) JDPaymentCodeCertInfoModel *certInfoModel; // @synthesize certInfoModel=_certInfoModel;
- (void).cxx_destruct;

@end

