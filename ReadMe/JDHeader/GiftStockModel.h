//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface GiftStockModel : JDModel
{
    NSString *areaId;
    int remainNum;
    long long skuId;
    NSString *stockStateDesc;
    int stockStateId;
}

@property(nonatomic) int stockStateId; // @synthesize stockStateId;
@property(copy, nonatomic) NSString *stockStateDesc; // @synthesize stockStateDesc;
@property(nonatomic) long long skuId; // @synthesize skuId;
@property(nonatomic) int remainNum; // @synthesize remainNum;
@property(copy, nonatomic) NSString *areaId; // @synthesize areaId;
- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setDataWithDic:(id)arg1;

@end

