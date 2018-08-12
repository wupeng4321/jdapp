//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FinalSearchSortTabViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FinalSearchSortAllCateViewController, FinalSearchSortTabView, JDView, NSArray, NSMutableArray, NSString, UITableView, UIVisualEffectView;
@protocol FinalSearchSortAllViewDelegate;

@interface FinalSearchSortAllView : UIView <FinalSearchSortTabViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    int _selectIndexOfFirstTab;
    UIVisualEffectView *effectView;
    UIView *_whiteBg;
    NSArray *_titleArray;
    UITableView *_underTable;
    _Bool _underViewIsHidden;
    _Bool _isfromProm;
    int _currentSeletcedOrder;
    FinalSearchSortTabView *_sortBar;
    id <FinalSearchSortAllViewDelegate> _delegate;
    double _sortTop;
    JDView *_sortBg;
    NSMutableArray *_sencondCateDataArray;
    FinalSearchSortAllCateViewController *_filterCategorySubCtl;
    UIView *_sortUnderBar;
    NSArray *_tableData;
}

@property(retain, nonatomic) NSArray *tableData; // @synthesize tableData=_tableData;
@property(retain, nonatomic) UIView *sortUnderBar; // @synthesize sortUnderBar=_sortUnderBar;
@property(retain, nonatomic) FinalSearchSortAllCateViewController *filterCategorySubCtl; // @synthesize filterCategorySubCtl=_filterCategorySubCtl;
@property(nonatomic) _Bool isfromProm; // @synthesize isfromProm=_isfromProm;
@property(nonatomic) int currentSeletcedOrder; // @synthesize currentSeletcedOrder=_currentSeletcedOrder;
@property(retain, nonatomic) NSMutableArray *sencondCateDataArray; // @synthesize sencondCateDataArray=_sencondCateDataArray;
@property(retain, nonatomic) JDView *sortBg; // @synthesize sortBg=_sortBg;
@property(nonatomic) _Bool underViewIsHidden; // @synthesize underViewIsHidden=_underViewIsHidden;
@property(nonatomic) double sortTop; // @synthesize sortTop=_sortTop;
@property(nonatomic) __weak id <FinalSearchSortAllViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FinalSearchSortTabView *sortBar; // @synthesize sortBar=_sortBar;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)otherButtonClickHiddenView;
- (void)isHiddenView:(_Bool)arg1;
- (void)sortTabView:(id)arg1 didSelectIndex:(int)arg2 priceSort:(_Bool)arg3;
- (void)didSelectIndex:(int)arg1 priceSort:(_Bool)arg2;
- (void)refreshBoardWithPromotionCategoryViewModel:(id)arg1;
- (void)reloadTabNeedShowAllCategory:(_Bool)arg1 needShowBookCate:(_Bool)arg2;
- (void)refreshAllCateViewWithOriginY:(double)arg1;
- (void)resetSortBarWithSelectIndex:(int)arg1 needShowAllCate:(_Bool)arg2 needShowBookCate:(_Bool)arg3;
- (void)dealloc;
- (id)initWithBookCateClickedBlock:(CDUnknownBlockType)arg1 filterButtonClickBlock:(CDUnknownBlockType)arg2 tabExtendedBtnClicked:(CDUnknownBlockType)arg3 allCateBtnClicked:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
