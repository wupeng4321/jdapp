//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutContactAddressTagModel, NSNumber, NSString;

@interface COCheckoutShippingAddressModel : JDModel
{
    NSString *_name;
    NSString *_pin;
    NSString *_mobile;
    NSString *_phone;
    NSString *_identityCardNumber;
    _Bool _defaultAddressFlag;
    _Bool _needTownIDFlag;
    _Bool _townErrorFlag;
    _Bool _isPickAddress;
    _Bool _isRecommendPick;
    double _latitude;
    double _longitude;
    unsigned long long _addressType;
    unsigned long long _coordinateType;
    NSString *_latitudeString;
    NSString *_longitudeString;
    NSString *_areaName;
    NSString *_cityName;
    NSString *_countyName;
    NSString *_townName;
    NSNumber *_ID;
    NSNumber *_provinceID;
    NSNumber *_cityID;
    NSNumber *_countyID;
    NSNumber *_townID;
    NSString *_province;
    NSString *_city;
    NSString *_county;
    NSString *_town;
    NSString *_street;
    NSString *_fullAddress;
    NSString *_needTownMessage;
    NSString *_areaExplainMsg;
    NSString *_areaExplainUrl;
    COCheckoutContactAddressTagModel *_tag;
    NSNumber *_isGangAoTai;
    NSNumber *_isForeignOverSea;
    NSString *_postalCode;
    NSString *_areaCode;
    NSString *_nameCode;
    NSString *_email;
    NSString *_pickDiscountMsg;
    NSString *_pickAddressIcon;
    NSString *_pickName;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) _Bool isRecommendPick; // @synthesize isRecommendPick=_isRecommendPick;
@property(copy, nonatomic) NSString *pickName; // @synthesize pickName=_pickName;
@property(copy, nonatomic) NSString *pickAddressIcon; // @synthesize pickAddressIcon=_pickAddressIcon;
@property(nonatomic) _Bool isPickAddress; // @synthesize isPickAddress=_isPickAddress;
@property(copy, nonatomic) NSString *pickDiscountMsg; // @synthesize pickDiscountMsg=_pickDiscountMsg;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *nameCode; // @synthesize nameCode=_nameCode;
@property(copy, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(retain, nonatomic) NSNumber *isForeignOverSea; // @synthesize isForeignOverSea=_isForeignOverSea;
@property(retain, nonatomic) NSNumber *isGangAoTai; // @synthesize isGangAoTai=_isGangAoTai;
@property(retain, nonatomic) COCheckoutContactAddressTagModel *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *areaExplainUrl; // @synthesize areaExplainUrl=_areaExplainUrl;
@property(copy, nonatomic) NSString *areaExplainMsg; // @synthesize areaExplainMsg=_areaExplainMsg;
@property(nonatomic) _Bool townErrorFlag; // @synthesize townErrorFlag=_townErrorFlag;
@property(copy, nonatomic) NSString *needTownMessage; // @synthesize needTownMessage=_needTownMessage;
@property(nonatomic) _Bool needTownIDFlag; // @synthesize needTownIDFlag=_needTownIDFlag;
@property(copy, nonatomic) NSString *fullAddress; // @synthesize fullAddress=_fullAddress;
@property(copy, nonatomic) NSString *street; // @synthesize street=_street;
@property(copy, nonatomic) NSString *town; // @synthesize town=_town;
@property(copy, nonatomic) NSString *county; // @synthesize county=_county;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *province; // @synthesize province=_province;
@property(retain, nonatomic) NSNumber *townID; // @synthesize townID=_townID;
@property(retain, nonatomic) NSNumber *countyID; // @synthesize countyID=_countyID;
@property(retain, nonatomic) NSNumber *cityID; // @synthesize cityID=_cityID;
@property(retain, nonatomic) NSNumber *provinceID; // @synthesize provinceID=_provinceID;
@property(retain, nonatomic) NSNumber *ID; // @synthesize ID=_ID;
@property(copy, nonatomic) NSString *townName; // @synthesize townName=_townName;
@property(copy, nonatomic) NSString *countyName; // @synthesize countyName=_countyName;
@property(copy, nonatomic) NSString *cityName; // @synthesize cityName=_cityName;
@property(copy, nonatomic) NSString *areaName; // @synthesize areaName=_areaName;
@property(copy, nonatomic) NSString *longitudeString; // @synthesize longitudeString=_longitudeString;
@property(copy, nonatomic) NSString *latitudeString; // @synthesize latitudeString=_latitudeString;
@property(nonatomic) unsigned long long coordinateType; // @synthesize coordinateType=_coordinateType;
@property(nonatomic) unsigned long long addressType; // @synthesize addressType=_addressType;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) _Bool defaultAddressFlag; // @synthesize defaultAddressFlag=_defaultAddressFlag;
- (void).cxx_destruct;
- (id)newValueFromOldValue:(id)arg1 property:(id)arg2;
- (id)getUIFullAddress;
- (id)getAreaAddress;
- (_Bool)isLiteralEqual:(id)arg1;
- (_Bool)isIDEqual:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)getSelectAddressViewRegionAddressModelByDictionary:(id)arg1;
- (id)getRegionAddressModelDictionary;
- (id)convertToSelectAddressViewRegionAddressModel;
- (id)convertToSelectAddressViewResponseModel;
@property(copy, nonatomic) NSString *identityCardNumber; // @dynamic identityCardNumber;
@property(copy, nonatomic) NSString *phone; // @dynamic phone;
@property(copy, nonatomic) NSString *mobile; // @dynamic mobile;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(readonly, copy, nonatomic) NSString *pin; // @dynamic pin;
- (id)generateRequestParams;

@end

