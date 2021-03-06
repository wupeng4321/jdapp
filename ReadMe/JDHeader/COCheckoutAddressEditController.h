//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class COCheckoutAbstractApi, COCheckoutAddressEditViewController, COCheckoutAddressSearchApi, COCheckoutAddressSelectViewReq, COCheckoutAddressTagSearchApi, COCheckoutContactAddressTagModel, COCheckoutEasyBuyApi, COCheckoutPostalAddressModel, COCheckoutRegionModel, COCheckoutShippingAddressModel, NSNumber, NSString;

@interface COCheckoutAddressEditController : NSObject
{
    _Bool _editMode;
    _Bool _active;
    _Bool _defaultAddressFlag;
    _Bool _enabledEasyBuyConfigServices;
    _Bool _selectedPayOnline;
    _Bool _selectedPickSite;
    _Bool _selectedBookingDirect;
    _Bool _enabledValidRegionService;
    _Bool _usedServerAddress;
    CDUnknownBlockType _didBecomeActive;
    CDUnknownBlockType _didBecomeInActive;
    CDUnknownBlockType _needReloadUISingal;
    unsigned long long _type;
    NSString *_inputName;
    NSString *_inputMobile;
    NSString *_inputRegion;
    NSString *_inputStreet;
    NSString *_inputSpeechStreet;
    NSString *_inputEmail;
    NSString *_inputPostalCode;
    NSString *_inputPhone;
    NSString *_inputAreaCode;
    long long _coordinateType;
    double _longitude;
    double _latitude;
    COCheckoutRegionModel *_province;
    COCheckoutRegionModel *_city;
    COCheckoutRegionModel *_county;
    COCheckoutRegionModel *_town;
    COCheckoutContactAddressTagModel *_selectedTag;
    COCheckoutContactAddressTagModel *_tencentRecommendTag;
    NSNumber *_pickSiteID;
    NSString *_pickSiteName;
    COCheckoutAddressEditViewController *_viewController;
    COCheckoutShippingAddressModel *_shouldEditAddressModel;
    COCheckoutAbstractApi *_activeApi;
    COCheckoutAbstractApi *_deleteAddressApi;
    COCheckoutAbstractApi *_saveAddressApi;
    COCheckoutEasyBuyApi *_easyBuyApi;
    COCheckoutAddressTagSearchApi *_tagApi;
    COCheckoutAddressSearchApi *_addressSearchApi;
    COCheckoutPostalAddressModel *_serverAddressModel;
    NSString *_contactName;
    NSString *_contactMobile;
    NSString *_contactRegion;
    NSString *_contactStreet;
    NSString *_contactEmail;
    NSString *_contactPostalCode;
    NSString *_contactPhone;
    NSString *_contactAreaCode;
    COCheckoutRegionModel *_preProvince;
}

