//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, NSMutableDictionary;

@interface AMNetworkManager : NSObject
{
    NSMutableDictionary *_downloadDic;
    JDStoreNetwork *_mNetwork;
    JDStoreNetwork *_singleProductNetwork;
}

+ (id)standardNetworkManager;
@property(retain, nonatomic) JDStoreNetwork *singleProductNetwork; // @synthesize singleProductNetwork=_singleProductNetwork;
@property(retain, nonatomic) JDStoreNetwork *mNetwork; // @synthesize mNetwork=_mNetwork;
@property(retain, nonatomic) NSMutableDictionary *downloadDic; // @synthesize downloadDic=_downloadDic;
- (void).cxx_destruct;
- (unsigned long long)judgeTheGlassDownloadStatusWithSku:(id)arg1 andUrl:(id)arg2;
- (void)requestTheSingleProductsWithParameter:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)requestTheSingleProductsWithType:(long long)arg1 andBrand:(id)arg2 andPage:(long long)arg3 andCallBack:(CDUnknownBlockType)arg4;
- (void)requestTheProductsInformationWithSkus:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)requestTheBrandDataWithType:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)requestTheMakeupPlatformDataWithCallBack:(CDUnknownBlockType)arg1;
- (void)requestThemePlatformDataWithPage:(long long)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)requestTheMiniInterfaceWithSkuId:(id)arg1 andNeedAttr:(id)arg2 andCallBack:(CDUnknownBlockType)arg3;
- (void)requestTheARProductDataWithSku:(id)arg1 andSpu:(id)arg2 andText:(id)arg3 andColorArray:(id)arg4 andTypeNumber:(id)arg5 andCallBack:(CDUnknownBlockType)arg6;
- (void)requestTheAnimationDataClientVersion:(id)arg1 andTypeString:(id)arg2 andCallBack:(CDUnknownBlockType)arg3;
- (void)requestTheShareLanguageTextWithTypeNumber:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;
- (void)requestTheConfiger:(CDUnknownBlockType)arg1;
- (void)requestTheDeclareDataWithTypeNumber:(id)arg1 andVendorType:(int)arg2 andCallBack:(CDUnknownBlockType)arg3;
- (void)requestTheARTextCheckFilterWithText:(id)arg1 andCallBack:(CDUnknownBlockType)arg2;

@end

