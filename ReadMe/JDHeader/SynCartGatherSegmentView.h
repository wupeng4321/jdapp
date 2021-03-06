//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDAddOnItemModel, JDView, NSArray, NSMutableArray, SCShopCartFreshTagModel, SynCartSegmentButton;

@interface SynCartGatherSegmentView : UIView
{
    _Bool _currentFreshTag;
    SCShopCartFreshTagModel *_normalTagModel;
    SCShopCartFreshTagModel *_freshTagModel;
    JDAddOnItemModel *_addOnItemModel;
    SynCartSegmentButton *_selectedButton;
    JDView *_redLine;
    NSArray *_tabTags;
    NSMutableArray *_tabBtnArr;
    CDUnknownBlockType _initializeAction;
    CDUnknownBlockType _changeBarAction;
}

@property(copy, nonatomic) CDUnknownBlockType changeBarAction; // @synthesize changeBarAction=_changeBarAction;
@property(copy, nonatomic) CDUnknownBlockType initializeAction; // @synthesize initializeAction=_initializeAction;
@property(retain, nonatomic) NSMutableArray *tabBtnArr; // @synthesize tabBtnArr=_tabBtnArr;
@property(retain, nonatomic) NSArray *tabTags; // @synthesize tabTags=_tabTags;
@property(retain, nonatomic) JDView *redLine; // @synthesize redLine=_redLine;
@property(retain, nonatomic) SynCartSegmentButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) JDAddOnItemModel *addOnItemModel; // @synthesize addOnItemModel=_addOnItemModel;
@property(nonatomic) _Bool currentFreshTag; // @synthesize currentFreshTag=_currentFreshTag;
@property(retain, nonatomic) SCShopCartFreshTagModel *freshTagModel; // @synthesize freshTagModel=_freshTagModel;
@property(retain, nonatomic) SCShopCartFreshTagModel *normalTagModel; // @synthesize normalTagModel=_normalTagModel;
- (void).cxx_destruct;
- (void)changeTabBarView:(id)arg1;
- (void)updateTabBar;
- (void)updateSegmentTags:(id)arg1 addOnItemModel:(id)arg2 selectedAction:(CDUnknownBlockType)arg3;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

