//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@interface UPNavController : UINavigationController
{
    _Bool _nowOrientating;
    _Bool _keyBoardShowwing;
}

- (void)keyboareDidHide:(id)arg1;
- (void)keyboareWillHide:(id)arg1;
- (void)keyboareDidShow:(id)arg1;
- (void)keyboareWillShow:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidUnload;
- (void)dealloc;
- (void)viewDidLoad;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (id)initWithRootViewController:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
