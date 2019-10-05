//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (JDViewKitColor)
+ (id)vk_colorWithHue:(double)arg1 saturation:(double)arg2 value:(double)arg3 alpha:(double)arg4;
+ (id)vk_colorWithHex:(id)arg1;
+ (id)vk_colorWithHex:(id)arg1 alpha:(double)arg2;
+ (id)vk_gradientColorWithColorArray:(id)arg1 locationArray:(const double *)arg2 inSize:(struct CGSize)arg3;
+ (id)vk_gradientFromColor:(id)arg1 toColor:(id)arg2 withWidth:(double)arg3 andHeight:(double)arg4;
+ (id)vk_gradientFromColor:(id)arg1 toColor:(id)arg2 withWidth:(double)arg3;
+ (id)vk_gradientFromColor:(id)arg1 toColor:(id)arg2 withHeight:(double)arg3;
- (double)vk_value;
- (double)vk_saturation;
- (double)vk_hue;
- (id)vk_shadow;
- (id)vk_highlight;
- (id)vk_addHue:(double)arg1 saturation:(double)arg2 value:(double)arg3;
- (id)vk_copyWithAlpha:(double)arg1;
- (id)vk_multiplyHue:(double)arg1 saturation:(double)arg2 value:(double)arg3;
@end
