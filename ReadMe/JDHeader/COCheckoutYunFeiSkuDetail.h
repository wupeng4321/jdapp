//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutGoodsMarkModel, NSNumber, NSString;

@interface COCheckoutYunFeiSkuDetail : JDModel
{
    _Bool _isRemoteSku;
    long long _skuId;
    long long _skuNum;
    NSString *_skuName;
    NSString *_skuImgUrl;
    NSNumber *_remoteFee;
    COCheckoutGoodsMarkModel *_mark;
}

@property(retain, nonatomic) COCheckoutGoodsMarkModel *mark; // @synthesize mark=_mark;
@property(retain, nonatomic) NSNumber *remoteFee; // @synthesize remoteFee=_remoteFee;
@property(copy, nonatomic) NSString *skuImgUrl; // @synthesize skuImgUrl=_skuImgUrl;
@property(copy, nonatomic) NSString *skuName; // @synthesize skuName=_skuName;
@property(nonatomic) _Bool isRemoteSku; // @synthesize isRemoteSku=_isRemoteSku;
@property(nonatomic) long long skuNum; // @synthesize skuNum=_skuNum;
@property(nonatomic) long long skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
- (void)setImageDomain:(id)arg1;
- (void)setDataWithDic:(id)arg1;
- (id)convertToCOCheckoutGoodsViewModel;

@end

