//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface COCheckoutMyAddressModel : JDModel <NSCopying>
{
    _Bool _isEasyBuy;
    _Bool _isDefaultFirst;
    _Bool _addressDefault;
    NSNumber *_addressID;
    NSString *_userName;
    NSString *_addressAlias;
    NSNumber *_provinceID;
    NSNumber *_cityID;
    NSNumber *_countyID;
    NSNumber *_townID;
    NSString *_provinceName;
    NSNumber *_paymentID;
    NSNumber *_pickID;
    NSString *_pickName;
    NSString *_pickAddress;
    NSString *_pickLat;
    NSString *_pickLng;
    NSString *_fullAddress;
    NSString *_detailAddress;
    NSString *_email;
    NSString *_phone;
    NSString *_mobile;
    NSString *_region;
}

@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile=_mobile;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSString *email; // @synthesize email=_email;
@property(retain, nonatomic) NSString *detailAddress; // @synthesize detailAddress=_detailAddress;
@property(retain, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(retain, nonatomic) NSString *pickLng; // @synthesize pickLng=_pickLng;
@property(retain, nonatomic) NSString *pickLat; // @synthesize pickLat=_pickLat;
@property(retain, nonatomic) NSString *pickAddress; // @synthesize pickAddress=_pickAddress;
@property(retain, nonatomic) NSString *pickName; // @synthesize pickName=_pickName;
@property(retain, nonatomic) NSNumber *pickID; // @synthesize pickID=_pickID;
@property(retain, nonatomic) NSNumber *paymentID; // @synthesize paymentID=_paymentID;
@property(retain, nonatomic) NSString *provinceName; // @synthesize provinceName=_provinceName;
@property(retain, nonatomic) NSNumber *townID; // @synthesize townID=_townID;
@property(retain, nonatomic) NSNumber *countyID; // @synthesize countyID=_countyID;
@property(retain, nonatomic) NSNumber *cityID; // @synthesize cityID=_cityID;
@property(retain, nonatomic) NSNumber *provinceID; // @synthesize provinceID=_provinceID;
@property(retain, nonatomic) NSString *addressAlias; // @synthesize addressAlias=_addressAlias;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(retain, nonatomic) NSNumber *addressID; // @synthesize addressID=_addressID;
@property(nonatomic) _Bool addressDefault; // @synthesize addressDefault=_addressDefault;
@property(nonatomic) _Bool isDefaultFirst; // @synthesize isDefaultFirst=_isDefaultFirst;
@property(nonatomic) _Bool isEasyBuy; // @synthesize isEasyBuy=_isEasyBuy;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setDataWithDic:(id)arg1;

@end

