//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDButton, NSString, UIImageView, UILabel, UITableView;
@protocol WanderShopPopupViewDataSource, WanderShopPopupViewDelagate;

@interface WanderShopPopupView : UIView <UITableViewDelegate, UITableViewDataSource>
{
    UIImageView *_backgroundView;
    UIView *_contentView;
    UIImageView *_topView;
    UILabel *_titleLabel;
    JDButton *_theOKButton;
    UIView *_modalBackgroundView;
    UITableView *_popTableView;
    _Bool _bAddTapGestureRecognizer;
    id <WanderShopPopupViewDelagate> _delegate;
    id <WanderShopPopupViewDataSource> _dataSource;
    NSString *_title;
}

@property(nonatomic) _Bool bAddTapGestureRecognizer; // @synthesize bAddTapGestureRecognizer=_bAddTapGestureRecognizer;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <WanderShopPopupViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <WanderShopPopupViewDelagate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapTheOKButton;
- (void)dismiss:(_Bool)arg1;
- (void)postDismissCleanup;
- (void)bounceAnimationStopped;
- (void)bounce2AnimationStopped;
- (void)bounce1AnimationStopped;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)handleSingleTapFrom:(id)arg1;
- (void)show;
- (void)setTheOKButtonTitle:(id)arg1 withAlpha:(_Bool)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
