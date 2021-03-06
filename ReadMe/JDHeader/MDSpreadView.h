//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class MDIndexPath, MDSpreadViewCell, MDSpreadViewSelection, NSArray, NSMutableArray, NSMutableSet, UIColor, UIView;
@protocol MDSpreadViewDataSource, MDSpreadViewDelegate;

@interface MDSpreadView : UIScrollView
{
    id <MDSpreadViewDataSource> _dataSource;
    double rowHeight;
    double sectionRowHeaderHeight;
    double columnWidth;
    double sectionColumnHeaderWidth;
    NSMutableSet *_dequeuedCells;
    NSMutableArray *visibleCells;
    MDIndexPath *_visibleRowIndexPath;
    MDIndexPath *_visibleColumnIndexPath;
    struct CGRect visibleBounds;
    NSMutableArray *_headerRowCells;
    NSMutableArray *_headerColumnCells;
    MDSpreadViewCell *_headerCornerCell;
    struct CGRect _headerBounds;
    MDIndexPath *_headerRowIndexPath;
    MDIndexPath *_headerColumnIndexPath;
    NSMutableArray *_rowSections;
    NSMutableArray *_columnSections;
    UIView *anchorCell;
    UIView *anchorRowHeaderCell;
    UIView *anchorColumnHeaderCell;
    UIView *anchorCornerHeaderCell;
    _Bool implementsRowHeight;
    _Bool implementsRowHeaderHeight;
    _Bool implementsColumnWidth;
    _Bool implementsColumnHeaderWidth;
    NSMutableArray *_selectedCells;
    MDSpreadViewSelection *_currentSelection;
    int selectionMode;
    NSMutableArray *sortDescriptors;
    Class _defaultHeaderCornerCellClass;
    Class _defaultHeaderColumnCellClass;
    Class _defaultHeaderRowCellClass;
    Class _defaultCellClass;
    _Bool _didSetReloadData;
    _Bool allowsSelection;
    _Bool allowsMultipleSelection;
    int columnResizing;
    int rowResizing;
    int _separatorStyle;
    UIView *_backgroundView;
    UIColor *_separatorColor;
}

