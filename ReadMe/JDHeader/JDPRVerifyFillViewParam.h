//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPRVerifyFillViewParam : JDPayModel
{
    _Bool _isCVV;
    _Bool _isValidate;
    NSString *_fullName;
    NSString *_certNum;
    NSString *_certType;
    NSString *_defaultCreditId;
    NSString *_logo;
    NSString *_bankName;
    NSString *_bankCodeEn;
    NSString *_bankCardType;
}

@property(nonatomic) _Bool isValidate; // @synthesize isValidate=_isValidate;
@property(nonatomic) _Bool isCVV; // @synthesize isCVV=_isCVV;
@property(copy, nonatomic) NSString *bankCardType; // @synthesize bankCardType=_bankCardType;
@property(copy, nonatomic) NSString *bankCodeEn; // @synthesize bankCodeEn=_bankCodeEn;
@property(copy, nonatomic) NSString *bankName; // @synthesize bankName=_bankName;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *defaultCreditId; // @synthesize defaultCreditId=_defaultCreditId;
@property(copy, nonatomic) NSString *certType; // @synthesize certType=_certType;
@property(copy, nonatomic) NSString *certNum; // @synthesize certNum=_certNum;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
- (void).cxx_destruct;

@end

