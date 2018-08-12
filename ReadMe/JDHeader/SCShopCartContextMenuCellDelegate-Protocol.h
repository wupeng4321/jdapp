//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, SCShopCartContextMenuCell, SCShopCartContextSwipeCellSettings;

@protocol SCShopCartContextMenuCellDelegate <NSObject>

@optional
- (void)swipCell:(SCShopCartContextMenuCell *)arg1 didShowAfterAnimation:(_Bool)arg2;
- (void)swipeCellWillEndSwiping:(SCShopCartContextMenuCell *)arg1;
- (void)swipeCellWillBeginSwiping:(SCShopCartContextMenuCell *)arg1;
- (NSArray *)swipeCell:(SCShopCartContextMenuCell *)arg1 swipeButtonsForDirection:(long long)arg2 swipeSettings:(SCShopCartContextSwipeCellSettings *)arg3;
- (_Bool)swipeCell:(SCShopCartContextMenuCell *)arg1 tappedButtonAtIndex:(long long)arg2 direction:(long long)arg3;
- (_Bool)swipeCell:(SCShopCartContextMenuCell *)arg1 canSwipe:(long long)arg2 fromPoint:(struct CGPoint)arg3;
@end

