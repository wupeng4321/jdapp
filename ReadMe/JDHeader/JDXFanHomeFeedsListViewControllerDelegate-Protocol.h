//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDXFanHomeFeedsListViewController, NSIndexPath;

@protocol JDXFanHomeFeedsListViewControllerDelegate <NSObject>

@optional
- (void)shouldLoadMoreForFeedsListViewController:(JDXFanHomeFeedsListViewController *)arg1 actionType:(unsigned long long)arg2;
- (void)feedsListViewController:(JDXFanHomeFeedsListViewController *)arg1 didClickAuthorAtItemIndexPath:(NSIndexPath *)arg2;
- (void)feedsListViewController:(JDXFanHomeFeedsListViewController *)arg1 didSelectSubItemIndex:(long long)arg2 atItemIndexPath:(NSIndexPath *)arg3;
- (void)feedsListViewController:(JDXFanHomeFeedsListViewController *)arg1 didSelectItemAtIndexPath:(NSIndexPath *)arg2;
@end

