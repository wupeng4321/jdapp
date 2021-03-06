//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString, SHVPPortraitSmallVideoJumpModel;

@interface SHVPPortraitSmallVideoGoodsModel : NSObject
{
    _Bool _promotion;
    long long _canSell;
    NSNumber *_endRemainTime;
    NSNumber *_exceptionStyle;
    unsigned long long _exposeEndTime;
    unsigned long long _exposeStartTime;
    unsigned long long _exposedAuto;
    NSNumber *_goodsId;
    NSString *_img;
    SHVPPortraitSmallVideoJumpModel *_jump;
    NSString *_marketPrice;
    NSNumber *_preSold;
    NSString *_price;
    NSNumber *_purchased;
    NSString *_sku;
    NSNumber *_soldRate;
    NSNumber *_sort;
    NSNumber *_startRemainTime;
    NSString *_title;
    NSNumber *_top;
    NSNumber *_type;
    struct CGSize _priceSize;
}

@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSNumber *top; // @synthesize top=_top;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *startRemainTime; // @synthesize startRemainTime=_startRemainTime;
@property(retain, nonatomic) NSNumber *sort; // @synthesize sort=_sort;
@property(retain, nonatomic) NSNumber *soldRate; // @synthesize soldRate=_soldRate;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
@property(retain, nonatomic) NSNumber *purchased; // @synthesize purchased=_purchased;
@property(nonatomic) _Bool promotion; // @synthesize promotion=_promotion;
@property(nonatomic) struct CGSize priceSize; // @synthesize priceSize=_priceSize;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(retain, nonatomic) NSNumber *preSold; // @synthesize preSold=_preSold;
@property(copy, nonatomic) NSString *marketPrice; // @synthesize marketPrice=_marketPrice;
@property(retain, nonatomic) SHVPPortraitSmallVideoJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(retain, nonatomic) NSNumber *goodsId; // @synthesize goodsId=_goodsId;
@property(nonatomic) unsigned long long exposedAuto; // @synthesize exposedAuto=_exposedAuto;
@property(nonatomic) unsigned long long exposeStartTime; // @synthesize exposeStartTime=_exposeStartTime;
@property(nonatomic) unsigned long long exposeEndTime; // @synthesize exposeEndTime=_exposeEndTime;
@property(retain, nonatomic) NSNumber *exceptionStyle; // @synthesize exceptionStyle=_exceptionStyle;
@property(retain, nonatomic) NSNumber *endRemainTime; // @synthesize endRemainTime=_endRemainTime;
@property(nonatomic) long long canSell; // @synthesize canSell=_canSell;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

