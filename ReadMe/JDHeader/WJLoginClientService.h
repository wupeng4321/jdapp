//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WJLoginCCFServiceConfig, WJLoginReachability, WJLoginTGTInfo, WJLoginTLVInfo;
@protocol THLoginGetCountryDistrictCodeListProtocol, THLoginGetMessageCodeProtocol, THLoginH5BackToAppProtocol, THLoginJDFBLoginProtocol, THLoginJumpTokenProtocol, THLoginNeedAuthCodeProtocol, THLoginRefreshAuthCodeProtocol, THLoginSetPasswordProtocol, THLoginVerificationProtocol, THLoginVerifyCodeAndPhoneProtocol, THLoginVerifyMessageCodeProtocol, WJLoginAuthorizeProtocol, WJLoginAuthorizeValidateSigntureProtocol, WJLoginBackToAppProtocol, WJLoginCheckIfNeedCaptchaInPhoneLoginProtocol, WJLoginCheckTGTInfoProtocol, WJLoginFaceRecognitionCloseProtocol, WJLoginFaceRecognitionLoginProtocol, WJLoginFaceRecognitionOpenProtocol, WJLoginFaceRecognitionProtocol, WJLoginFaceRecognitionRealNameRegistrationProtocol, WJLoginFaceRecognitionShowOrNotProtocol, WJLoginFaceRecognitionStatusProtocol, WJLoginGetCountryDistrictCodeListProtocol, WJLoginGetMessageCodeProtocol, WJLoginH5BackToAppProtocol, WJLoginImplicitLoginProtocol, WJLoginImplicitRegisterProtocol, WJLoginJDQQLoginProtocol, WJLoginJDWXLoginProtocol, WJLoginJDWalletTokenExchangePinProtocol, WJLoginJumpTokenProtocol, WJLoginMedicalRequestMessagePwdProtocol, WJLoginMedicalSubmitRegisterProtocol, WJLoginMessagePwdLoginProtocol, WJLoginNeedAuthCodeProtocol, WJLoginNeedMRegisterProtocol, WJLoginOnJDAPPRequestMessageCodeProtocol, WJLoginOnJDAPPRequestVerificationHistoryReceiverProtocol, WJLoginOnJDAPPRequestVerificationMessageCodeProtocol, WJLoginQRCodeCancelLoginProtocol, WJLoginQRCodeConfirmLoginProtocol, WJLoginQRCodeKeyProtocol, WJLoginRefreshAuthCodeProtocol, WJLoginRefreshRegisterAuthCodeProtocol, WJLoginRequestMessagePwdProtocol, WJLoginSetPasswordProtocol, WJLoginSetPhonePwdLoginProtocol, WJLoginUnbindPhoneProtocol, WJLoginVerificationProtocol, WJLoginVerifyCodeAndPhoneProtocol, WJLoginVerifyMessageCodeProtocol, WJLoginVerifySlideAndPhoneProtocol;

