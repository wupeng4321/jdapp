//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIScrollView;

@protocol FSShopPresenterDelegate <NSObject>
- (void)shopBackToTop;
- (void)shopScrollViewDidScrollToTop:(UIScrollView *)arg1;
- (void)shopScrollViewDidScroll:(UIScrollView *)arg1;
- (void)shopScrollViewWillBeginDragging:(UIScrollView *)arg1;
@end

