//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface COCheckoutSelectAddressViewRegionAddressModel : NSObject
{
    NSNumber *_addressId;
    NSString *_addressText;
    NSString *_countryCode;
    NSString *_areaCode;
    unsigned long long _type;
    COCheckoutSelectAddressViewRegionAddressModel *_next;
}

@property(retain, nonatomic) COCheckoutSelectAddressViewRegionAddressModel *next; // @synthesize next=_next;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(copy, nonatomic) NSString *addressText; // @synthesize addressText=_addressText;
@property(retain, nonatomic) NSNumber *addressId; // @synthesize addressId=_addressId;
- (void).cxx_destruct;

@end

