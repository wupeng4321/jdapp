//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (JDOffScreenCorner)
- (void)cornerWithRadius:(double)arg1 viewSize:(struct CGSize)arg2 borderWidth:(double)arg3 borderColor:(id)arg4 fillColor:(id)arg5;
- (void)cornerWithRadius:(double)arg1 viewSize:(struct CGSize)arg2 borderWidth:(double)arg3 borderColor:(id)arg4;
- (void)cornerWithViewSize:(struct CGSize)arg1 borderWidth:(double)arg2 borderColor:(id)arg3 fillColor:(id)arg4;
- (void)cornerWithViewSize:(struct CGSize)arg1 borderWidth:(double)arg2 borderColor:(id)arg3;
- (_Bool)hasDRCornered;
- (void)removeDRCorner;
- (void)dr_cornerWithRadius:(double)arg1 backgroundColor:(id)arg2 borderColor:(id)arg3;
- (void)dr_bottomCornerWithRadius:(double)arg1 backgroundColor:(id)arg2;
- (void)dr_topCornerWithRadius:(double)arg1 backgroundColor:(id)arg2;
- (void)dr_cornerWithRadius:(double)arg1 backgroundColor:(id)arg2;
- (void)dr_roundingCorner:(unsigned long long)arg1 radius:(double)arg2 backgroundColor:(id)arg3;
- (void)dr_roundingCorner:(unsigned long long)arg1 radius:(double)arg2 backgroundColor:(id)arg3 borderColor:(id)arg4;
@end
