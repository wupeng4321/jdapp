//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDiCarousel;

@protocol TTTWaresCycleScrollViewDelegate <NSObject>

@optional
- (double)TTTWaresCycleScrollView:(JDiCarousel *)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (struct CATransform3D)TTTWaresCycleScrollView:(JDiCarousel *)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)TTTWaresCycleScrollView:(JDiCarousel *)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)TTTWaresCycleScrollViewCurrentItemIndexDidChange:(JDiCarousel *)arg1;
@end

