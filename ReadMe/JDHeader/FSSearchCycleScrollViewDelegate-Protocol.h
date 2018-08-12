//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSSearchCycleScrollView;

@protocol FSSearchCycleScrollViewDelegate <NSObject>

@optional
- (void)cycleScrollViewDidEndDragging:(FSSearchCycleScrollView *)arg1 willDecelerate:(_Bool)arg2 shouldScroll:(_Bool)arg3;
- (void)cycleScrollViewWillBeginDragging:(FSSearchCycleScrollView *)arg1;
- (void)cycleScrollViewDidScroll:(FSSearchCycleScrollView *)arg1;
- (struct CATransform3D)cycleScrollView:(FSSearchCycleScrollView *)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)autoAnimateViewAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)currentPageIndexUpdated:(long long)arg1;
@end
