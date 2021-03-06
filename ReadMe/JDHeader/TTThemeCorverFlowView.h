//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDiCarouselDataSource-Protocol.h"
#import "JDiCarouselDelegate-Protocol.h"

@class JDiCarousel, NSArray, NSString, UILabel;
@protocol TTThemeCorverFlowViewDataSource, TTThemeCorverFlowViewDelegate;

@interface TTThemeCorverFlowView : UIView <JDiCarouselDataSource, JDiCarouselDelegate>
{
    _Bool _isShowIndex;
    double _itemScaleFactor;
    double _interitemSpacing;
    NSString *_pageLabelColor;
    id <TTThemeCorverFlowViewDataSource> _dataSource;
    id <TTThemeCorverFlowViewDelegate> _delegate;
    NSArray *_dataArray;
    JDiCarousel *_scrollerView;
    UILabel *_pageLabel;
    struct CGSize _contentOffset;
}

@property(retain, nonatomic) UILabel *pageLabel; // @synthesize pageLabel=_pageLabel;
@property(retain, nonatomic) JDiCarousel *scrollerView; // @synthesize scrollerView=_scrollerView;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) struct CGSize contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) __weak id <TTThemeCorverFlowViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <TTThemeCorverFlowViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool isShowIndex; // @synthesize isShowIndex=_isShowIndex;
@property(copy, nonatomic) NSString *pageLabelColor; // @synthesize pageLabelColor=_pageLabelColor;
@property(nonatomic) double interitemSpacing; // @synthesize interitemSpacing=_interitemSpacing;
@property(nonatomic) double itemScaleFactor; // @synthesize itemScaleFactor=_itemScaleFactor;
- (void).cxx_destruct;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CATransform3D)JDiCarousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (void)JDiCarouselCurrentItemIndexDidChange:(id)arg1;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (void)layoutSubviews;
- (void)updateCorverFlowPageLabel;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

