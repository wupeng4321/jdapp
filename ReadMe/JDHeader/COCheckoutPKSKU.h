//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface COCheckoutPKSKU : JDModel
{
    unsigned long long _skuId;
    unsigned long long _skuNum;
    NSString *_skuName;
    NSString *_skuImgUrl;
}

@property(copy, nonatomic) NSString *skuImgUrl; // @synthesize skuImgUrl=_skuImgUrl;
@property(readonly, copy, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(readonly, nonatomic) unsigned long long skuNum; // @synthesize skuNum=_skuNum;
@property(readonly, nonatomic) unsigned long long skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
- (id)convertToCOCheckoutGoodsViewModel;

@end

