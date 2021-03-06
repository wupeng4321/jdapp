//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayXIBView.h"

#import "UITableViewDataSource-Protocol.h"

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UITableView;

@interface JDPayAlertViewDefaultBody : JDPayXIBView <UITableViewDataSource>
{
    NSString *_title;
    NSString *_detail;
    UIImage *_icon;
    NSArray *_remarkTitles;
    NSArray *_remarkDetails;
    long long _detailLabelTextAlignment;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UITableView *_remarkTable;
    NSLayoutConstraint *_titleCenterConstraint;
    NSLayoutConstraint *_titleTopConstraint;
    NSLayoutConstraint *_detailTopConstraint;
    NSLayoutConstraint *_remarkTableHeightConstraint;
    NSLayoutConstraint *_titleLeftConstraint;
    NSLayoutConstraint *_remarkTableBottomConstraint;
    NSLayoutConstraint *_detailRemarkConstraint;
}

@property(nonatomic) __weak NSLayoutConstraint *detailRemarkConstraint; // @synthesize detailRemarkConstraint=_detailRemarkConstraint;
@property(nonatomic) __weak NSLayoutConstraint *remarkTableBottomConstraint; // @synthesize remarkTableBottomConstraint=_remarkTableBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLeftConstraint; // @synthesize titleLeftConstraint=_titleLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *remarkTableHeightConstraint; // @synthesize remarkTableHeightConstraint=_remarkTableHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *detailTopConstraint; // @synthesize detailTopConstraint=_detailTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleTopConstraint; // @synthesize titleTopConstraint=_titleTopConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleCenterConstraint; // @synthesize titleCenterConstraint=_titleCenterConstraint;
@property(nonatomic) __weak UITableView *remarkTable; // @synthesize remarkTable=_remarkTable;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic) long long detailLabelTextAlignment; // @synthesize detailLabelTextAlignment=_detailLabelTextAlignment;
@property(copy, nonatomic) NSArray *remarkDetails; // @synthesize remarkDetails=_remarkDetails;
@property(copy, nonatomic) NSArray *remarkTitles; // @synthesize remarkTitles=_remarkTitles;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)adjust;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSubviews;
- (void)dealloc;
- (void)setup;
- (id)loadContentViewFromXIB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

