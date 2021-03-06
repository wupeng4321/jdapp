//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSIndexPath, SSSBSKCardSwitchView, UICollectionViewCell, UIScrollView;

@protocol SSSBSKCardSwitchViewDelegate <NSObject>

@optional
- (void)cardSwitchView:(SSSBSKCardSwitchView *)arg1 didEndDisplayingCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)cardSwitchView:(SSSBSKCardSwitchView *)arg1 willDisplayCell:(UICollectionViewCell *)arg2 forItemAtIndexPath:(NSIndexPath *)arg3;
- (void)cardSwitchView:(SSSBSKCardSwitchView *)arg1 clickCardAtIndex:(long long)arg2;
- (void)cardSwitchView:(SSSBSKCardSwitchView *)arg1 scrollViewDidEndScrollingAnimation:(UIScrollView *)arg2 haltAtIndex:(long long)arg3;
- (void)cardSwitchView:(SSSBSKCardSwitchView *)arg1 scrollViewDidScroll:(UIScrollView *)arg2;
- (void)cardSwitchView:(SSSBSKCardSwitchView *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)cardSwitchView:(SSSBSKCardSwitchView *)arg1 didSelectedCardAtIndex:(long long)arg2;
@end

