//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableDictionary, NSMutableSet, NSTimer;
@protocol JDReactCarouselDataSource, JDReactCarouselDelegate;

@interface JDReactCarousel : UIView
{
    _Bool _scrollEnabled;
    _Bool _pagingEnabled;
    _Bool _vertical;
    _Bool _wrapEnabled;
    _Bool _bounces;
    _Bool _stopAtItemBoundary;
    _Bool _scrollToItemBoundary;
    _Bool _ignorePerpendicularSwipes;
    _Bool _centerItemWhenSelected;
    _Bool _dragging;
    _Bool _decelerating;
    _Bool _scrolling;
    _Bool _visibleAll;
    _Bool _didDrag;
    id <JDReactCarouselDataSource> _dataSource;
    id <JDReactCarouselDelegate> _delegate;
    long long _type;
    double _perspective;
    double _decelerationRate;
    double _scrollSpeed;
    double _bounceDistance;
    double _scrollOffset;
    double _offsetMultiplier;
    long long _numberOfItems;
    long long _numberOfPlaceholders;
    long long _numberOfVisibleItems;
    double _itemWidth;
    UIView *_contentView;
    double _toggle;
    double _autoscroll;
    NSMutableDictionary *_itemViews;
    NSMutableSet *_itemViewPool;
    NSMutableSet *_placeholderViewPool;
    double _previousScrollOffset;
    long long _previousItemIndex;
    long long _numberOfPlaceholdersToShow;
    double _startOffset;
    double _endOffset;
    double _scrollDuration;
    double _startTime;
    double _lastTime;
    double _startVelocity;
    NSTimer *_timer;
    double _previousTranslation;
    double _toggleTime;
    struct CGSize _contentOffset;
    struct CGSize _viewpointOffset;
}

