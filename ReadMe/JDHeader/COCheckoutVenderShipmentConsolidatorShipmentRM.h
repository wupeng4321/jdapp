//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutVenderConsolidatorRM, NSArray, NSNumber, NSString;

@interface COCheckoutVenderShipmentConsolidatorShipmentRM : JDModel
{
    NSNumber *_isSelectConsolidator;
    COCheckoutVenderConsolidatorRM *_selectConsolidatorVO;
    NSArray *_consolidatorList;
    NSString *_consolidatorShipmentMsg;
    NSString *_consolidatorShipmentTagMsg;
    NSString *_consolidatorShipmentChinaFreightMsg;
    NSString *_consolidatorShipmentOverseaFreightMsg;
    NSString *_consolidatorShipmentNoChoseMsg;
    NSString *_consolidatorShipmentNotSupportSkuMsg;
    NSString *_consolidatorShipmentRemoveSkuMsg;
}

@property(copy, nonatomic) NSString *consolidatorShipmentRemoveSkuMsg; // @synthesize consolidatorShipmentRemoveSkuMsg=_consolidatorShipmentRemoveSkuMsg;
@property(copy, nonatomic) NSString *consolidatorShipmentNotSupportSkuMsg; // @synthesize consolidatorShipmentNotSupportSkuMsg=_consolidatorShipmentNotSupportSkuMsg;
@property(copy, nonatomic) NSString *consolidatorShipmentNoChoseMsg; // @synthesize consolidatorShipmentNoChoseMsg=_consolidatorShipmentNoChoseMsg;
@property(copy, nonatomic) NSString *consolidatorShipmentOverseaFreightMsg; // @synthesize consolidatorShipmentOverseaFreightMsg=_consolidatorShipmentOverseaFreightMsg;
@property(copy, nonatomic) NSString *consolidatorShipmentChinaFreightMsg; // @synthesize consolidatorShipmentChinaFreightMsg=_consolidatorShipmentChinaFreightMsg;
@property(copy, nonatomic) NSString *consolidatorShipmentTagMsg; // @synthesize consolidatorShipmentTagMsg=_consolidatorShipmentTagMsg;
@property(copy, nonatomic) NSString *consolidatorShipmentMsg; // @synthesize consolidatorShipmentMsg=_consolidatorShipmentMsg;
@property(retain, nonatomic) NSArray *consolidatorList; // @synthesize consolidatorList=_consolidatorList;
@property(retain, nonatomic) COCheckoutVenderConsolidatorRM *selectConsolidatorVO; // @synthesize selectConsolidatorVO=_selectConsolidatorVO;
@property(retain, nonatomic) NSNumber *isSelectConsolidator; // @synthesize isSelectConsolidator=_isSelectConsolidator;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
