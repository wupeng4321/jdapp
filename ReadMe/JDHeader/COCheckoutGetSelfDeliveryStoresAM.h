//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "COCheckoutSiteAMProtocol-Protocol.h"

@class NSNumber, NSString;

@interface COCheckoutGetSelfDeliveryStoresAM : NSObject <COCheckoutSiteAMProtocol>
{
    NSNumber *_provinceId;
    NSNumber *_cityId;
    NSNumber *_countyId;
    NSNumber *_townId;
    NSString *_where;
    NSNumber *_shippingAddressId;
    NSString *_shippingAddress;
    NSNumber *_venderId;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSNumber *venderId; // @synthesize venderId=_venderId;
@property(copy, nonatomic) NSString *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) NSNumber *shippingAddressId; // @synthesize shippingAddressId=_shippingAddressId;
@property(copy, nonatomic) NSString *where; // @synthesize where=_where;
@property(retain, nonatomic) NSNumber *townId; // @synthesize townId=_townId;
@property(retain, nonatomic) NSNumber *countyId; // @synthesize countyId=_countyId;
@property(retain, nonatomic) NSNumber *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSNumber *provinceId; // @synthesize provinceId=_provinceId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

