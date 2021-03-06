//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CCCouponEmptyView, NSArray, UITableView;

@interface CCCAssignmentHistoryTableView : UIView
{
    _Bool _startLoadMore;
    _Bool _hasNextPage;
    UITableView *_listTableView;
    NSArray *_handleItems;
    CDUnknownBlockType _CCPagingHandler;
    CCCouponEmptyView *_emptyView;
}

@property(retain, nonatomic) CCCouponEmptyView *emptyView; // @synthesize emptyView=_emptyView;
@property(copy, nonatomic) CDUnknownBlockType CCPagingHandler; // @synthesize CCPagingHandler=_CCPagingHandler;
@property(retain, nonatomic) NSArray *handleItems; // @synthesize handleItems=_handleItems;
@property(retain, nonatomic) UITableView *listTableView; // @synthesize listTableView=_listTableView;
- (void).cxx_destruct;
- (void)updateContentViews;
- (void)reloadListViewWithItems:(id)arg1 hasNextPage:(_Bool)arg2 pagingHandler:(CDUnknownBlockType)arg3;
- (id)footerView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

