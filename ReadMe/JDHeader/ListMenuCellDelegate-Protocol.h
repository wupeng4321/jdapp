//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FSSPromProductListCell, NSNumber, UIImageView;

@protocol ListMenuCellDelegate <NSObject>
- (void)listCellSpuButtonClicked:(FSSPromProductListCell *)arg1;
- (void)listMenuAddCartAnimationWith:(UIImageView *)arg1;
- (_Bool)listMenuCellShouldShowMenuOptionsViewInCell:(FSSPromProductListCell *)arg1;
- (void)listMenuWillHideInCell:(FSSPromProductListCell *)arg1;
- (void)listMenuWillShowInCell:(FSSPromProductListCell *)arg1;
- (void)listMenuCellDidShowInCell:(FSSPromProductListCell *)arg1;
- (void)listMenuCellDidHideInCell:(FSSPromProductListCell *)arg1;
- (void)listMenuCellDidSelecAddingCartOption:(FSSPromProductListCell *)arg1 isOutCartTag:(NSNumber *)arg2;
- (void)listMenuCellDidSelecFollowingOption:(FSSPromProductListCell *)arg1;
@end

