//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartBaseModel.h"

@class NSString, SCShopCartSkuModel;

@interface SCShopCartJingModel : SCShopCartBaseModel
{
    NSString *_title;
    SCShopCartSkuModel *_skuModel;
}

@property(nonatomic) __weak SCShopCartSkuModel *skuModel; // @synthesize skuModel=_skuModel;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(readonly, nonatomic) double fbpMessageHeight;

@end

