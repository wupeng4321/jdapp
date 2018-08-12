//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinalSearchSortButton, NSArray, NSString;
@protocol FinalSearchSortTabViewDelegate;

@interface FinalSearchSortTabView : UIView
{
    _Bool _isFilterRed;
    _Bool _priceSortUpBool;
    int _selectedIndex;
    int _type;
    float _minOffsetY;
    id <FinalSearchSortTabViewDelegate> _delegate;
    FinalSearchSortButton *_allcategoryBtn;
    NSArray *_buttonsInfo;
    UIView *_topBacView;
    FinalSearchSortButton *_filterBtn;
    FinalSearchSortButton *_categoryBtn;
    FinalSearchSortButton *_tabExtendedButton;
    NSString *_notShowRedPointkey;
    NSString *_showRedPointTimekey;
    CDUnknownBlockType _bookCateClickedBlock;
    CDUnknownBlockType _filterButtonClickBlock;
    CDUnknownBlockType _tabExtendedBtnClickedBlock;
    CDUnknownBlockType _allCateBtnClickedBlock;
    CDUnknownBlockType _changeUnderViewBlock;
}

@property(nonatomic) _Bool priceSortUpBool; // @synthesize priceSortUpBool=_priceSortUpBool;
@property(copy, nonatomic) CDUnknownBlockType changeUnderViewBlock; // @synthesize changeUnderViewBlock=_changeUnderViewBlock;
@property(copy, nonatomic) CDUnknownBlockType allCateBtnClickedBlock; // @synthesize allCateBtnClickedBlock=_allCateBtnClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType tabExtendedBtnClickedBlock; // @synthesize tabExtendedBtnClickedBlock=_tabExtendedBtnClickedBlock;
@property(copy, nonatomic) CDUnknownBlockType filterButtonClickBlock; // @synthesize filterButtonClickBlock=_filterButtonClickBlock;
@property(copy, nonatomic) CDUnknownBlockType bookCateClickedBlock; // @synthesize bookCateClickedBlock=_bookCateClickedBlock;
@property(nonatomic) _Bool isFilterRed; // @synthesize isFilterRed=_isFilterRed;
@property(copy, nonatomic) NSString *showRedPointTimekey; // @synthesize showRedPointTimekey=_showRedPointTimekey;
@property(copy, nonatomic) NSString *notShowRedPointkey; // @synthesize notShowRedPointkey=_notShowRedPointkey;
@property(retain, nonatomic) FinalSearchSortButton *tabExtendedButton; // @synthesize tabExtendedButton=_tabExtendedButton;
@property(retain, nonatomic) FinalSearchSortButton *categoryBtn; // @synthesize categoryBtn=_categoryBtn;
@property(retain, nonatomic) FinalSearchSortButton *filterBtn; // @synthesize filterBtn=_filterBtn;
@property(nonatomic) float minOffsetY; // @synthesize minOffsetY=_minOffsetY;
@property(retain, nonatomic) UIView *topBacView; // @synthesize topBacView=_topBacView;
@property(retain, nonatomic) NSArray *buttonsInfo; // @synthesize buttonsInfo=_buttonsInfo;
@property(retain, nonatomic) FinalSearchSortButton *allcategoryBtn; // @synthesize allcategoryBtn=_allcategoryBtn;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) __weak id <FinalSearchSortTabViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int selectedIndex; // @synthesize selectedIndex=_selectedIndex;
- (void).cxx_destruct;
- (void)firstButtonOrientation:(_Bool)arg1 isComeFromAllcate:(_Bool)arg2;
- (void)selectTabButton:(id)arg1;
- (void)deselectTabButton:(id)arg1;
- (void)allcategoryBtnClick:(id)arg1;
- (void)tabExtendedBtnDidClick:(id)arg1;
- (void)categoryBtnClick:(id)arg1;
- (void)filterProductList:(id)arg1;
- (void)tabButtonPressed:(id)arg1;
- (void)sortTabExtendedDidClick;
- (id)getTabExtendedButton;
- (_Bool)needShowShopRedPoint;
- (void)sortHideTabExtendedButton;
- (void)sortShowTabExtendedButtonWithTitle:(id)arg1 notShowRedPointkey:(id)arg2 showRedPointTimekey:(id)arg3;
- (void)setNomalSelectedIndex:(int)arg1;
- (void)setAllCategorySelectedIndex:(int)arg1;
- (void)filterBtnColorRed:(_Bool)arg1;
- (void)reloadTabButtonsTitle:(id)arg1;
- (void)reloadTabButtons:(id)arg1 selectIndex:(int)arg2;
- (void)reloadWhenCreateTabButtons:(id)arg1 selectIndex:(int)arg2;
- (void)restoreSortTabViewWithSelectIndex:(int)arg1;
- (void)removeTabButtons;
- (id)initWithBookCateClickedBlock:(CDUnknownBlockType)arg1 filterButtonClickBlock:(CDUnknownBlockType)arg2 tabExtendedBtnClicked:(CDUnknownBlockType)arg3 allCateBtnClicked:(CDUnknownBlockType)arg4 changeUnderViewBlock:(CDUnknownBlockType)arg5;

@end
