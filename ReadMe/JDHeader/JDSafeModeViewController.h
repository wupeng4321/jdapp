//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class JDButton, JDRefreshIndicator, UIButton, UIImageView, UILabel;

@interface JDSafeModeViewController : UIViewController
{
    CDUnknownBlockType _fixCaseBlock;
    UIImageView *_imageView;
    UILabel *_stateLable;
    UILabel *_fixInfoLable;
    JDButton *_fixButton;
    UIButton *_cancelButton;
    JDRefreshIndicator *_refreshIndicator;
}

- (void).cxx_destruct;
- (void)didFinishInToastView:(id)arg1;
- (void)hideLoading;
- (void)showLoading;
- (void)fix:(id)arg1;
- (void)cancel;
- (void)setupSubViews;
- (void)completionFix;
- (void)setFixCaseBlock:(CDUnknownBlockType)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

