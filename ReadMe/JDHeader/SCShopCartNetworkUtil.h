//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCShopCartNetworkUtil : NSObject
{
}

+ (id)buildRequestSetupModelWithParams:(id)arg1 andFunctionId:(id)arg2;
+ (void)addAddCartAppoint:(id *)arg1;
+ (id)findSuitID:(id)arg1 withProduct:(id)arg2;
+ (id)getResultStringWithDic:(id)arg1;
+ (long long)requestAPITypeFromFunctionId:(id)arg1;
+ (id)cartAddOrRemoveWarrantyRequestParams:(id)arg1;
+ (id)functionCartChangeGiftRequestParams:(id)arg1;
+ (id)buildProductOrPackModelRequestParams:(id)arg1;
+ (id)getPackParamsDic:(id)arg1;
+ (id)buildParamsWithSku:(id)arg1;

@end

