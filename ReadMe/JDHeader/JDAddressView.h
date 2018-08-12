//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDAddressViewIndexDelegate-Protocol.h"
#import "JDAddressViewTabBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class JDAddressViewTabBar, JDRefreshIndicator, NSArray, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIScrollView, UITableView;

@interface JDAddressView : UIView <UITableViewDataSource, UITableViewDelegate, JDAddressViewTabBarDelegate, JDAddressViewIndexDelegate>
{
    UIView *_topBarView;
    UILabel *_titleLable;
    JDAddressViewTabBar *_tabBar;
    UIScrollView *_scrollView;
    UIView *_indicatorBackgroundView;
    JDRefreshIndicator *_indicatorView;
    UITableView *_commonAddressTableView;
    _Bool _hasCommonAddress;
    UIView *_tipView;
    UILabel *_tipLable;
    UIImageView *_tipImageView;
    _Bool _needIndicator;
    float _safeAreaInsetsBottom;
    NSString *_title;
    UIButton *_leftButton;
    UIButton *_rightButton;
    long long _commonAddressViewSelectedRow;
    long long _colorType;
    id _dataSource;
    id _delegate;
    NSMutableDictionary *_dataDic;
    NSMutableDictionary *_selectedIndexDic;
    NSString *_tempText;
    long long _tableViewCount;
    long long _maxTab;
    NSArray *_titles;
}

@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(nonatomic) float safeAreaInsetsBottom; // @synthesize safeAreaInsetsBottom=_safeAreaInsetsBottom;
@property(nonatomic) long long maxTab; // @synthesize maxTab=_maxTab;
@property(nonatomic) long long tableViewCount; // @synthesize tableViewCount=_tableViewCount;
@property(retain, nonatomic) NSString *tempText; // @synthesize tempText=_tempText;
@property(retain, nonatomic) NSMutableDictionary *selectedIndexDic; // @synthesize selectedIndexDic=_selectedIndexDic;
@property(retain, nonatomic) NSMutableDictionary *dataDic; // @synthesize dataDic=_dataDic;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool needIndicator; // @synthesize needIndicator=_needIndicator;
@property(nonatomic) long long colorType; // @synthesize colorType=_colorType;
@property(nonatomic) long long commonAddressViewSelectedRow; // @synthesize commonAddressViewSelectedRow=_commonAddressViewSelectedRow;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)hiddenBubble:(double)arg1;
- (void)addressViewIndexTouchesEnd:(id)arg1;
- (void)addressViewIndexTouchesBegan:(id)arg1;
- (void)addressViewIndex:(id)arg1 didSelectSectionAtIndex:(long long)arg2 withTitle:(id)arg3;
- (double)cellHeightOfCommonAddress:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)addressViewTabBar:(id)arg1 didSelectIndex:(long long)arg2;
- (void)scrollSelectedCellVisibleInTab:(long long)arg1;
- (void)hideIndicator;
- (void)showIndicator;
- (void)clean;
- (void)loadNextWithIndexPath:(id)arg1 address:(id)arg2;
- (void)loadNextWithSelectedRow:(long long)arg1 address:(id)arg2;
- (void)loadNext;
- (void)popRankAddressView;
- (void)pushRankAddressView;
- (void)reloadCommonAddressView;
- (void)clickedButton:(id)arg1;
- (void)clickedSelectAddressButton:(id)arg1;
- (void)addTableViewForTab:(long long)arg1;
- (void)setupBottomButton;
- (void)setBottomButtonHidden:(_Bool)arg1;
- (void)hideTopBar;
- (void)setAddressTip:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTabBarHeight:(double)arg1;
- (void)setupSubviewColor;
- (void)didClickedTipViewFromTap:(id)arg1;
- (void)initTipView;
- (void)setupUI;
- (id)initWithCommonAddressFrame:(struct CGRect)arg1 dataSource:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 dataSource:(id)arg2 delegate:(id)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
