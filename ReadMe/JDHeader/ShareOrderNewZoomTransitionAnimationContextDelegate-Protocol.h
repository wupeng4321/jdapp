//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ShareOrderNewZoomTransitionAnimationContext, ShareOrderNewZoomTransitionAnimationSetting, UIImage, UIView;

@protocol ShareOrderNewZoomTransitionAnimationContextDelegate <NSObject>

@optional
- (ShareOrderNewZoomTransitionAnimationSetting *)so_zoomTransitionAnimationContextGetSetting:(ShareOrderNewZoomTransitionAnimationContext *)arg1;
- (struct CGRect)so_zoomTransitionAnimationContextGetEndLocationRect:(ShareOrderNewZoomTransitionAnimationContext *)arg1 transferInfo:(id)arg2;
- (UIView *)so_zoomTransitionAnimationContextGetEndLocationView:(ShareOrderNewZoomTransitionAnimationContext *)arg1 transferInfo:(id)arg2 startImage:(UIImage *)arg3;
- (void)so_zoomTransitionAnimationContextCancelAnimationCompletion:(ShareOrderNewZoomTransitionAnimationContext *)arg1;
- (void)so_zoomTransitionAnimationContextWillCancelAnimation:(ShareOrderNewZoomTransitionAnimationContext *)arg1;
- (void)so_zoomTransitionAnimationContextEndAnimation:(ShareOrderNewZoomTransitionAnimationContext *)arg1;
- (void)so_zoomTransitionAnimationContextBeginAnimation:(ShareOrderNewZoomTransitionAnimationContext *)arg1;
- (id)so_zoomTransitionAnimationContextPrepareAnimationTransferInfo:(ShareOrderNewZoomTransitionAnimationContext *)arg1;
@end

