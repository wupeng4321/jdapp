//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface PDSuitPriceModel : JDModel
{
    NSString *_suitId;
    NSString *_packPrice;
    NSString *_discount;
    NSString *_mainSkuPrice;
    NSString *_skuPrice;
}

@property(copy, nonatomic) NSString *skuPrice; // @synthesize skuPrice=_skuPrice;
@property(copy, nonatomic) NSString *mainSkuPrice; // @synthesize mainSkuPrice=_mainSkuPrice;
@property(copy, nonatomic) NSString *discount; // @synthesize discount=_discount;
@property(copy, nonatomic) NSString *packPrice; // @synthesize packPrice=_packPrice;
@property(copy, nonatomic) NSString *suitId; // @synthesize suitId=_suitId;
- (void).cxx_destruct;

@end

