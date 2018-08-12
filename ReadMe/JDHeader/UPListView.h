//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, UIButton, UITableView, UPLabel;
@protocol UPListViewDelegate;

@interface UPListView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _tableViewCanScroll;
    _Bool _animationDidStop;
    _Bool _editting;
    UITableView *_tableView;
    UIView *_backgroundView;
    UIButton *_editButton;
    UPLabel *_normalLabel;
    UPLabel *_editLabel;
    long long _rowNumbers;
    NSMutableArray *_allCells;
    double _tableHeaderInset;
    double _tableFooterInset;
    NSMutableArray *_enableList;
    _Bool editable;
    long long selectedIndex;
    id <UPListViewDelegate> delegate;
    NSArray *contentList;
    NSIndexPath *currentIndexPath;
    NSString *headerTitle;
    NSString *footerTitle;
}

@property(copy, nonatomic) NSString *footerTitle; // @synthesize footerTitle;
@property(copy, nonatomic) NSString *headerTitle; // @synthesize headerTitle;
@property(retain, nonatomic) NSIndexPath *currentIndexPath; // @synthesize currentIndexPath;
@property(retain, nonatomic) NSArray *contentList; // @synthesize contentList;
@property(nonatomic) _Bool editable; // @synthesize editable;
@property(nonatomic) __weak id <UPListViewDelegate> delegate; // @synthesize delegate;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)handleOffsetOfScrollView:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tapAction;
- (void)hideWithRow:(long long)arg1;
- (void)startEdit;
- (void)showDefaultImage;
- (void)hideAllImages;
- (void)deleteAnimation;
- (void)refreshListAfterDeleted;
- (void)hide;
- (void)setSelectedCellAtIndex:(long long)arg1;
- (void)makeTableView;
- (void)makeBackgroundView;
- (void)makeBaseDatas;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 list:(id)arg2 andEnableList:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 list:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

