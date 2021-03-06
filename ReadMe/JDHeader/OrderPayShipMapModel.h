//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutHomePageCarDeliverShipmentRM, COCheckoutHomePageGsdShipmentRM, MidSmallPromiseModel, NSArray, NSDictionary, NSString, OrderPayMentModel, SopJdAndOtherShipmentModel, SopJdShipmentModel, SopOtherShipmentModel, jdShipment, pickShipmentModel;

@interface OrderPayShipMapModel : JDModel
{
    _Bool _isSplitTime;
    _Bool _hasSelectedTime;
    NSDictionary *_payment;
    NSDictionary *_jdShipment;
    NSDictionary *_sopShipment;
    NSDictionary *_pickShipment;
    NSDictionary *_otherShipment;
    NSDictionary *_sopPickShipment;
    COCheckoutHomePageGsdShipmentRM *_gsdShipment;
    COCheckoutHomePageCarDeliverShipmentRM *_carDeliverShipment;
    jdShipment *_jdHonorShipment;
    NSArray *_weekendDateList;
    NSString *_shipmentDecription;
    NSString *_imageDomain;
    SopJdAndOtherShipmentModel *_sopJdAndOtherShipmentModel;
    SopOtherShipmentModel *_sopOtherShipmentModel;
    SopJdShipmentModel *_sopJdShipmentModel;
    NSString *_sopPromiseDate;
    NSArray *_sopJdShipmentMap;
    NSDictionary *_regularBuyShipmentMap;
    NSString *_shipTypeIconUrl;
    NSString *_shipTypeLargeIconUrl;
    MidSmallPromiseModel *_midSmallPromiseModel;
    pickShipmentModel *_pickShipmentModel;
    OrderPayMentModel *_paymentModel;
    NSString *_textLabelText;
    NSString *_textDeatilLabelText;
    NSString *_midSmallInstallLabelText;
    NSString *_largeTextLabelText;
    NSString *_largeShipLabelText;
    NSString *_largeInstallLabelText;
}

@property(copy, nonatomic) NSString *largeInstallLabelText; // @synthesize largeInstallLabelText=_largeInstallLabelText;
@property(copy, nonatomic) NSString *largeShipLabelText; // @synthesize largeShipLabelText=_largeShipLabelText;
@property(copy, nonatomic) NSString *largeTextLabelText; // @synthesize largeTextLabelText=_largeTextLabelText;
@property(copy, nonatomic) NSString *midSmallInstallLabelText; // @synthesize midSmallInstallLabelText=_midSmallInstallLabelText;
@property(copy, nonatomic) NSString *textDeatilLabelText; // @synthesize textDeatilLabelText=_textDeatilLabelText;
@property(copy, nonatomic) NSString *textLabelText; // @synthesize textLabelText=_textLabelText;
@property(retain, nonatomic) OrderPayMentModel *paymentModel; // @synthesize paymentModel=_paymentModel;
@property(retain, nonatomic) pickShipmentModel *pickShipmentModel; // @synthesize pickShipmentModel=_pickShipmentModel;
@property(retain, nonatomic) MidSmallPromiseModel *midSmallPromiseModel; // @synthesize midSmallPromiseModel=_midSmallPromiseModel;
@property(nonatomic) _Bool hasSelectedTime; // @synthesize hasSelectedTime=_hasSelectedTime;
@property(nonatomic) _Bool isSplitTime; // @synthesize isSplitTime=_isSplitTime;
@property(copy, nonatomic) NSString *shipTypeLargeIconUrl; // @synthesize shipTypeLargeIconUrl=_shipTypeLargeIconUrl;
@property(copy, nonatomic) NSString *shipTypeIconUrl; // @synthesize shipTypeIconUrl=_shipTypeIconUrl;
@property(retain, nonatomic) NSDictionary *regularBuyShipmentMap; // @synthesize regularBuyShipmentMap=_regularBuyShipmentMap;
@property(retain, nonatomic) NSArray *sopJdShipmentMap; // @synthesize sopJdShipmentMap=_sopJdShipmentMap;
@property(retain, nonatomic) NSString *sopPromiseDate; // @synthesize sopPromiseDate=_sopPromiseDate;
@property(retain, nonatomic) SopJdShipmentModel *sopJdShipmentModel; // @synthesize sopJdShipmentModel=_sopJdShipmentModel;
@property(retain, nonatomic) SopOtherShipmentModel *sopOtherShipmentModel; // @synthesize sopOtherShipmentModel=_sopOtherShipmentModel;
@property(retain, nonatomic) SopJdAndOtherShipmentModel *sopJdAndOtherShipmentModel; // @synthesize sopJdAndOtherShipmentModel=_sopJdAndOtherShipmentModel;
@property(retain, nonatomic) NSString *imageDomain; // @synthesize imageDomain=_imageDomain;
@property(retain, nonatomic) NSString *shipmentDecription; // @synthesize shipmentDecription=_shipmentDecription;
@property(retain, nonatomic) NSArray *weekendDateList; // @synthesize weekendDateList=_weekendDateList;
@property(retain, nonatomic) jdShipment *jdHonorShipment; // @synthesize jdHonorShipment=_jdHonorShipment;
@property(retain, nonatomic) COCheckoutHomePageCarDeliverShipmentRM *carDeliverShipment; // @synthesize carDeliverShipment=_carDeliverShipment;
@property(retain, nonatomic) COCheckoutHomePageGsdShipmentRM *gsdShipment; // @synthesize gsdShipment=_gsdShipment;
@property(retain, nonatomic) NSDictionary *sopPickShipment; // @synthesize sopPickShipment=_sopPickShipment;
@property(retain, nonatomic) NSDictionary *otherShipment; // @synthesize otherShipment=_otherShipment;
@property(retain, nonatomic) NSDictionary *pickShipment; // @synthesize pickShipment=_pickShipment;
@property(retain, nonatomic) NSDictionary *sopShipment; // @synthesize sopShipment=_sopShipment;
@property(retain, nonatomic) NSDictionary *jdShipment; // @synthesize jdShipment=_jdShipment;
@property(retain, nonatomic) NSDictionary *payment; // @synthesize payment=_payment;
- (void).cxx_destruct;
- (id)getSamlltemAndBigItemType;
- (void)updateUIDataWithJdHonorShipmentModel:(id)arg1;
- (void)updateUIDataWithCarDeliverShipmentModel:(id)arg1;
- (void)updateUIDataWithGsdShipmentModel:(id)arg1;
- (void)buildUIData;
- (void)updateUIDataWithShipmentDictionary:(id)arg1;
- (id)getTextDetailLabelDataFromShipmentEntity:(id)arg1;
- (id)getTextDetailLabelDataFromShipmentDictionary:(id)arg1;
- (id)getPromiseDateFromJdWithPluginAction:(CDUnknownBlockType)arg1;
- (id)getPromiseDateWithPluginAction:(CDUnknownBlockType)arg1;
- (id)getSopShippingModel;
- (id)getStatusOfPromiseTypeAndDate;
- (id)getShipmentNameOfShipmentAndSop;
- (id)getNumberOfSopVender;
- (_Bool)isHaveSopShipment;
- (id)getNameOfSopWithIsHaveJd:(_Bool)arg1 isHavePickUp:(_Bool)arg2;
- (id)getSopExpressComponents;
- (id)getExpressNameComponents;
- (id)getMTAShipmentNameComponents;
- (void)setDataWithDic:(id)arg1;

@end

