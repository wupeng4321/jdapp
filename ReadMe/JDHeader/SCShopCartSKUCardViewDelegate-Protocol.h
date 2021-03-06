//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewDelegate-Protocol.h"

@class NSDictionary, SCShopCartSkuModel;

@protocol SCShopCartSKUCardViewDelegate <JDViewDelegate>

@optional
- (void)didChangePlusPriceWithItem:(SCShopCartSkuModel *)arg1;
- (void)didModifyPropertiesWithSku:(SCShopCartSkuModel *)arg1;
- (void)didPushToSimilarViewWithSku:(SCShopCartSkuModel *)arg1;
- (void)didSelecteWarrantyWithSku:(SCShopCartSkuModel *)arg1;
- (void)didChangeSkuCount:(long long)arg1 withSku:(SCShopCartSkuModel *)arg2;
- (void)didPushToWareViewWithSku:(SCShopCartSkuModel *)arg1;
- (void)didCheckedSku:(NSDictionary *)arg1;
@end

