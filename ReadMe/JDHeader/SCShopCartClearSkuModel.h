//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartClearItemModel.h"

@class NSString;

@interface SCShopCartClearSkuModel : SCShopCartClearItemModel
{
    NSString *_skuId;
    NSString *_imgUrl;
}

+ (id)objectWithDictionary:(id)arg1;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
- (void).cxx_destruct;
- (void)setDataWithDictionary:(id)arg1;

@end

