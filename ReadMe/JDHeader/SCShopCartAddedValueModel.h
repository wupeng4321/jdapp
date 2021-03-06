//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartBaseModel.h"

@class NSString, SCShopCartPackModel, SCShopCartSkuModel;

@interface SCShopCartAddedValueModel : SCShopCartBaseModel
{
    NSString *_Id;
    NSString *_skuName;
    NSString *_priceShow;
    long long _skuNumber;
    SCShopCartSkuModel *_weakSkuModel;
    SCShopCartPackModel *_weakPackModel;
}

+ (id)sc_objectWithKeyValues:(id)arg1;
@property(nonatomic) __weak SCShopCartPackModel *weakPackModel; // @synthesize weakPackModel=_weakPackModel;
@property(nonatomic) __weak SCShopCartSkuModel *weakSkuModel; // @synthesize weakSkuModel=_weakSkuModel;
@property(nonatomic) long long skuNumber; // @synthesize skuNumber=_skuNumber;
@property(copy, nonatomic) NSString *priceShow; // @synthesize priceShow=_priceShow;
@property(copy, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(copy, nonatomic) NSString *Id; // @synthesize Id=_Id;
- (void).cxx_destruct;

@end

