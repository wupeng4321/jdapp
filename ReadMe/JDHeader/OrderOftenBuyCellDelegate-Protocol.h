//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDImageView, OrderOftenBuyGridView, OrderOftenBuyModel;

@protocol OrderOftenBuyCellDelegate <NSObject>
- (void)longPressShowActionFloatView:(OrderOftenBuyGridView *)arg1 model:(OrderOftenBuyModel *)arg2;
- (void)clickedAddCartButton:(OrderOftenBuyModel *)arg1 viewAnimation:(JDImageView *)arg2;
- (void)clickedDeleteButton:(OrderOftenBuyModel *)arg1;
- (void)clickedSimilarButton:(OrderOftenBuyModel *)arg1;
- (void)clickedGoodsDetail:(OrderOftenBuyModel *)arg1;
@end

