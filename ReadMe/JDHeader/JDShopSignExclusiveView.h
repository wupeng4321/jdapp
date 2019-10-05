//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDStatusView, NSMutableArray, NSString, UIImageView, UITableView;

@interface JDShopSignExclusiveView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_validTable;
    UIView *_invalidView;
    UITableView *_invalidTable;
    UIImageView *_arrowImgView;
    _Bool isShowInvalid;
    NSMutableArray *validArr;
    NSMutableArray *invalidArr;
    JDStatusView *_statusView;
    JDStatusView *_statusView1;
}

- (void)JDStatusView:(id)arg1 didClickButton:(id)arg2;
- (void)didTapInvalidViewNoUploadMsg;
- (void)didTapInvalidView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)showValidView;
- (void)updateTable:(id)arg1;
- (void)showErrorView;
- (void)showEmptyView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
