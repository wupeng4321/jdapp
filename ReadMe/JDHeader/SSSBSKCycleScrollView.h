//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDiCarousel, NSTimer;
@protocol CycleScrollViewDataSource, CycleScrollViewDelegate;

@interface SSSBSKCycleScrollView : UIView
{
    double _animationDuration;
    NSTimer *_animationTimer;
    _Bool _isDragging;
    int _type;
    id <CycleScrollViewDataSource> _dataSource;
    id <CycleScrollViewDelegate> _delegate;
    JDiCarousel *_iCarousel;
}

@property(retain, nonatomic) JDiCarousel *iCarousel; // @synthesize iCarousel=_iCarousel;
@property(nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) __weak id <CycleScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CycleScrollViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;
- (struct CATransform3D)JDiCarousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)JDiCarouselDidScroll:(id)arg1;
- (void)JDiCarouselDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)JDiCarouselWillBeginDragging:(id)arg1;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)JDiCarouselCurrentItemIndexDidChange:(id)arg1;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (void)reloadItemAtIndex:(long long)arg1;
@property(readonly, nonatomic) double contentOffset;
- (unsigned long long)getCurrentPage;
- (void)setCurrentPage:(long long)arg1 animated:(_Bool)arg2;
- (void)resumeTimerAfterTimeInterval:(double)arg1;
- (void)resumeScrollAfterTimeInterval:(double)arg1;
- (void)pauseScroll;
@property(nonatomic) _Bool scrollEnabled;
- (void)reloadData;
- (void)willMoveToSuperview:(id)arg1;
- (void)animationTimerDidFired:(id)arg1;
- (void)setupTimerWithDuration:(double)arg1;
- (void)layoutSubviews;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1 animationDuration:(double)arg2;
- (void)dealloc;

@end

