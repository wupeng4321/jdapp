//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "UINavigationControllerDelegate-Protocol.h"

@class JDPayCodeTransitionControl, NSMutableArray, NSString;

@interface JDPayCodeNavigationController : UINavigationController <UINavigationControllerDelegate>
{
    NSMutableArray *_screenShotList;
    JDPayCodeTransitionControl *_transitionControl;
}

@property(retain, nonatomic) JDPayCodeTransitionControl *transitionControl; // @synthesize transitionControl=_transitionControl;
@property(retain, nonatomic) NSMutableArray *screenShotList; // @synthesize screenShotList=_screenShotList;
- (void).cxx_destruct;
- (id)childViewControllerForStatusBarStyle;
- (void)turnNavigationControllerTransitionType:(long long)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (_Bool)containFullViewController;
- (id)initWithRootViewController:(id)arg1;
- (id)init;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

