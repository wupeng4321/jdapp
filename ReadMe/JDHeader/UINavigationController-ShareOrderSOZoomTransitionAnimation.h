//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UINavigationController (ShareOrderSOZoomTransitionAnimation)
@property(nonatomic) _Bool so_transitioning;
- (id)so_popViewController;
- (void)setSo_popViewController:(id)arg1;
- (void)onPan:(id)arg1;
- (_Bool)_navHandleDropGestureShouldBegin:(id)arg1;
- (void)so_popViewControllerWithStartLocationView:(id)arg1 animationImage:(id)arg2 animated:(_Bool)arg3;
- (void)so_popViewControllerWithStartView:(id)arg1 animated:(_Bool)arg2;
- (void)so_pushViewController:(id)arg1 startLocationView:(id)arg2 animationImage:(id)arg3 zoomInDelegate:(id)arg4 animated:(_Bool)arg5;
- (void)so_pushViewController:(id)arg1 startView:(id)arg2 zoomInDelegate:(id)arg3 animated:(_Bool)arg4;
- (void)so_pushViewController:(id)arg1 startView:(id)arg2 animated:(_Bool)arg3;
@end
