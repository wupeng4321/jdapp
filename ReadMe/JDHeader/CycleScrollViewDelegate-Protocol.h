//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDCycleScrollView;

@protocol CycleScrollViewDelegate <NSObject>

@optional
- (double)cycleScrollView:(JDCycleScrollView *)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (struct CATransform3D)cycleScrollView:(JDCycleScrollView *)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)cycleScrollViewDidEndDecelerating:(JDCycleScrollView *)arg1;
- (void)cycleScrollViewWillBeginDecelerating:(JDCycleScrollView *)arg1;
- (void)cycleScrollViewDidEndScrollingAnimation:(JDCycleScrollView *)arg1;
- (void)cycleScrollViewDidEndDragging:(JDCycleScrollView *)arg1 willDecelerate:(_Bool)arg2 shouldScroll:(_Bool)arg3;
- (void)cycleScrollViewWillBeginDragging:(JDCycleScrollView *)arg1;
- (void)cycleScrollViewDidScroll:(JDCycleScrollView *)arg1;
- (void)autoAnimateViewAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)currentPageIndexUpdated:(long long)arg1;
@end
