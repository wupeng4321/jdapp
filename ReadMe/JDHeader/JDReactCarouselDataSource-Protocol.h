//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDReactCarousel, UIView;

@protocol JDReactCarouselDataSource <NSObject>
- (UIView *)carousel:(JDReactCarousel *)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(UIView *)arg3;
- (long long)numberOfItemsInCarousel:(JDReactCarousel *)arg1;

@optional
- (UIView *)carousel:(JDReactCarousel *)arg1 placeholderViewAtIndex:(long long)arg2 reusingView:(UIView *)arg3;
- (long long)numberOfPlaceholdersInCarousel:(JDReactCarousel *)arg1;
@end

