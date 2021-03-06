//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDReactCarousel;

@protocol JDReactCarouselDelegate <NSObject>

@optional
- (struct CATransform3D)carousel:(JDReactCarousel *)arg1 itemTransformOutForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)carousel:(JDReactCarousel *)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (struct CATransform3D)carousel:(JDReactCarousel *)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)carouselItemWidth:(JDReactCarousel *)arg1;
- (void)carousel:(JDReactCarousel *)arg1 didSelectItemAtIndex:(long long)arg2;
- (_Bool)carousel:(JDReactCarousel *)arg1 shouldSelectItemAtIndex:(long long)arg2;
- (void)carouselDidEndDecelerating:(JDReactCarousel *)arg1;
- (void)carouselWillBeginDecelerating:(JDReactCarousel *)arg1;
- (void)carouselDidEndDragging:(JDReactCarousel *)arg1 willDecelerate:(_Bool)arg2;
- (void)carouselWillBeginDragging:(JDReactCarousel *)arg1;
- (void)carouselCurrentItemIndexDidChange:(JDReactCarousel *)arg1;
- (void)carouselDidScroll:(JDReactCarousel *)arg1;
- (void)carouselDidEndScrollingAnimation:(JDReactCarousel *)arg1;
- (void)carouselWillBeginScrollingAnimation:(JDReactCarousel *)arg1;
@end

