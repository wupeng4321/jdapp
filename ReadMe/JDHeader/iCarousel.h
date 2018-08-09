//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSDictionary, NSMutableSet;
@protocol iCarouselDataSource, iCarouselDelegate;

@interface iCarousel : UIView
{
    _Bool decelerating;
    _Bool scrollEnabled;
    _Bool bounces;
    _Bool scrolling;
    _Bool shouldWrap;
    _Bool vertical;
    _Bool dragging;
    _Bool didDrag;
    _Bool stopAtItemBoundary;
    _Bool scrollToItemBoundary;
    _Bool useDisplayLink;
    _Bool ignorePerpendicularSwipes;
    _Bool centerItemWhenSelected;
    int type;
    id <iCarouselDataSource> dataSource;
    id <iCarouselDelegate> delegate;
    double perspective;
    long long numberOfItems;
    long long numberOfPlaceholders;
    long long numberOfPlaceholdersToShow;
    long long numberOfVisibleItems;
    UIView *contentView;
    NSDictionary *itemViews;
    NSMutableSet *itemViewPool;
    NSMutableSet *placeholderViewPool;
    long long previousItemIndex;
    double itemWidth;
    double scrollOffset;
    double offsetMultiplier;
    double startVelocity;
    id timer;
    double decelerationRate;
    double bounceDistance;
    double startOffset;
    double endOffset;
    double scrollDuration;
    double startTime;
    double previousTranslation;
    double scrollSpeed;
    double toggleTime;
    double toggle;
    long long animationDisableCount;
    struct CGSize contentOffset;
    struct CGSize viewpointOffset;
}

@property(nonatomic) _Bool centerItemWhenSelected; // @synthesize centerItemWhenSelected;
@property(nonatomic) long long animationDisableCount; // @synthesize animationDisableCount;
@property(nonatomic) _Bool ignorePerpendicularSwipes; // @synthesize ignorePerpendicularSwipes;
@property(nonatomic) _Bool useDisplayLink; // @synthesize useDisplayLink;
@property(nonatomic) _Bool scrollToItemBoundary; // @synthesize scrollToItemBoundary;
@property(nonatomic) _Bool stopAtItemBoundary; // @synthesize stopAtItemBoundary;
@property(readonly, nonatomic) double toggle; // @synthesize toggle;
@property(nonatomic) double toggleTime; // @synthesize toggleTime;
@property(nonatomic) double scrollSpeed; // @synthesize scrollSpeed;
@property(nonatomic) _Bool didDrag; // @synthesize didDrag;
@property(nonatomic) _Bool dragging; // @synthesize dragging;
@property(nonatomic, getter=isVertical) _Bool vertical; // @synthesize vertical;
@property(nonatomic) _Bool shouldWrap; // @synthesize shouldWrap;
@property(nonatomic) double previousTranslation; // @synthesize previousTranslation;
@property(nonatomic) _Bool scrolling; // @synthesize scrolling;
@property(nonatomic) double startTime; // @synthesize startTime;
@property(nonatomic) double scrollDuration; // @synthesize scrollDuration;
@property(nonatomic) double endOffset; // @synthesize endOffset;
@property(nonatomic) double startOffset; // @synthesize startOffset;
@property(nonatomic) struct CGSize viewpointOffset; // @synthesize viewpointOffset;
@property(nonatomic) struct CGSize contentOffset; // @synthesize contentOffset;
@property(nonatomic) _Bool bounces; // @synthesize bounces;
@property(nonatomic) double bounceDistance; // @synthesize bounceDistance;
@property(nonatomic) double decelerationRate; // @synthesize decelerationRate;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled;
@property(nonatomic) _Bool decelerating; // @synthesize decelerating;
@property(retain, nonatomic) id timer; // @synthesize timer;
@property(nonatomic) double startVelocity; // @synthesize startVelocity;
@property(nonatomic) double offsetMultiplier; // @synthesize offsetMultiplier;
@property(nonatomic) double scrollOffset; // @synthesize scrollOffset;
@property(nonatomic) double itemWidth; // @synthesize itemWidth;
@property(nonatomic) long long previousItemIndex; // @synthesize previousItemIndex;
@property(retain, nonatomic) NSMutableSet *placeholderViewPool; // @synthesize placeholderViewPool;
@property(retain, nonatomic) NSMutableSet *itemViewPool; // @synthesize itemViewPool;
@property(retain, nonatomic) NSDictionary *itemViews; // @synthesize itemViews;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView;
@property(nonatomic) long long numberOfVisibleItems; // @synthesize numberOfVisibleItems;
@property(nonatomic) long long numberOfPlaceholdersToShow; // @synthesize numberOfPlaceholdersToShow;
@property(readonly, nonatomic) long long numberOfPlaceholders; // @synthesize numberOfPlaceholders;
@property(readonly, nonatomic) long long numberOfItems; // @synthesize numberOfItems;
@property(nonatomic) double perspective; // @synthesize perspective;
@property(nonatomic) int type; // @synthesize type;
@property(nonatomic) id <iCarouselDelegate> delegate; // @synthesize delegate;
@property(nonatomic) id <iCarouselDataSource> dataSource; // @synthesize dataSource;
- (void)didPan:(id)arg1;
- (void)didTap:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)viewOrSuperview:(id)arg1 isKindOfClass:(Class)arg2;
- (long long)viewOrSuperviewIndex:(id)arg1;
- (void)didScroll;
- (void)viewDidMoveToSuperview;
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
- (void)fadeInItemView:(id)arg1;
- (void)removeItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)scrollToItemAtIndex:(long long)arg1 duration:(double)arg2;
- (void)scrollByNumberOfItems:(long long)arg1 duration:(double)arg2;
- (double)minScrollDistanceFromOffset:(double)arg1 toOffset:(double)arg2;
- (long long)minScrollDistanceFromIndex:(long long)arg1 toIndex:(long long)arg2;
@property(readonly, nonatomic) long long currentItemIndex;
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
- (void)updateItemWidth;
- (void)transformItemViews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)transformItemView:(id)arg1 atIndex:(long long)arg2;
- (id)containView:(id)arg1;
- (double)offsetForItemAtIndex:(long long)arg1;
- (void)depthSortViews;
- (struct CATransform3D)transformForItemView:(id)arg1 withOffset:(double)arg2;
- (double)valueForTransformOption:(int)arg1 withDefault:(double)arg2;
- (double)alphaForItemWithOffset:(double)arg1;
- (void)insertView:(id)arg1 atIndex:(long long)arg2;
- (void)removeViewAtIndex:(long long)arg1;
- (void)setItemView:(id)arg1 forIndex:(long long)arg2;
- (long long)indexOfItemViewOrSubview:(id)arg1;
- (long long)indexOfItemView:(id)arg1;
@property(readonly, retain, nonatomic) UIView *currentItemView;
- (id)itemViewAtIndex:(long long)arg1;
@property(readonly, retain, nonatomic) NSArray *visibleItemViews;
@property(readonly, retain, nonatomic) NSArray *indexesForVisibleItems;
- (void)disableAnimation;
- (void)enableAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUp;

@end