+ (id)MDAboutControllerTextCreditDictionary;
@property(retain, nonatomic) UIColor *separatorColor; // @synthesize separatorColor=_separatorColor;
@property(nonatomic) int separatorStyle; // @synthesize separatorStyle=_separatorStyle;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) Class defaultHeaderCornerCellClass; // @synthesize defaultHeaderCornerCellClass=_defaultHeaderCornerCellClass;
@property(nonatomic) Class defaultHeaderRowCellClass; // @synthesize defaultHeaderRowCellClass=_defaultHeaderRowCellClass;
@property(nonatomic) Class defaultHeaderColumnCellClass; // @synthesize defaultHeaderColumnCellClass=_defaultHeaderColumnCellClass;
@property(nonatomic) Class defaultCellClass; // @synthesize defaultCellClass=_defaultCellClass;
@property(nonatomic) int rowResizing; // @synthesize rowResizing;
@property(nonatomic) int columnResizing; // @synthesize columnResizing;
@property(nonatomic) _Bool allowsSelection; // @synthesize allowsSelection;
@property(nonatomic) _Bool allowsMultipleSelection; // @synthesize allowsMultipleSelection;
@property(retain, nonatomic) MDSpreadViewSelection *_currentSelection; // @synthesize _currentSelection;
@property(retain, nonatomic) NSMutableArray *_columnSections; // @synthesize _columnSections;
@property(retain, nonatomic) NSMutableArray *_rowSections; // @synthesize _rowSections;
@property(nonatomic) int selectionMode; // @synthesize selectionMode;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors;
@property(retain, nonatomic) MDSpreadViewCell *_headerCornerCell; // @synthesize _headerCornerCell;
@property(retain, nonatomic) MDIndexPath *_headerColumnIndexPath; // @synthesize _headerColumnIndexPath;
@property(retain, nonatomic) MDIndexPath *_headerRowIndexPath; // @synthesize _headerRowIndexPath;
@property(retain, nonatomic) MDIndexPath *_visibleColumnIndexPath; // @synthesize _visibleColumnIndexPath;
@property(retain, nonatomic) MDIndexPath *_visibleRowIndexPath; // @synthesize _visibleRowIndexPath;
@property(nonatomic) double sectionRowHeaderHeight; // @synthesize sectionRowHeaderHeight;
@property(nonatomic) double sectionColumnHeaderWidth; // @synthesize sectionColumnHeaderWidth;
@property(nonatomic) double columnWidth; // @synthesize columnWidth;
@property(nonatomic) double rowHeight; // @synthesize rowHeight;
@property(nonatomic) id <MDSpreadViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)_didSelectCellForRowAtIndexPath:(id)arg1 forColumnIndex:(id)arg2;
- (id)_willSelectCellForSelection:(id)arg1;
- (void)deselectCellForRowAtIndexPath:(id)arg1 forColumnAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)selectCellForRowAtIndexPath:(id)arg1 forColumnAtIndexPath:(id)arg2 withSelectionMode:(int)arg3 animated:(_Bool)arg4 scrollPosition:(int)arg5;
- (void)_removeSelection:(id)arg1;
- (void)_addSelection:(id)arg1;
- (void)_touchesCancelledInCell:(id)arg1;
- (void)_touchesEndedInCell:(id)arg1;
- (_Bool)_touchesBeganInCell:(id)arg1;
- (id)_cellForRowAtIndexPath:(id)arg1 forColumnAtIndexPath:(id)arg2;
- (id)_cellForHeaderInRowSection:(long long)arg1 forColumnAtIndexPath:(id)arg2;
- (id)_cellForHeaderInColumnSection:(long long)arg1 forRowAtIndexPath:(id)arg2;
- (id)_cellForHeaderInRowSection:(long long)arg1 forColumnSection:(long long)arg2;
- (void)_willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 forColumnAtIndexPath:(id)arg3;
- (long long)_numberOfRowSections;
- (long long)_numberOfColumnSections;
- (long long)_numberOfRowsInSection:(long long)arg1;
- (long long)_numberOfColumnsInSection:(long long)arg1;
- (long long)numberOfColumnsInColumnSection:(long long)arg1;
- (long long)numberOfColumnSections;
- (long long)numberOfRowsInRowSection:(long long)arg1;
- (long long)numberOfRowSections;
- (double)_heightForRowFooterInSection:(long long)arg1;
- (double)_heightForRowAtIndexPath:(id)arg1;
- (double)_heightForRowHeaderInSection:(long long)arg1;
- (double)_widthForColumnFooterInSection:(long long)arg1;
- (double)_widthForColumnAtIndexPath:(id)arg1;
- (double)_widthForColumnHeaderInSection:(long long)arg1;
- (void)_clearAllCells;
- (void)_clearCellForRowAtIndexPath:(id)arg1 forColumnAtIndexPath:(id)arg2;
- (void)_clearCellsForRowAtIndexPath:(id)arg1;
- (void)_clearCellsForColumnAtIndexPath:(id)arg1;
- (void)_clearCell:(id)arg1;
- (void)_setVisibleCell:(id)arg1 forRowAtIndexPath:(id)arg2 forColumnAtIndexPath:(id)arg3;
- (id)_visibleCellForRowAtIndexPath:(id)arg1 forColumnAtIndexPath:(id)arg2;
- (id)_allVisibleCells;
- (long long)_relativeIndexOfHeaderColumnInSection:(long long)arg1;
- (long long)_relativeIndexOfHeaderRowInSection:(long long)arg1;
- (id)_columnIndexPathFromRelativeIndex:(long long)arg1;
- (id)_rowIndexPathFromRelativeIndex:(long long)arg1;
- (long long)_relativeIndexOfColumnAtIndexPath:(id)arg1;
- (long long)_relativeIndexOfRowAtIndexPath:(id)arg1;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (struct CGRect)cellRectForRowAtIndexPath:(id)arg1 forColumnAtIndexPath:(id)arg2;
- (struct CGRect)rectForRowSection:(long long)arg1 columnSection:(long long)arg2;
- (void)_layoutFooterInRowSection:(long long)arg1 withHeight:(double)arg2 yOffset:(double)arg3;
- (void)_layoutHeaderInRowSection:(long long)arg1 withHeight:(double)arg2 yOffset:(double)arg3;
- (void)_layoutRowAtIndexPath:(id)arg1 withHeight:(double)arg2 yOffset:(double)arg3;
- (void)_layoutFooterInColumnSection:(long long)arg1 withWidth:(double)arg2 xOffset:(double)arg3;
- (void)_layoutHeaderInColumnSection:(long long)arg1 withWidth:(double)arg2 xOffset:(double)arg3;
- (void)_layoutColumnAtIndexPath:(id)arg1 withWidth:(double)arg2 xOffset:(double)arg3;
- (void)_layoutRemoveRowCellsAfterWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)_layoutRemoveRowCellsBeforeWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)_layoutAddRowCellsAfterWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)_layoutAddRowCellsBeforeWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)_layoutRemoveColumnCellsAfterWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)_layoutRemoveColumnCellsBeforeWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)_layoutAddColumnCellsAfterWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)_layoutAddColumnCellsBeforeWithOffset:(struct CGPoint)arg1 size:(struct CGSize)arg2 domain:(int)arg3;
- (void)layoutSubviews;
- (void)reloadData;
- (void)_setNeedsReloadData;
- (void)dealloc;
@property(nonatomic) id <MDSpreadViewDelegate> delegate;
- (void)_performInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

