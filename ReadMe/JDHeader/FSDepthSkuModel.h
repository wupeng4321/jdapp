//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSMutableArray;

@interface FSDepthSkuModel : JDModel
{
    int _productType;
    NSMutableArray *_skuArray;
}

@property(nonatomic) int productType; // @synthesize productType=_productType;
@property(retain, nonatomic) NSMutableArray *skuArray; // @synthesize skuArray=_skuArray;
- (void).cxx_destruct;
- (id)getSkuInfoStr;
- (void)removeSkuInfoResetType;
- (void)addSkuInfoWithType:(int)arg1 sku:(id)arg2 string1:(id)arg3 string2:(id)arg4;
- (id)init;

@end

