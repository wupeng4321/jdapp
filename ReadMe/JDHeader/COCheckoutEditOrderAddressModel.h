//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutContactAddressTagModel, NSNumber, NSString;

@interface COCheckoutEditOrderAddressModel : JDModel
{
    _Bool _addressDefault;
    _Bool _isGangAoTai;
    _Bool _isForeignOverSea;
    _Bool _isPickAddress;
    _Bool _isRecommendPick;
    _Bool _isIdTown;
    NSString *_Pin;
    NSNumber *_UserLevel;
    NSString *_Name;
    NSString *_Mobile;
    NSString *_Phone;
    NSString *_identityCard;
    NSNumber *_Id;
    NSNumber *_IdProvince;
    NSString *_ProvinceName;
    NSNumber *_IdCity;
    NSString *_CityName;
    NSNumber *_IdArea;
    NSString *_CountryName;
    NSNumber *_IdTown;
    NSString *_TownName;
    NSString *_Where;
    NSString *_addressDetail;
    NSNumber *_Longitude;
    NSNumber *_Latitude;
    NSNumber *_CoordType;
    NSString *_areaCode;
    NSString *_nameCode;
    NSString *_postCode;
    NSString *_email;
    NSString *_pickDiscountMsg;
    NSString *_pickAddressIcon;
    NSString *_pickName;
    NSString *_giftSenderImg;
    NSString *_giftRecImg;
    NSString *_giftSenderMessage;
    NSString *_giftSenderConsigneeName;
    NSString *_giftSenderConsigneeMobile;
    NSNumber *_senderId;
    NSNumber *_TypeId;
    NSNumber *_IdCompanyBranch;
    NSString *_MessageStr;
    NSNumber *_Province;
    NSString *_City;
    NSNumber *_County;
    NSNumber *_OrderBulk;
    NSString *_forthAddMessage;
    COCheckoutContactAddressTagModel *_tag;
    NSString *_addressPromptMsg;
    NSString *_latitudeString;
    NSString *_longitudeString;
}

@property(copy, nonatomic) NSString *longitudeString; // @synthesize longitudeString=_longitudeString;
@property(copy, nonatomic) NSString *latitudeString; // @synthesize latitudeString=_latitudeString;
@property(copy, nonatomic) NSString *addressPromptMsg; // @synthesize addressPromptMsg=_addressPromptMsg;
@property(retain, nonatomic) COCheckoutContactAddressTagModel *tag; // @synthesize tag=_tag;
@property(copy, nonatomic) NSString *forthAddMessage; // @synthesize forthAddMessage=_forthAddMessage;
@property(retain, nonatomic) NSNumber *OrderBulk; // @synthesize OrderBulk=_OrderBulk;
@property(retain, nonatomic) NSNumber *County; // @synthesize County=_County;
@property(retain, nonatomic) NSString *City; // @synthesize City=_City;
@property(retain, nonatomic) NSNumber *Province; // @synthesize Province=_Province;
@property(copy, nonatomic) NSString *MessageStr; // @synthesize MessageStr=_MessageStr;
@property(retain, nonatomic) NSNumber *IdCompanyBranch; // @synthesize IdCompanyBranch=_IdCompanyBranch;
@property(retain, nonatomic) NSNumber *TypeId; // @synthesize TypeId=_TypeId;
@property(nonatomic) _Bool isIdTown; // @synthesize isIdTown=_isIdTown;
@property(retain, nonatomic) NSNumber *senderId; // @synthesize senderId=_senderId;
@property(copy, nonatomic) NSString *giftSenderConsigneeMobile; // @synthesize giftSenderConsigneeMobile=_giftSenderConsigneeMobile;
@property(copy, nonatomic) NSString *giftSenderConsigneeName; // @synthesize giftSenderConsigneeName=_giftSenderConsigneeName;
@property(copy, nonatomic) NSString *giftSenderMessage; // @synthesize giftSenderMessage=_giftSenderMessage;
@property(copy, nonatomic) NSString *giftRecImg; // @synthesize giftRecImg=_giftRecImg;
@property(copy, nonatomic) NSString *giftSenderImg; // @synthesize giftSenderImg=_giftSenderImg;
@property(nonatomic) _Bool isRecommendPick; // @synthesize isRecommendPick=_isRecommendPick;
@property(copy, nonatomic) NSString *pickName; // @synthesize pickName=_pickName;
@property(copy, nonatomic) NSString *pickAddressIcon; // @synthesize pickAddressIcon=_pickAddressIcon;
@property(nonatomic) _Bool isPickAddress; // @synthesize isPickAddress=_isPickAddress;
@property(copy, nonatomic) NSString *pickDiscountMsg; // @synthesize pickDiscountMsg=_pickDiscountMsg;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *postCode; // @synthesize postCode=_postCode;
@property(copy, nonatomic) NSString *nameCode; // @synthesize nameCode=_nameCode;
@property(copy, nonatomic) NSString *areaCode; // @synthesize areaCode=_areaCode;
@property(nonatomic) _Bool isForeignOverSea; // @synthesize isForeignOverSea=_isForeignOverSea;
@property(nonatomic) _Bool isGangAoTai; // @synthesize isGangAoTai=_isGangAoTai;
@property(retain, nonatomic) NSNumber *CoordType; // @synthesize CoordType=_CoordType;
@property(retain, nonatomic) NSNumber *Latitude; // @synthesize Latitude=_Latitude;
@property(retain, nonatomic) NSNumber *Longitude; // @synthesize Longitude=_Longitude;
@property(copy, nonatomic) NSString *addressDetail; // @synthesize addressDetail=_addressDetail;
@property(copy, nonatomic) NSString *Where; // @synthesize Where=_Where;
@property(copy, nonatomic) NSString *TownName; // @synthesize TownName=_TownName;
@property(retain, nonatomic) NSNumber *IdTown; // @synthesize IdTown=_IdTown;
@property(copy, nonatomic) NSString *CountryName; // @synthesize CountryName=_CountryName;
@property(retain, nonatomic) NSNumber *IdArea; // @synthesize IdArea=_IdArea;
@property(copy, nonatomic) NSString *CityName; // @synthesize CityName=_CityName;
@property(retain, nonatomic) NSNumber *IdCity; // @synthesize IdCity=_IdCity;
@property(copy, nonatomic) NSString *ProvinceName; // @synthesize ProvinceName=_ProvinceName;
@property(retain, nonatomic) NSNumber *IdProvince; // @synthesize IdProvince=_IdProvince;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id=_Id;
@property(copy, nonatomic) NSString *identityCard; // @synthesize identityCard=_identityCard;
@property(copy, nonatomic) NSString *Phone; // @synthesize Phone=_Phone;
@property(copy, nonatomic) NSString *Mobile; // @synthesize Mobile=_Mobile;
@property(copy, nonatomic) NSString *Name; // @synthesize Name=_Name;
@property(retain, nonatomic) NSNumber *UserLevel; // @synthesize UserLevel=_UserLevel;
@property(copy, nonatomic) NSString *Pin; // @synthesize Pin=_Pin;
@property(nonatomic) _Bool addressDefault; // @synthesize addressDefault=_addressDefault;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isValid) _Bool valid;
- (id)extractAddressParamForAPI;
- (id)getUIFullAddress;
- (id)getAreaAddress;
- (id)getAddressDic:(_Bool)arg1;
- (void)setDataWithDic:(id)arg1;
- (id)convertToJDShippingAddressModelFromGiverInfo;
- (id)convertToJDShippingAddressModel;
- (id)transfromToCOCheckoutShippingAddressViewModel;

@end