@property(retain, nonatomic) COCheckoutRegionModel *preProvince; // @synthesize preProvince=_preProvince;
@property(copy, nonatomic) NSString *contactAreaCode; // @synthesize contactAreaCode=_contactAreaCode;
@property(copy, nonatomic) NSString *contactPhone; // @synthesize contactPhone=_contactPhone;
@property(copy, nonatomic) NSString *contactPostalCode; // @synthesize contactPostalCode=_contactPostalCode;
@property(copy, nonatomic) NSString *contactEmail; // @synthesize contactEmail=_contactEmail;
@property(copy, nonatomic) NSString *contactStreet; // @synthesize contactStreet=_contactStreet;
@property(copy, nonatomic) NSString *contactRegion; // @synthesize contactRegion=_contactRegion;
@property(copy, nonatomic) NSString *contactMobile; // @synthesize contactMobile=_contactMobile;
@property(copy, nonatomic) NSString *contactName; // @synthesize contactName=_contactName;
@property(retain, nonatomic) COCheckoutPostalAddressModel *serverAddressModel; // @synthesize serverAddressModel=_serverAddressModel;
@property(retain, nonatomic) COCheckoutAddressSearchApi *addressSearchApi; // @synthesize addressSearchApi=_addressSearchApi;
@property(retain, nonatomic) COCheckoutAddressTagSearchApi *tagApi; // @synthesize tagApi=_tagApi;
@property(retain, nonatomic) COCheckoutEasyBuyApi *easyBuyApi; // @synthesize easyBuyApi=_easyBuyApi;
@property(retain, nonatomic) COCheckoutAbstractApi *saveAddressApi; // @synthesize saveAddressApi=_saveAddressApi;
@property(retain, nonatomic) COCheckoutAbstractApi *deleteAddressApi; // @synthesize deleteAddressApi=_deleteAddressApi;
@property(retain, nonatomic) COCheckoutAbstractApi *activeApi; // @synthesize activeApi=_activeApi;
@property(retain, nonatomic) COCheckoutShippingAddressModel *shouldEditAddressModel; // @synthesize shouldEditAddressModel=_shouldEditAddressModel;
@property(nonatomic) __weak COCheckoutAddressEditViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic, getter=isUsedServerAddress) _Bool usedServerAddress; // @synthesize usedServerAddress=_usedServerAddress;
@property(nonatomic, getter=isEnabledValidRegionService) _Bool enabledValidRegionService; // @synthesize enabledValidRegionService=_enabledValidRegionService;
@property(copy, nonatomic) NSString *pickSiteName; // @synthesize pickSiteName=_pickSiteName;
@property(retain, nonatomic) NSNumber *pickSiteID; // @synthesize pickSiteID=_pickSiteID;
@property(nonatomic, getter=isSelectedBookingDirect) _Bool selectedBookingDirect; // @synthesize selectedBookingDirect=_selectedBookingDirect;
@property(nonatomic, getter=isSelectedPickSite) _Bool selectedPickSite; // @synthesize selectedPickSite=_selectedPickSite;
@property(nonatomic, getter=isSelectedPayOnline) _Bool selectedPayOnline; // @synthesize selectedPayOnline=_selectedPayOnline;
@property(nonatomic, getter=isEnabledEasyBuyConfigServices) _Bool enabledEasyBuyConfigServices; // @synthesize enabledEasyBuyConfigServices=_enabledEasyBuyConfigServices;
@property(retain, nonatomic) COCheckoutContactAddressTagModel *tencentRecommendTag; // @synthesize tencentRecommendTag=_tencentRecommendTag;
@property(retain, nonatomic) COCheckoutContactAddressTagModel *selectedTag; // @synthesize selectedTag=_selectedTag;
@property(retain, nonatomic) COCheckoutRegionModel *town; // @synthesize town=_town;
@property(retain, nonatomic) COCheckoutRegionModel *county; // @synthesize county=_county;
@property(retain, nonatomic) COCheckoutRegionModel *city; // @synthesize city=_city;
@property(retain, nonatomic) COCheckoutRegionModel *province; // @synthesize province=_province;
@property(nonatomic, getter=isDefaultAddressFlag) _Bool defaultAddressFlag; // @synthesize defaultAddressFlag=_defaultAddressFlag;
@property(nonatomic) double latitude; // @synthesize latitude=_latitude;
@property(nonatomic) double longitude; // @synthesize longitude=_longitude;
@property(nonatomic) long long coordinateType; // @synthesize coordinateType=_coordinateType;
@property(copy, nonatomic) NSString *inputAreaCode; // @synthesize inputAreaCode=_inputAreaCode;
@property(copy, nonatomic) NSString *inputPhone; // @synthesize inputPhone=_inputPhone;
@property(copy, nonatomic) NSString *inputPostalCode; // @synthesize inputPostalCode=_inputPostalCode;
@property(copy, nonatomic) NSString *inputEmail; // @synthesize inputEmail=_inputEmail;
@property(copy, nonatomic) NSString *inputSpeechStreet; // @synthesize inputSpeechStreet=_inputSpeechStreet;
@property(copy, nonatomic) NSString *inputStreet; // @synthesize inputStreet=_inputStreet;
@property(copy, nonatomic) NSString *inputRegion; // @synthesize inputRegion=_inputRegion;
@property(copy, nonatomic) NSString *inputMobile; // @synthesize inputMobile=_inputMobile;
@property(copy, nonatomic) NSString *inputName; // @synthesize inputName=_inputName;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType needReloadUISingal; // @synthesize needReloadUISingal=_needReloadUISingal;
@property(copy, nonatomic) CDUnknownBlockType didBecomeInActive; // @synthesize didBecomeInActive=_didBecomeInActive;
@property(copy, nonatomic) CDUnknownBlockType didBecomeActive; // @synthesize didBecomeActive=_didBecomeActive;
@property(nonatomic, getter=isActive) _Bool active; // @synthesize active=_active;
- (void).cxx_destruct;
@property(readonly, nonatomic) COCheckoutAddressSelectViewReq *addressSelecteViewReq;
- (id)getStreetRegex;
- (id)getNameRegex;
- (unsigned long long)getMaxStreetLength;
- (unsigned long long)getMaxMobileLength;
- (unsigned long long)getMaxNameLength;
- (_Bool)getMaxLimitFlag;
- (id)getInputNameCode;
- (id)getNameCodeInRegion:(id)arg1;
- (id)getInputAreaCode;
- (id)getAreaCodeInRegion:(id)arg1;
- (void)stopFetchResult;
- (void)parseEasyBuySaveAddressAPIWithResult:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)parseSettlementSaveAddressAPIWithResult:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)updateAddressModelWithServerAddress;
- (void)updateAddressModelWithEasyBuyConfig;
- (id)getRegionAddress;
- (void)updateAddressModelWithBasicInfoConfig;
- (id)removeSpecialStrings:(id)arg1 withOriginString:(id)arg2;
- (id)getMessageFromCheckInputValue;
- (void)saveAddressWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)mta_MatchLocationEventParam;
- (void)deleteAddressWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setJumpOrderType:(unsigned long long)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)getJumpOrderTypeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)updateEasyBuyConfig;
@property(readonly, nonatomic, getter=isDefaultEasyBuyFlag) _Bool defaultEasyBuyFlag;
- (_Bool)getValidateResultAfterUpdateSelectedRegion;
- (_Bool)getOverseasAddressFlag;
- (_Bool)getGangAoTaiAddressFlag;
- (void)getAddressTagWithKeyword:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)getAddressSuggestionWithKeyWord:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (_Bool)editValue:(id)arg1 inputValue:(id)arg2;
- (_Bool)beModifiedContactModel;
- (id)spliceStringWithModel:(id)arg1;
- (void)updateBaseInfoConfig;
- (void)initContactForBack;
@property(readonly, nonatomic, getter=isEditMode) _Bool editMode; // @synthesize editMode=_editMode;
@property(readonly, nonatomic) COCheckoutShippingAddressModel *editAddressModel;
- (id)initWithContactType:(unsigned long long)arg1 addressModel:(id)arg2;

@end