@interface WJLoginClientService : NSObject
{
    _Bool _requestBlocked;
    id <WJLoginRequestMessagePwdProtocol> _requestMessagePwdDelegate;
    id <WJLoginMessagePwdLoginProtocol> _messagePwdLoginDelegate;
    id <WJLoginSetPhonePwdLoginProtocol> _setPhonePwdDelegate;
    id <WJLoginCheckIfNeedCaptchaInPhoneLoginProtocol> _checkIfNeedCaptchaInPhoneLoginDelegate;
    id <WJLoginCheckTGTInfoProtocol> _checkTGTInfoDelegate;
    id <WJLoginVerificationProtocol> _verificationDelegate;
    id <WJLoginRefreshAuthCodeProtocol> _refreshAuthCodeDelegate;
    id <WJLoginJumpTokenProtocol> _jumpTokenDelegate;
    id <WJLoginH5BackToAppProtocol> _h5BackToAppDelegate;
    id <WJLoginOnJDAPPRequestMessageCodeProtocol> _jdAPPRequestMessageCodeDelegate;
    id <WJLoginOnJDAPPRequestVerificationMessageCodeProtocol> _jdAPPVerificationMessageCodeDelegate;
    id <WJLoginOnJDAPPRequestVerificationHistoryReceiverProtocol> _jdAPPVerificationHistoryReceiverDelegate;
    id <THLoginVerificationProtocol> _thVerificationDelegate;
    id <THLoginRefreshAuthCodeProtocol> _thRefreshAuthCodeDelegate;
    id <THLoginJumpTokenProtocol> _thJumpTokenDelegate;
    id <THLoginH5BackToAppProtocol> _thH5BackToAppDelegate;
    id <WJLoginJDWXLoginProtocol> _jdwxLoginDelegate;
    id <WJLoginJDQQLoginProtocol> _jdqqLoginDelegate;
    id <WJLoginBackToAppProtocol> _backToAppDelegate;
    id <THLoginJDFBLoginProtocol> _jdFBLoginDelegate;
    id <WJLoginQRCodeKeyProtocol> _qrCodeKeyDelegate;
    id <WJLoginQRCodeConfirmLoginProtocol> _qrCodeConfirmLoginDelegate;
    id <WJLoginQRCodeCancelLoginProtocol> _qrCodeCancelLoginDelegate;
    id <WJLoginVerifyCodeAndPhoneProtocol> _verifyCodeAndPhoneDelegate;
    id <WJLoginGetMessageCodeProtocol> _getMessageCodeDelegate;
    id <WJLoginVerifyMessageCodeProtocol> _verifyMessageCodeDelegate;
    id <WJLoginSetPasswordProtocol> _setPasswordDelegate;
    id <WJLoginUnbindPhoneProtocol> _unbindPhoneDelegate;
    id <WJLoginGetCountryDistrictCodeListProtocol> _countryDistrictCodeListDelegate;
    id <WJLoginNeedAuthCodeProtocol> _needAuthCodeDeleage;
    id <WJLoginRefreshRegisterAuthCodeProtocol> _refreshRegisterAuthCodeDelegate;
    id <WJLoginNeedMRegisterProtocol> _needMRegisterDelegate;
    id <WJLoginVerifySlideAndPhoneProtocol> _verifySlideAndPhoneDelegate;
    id <THLoginGetCountryDistrictCodeListProtocol> _thCountryDistrictCodeListDelegate;
    id <THLoginNeedAuthCodeProtocol> _thNeedAuthCodeDeleage;
    id <THLoginVerifyCodeAndPhoneProtocol> _thVerifyCodeAndPhoneDelegate;
    id <THLoginGetMessageCodeProtocol> _thGetMessageCodeDelegate;
    id <THLoginVerifyMessageCodeProtocol> _thVerifyMessageCodeDelegate;
    id <THLoginSetPasswordProtocol> _thSetPasswordDelegate;
    id <WJLoginAuthorizeValidateSigntureProtocol> _authValidateSigntureDelegate;
    id <WJLoginAuthorizeProtocol> _authorizeDelegate;
    id <WJLoginImplicitLoginProtocol> _implicitLoginDelegate;
    id <WJLoginImplicitRegisterProtocol> _implicitRegisterDelegate;
    id <WJLoginFaceRecognitionProtocol> _faceRecognitionDelegate;
    id <WJLoginFaceRecognitionStatusProtocol> _faceRecognitionStatusDelegate;
    id <WJLoginFaceRecognitionOpenProtocol> _faceRecognitionOpenDelegate;
    id <WJLoginFaceRecognitionCloseProtocol> _faceRecognitionCloseDelegate;
    id <WJLoginFaceRecognitionShowOrNotProtocol> _faceRecognitionShowOrNotDelegate;
    id <WJLoginFaceRecognitionLoginProtocol> _faceRecognitionLoginDelegate;
    id <WJLoginFaceRecognitionRealNameRegistrationProtocol> _faceRecognitionRealNameRegistrationDelegate;
    id <WJLoginMedicalRequestMessagePwdProtocol> _medicalRequestMessagePwdDelegate;
    id <WJLoginMedicalSubmitRegisterProtocol> _medicalSubmitRegisterDelegate;
    id <WJLoginJDWalletTokenExchangePinProtocol> _walletJDDelegate;
    NSString *_account;
    NSString *_whwswswws;
    long long _developType;
    CDUnknownBlockType _EIDAndFP;
    WJLoginTGTInfo *_a2InfoInner;
    WJLoginTLVInfo *_tlvInfo;
    NSString *_appScheme;
    NSString *_appHost;
    WJLoginTLVInfo *_reportTlvInfo;
    WJLoginReachability *_reachability;
    WJLoginCCFServiceConfig *_innerServiceConfig;
}

