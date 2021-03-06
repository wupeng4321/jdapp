//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractFloorCreator.h"

@class NSArray, NSNumber;

@interface COCheckoutMainShopFloorCreator : COCheckoutMainAbstractFloorCreator
{
    NSArray *_shopInformationRMs;
    NSNumber *_paymentId;
}

@property(retain, nonatomic) NSNumber *paymentId; // @synthesize paymentId=_paymentId;
@property(retain, nonatomic) NSArray *shopInformationRMs; // @synthesize shopInformationRMs=_shopInformationRMs;
- (void).cxx_destruct;
- (id)getChooseDateAgentWithShopRM:(id)arg1;
- (void)loadVenderPagingVMWithShop:(id)arg1 array:(id)arg2;
- (void)loadShipmentVMWithShop:(id)arg1 array:(id)arg2;
- (void)loadPresaleVMWithShop:(id)arg1 array:(id)arg2;
- (void)loadVenderInputVMWithShop:(id)arg1 array:(id)arg2;
- (void)loadReturnVMWithShop:(id)arg1 array:(id)arg2;
- (id)getFreightRiskConfigurationMsgViewModelWith:(id)arg1;
- (id)getShipmentConfigurationMsgViewModelWith:(id)arg1;
- (void)loadEditCountVMWithShop:(id)arg1 array:(id)arg2;
- (id)getMainCommodityRMWithShop:(id)arg1;
- (void)loadGoodsAndServiceVMWithShop:(id)arg1 array:(id)arg2;
- (id)showShops;
- (void)setCurrentOrderRM:(id)arg1;
- (id)init;

@end

