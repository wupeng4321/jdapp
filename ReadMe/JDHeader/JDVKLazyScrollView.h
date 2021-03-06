//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol JDVKLazyScrollViewDataSource, UIScrollViewDelegate;

@interface JDVKLazyScrollView : UIScrollView <UIScrollViewDelegate>
{
    _Bool _isPositiveScrolling;
    unsigned long long _direction;
    id <JDVKLazyScrollViewDataSource> _dataSource;
    id <UIScrollViewDelegate> _forwardDelegate;
    NSMutableSet *_allItemsInScroll;
    NSMutableSet *_visibleItems;
    NSArray *_itemsSortedReverse;
    NSArray *_itemsSortedPositive;
    NSMutableDictionary *_reusableItemsInfo;
    NSMutableArray *_itemsFrame;
    struct CGPoint _lastContentOffset;
}

@property(retain, nonatomic) NSMutableArray *itemsFrame; // @synthesize itemsFrame=_itemsFrame;
@property(retain, nonatomic) NSMutableDictionary *reusableItemsInfo; // @synthesize reusableItemsInfo=_reusableItemsInfo;
@property(retain, nonatomic) NSArray *itemsSortedPositive; // @synthesize itemsSortedPositive=_itemsSortedPositive;
@property(retain, nonatomic) NSArray *itemsSortedReverse; // @synthesize itemsSortedReverse=_itemsSortedReverse;
@property(retain, nonatomic) NSMutableSet *visibleItems; // @synthesize visibleItems=_visibleItems;
@property(retain, nonatomic) NSMutableSet *allItemsInScroll; // @synthesize allItemsInScroll=_allItemsInScroll;
@property(nonatomic) _Bool isPositiveScrolling; // @synthesize isPositiveScrolling=_isPositiveScrolling;
@property(nonatomic) struct CGPoint lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) __weak id <UIScrollViewDelegate> forwardDelegate; // @synthesize forwardDelegate=_forwardDelegate;
@property(nonatomic) __weak id <JDVKLazyScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
- (void).cxx_destruct;
- (id)dequeueReusableItemWithIdentifier:(id)arg1;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)vk_scrollViewDidScroll:(id)arg1;
- (void)addViewOnScreenWhenNeeded:(struct CGRect)arg1;
- (void)removeOffScreenView:(struct CGRect)arg1;
- (void)assembleScrollSubViews;
- (id)itemsOnScreenIndexSet;
- (struct CGRect)visibleFrameAtContentOffset;
- (void)getScrollViewFrameInfo;
- (void)setContentSize:(struct CGSize)arg1;
- (void)initializeData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

