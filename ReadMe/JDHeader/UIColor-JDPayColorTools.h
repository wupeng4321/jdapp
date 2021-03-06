//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIColor.h>

@interface UIColor (JDPayColorTools)
+ (id)colorWithRGB:(int)arg1 alpha:(double)arg2;
+ (id)colorWithRGB:(int)arg1;
+ (id)colorWithCyan:(double)arg1 magenta:(double)arg2 yellow:(double)arg3 keyBlack:(double)arg4;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 lightness:(double)arg3 alpha:(double)arg4;
- (id)colorByAlphaBlendingOverColor:(id)arg1;
- (id)colorWithLightness:(double)arg1 alpha:(double)arg2;
- (id)colorWithLightness:(double)arg1;
- (id)colorWithBrightness:(double)arg1;
- (id)colorWithSaturation:(double)arg1;
- (id)colorWithHue:(double)arg1;
- (id)colorWithBlue:(double)arg1;
- (id)colorWithGreen:(double)arg1;
- (id)colorWithRed:(double)arg1;
- (double)lightness;
- (double)brightness;
- (double)saturation;
- (double)hue;
- (double)alpha;
- (double)blue;
- (double)green;
- (double)red;
- (id)hexString;
- (unsigned long long)hexValue;
- (id)splitCoJDPaylementaryColors;
- (id)analogousColors:(double)arg1;
- (id)squareColors;
- (id)triadicColors;
- (id)coJDPaylementaryColor;
- (id)colorByAddingAngle:(double)arg1;
- (id)colorDarkenedBy:(double)arg1;
- (id)colorLightenedBy:(double)arg1;
- (id)colorByAddingLightness:(double)arg1;
- (void)getCyan:(double *)arg1 magenta:(double *)arg2 yellow:(double *)arg3 keyBlack:(double *)arg4;
- (void)getHue:(double *)arg1 saturation:(double *)arg2 lightness:(double *)arg3 alpha:(double *)arg4;
@end

