//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface FSSSkuListItem : JDModel
{
    _Bool _skuIsAttention;
    NSString *_skuItemID;
    NSString *_skuItemName;
    NSString *_skuItemColor;
    NSString *_skuItemImage;
    NSString *_skuItemBuyNum;
    NSString *_skuItemPrice;
    double _skuColorWidth;
    double _skuPriceWidth;
    NSString *_skuShopCount;
}

@property(copy, nonatomic) NSString *skuShopCount; // @synthesize skuShopCount=_skuShopCount;
@property(nonatomic) double skuPriceWidth; // @synthesize skuPriceWidth=_skuPriceWidth;
@property(nonatomic) double skuColorWidth; // @synthesize skuColorWidth=_skuColorWidth;
@property(nonatomic) _Bool skuIsAttention; // @synthesize skuIsAttention=_skuIsAttention;
@property(copy, nonatomic) NSString *skuItemPrice; // @synthesize skuItemPrice=_skuItemPrice;
@property(copy, nonatomic) NSString *skuItemBuyNum; // @synthesize skuItemBuyNum=_skuItemBuyNum;
@property(copy, nonatomic) NSString *skuItemImage; // @synthesize skuItemImage=_skuItemImage;
@property(copy, nonatomic) NSString *skuItemColor; // @synthesize skuItemColor=_skuItemColor;
@property(copy, nonatomic) NSString *skuItemName; // @synthesize skuItemName=_skuItemName;
@property(copy, nonatomic) NSString *skuItemID; // @synthesize skuItemID=_skuItemID;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
