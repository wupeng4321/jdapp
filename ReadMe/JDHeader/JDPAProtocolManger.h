//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPAGetCertStatusDataHandler, JDPAGetTdVerifyStatusDataHandler, JDPAPayWayOrderDataHandler, JDPASetPayWayDataHandler, JDPAVerifyTdOrPwdDataHandler, JDPPaymentCrossBorderRealNameDataHandler, JDPPaymentQueryFingerprintStatusDataHandler, JDPPaymentQueryPayWayStatusDataHandler;

@interface JDPAProtocolManger : NSObject
{
    JDPPaymentQueryFingerprintStatusDataHandler *_queryFingerprintStatusDataHandler;
    JDPPaymentCrossBorderRealNameDataHandler *_crossBorderRealNameDataHandler;
    JDPPaymentQueryPayWayStatusDataHandler *_queryPayWayStatusDataHandler;
    JDPAGetTdVerifyStatusDataHandler *_getTdVerifyStatusDataHandler;
    JDPAVerifyTdOrPwdDataHandler *_verifyTdOrPwdDataHandler;
    JDPAPayWayOrderDataHandler *_payWayOrderDataHandler;
    JDPASetPayWayDataHandler *_setPayWayDataHandler;
    JDPAGetCertStatusDataHandler *_getCertStatusDataHandler;
}

@property(retain, nonatomic) JDPAGetCertStatusDataHandler *getCertStatusDataHandler; // @synthesize getCertStatusDataHandler=_getCertStatusDataHandler;
@property(retain, nonatomic) JDPASetPayWayDataHandler *setPayWayDataHandler; // @synthesize setPayWayDataHandler=_setPayWayDataHandler;
@property(retain, nonatomic) JDPAPayWayOrderDataHandler *payWayOrderDataHandler; // @synthesize payWayOrderDataHandler=_payWayOrderDataHandler;
@property(retain, nonatomic) JDPAVerifyTdOrPwdDataHandler *verifyTdOrPwdDataHandler; // @synthesize verifyTdOrPwdDataHandler=_verifyTdOrPwdDataHandler;
@property(retain, nonatomic) JDPAGetTdVerifyStatusDataHandler *getTdVerifyStatusDataHandler; // @synthesize getTdVerifyStatusDataHandler=_getTdVerifyStatusDataHandler;
@property(retain, nonatomic) JDPPaymentQueryPayWayStatusDataHandler *queryPayWayStatusDataHandler; // @synthesize queryPayWayStatusDataHandler=_queryPayWayStatusDataHandler;
@property(retain, nonatomic) JDPPaymentCrossBorderRealNameDataHandler *crossBorderRealNameDataHandler; // @synthesize crossBorderRealNameDataHandler=_crossBorderRealNameDataHandler;
@property(retain, nonatomic) JDPPaymentQueryFingerprintStatusDataHandler *queryFingerprintStatusDataHandler; // @synthesize queryFingerprintStatusDataHandler=_queryFingerprintStatusDataHandler;
- (void).cxx_destruct;

@end

