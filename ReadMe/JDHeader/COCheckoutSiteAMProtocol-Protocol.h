//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol COCheckoutSiteAMProtocol <NSObject>
@property(copy, nonatomic) NSString *where;
@property(copy, nonatomic) NSString *shippingAddress;
@property(retain, nonatomic) NSNumber *shippingAddressId;
@property(retain, nonatomic) NSNumber *townId;
@property(retain, nonatomic) NSNumber *countyId;
@property(retain, nonatomic) NSNumber *cityId;
@property(retain, nonatomic) NSNumber *provinceId;
@end
