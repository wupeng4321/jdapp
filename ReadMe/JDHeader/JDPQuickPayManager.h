//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPQNavigationController, JDPQProtocolManager, JDPQQueryAccoutInfoModel, JDPayQuickPassInfo, NSString;
@protocol JDPQuickPayProtocol;

@interface JDPQuickPayManager : NSObject
{
    JDPayQuickPassInfo *_payInfo;
    id <JDPQuickPayProtocol> _quickPayDelegate;
    long long _originalBarStyle;
    JDPQQueryAccoutInfoModel *_accountInfoModel;
    JDPQNavigationController *_presentedNavigationController;
    JDPQProtocolManager *_protocolManager;
    NSString *_uuid;
}

+ (id)shareManager;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) JDPQProtocolManager *protocolManager; // @synthesize protocolManager=_protocolManager;
@property(retain, nonatomic) JDPQNavigationController *presentedNavigationController; // @synthesize presentedNavigationController=_presentedNavigationController;
@property(retain, nonatomic) JDPQQueryAccoutInfoModel *accountInfoModel; // @synthesize accountInfoModel=_accountInfoModel;
@property(nonatomic) long long originalBarStyle; // @synthesize originalBarStyle=_originalBarStyle;
@property(nonatomic) __weak id <JDPQuickPayProtocol> quickPayDelegate; // @synthesize quickPayDelegate=_quickPayDelegate;
@property(retain, nonatomic) JDPayQuickPassInfo *payInfo; // @synthesize payInfo=_payInfo;
- (void).cxx_destruct;
- (void)openWallet;
- (void)manageWithPayResultControllerModel:(id)arg1 saveRequestData:(CDUnknownBlockType)arg2 buttonClick:(CDUnknownBlockType)arg3;
- (void)clearViewControllersCompeletion:(CDUnknownBlockType)arg1;
- (void)addPaymentPassCancel;
- (void)addPaymentPassFail;
- (void)addPaymentPassSuccess;
- (void)finishQuickPay;
- (void)closeQuickPayCompletion:(CDUnknownBlockType)arg1;
- (void)queryAcount;
- (void)startQuickPay;
- (id)appRootViewController;
- (void)clearContext;
- (id)init;

@end

