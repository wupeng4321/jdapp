//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "RCTViewControllerProtocol-Protocol.h"

@class NSString, RCTEventDispatcher, RCTNavItem, UIView;
@protocol RCTWrapperViewControllerNavigationListener, UILayoutSupport;

@interface RCTWrapperViewController : UIViewController <RCTViewControllerProtocol>
{
    UIView *_wrapperView;
    UIView *_contentView;
    RCTEventDispatcher *_eventDispatcher;
    double _previousTopLayoutLength;
    double _previousBottomLayoutLength;
    id <UILayoutSupport> _currentTopLayoutGuide;
    id <UILayoutSupport> _currentBottomLayoutGuide;
    id <RCTWrapperViewControllerNavigationListener> _navigationListener;
    RCTNavItem *_navItem;
}

@property(retain, nonatomic) RCTNavItem *navItem; // @synthesize navItem=_navItem;
@property(nonatomic) __weak id <RCTWrapperViewControllerNavigationListener> navigationListener; // @synthesize navigationListener=_navigationListener;
@property(readonly, nonatomic) id <UILayoutSupport> currentBottomLayoutGuide; // @synthesize currentBottomLayoutGuide=_currentBottomLayoutGuide;
@property(readonly, nonatomic) id <UILayoutSupport> currentTopLayoutGuide; // @synthesize currentTopLayoutGuide=_currentTopLayoutGuide;
- (void).cxx_destruct;
- (void)didMoveToParentViewController:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithNavItem:(id)arg1;
- (id)initWithContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

