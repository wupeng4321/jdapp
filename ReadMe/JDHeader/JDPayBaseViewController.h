//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class JDPayBaseContentView, JDPayNavigationBar, UIView;

@interface JDPayBaseViewController : UIViewController
{
    JDPayBaseContentView *_contentView;
    _Bool _showLeftBarBackButton;
    JDPayNavigationBar *_navigationBar;
}

@property(nonatomic) _Bool showLeftBarBackButton; // @synthesize showLeftBarBackButton=_showLeftBarBackButton;
@property(readonly, nonatomic) JDPayNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (void)onClickLeftBarBackButton:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)layoutCustomViews;
- (void)viewDidLoad;
- (void)setTitle:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)loadView;

@end
