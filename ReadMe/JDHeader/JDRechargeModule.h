//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDRechargeModule : NSObject
{
}

+ (id)currentNavigationController;
+ (void)goVirtualOrderDetail:(id)arg1;
+ (void)goQQGameOrderDetail:(id)arg1;
+ (void)goFlowChargeOrderDetail:(id)arg1;
+ (void)goMobileChargeOrderDetail:(id)arg1;
+ (void)goQQGameOrderList:(id)arg1;
+ (void)goFlowChargeOrderList:(id)arg1;
+ (void)goMobileChargeOrderList:(id)arg1;
+ (void)goChargeHome:(id)arg1;
+ (void)callbackError:(CDUnknownBlockType)arg1 Msg:(id)arg2 userinfo:(id)arg3;
+ (id)routerHandle_JDRechargeModule_getQQAndGameChargeDetailForPay:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDRechargeModule_getMobileOrFlowChargeDetailForPay:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDRechargeModule_jumpToChargeSuccess:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDRechargeModule_jumpToStraightBuyView:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDRechargeModule_jumpToGameProp:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDRechargeModule_getRechargeVC:(id)arg1 callback:(CDUnknownBlockType)arg2;
+ (id)routerHandle_JDRechargeModule_show:(id)arg1 callback:(CDUnknownBlockType)arg2;

@end

