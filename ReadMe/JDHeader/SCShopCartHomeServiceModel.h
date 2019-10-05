//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartBaseModel.h"

@class NSArray, NSString;

@interface SCShopCartHomeServiceModel : SCShopCartBaseModel
{
    NSString *_skuId;
    NSString *_suitPromoId;
    NSString *_vskuId;
    long long _type;
    NSArray *_homeServiceGroups;
    NSArray *_invalidServiceSkuIds;
}

+ (id)sc_objectWithKeyValues:(id)arg1;
@property(retain, nonatomic) NSArray *invalidServiceSkuIds; // @synthesize invalidServiceSkuIds=_invalidServiceSkuIds;
@property(retain, nonatomic) NSArray *homeServiceGroups; // @synthesize homeServiceGroups=_homeServiceGroups;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *vskuId; // @synthesize vskuId=_vskuId;
@property(copy, nonatomic) NSString *suitPromoId; // @synthesize suitPromoId=_suitPromoId;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;

@end
