//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutCoordinateRegionModel, NSString;

@interface COCheckoutPostalAddressModel : JDModel
{
    COCheckoutCoordinateRegionModel *_province;
    COCheckoutCoordinateRegionModel *_city;
    COCheckoutCoordinateRegionModel *_county;
    COCheckoutCoordinateRegionModel *_town;
    NSString *_street;
    NSString *_fullAddress;
    long long _coordinateType;
    double _longitude;
    double _latitude;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long coordinateType; // @synthesize coordinateType=_coordinateType;
@property(copy, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(retain, nonatomic) COCheckoutCoordinateRegionModel *town; // @synthesize town=_town;
@property(retain, nonatomic) COCheckoutCoordinateRegionModel *county; // @synthesize county=_county;
@property(retain, nonatomic) COCheckoutCoordinateRegionModel *city; // @synthesize city=_city;
@property(retain, nonatomic) COCheckoutCoordinateRegionModel *province; // @synthesize province=_province;
- (void).cxx_destruct;

@end
