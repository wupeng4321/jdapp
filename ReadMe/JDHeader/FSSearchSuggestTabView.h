//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FSSearchSuggestTabModel, NSArray, NSMutableArray, UIButton;

@interface FSSearchSuggestTabView : UIView
{
    NSArray *_arrTabs;
    FSSearchSuggestTabModel *_currentType;
    CDUnknownBlockType _suggestTypeSelected;
    NSMutableArray *_arrTabButtons;
    UIButton *_currentSelectedTabButton;
    UIView *_selectedLineView;
    UIView *_bottomGrayLineView;
}

@property(retain, nonatomic) UIView *bottomGrayLineView; // @synthesize bottomGrayLineView=_bottomGrayLineView;
@property(retain, nonatomic) UIView *selectedLineView; // @synthesize selectedLineView=_selectedLineView;
@property(nonatomic) __weak UIButton *currentSelectedTabButton; // @synthesize currentSelectedTabButton=_currentSelectedTabButton;
@property(retain, nonatomic) NSMutableArray *arrTabButtons; // @synthesize arrTabButtons=_arrTabButtons;
@property(copy, nonatomic) CDUnknownBlockType suggestTypeSelected; // @synthesize suggestTypeSelected=_suggestTypeSelected;
@property(retain, nonatomic) FSSearchSuggestTabModel *currentType; // @synthesize currentType=_currentType;
@property(retain, nonatomic) NSArray *arrTabs; // @synthesize arrTabs=_arrTabs;
- (void).cxx_destruct;
- (void)tabButtonClick:(id)arg1;
- (void)clearCurrentTab;
- (id)tabButtonAtIndex:(unsigned long long)arg1;
- (void)configTabButton:(id)arg1 selected:(_Bool)arg2;
- (void)layoutTabsWithModelArray:(id)arg1;
- (id)init;

@end
