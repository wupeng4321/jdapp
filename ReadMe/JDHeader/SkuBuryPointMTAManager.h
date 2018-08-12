//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SkuBuryPointMTAManager : NSObject
{
    _Bool _shopcart_ExclusivePrice_Expo_BuryPoint;
    _Bool _soldOutSkuBuriedPoint;
    _Bool _noStockSkuBuriedPoint;
    _Bool _blankNoteSkuBuriedPoint;
    _Bool _jdselectiveBuriedPoint;
    _Bool _ybItemEntranceBuriedPoint;
    _Bool _giftItemEntranceBuriedPoint;
    _Bool _affixItemEntranceBuriedPoint;
    _Bool _globalHunterSkuBuriedPoint;
    _Bool _loc1SkuBuriedPoint;
    _Bool _loc2SkuBuriedPoint;
    _Bool _loc4SkuBuriedPoint;
    _Bool _shopcart_InvalidDeleteExpo_BuriedPoint;
    _Bool _shopcart_MobileAccessoryExpo_BuriedPoint;
}

+ (void)reset;
+ (void)buryPointShopcart_MobileAccessoryExpo;
+ (void)buryPointInvalidDeleteExpo;
+ (void)buryPointWithAffixAndGift:(id)arg1;
+ (void)buryPointWithSku:(id)arg1;
+ (id)sharedManager;
@property(nonatomic) _Bool shopcart_MobileAccessoryExpo_BuriedPoint; // @synthesize shopcart_MobileAccessoryExpo_BuriedPoint=_shopcart_MobileAccessoryExpo_BuriedPoint;
@property(nonatomic) _Bool shopcart_InvalidDeleteExpo_BuriedPoint; // @synthesize shopcart_InvalidDeleteExpo_BuriedPoint=_shopcart_InvalidDeleteExpo_BuriedPoint;
@property(nonatomic) _Bool loc4SkuBuriedPoint; // @synthesize loc4SkuBuriedPoint=_loc4SkuBuriedPoint;
@property(nonatomic) _Bool loc2SkuBuriedPoint; // @synthesize loc2SkuBuriedPoint=_loc2SkuBuriedPoint;
@property(nonatomic) _Bool loc1SkuBuriedPoint; // @synthesize loc1SkuBuriedPoint=_loc1SkuBuriedPoint;
@property(nonatomic) _Bool globalHunterSkuBuriedPoint; // @synthesize globalHunterSkuBuriedPoint=_globalHunterSkuBuriedPoint;
@property(nonatomic) _Bool affixItemEntranceBuriedPoint; // @synthesize affixItemEntranceBuriedPoint=_affixItemEntranceBuriedPoint;
@property(nonatomic) _Bool giftItemEntranceBuriedPoint; // @synthesize giftItemEntranceBuriedPoint=_giftItemEntranceBuriedPoint;
@property(nonatomic) _Bool ybItemEntranceBuriedPoint; // @synthesize ybItemEntranceBuriedPoint=_ybItemEntranceBuriedPoint;
@property(nonatomic) _Bool jdselectiveBuriedPoint; // @synthesize jdselectiveBuriedPoint=_jdselectiveBuriedPoint;
@property(nonatomic) _Bool blankNoteSkuBuriedPoint; // @synthesize blankNoteSkuBuriedPoint=_blankNoteSkuBuriedPoint;
@property(nonatomic) _Bool noStockSkuBuriedPoint; // @synthesize noStockSkuBuriedPoint=_noStockSkuBuriedPoint;
@property(nonatomic) _Bool soldOutSkuBuriedPoint; // @synthesize soldOutSkuBuriedPoint=_soldOutSkuBuriedPoint;
@property(nonatomic) _Bool shopcart_ExclusivePrice_Expo_BuryPoint; // @synthesize shopcart_ExclusivePrice_Expo_BuryPoint=_shopcart_ExclusivePrice_Expo_BuryPoint;
- (void)clear;
- (void)buryPointShopcart_MobileAccessoryExpo;
- (void)buryPointInvalidDeleteExpoOnce;
- (void)buryPointForLocProduct:(id)arg1;
- (void)buryPointForGolbalHunterProduct:(id)arg1;
- (void)buryPointForAffixAndGiftShow:(id)arg1;
- (void)buryPointForJDSeletiveProduct:(id)arg1;
- (void)buryPointForBlankNoteShow:(id)arg1;
- (void)buryPointForSoldOutProduct:(id)arg1;
- (void)buryPointForNoStockProduct:(id)arg1;
- (void)consumerPriceWithSku:(id)arg1;
- (void)setBuryPointWithSku:(id)arg1;
- (void)setBuryPointWithAffixAndGift:(id)arg1;

@end