@property(nonatomic) double toggleTime; // @synthesize toggleTime=_toggleTime;
@property(nonatomic) _Bool didDrag; // @synthesize didDrag=_didDrag;
@property(nonatomic) double previousTranslation; // @synthesize previousTranslation=_previousTranslation;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double startVelocity; // @synthesize startVelocity=_startVelocity;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration=_scrollDuration;
@property(nonatomic) double endOffset; // @synthesize endOffset=_endOffset;
@property(nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property(nonatomic) long long numberOfPlaceholdersToShow; // @synthesize numberOfPlaceholdersToShow=_numberOfPlaceholdersToShow;
@property(nonatomic) long long previousItemIndex; // @synthesize previousItemIndex=_previousItemIndex;
@property(nonatomic) double previousScrollOffset; // @synthesize previousScrollOffset=_previousScrollOffset;
@property(retain, nonatomic) NSMutableSet *placeholderViewPool; // @synthesize placeholderViewPool=_placeholderViewPool;
@property(retain, nonatomic) NSMutableSet *itemViewPool; // @synthesize itemViewPool=_itemViewPool;
@property(retain, nonatomic) NSMutableDictionary *itemViews; // @synthesize itemViews=_itemViews;
@property(nonatomic) _Bool visibleAll; // @synthesize visibleAll=_visibleAll;
@property(nonatomic, getter=isScrolling) _Bool scrolling; // @synthesize scrolling=_scrolling;
@property(nonatomic, getter=isDecelerating) _Bool decelerating; // @synthesize decelerating=_decelerating;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(nonatomic) _Bool centerItemWhenSelected; // @synthesize centerItemWhenSelected=_centerItemWhenSelected;
@property(nonatomic) _Bool ignorePerpendicularSwipes; // @synthesize ignorePerpendicularSwipes=_ignorePerpendicularSwipes;
@property(nonatomic) _Bool scrollToItemBoundary; // @synthesize scrollToItemBoundary=_scrollToItemBoundary;
@property(nonatomic) _Bool stopAtItemBoundary; // @synthesize stopAtItemBoundary=_stopAtItemBoundary;
@property(nonatomic) double autoscroll; // @synthesize autoscroll=_autoscroll;
@property(readonly, nonatomic) double toggle; // @synthesize toggle=_toggle;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) double itemWidth; // @synthesize itemWidth=_itemWidth;
@property(nonatomic) long long numberOfVisibleItems; // @synthesize numberOfVisibleItems=_numberOfVisibleItems;
@property(readonly, nonatomic) long long numberOfPlaceholders; // @synthesize numberOfPlaceholders=_numberOfPlaceholders;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property(nonatomic) struct CGSize viewpointOffset; // @synthesize viewpointOffset=_viewpointOffset;
@property(nonatomic) struct CGSize contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) double offsetMultiplier; // @synthesize offsetMultiplier=_offsetMultiplier;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) _Bool bounces; // @synthesize bounces=_bounces;
@property(nonatomic, getter=isWrapEnabled) _Bool wrapEnabled; // @synthesize wrapEnabled=_wrapEnabled;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical=_vertical;
@property(nonatomic, getter=isPagingEnabled) _Bool pagingEnabled; // @synthesize pagingEnabled=_pagingEnabled;
@property(nonatomic, getter=isScrollEnabled) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) double bounceDistance; // @synthesize bounceDistance=_bounceDistance;
@property(nonatomic) double scrollSpeed; // @synthesize scrollSpeed=_scrollSpeed;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate=_decelerationRate;
@property(nonatomic) double perspective; // @synthesize perspective=_perspective;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) __weak id <JDReactCarouselDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <JDReactCarouselDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)viewOrSuperview:(id)arg1 ofClass:(Class)arg2;
- (_Bool)viewOrSuperview:(id)arg1 implementsSelector:(SEL)arg2;
- (long long)viewOrSuperviewIndex:(id)arg1;
- (void)didScroll;
- (void)didMoveToSuperview;
- (void)step;
- (double)easeInOut:(double)arg1;
- (void)startDecelerating;
- (_Bool)shouldScroll;
- (_Bool)shouldDecelerate;
- (double)decelerationDistance;
- (void)stopAnimation;
- (void)startAnimation;
- (void)reloadItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)insertItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)removeItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 duration:(double)arg2;
- (void)scrollByNumberOfItems:(long long)arg1 duration:(double)arg2;
- (void)scrollToOffset:(double)arg1 duration:(double)arg2;
- (void)scrollByOffset:(double)arg1 duration:(double)arg2;
- (double)minScrollDistanceFromOffset:(double)arg1 toOffset:(double)arg2;
- (long long)minScrollDistanceFromIndex:(long long)arg1 toIndex:(long long)arg2;
@property(nonatomic) long long currentItemIndex;
- (double)clampedOffset:(double)arg1;
- (long long)clampedIndex:(long long)arg1;
- (void)reloadData;
- (void)loadUnloadViews;
- (id)loadViewAtIndex:(long long)arg1;
- (id)loadViewAtIndex:(long long)arg1 withContainerView:(id)arg2;
- (id)dequeuePlaceholderView;
- (id)dequeueItemView;
- (void)queuePlaceholderView:(id)arg1;
- (void)queueItemView:(id)arg1;
- (void)layOutItemViews;
- (long long)circularCarouselItemCount;
- (void)updateNumberOfVisibleItems;
- (void)updateItemWidth;
- (void)transformItemViews;
- (void)layoutSubviews;
- (void)resizeSubviews;
- (void)transformItemView:(id)arg1 atIndex:(long long)arg2;
- (id)containView:(id)arg1;
- (double)offsetForItemAtIndex:(long long)arg1;
- (void)depthSortViews;
- (struct CATransform3D)transformForItemViewWithOffset:(double)arg1;
- (double)valueForOption:(long long)arg1 withDefault:(double)arg2;
- (double)alphaForItemWithOffset:(double)arg1;
- (void)insertView:(id)arg1 atIndex:(long long)arg2;
- (void)removeViewAtIndex:(long long)arg1;
- (void)setItemView:(id)arg1 forIndex:(long long)arg2;
- (id)itemViewAtPoint:(struct CGPoint)arg1;
- (long long)indexOfItemViewOrSubview:(id)arg1;
- (long long)indexOfItemView:(id)arg1;
@property(readonly, nonatomic) UIView *currentItemView;
- (id)itemViewAtIndex:(long long)arg1;
@property(readonly, nonatomic) NSArray *visibleItemViews;
@property(readonly, nonatomic) NSArray *indexesForVisibleItems;
- (void)popAnimationState;
- (void)pushAnimationState:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUp;

@end

