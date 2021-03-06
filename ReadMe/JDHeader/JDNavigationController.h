//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class JDScrollNavScreen, NSMutableDictionary, NSNumber, NSString, NavInvocatin, UIImage, UIPercentDrivenInteractiveTransition;
@protocol UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning;

@interface JDNavigationController : UINavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate>
{
    _Bool _viewControllerMoving;
    JDScrollNavScreen *_JDScrollNavScreen;
    NavInvocatin *_lastInvocatin;
    _Bool _openVCCountControl;
    _Bool _hasBrothers;
    UIImage *image1_;
    UIImage *image2_;
    long long _currentPageIndex;
    NSNumber *_shouldNewBadge;
    id <UIViewControllerInteractiveTransitioning> _interactiveTransitioningProtocol;
    id <UIViewControllerAnimatedTransitioning> _animatedTransitioningProtocol;
    UIPercentDrivenInteractiveTransition *_popInteractionController;
    NSMutableDictionary *_currentVCCountsDict;
}

@property(retain, nonatomic) NSMutableDictionary *currentVCCountsDict; // @synthesize currentVCCountsDict=_currentVCCountsDict;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *popInteractionController; // @synthesize popInteractionController=_popInteractionController;
@property(nonatomic) __weak id <UIViewControllerAnimatedTransitioning> animatedTransitioningProtocol; // @synthesize animatedTransitioningProtocol=_animatedTransitioningProtocol;
@property(nonatomic) __weak id <UIViewControllerInteractiveTransitioning> interactiveTransitioningProtocol; // @synthesize interactiveTransitioningProtocol=_interactiveTransitioningProtocol;
@property(retain, nonatomic) NSNumber *shouldNewBadge; // @synthesize shouldNewBadge=_shouldNewBadge;
@property(nonatomic) _Bool hasBrothers; // @synthesize hasBrothers=_hasBrothers;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) UIImage *image2; // @synthesize image2=image2_;
@property(retain, nonatomic) UIImage *image1; // @synthesize image1=image1_;
- (void).cxx_destruct;
- (void)setNavigationBarDefaultImage;
- (void)setIos6BackgroundImage:(id)arg1;
- (void)setIos7BackgroundImage:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)didShowViewController;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)setVCControlCount;
- (void)dealVCCountFromVC:(id)arg1 type:(long long)arg2;
- (void)forcePopSpecificViewController:(id)arg1;
- (void)forcePopSeveralVC:(long long)arg1 withWillPushVC:(id)arg2;
- (void)forcePopTheSecondVC;
- (void)configVCCountFromConfigDic:(id)arg1 andViewController:(id)arg2 isFirstConfig:(_Bool)arg3;
- (void)controlVCMaxCount:(id)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)canDragBack:(_Bool)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithRootViewController:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