+ (id)onlyForSafeMode;
@property(nonatomic) _Bool requestBlocked; // @synthesize requestBlocked=_requestBlocked;
@property(retain, nonatomic) WJLoginCCFServiceConfig *innerServiceConfig; // @synthesize innerServiceConfig=_innerServiceConfig;
@property(retain, nonatomic) WJLoginReachability *reachability; // @synthesize reachability=_reachability;
@property(retain, nonatomic) WJLoginTLVInfo *reportTlvInfo; // @synthesize reportTlvInfo=_reportTlvInfo;
@property(copy, nonatomic) NSString *appHost; // @synthesize appHost=_appHost;
@property(copy, nonatomic) NSString *appScheme; // @synthesize appScheme=_appScheme;
@property(retain, nonatomic) WJLoginTLVInfo *tlvInfo; // @synthesize tlvInfo=_tlvInfo;
@property(retain, nonatomic) WJLoginTGTInfo *a2InfoInner; // @synthesize a2InfoInner=_a2InfoInner;
@property(copy, nonatomic) CDUnknownBlockType EIDAndFP; // @synthesize EIDAndFP=_EIDAndFP;
@property(nonatomic) long long developType; // @synthesize developType=_developType;
@property(copy, nonatomic) NSString *whwswswws; // @synthesize whwswswws=_whwswswws;
@property(copy, nonatomic) NSString *account; // @synthesize account=_account;
@property(nonatomic) __weak id <WJLoginJDWalletTokenExchangePinProtocol> walletJDDelegate; // @synthesize walletJDDelegate=_walletJDDelegate;
@property(nonatomic) __weak id <WJLoginMedicalSubmitRegisterProtocol> medicalSubmitRegisterDelegate; // @synthesize medicalSubmitRegisterDelegate=_medicalSubmitRegisterDelegate;
@property(nonatomic) __weak id <WJLoginMedicalRequestMessagePwdProtocol> medicalRequestMessagePwdDelegate; // @synthesize medicalRequestMessagePwdDelegate=_medicalRequestMessagePwdDelegate;
@property(nonatomic) __weak id <WJLoginFaceRecognitionRealNameRegistrationProtocol> faceRecognitionRealNameRegistrationDelegate; // @synthesize faceRecognitionRealNameRegistrationDelegate=_faceRecognitionRealNameRegistrationDelegate;
@property(nonatomic) __weak id <WJLoginFaceRecognitionLoginProtocol> faceRecognitionLoginDelegate; // @synthesize faceRecognitionLoginDelegate=_faceRecognitionLoginDelegate;
@property(nonatomic) __weak id <WJLoginFaceRecognitionShowOrNotProtocol> faceRecognitionShowOrNotDelegate; // @synthesize faceRecognitionShowOrNotDelegate=_faceRecognitionShowOrNotDelegate;
@property(nonatomic) __weak id <WJLoginFaceRecognitionCloseProtocol> faceRecognitionCloseDelegate; // @synthesize faceRecognitionCloseDelegate=_faceRecognitionCloseDelegate;
@property(nonatomic) __weak id <WJLoginFaceRecognitionOpenProtocol> faceRecognitionOpenDelegate; // @synthesize faceRecognitionOpenDelegate=_faceRecognitionOpenDelegate;
@property(nonatomic) __weak id <WJLoginFaceRecognitionStatusProtocol> faceRecognitionStatusDelegate; // @synthesize faceRecognitionStatusDelegate=_faceRecognitionStatusDelegate;
@property(nonatomic) __weak id <WJLoginFaceRecognitionProtocol> faceRecognitionDelegate; // @synthesize faceRecognitionDelegate=_faceRecognitionDelegate;
@property(nonatomic) __weak id <WJLoginImplicitRegisterProtocol> implicitRegisterDelegate; // @synthesize implicitRegisterDelegate=_implicitRegisterDelegate;
@property(nonatomic) __weak id <WJLoginImplicitLoginProtocol> implicitLoginDelegate; // @synthesize implicitLoginDelegate=_implicitLoginDelegate;
@property(nonatomic) __weak id <WJLoginAuthorizeProtocol> authorizeDelegate; // @synthesize authorizeDelegate=_authorizeDelegate;
@property(nonatomic) __weak id <WJLoginAuthorizeValidateSigntureProtocol> authValidateSigntureDelegate; // @synthesize authValidateSigntureDelegate=_authValidateSigntureDelegate;
@property(nonatomic) __weak id <THLoginSetPasswordProtocol> thSetPasswordDelegate; // @synthesize thSetPasswordDelegate=_thSetPasswordDelegate;
@property(nonatomic) __weak id <THLoginVerifyMessageCodeProtocol> thVerifyMessageCodeDelegate; // @synthesize thVerifyMessageCodeDelegate=_thVerifyMessageCodeDelegate;
@property(nonatomic) __weak id <THLoginGetMessageCodeProtocol> thGetMessageCodeDelegate; // @synthesize thGetMessageCodeDelegate=_thGetMessageCodeDelegate;
@property(nonatomic) __weak id <THLoginVerifyCodeAndPhoneProtocol> thVerifyCodeAndPhoneDelegate; // @synthesize thVerifyCodeAndPhoneDelegate=_thVerifyCodeAndPhoneDelegate;
@property(nonatomic) __weak id <THLoginNeedAuthCodeProtocol> thNeedAuthCodeDeleage; // @synthesize thNeedAuthCodeDeleage=_thNeedAuthCodeDeleage;
@property(nonatomic) __weak id <THLoginGetCountryDistrictCodeListProtocol> thCountryDistrictCodeListDelegate; // @synthesize thCountryDistrictCodeListDelegate=_thCountryDistrictCodeListDelegate;
@property(nonatomic) __weak id <WJLoginVerifySlideAndPhoneProtocol> verifySlideAndPhoneDelegate; // @synthesize verifySlideAndPhoneDelegate=_verifySlideAndPhoneDelegate;
@property(nonatomic) __weak id <WJLoginNeedMRegisterProtocol> needMRegisterDelegate; // @synthesize needMRegisterDelegate=_needMRegisterDelegate;
@property(nonatomic) __weak id <WJLoginRefreshRegisterAuthCodeProtocol> refreshRegisterAuthCodeDelegate; // @synthesize refreshRegisterAuthCodeDelegate=_refreshRegisterAuthCodeDelegate;
@property(nonatomic) __weak id <WJLoginNeedAuthCodeProtocol> needAuthCodeDeleage; // @synthesize needAuthCodeDeleage=_needAuthCodeDeleage;
@property(nonatomic) __weak id <WJLoginGetCountryDistrictCodeListProtocol> countryDistrictCodeListDelegate; // @synthesize countryDistrictCodeListDelegate=_countryDistrictCodeListDelegate;
@property(nonatomic) __weak id <WJLoginUnbindPhoneProtocol> unbindPhoneDelegate; // @synthesize unbindPhoneDelegate=_unbindPhoneDelegate;
@property(nonatomic) __weak id <WJLoginSetPasswordProtocol> setPasswordDelegate; // @synthesize setPasswordDelegate=_setPasswordDelegate;
@property(nonatomic) __weak id <WJLoginVerifyMessageCodeProtocol> verifyMessageCodeDelegate; // @synthesize verifyMessageCodeDelegate=_verifyMessageCodeDelegate;
@property(nonatomic) __weak id <WJLoginGetMessageCodeProtocol> getMessageCodeDelegate; // @synthesize getMessageCodeDelegate=_getMessageCodeDelegate;
@property(nonatomic) __weak id <WJLoginVerifyCodeAndPhoneProtocol> verifyCodeAndPhoneDelegate; // @synthesize verifyCodeAndPhoneDelegate=_verifyCodeAndPhoneDelegate;
@property(nonatomic) __weak id <WJLoginQRCodeCancelLoginProtocol> qrCodeCancelLoginDelegate; // @synthesize qrCodeCancelLoginDelegate=_qrCodeCancelLoginDelegate;
@property(nonatomic) __weak id <WJLoginQRCodeConfirmLoginProtocol> qrCodeConfirmLoginDelegate; // @synthesize qrCodeConfirmLoginDelegate=_qrCodeConfirmLoginDelegate;
@property(nonatomic) __weak id <WJLoginQRCodeKeyProtocol> qrCodeKeyDelegate; // @synthesize qrCodeKeyDelegate=_qrCodeKeyDelegate;
@property(nonatomic) __weak id <THLoginJDFBLoginProtocol> jdFBLoginDelegate; // @synthesize jdFBLoginDelegate=_jdFBLoginDelegate;
@property(nonatomic) __weak id <WJLoginBackToAppProtocol> backToAppDelegate; // @synthesize backToAppDelegate=_backToAppDelegate;
@property(nonatomic) __weak id <WJLoginJDQQLoginProtocol> jdqqLoginDelegate; // @synthesize jdqqLoginDelegate=_jdqqLoginDelegate;
@property(nonatomic) __weak id <WJLoginJDWXLoginProtocol> jdwxLoginDelegate; // @synthesize jdwxLoginDelegate=_jdwxLoginDelegate;
@property(nonatomic) __weak id <THLoginH5BackToAppProtocol> thH5BackToAppDelegate; // @synthesize thH5BackToAppDelegate=_thH5BackToAppDelegate;
@property(nonatomic) __weak id <THLoginJumpTokenProtocol> thJumpTokenDelegate; // @synthesize thJumpTokenDelegate=_thJumpTokenDelegate;
@property(nonatomic) __weak id <THLoginRefreshAuthCodeProtocol> thRefreshAuthCodeDelegate; // @synthesize thRefreshAuthCodeDelegate=_thRefreshAuthCodeDelegate;
@property(nonatomic) __weak id <THLoginVerificationProtocol> thVerificationDelegate; // @synthesize thVerificationDelegate=_thVerificationDelegate;
@property(nonatomic) __weak id <WJLoginOnJDAPPRequestVerificationHistoryReceiverProtocol> jdAPPVerificationHistoryReceiverDelegate; // @synthesize jdAPPVerificationHistoryReceiverDelegate=_jdAPPVerificationHistoryReceiverDelegate;
@property(nonatomic) __weak id <WJLoginOnJDAPPRequestVerificationMessageCodeProtocol> jdAPPVerificationMessageCodeDelegate; // @synthesize jdAPPVerificationMessageCodeDelegate=_jdAPPVerificationMessageCodeDelegate;
@property(nonatomic) __weak id <WJLoginOnJDAPPRequestMessageCodeProtocol> jdAPPRequestMessageCodeDelegate; // @synthesize jdAPPRequestMessageCodeDelegate=_jdAPPRequestMessageCodeDelegate;
@property(nonatomic) __weak id <WJLoginH5BackToAppProtocol> h5BackToAppDelegate; // @synthesize h5BackToAppDelegate=_h5BackToAppDelegate;
@property(nonatomic) __weak id <WJLoginJumpTokenProtocol> jumpTokenDelegate; // @synthesize jumpTokenDelegate=_jumpTokenDelegate;
@property(nonatomic) __weak id <WJLoginRefreshAuthCodeProtocol> refreshAuthCodeDelegate; // @synthesize refreshAuthCodeDelegate=_refreshAuthCodeDelegate;
@property(nonatomic) __weak id <WJLoginVerificationProtocol> verificationDelegate; // @synthesize verificationDelegate=_verificationDelegate;
@property(nonatomic) __weak id <WJLoginCheckTGTInfoProtocol> checkTGTInfoDelegate; // @synthesize checkTGTInfoDelegate=_checkTGTInfoDelegate;
@property(nonatomic) __weak id <WJLoginCheckIfNeedCaptchaInPhoneLoginProtocol> checkIfNeedCaptchaInPhoneLoginDelegate; // @synthesize checkIfNeedCaptchaInPhoneLoginDelegate=_checkIfNeedCaptchaInPhoneLoginDelegate;
@property(nonatomic) __weak id <WJLoginSetPhonePwdLoginProtocol> setPhonePwdDelegate; // @synthesize setPhonePwdDelegate=_setPhonePwdDelegate;
@property(nonatomic) __weak id <WJLoginMessagePwdLoginProtocol> messagePwdLoginDelegate; // @synthesize messagePwdLoginDelegate=_messagePwdLoginDelegate;
@property(nonatomic) __weak id <WJLoginRequestMessagePwdProtocol> requestMessagePwdDelegate; // @synthesize requestMessagePwdDelegate=_requestMessagePwdDelegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loginOnlenReport:(unsigned char)arg1;
- (void)netChange:(id)arg1;
@property(readonly, nonatomic) WJLoginCCFServiceConfig *serviceConfig;
- (void)refreshServiceConfig;
- (void)reportSaveA2Info:(id)arg1;
- (void)reportLoadA2Info:(id)arg1;
- (void)onJDWalletTokenExchangePin:(id)arg1;
- (void)medicalSubmitRegisterMessage:(id)arg1 account:(id)arg2 password:(id)arg3 realname:(id)arg4 isAgree:(_Bool)arg5;
- (void)getMedicalMessage:(id)arg1;
- (void)faceRecognitionRealNameRegistration;
- (void)faceRecognitionLoginWithInfo:(id)arg1 picData:(id)arg2 picKey:(id)arg3;
- (void)faceRecognitionShowOrNotWithAccount:(id)arg1;
- (void)closeFaceRecognition;
- (void)openFaceRecognitionWithInfo:(id)arg1 picData:(id)arg2 picKey:(id)arg3;
- (void)checkFaceRecognitionStatus;
- (void)faceLoginWithInfo:(id)arg1 andToken:(id)arg2;
- (id)URLDecodedString:(id)arg1;
- (id)decodedParamsWithUrlQuery:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)JDStartAuthorizeScheme:(id)arg1;
- (_Bool)isJDAppVersion_5_4_Installed;
- (_Bool)isJDAppInstalled;
- (id)getInitCountryDistrictCode;
- (void)confirmQRCodeloginCanceled:(id)arg1;
- (void)confirmQRCodeLogined;
- (void)confirmQRCodeScanned:(id)arg1;
- (id)getQRCodeKeyFromUrl:(id)arg1;
- (void)implicitLoginWithRegister:(id)arg1 phoneNum:(id)arg2;
- (void)implicitLoginWithToken:(id)arg1;
- (id)convertSetToString:(id)arg1;
- (void)jdFBLoginWithAccessToken:(id)arg1;
- (void)jdqqLoginWithOpenID:(id)arg1 accessToken:(id)arg2;
- (void)jdwxLoginWithCode:(id)arg1;
- (_Bool)resolvedCodeAndPhoneWithPhoneNumber:(id)arg1;
- (void)verifyPhoneNumber:(id)arg1 sid:(id)arg2 verifytoken:(id)arg3 isNeedFigURL:(_Bool)arg4;
- (void)thNeedAuthCode;
- (void)needAuthCode;
- (void)unbindPhoneNumber:(id)arg1;
- (void)thSetLoginPassword:(id)arg1 phoneNumber:(id)arg2;
- (void)setLoginPassword:(id)arg1 phoneNumber:(id)arg2;
- (void)thVerifyMessageCode:(id)arg1 phoneNumber:(id)arg2;
- (void)verifyMessageCode:(id)arg1 phoneNumber:(id)arg2;
- (void)thGetMessageCodeWithPhoneNumber:(id)arg1;
- (void)getMessageCodeWithPhoneNumber:(id)arg1;
- (void)thVerifyPhoneNumber:(id)arg1 authCode:(id)arg2 encryptKey:(id)arg3 isNeedFigURL:(_Bool)arg4 registerType:(unsigned long long)arg5;
- (void)verifyPhoneNumber:(id)arg1 authCode:(id)arg2 encryptKey:(id)arg3 isNeedFigURL:(_Bool)arg4;
- (void)thGetCountryDistrictCodeListWithTimeInterval:(double)arg1;
- (void)getCountryDistrictCodeListWithTimeInterval:(double)arg1;
- (void)needMRegister;
- (void)thH5BackToAppWithToken:(id)arg1;
- (void)H5BackToAppWithToken:(id)arg1;
- (void)backToAppWithToken:(id)arg1;
- (void)thRequestJumpToken:(id)arg1;
- (void)requestJumpToken:(id)arg1;
- (void)thLogout;
- (void)logout;
- (void)thRefreshTGT;
- (void)refreshTGT;
- (void)refreshRegisterAuthCodeWithEncryptKey:(id)arg1;
- (void)thRefreshAuthCodeWithEncryptKey:(id)arg1;
- (void)refreshAuthCodeWithEncryptKey:(id)arg1;
- (void)setPhoneLoginPassword:(id)arg1 phoneNumber:(id)arg2;
- (void)loginWithPhoneNumberOnJDAPP:(id)arg1 historyReceiver:(id)arg2;
- (void)loginWithPhoneNumberOnJDAPP:(id)arg1 MessageCode:(id)arg2;
- (void)requestMessageCodeOnJDAPP:(id)arg1;
- (void)requestMessagePwd:(id)arg1 sid:(id)arg2 token:(id)arg3;
- (void)checkIfNeedCaptchaInPhoneLogin:(id)arg1;
- (void)loginWithPhoneNumber:(id)arg1 MessagePwd:(id)arg2;
- (void)thLoginWithAccount:(id)arg1 password:(id)arg2 authCode:(id)arg3 encryptKey:(id)arg4;
- (void)loginWithAccount:(id)arg1 password:(id)arg2 authCode:(id)arg3 encryptKey:(id)arg4;
- (void)checkA2;
- (void)handleErrorWithServiceType:(int)arg1;
- (_Bool)checkRequestBlockedWithServiceType:(int)arg1;
- (void)initTLVInfoWithCustomInfo:(id)arg1;
- (void)initReportTLVWithCustomInfo:(id)arg1;
- (id)appInstallTime;
- (void)setUserDefaultFlag;
- (_Bool)isUserDefaultFlagExisted;
- (_Bool)isAppFirstInstalled;
- (void)clearLastInstalledUserInfo;
- (_Bool)a2NeedRefresh;
- (id)initWithCustomInfo:(id)arg1;
- (_Bool)hasLogined;
- (void)saveA2Info:(id)arg1;
- (id)getEnEmail;
- (id)getEnPin;
- (id)getA2String;
- (id)getPin;
- (void)updateWhwswswws;
- (void)updateCountryType:(id)arg1;
- (void)updateArea:(id)arg1;

@end
