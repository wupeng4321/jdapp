//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView;
@protocol JDShopContactProductViewDelegate;

@interface JDShopContactProductView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    CDUnknownBlockType _callBack;
    id <JDShopContactProductViewDelegate> _delegate;
    UITableView *_mTableView;
    UIView *_backGroundView;
    UIView *_contentView;
    NSArray *_dataArr;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backGroundView; // @synthesize backGroundView=_backGroundView;
@property(retain, nonatomic) UITableView *mTableView; // @synthesize mTableView=_mTableView;
@property(nonatomic) __weak id <JDShopContactProductViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)hide;
- (void)showInSuperView:(id)arg1 withDataArr:(id)arg2 isListViewStillShow:(CDUnknownBlockType)arg3;
- (void)showInSuperView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
