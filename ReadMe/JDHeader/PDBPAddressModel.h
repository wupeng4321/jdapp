//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDBPAddressModel : NSObject
{
    NSString *_provinceId;
    NSString *_provinceName;
    NSString *_cityId;
    NSString *_cityName;
    NSString *_countyId;
    NSString *_countyName;
    NSString *_townId;
    NSString *_townName;
    NSString *_fullNameForAddressFloor;
}

@property(copy, nonatomic) NSString *fullNameForAddressFloor; // @synthesize fullNameForAddressFloor=_fullNameForAddressFloor;
@property(copy, nonatomic) NSString *townName; // @synthesize townName=_townName;
@property(copy, nonatomic) NSString *townId; // @synthesize townId=_townId;
@property(copy, nonatomic) NSString *countyName; // @synthesize countyName=_countyName;
@property(copy, nonatomic) NSString *countyId; // @synthesize countyId=_countyId;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *cityId; // @synthesize cityId=_cityId;
@property(copy, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(copy, nonatomic) NSString *provinceId; // @synthesize provinceId=_provinceId;
- (void).cxx_destruct;

@end

