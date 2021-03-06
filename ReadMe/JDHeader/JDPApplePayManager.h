//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PKAddPaymentPassViewControllerDelegate-Protocol.h"

@class NSString, NSURLSessionDataTask, PKAddPaymentPassViewController;

@interface JDPApplePayManager : NSObject <PKAddPaymentPassViewControllerDelegate>
{
    NSString *_pin;
    NSString *_cardholderName;
    NSString *_localizedDescription;
    NSString *_primaryAccountSuffix;
    NSString *_primaryAccountIdentifier;
    PKAddPaymentPassViewController *_addPaymentPassViewController;
    CDUnknownBlockType _addPaymentPassBlock;
    NSURLSessionDataTask *_encryptSessionDataTask;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSessionDataTask *encryptSessionDataTask; // @synthesize encryptSessionDataTask=_encryptSessionDataTask;
@property(copy, nonatomic) CDUnknownBlockType addPaymentPassBlock; // @synthesize addPaymentPassBlock=_addPaymentPassBlock;
@property(retain, nonatomic) PKAddPaymentPassViewController *addPaymentPassViewController; // @synthesize addPaymentPassViewController=_addPaymentPassViewController;
@property(copy, nonatomic) NSString *primaryAccountIdentifier; // @synthesize primaryAccountIdentifier=_primaryAccountIdentifier;
@property(copy, nonatomic) NSString *primaryAccountSuffix; // @synthesize primaryAccountSuffix=_primaryAccountSuffix;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
- (void).cxx_destruct;
- (void)addPaymentPassViewController:(id)arg1 didFinishAddingPaymentPass:(id)arg2 error:(id)arg3;
- (void)addPaymentPassViewController:(id)arg1 generateRequestWithCertificateChain:(id)arg2 nonce:(id)arg3 nonceSignature:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)serializeDeviceToken:(id)arg1;
- (id)objectFromData:(id)arg1;
- (id)dataFromObject:(id)arg1;
- (id)requestWithDict:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)private_appRootViewController;
- (void)addPaymentPassWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)hasRemotePaymentPasses;
- (id)remotePaymentPass;
- (_Bool)isPaymentPassActivationStateActivated;
- (_Bool)hasDeviceIdentifier;
- (id)deviceIdentifier;
- (_Bool)canAddPaymentPassWithPrimaryAccountIdentifier:(id)arg1;
- (_Bool)canAddPaymentPass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

