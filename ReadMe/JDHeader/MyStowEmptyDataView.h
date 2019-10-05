//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RecommendUITableViewDataSource-Protocol.h"
#import "RecommendUITableViewDelegate-Protocol.h"

@class NSString, NewRecommendUITableView;
@protocol MyStowEmptyDataViewDelegate;

@interface MyStowEmptyDataView : UIView <RecommendUITableViewDataSource, RecommendUITableViewDelegate>
{
    NewRecommendUITableView *myRecommendView;
    _Bool isRequestingData;
    id <MyStowEmptyDataViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MyStowEmptyDataViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)secKillClick;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)didRequestFinished;
- (void)requestRecommendData;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
