//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPCommonBaseViewController.h"

@class UIImageView;

@interface JDPFullBaseViewController : JDPCommonBaseViewController
{
    UIImageView *_bottomImageView;
    long long _originalBarStyle;
}

@property(nonatomic) long long originalBarStyle; // @synthesize originalBarStyle=_originalBarStyle;
@property(retain, nonatomic) UIImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)didReceiveMemoryWarning;
- (void)cb_createBottomImageView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;

@end
