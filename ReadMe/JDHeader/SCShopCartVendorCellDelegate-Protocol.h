//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCShopCartVendorModel;

@protocol SCShopCartVendorCellDelegate <NSObject>
- (void)vendorCellShowFrightToastView:(SCShopCartVendorModel *)arg1;
- (void)vendorCellDidChecked:(_Bool)arg1 WithVendorModel:(SCShopCartVendorModel *)arg2;
- (void)vendorCellRedirectToCoudanPage:(SCShopCartVendorModel *)arg1;
- (void)vendorCellRedirectToCouponPage:(SCShopCartVendorModel *)arg1;
- (void)vendorCellRedirectToShopHome:(SCShopCartVendorModel *)arg1;
@end

