//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UILabel, UIScrollView;

@interface JDRankHeadView : UIView <UIScrollViewDelegate>
{
    UIScrollView *_scrollView;
    UIView *lineView;
    UIView *_bgView;
    NSMutableArray *buttonArray;
    UIButton *_rightButton;
    UILabel *_totalLabel;
    _Bool _isOpen;
    NSArray *_dataArray;
    long long _column;
    double _spaceVGap;
    double _spaceHGap;
    long long _selectIndex;
    CDUnknownBlockType _actionBlock;
    CDUnknownBlockType _openBlock;
    CDUnknownBlockType _scrollBlock;
    NSString *_headText;
    double _userContentOffsetX;
    CDStruct_6c514524 _padding;
}

@property(nonatomic) double userContentOffsetX; // @synthesize userContentOffsetX=_userContentOffsetX;
@property(retain, nonatomic) NSString *headText; // @synthesize headText=_headText;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(copy, nonatomic) CDUnknownBlockType scrollBlock; // @synthesize scrollBlock=_scrollBlock;
@property(copy, nonatomic) CDUnknownBlockType openBlock; // @synthesize openBlock=_openBlock;
@property(copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) double spaceHGap; // @synthesize spaceHGap=_spaceHGap;
@property(nonatomic) double spaceVGap; // @synthesize spaceVGap=_spaceVGap;
@property(nonatomic) CDStruct_d2b197d1 padding; // @synthesize padding=_padding;
@property(nonatomic) long long column; // @synthesize column=_column;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)adjustScrollViewContentX;
- (void)btnClick:(id)arg1;
- (void)rightBtnClick:(id)arg1;
- (void)setupUI;
- (id)initWithFrame:(struct CGRect)arg1 array:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

