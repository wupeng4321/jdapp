//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HMSegmentedControlDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class HMSegmentedControl, NSMutableArray, NSString, UIImageView, UIScrollView;
@protocol StowSimilarityTabScrollViewDelegate;

@interface StowSimilarityTabScrollView : UIView <UIScrollViewDelegate, HMSegmentedControlDelegate>
{
    _Bool _isSegmentTap;
    id <StowSimilarityTabScrollViewDelegate> _delegate;
    NSMutableArray *_tabIdArr;
    UIView *_headView;
    HMSegmentedControl *_segmentView;
    UIView *_lineView;
    UIScrollView *_scrollView;
    UIView *_currentView;
    UIImageView *_helpImageView;
    NSMutableArray *_visibleViewArray;
    long long _curIndex;
}

@property(nonatomic) long long curIndex; // @synthesize curIndex=_curIndex;
@property(nonatomic) _Bool isSegmentTap; // @synthesize isSegmentTap=_isSegmentTap;
@property(retain, nonatomic) NSMutableArray *visibleViewArray; // @synthesize visibleViewArray=_visibleViewArray;
@property(retain, nonatomic) UIImageView *helpImageView; // @synthesize helpImageView=_helpImageView;
@property(retain, nonatomic) UIView *currentView; // @synthesize currentView=_currentView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) HMSegmentedControl *segmentView; // @synthesize segmentView=_segmentView;
@property(retain, nonatomic) UIView *headView; // @synthesize headView=_headView;
@property(retain, nonatomic) NSMutableArray *tabIdArr; // @synthesize tabIdArr=_tabIdArr;
@property(nonatomic) __weak id <StowSimilarityTabScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showCurrentTabView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)onDidEndDragging;
- (void)segmentedControlChangedValue:(id)arg1;
- (void)removeCacheScrollView;
- (void)enableSubScrollViewsDragging;
- (void)disableSubScrollViewDragging;
- (void)notifyIndexChanged:(long long)arg1 type:(long long)arg2;
- (void)releaseAllScrollSubViews;
- (void)releaseCache;
- (id)getScrollSubViewByTag:(long long)arg1;
- (id)getContentView:(long long)arg1;
- (void)showContentViewAtIndex:(long long)arg1;
- (void)showContentView;
- (void)createSingleSubview;
- (void)createScrollSubviews:(id)arg1;
- (void)initSubviews:(id)arg1;
- (void)hiddenHelpImg;
- (void)configTagHelpImageView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

