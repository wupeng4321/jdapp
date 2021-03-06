//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class COCheckoutInvoiceAddressVM, COCheckoutInvoiceGeneralApi, COCheckoutInvoiceGeneralReq, COCheckoutNewInVoiceModel, COCheckoutNotifyRM, NSString;

@interface COCheckoutInvoiceController : NSObject
{
    _Bool _showInvoiceTypeView;
    unsigned long long _invoiceType;
    COCheckoutNewInVoiceModel *_invoiceModel;
    COCheckoutNotifyRM *_notifyInfos;
    NSString *_productTypeParam;
    COCheckoutInvoiceGeneralReq *_requestModel;
    COCheckoutInvoiceAddressVM *_addressVM;
    COCheckoutInvoiceGeneralApi *_invoiceGeneralApi;
}

@property(retain, nonatomic) COCheckoutInvoiceGeneralApi *invoiceGeneralApi; // @synthesize invoiceGeneralApi=_invoiceGeneralApi;
@property(retain, nonatomic) COCheckoutInvoiceAddressVM *addressVM; // @synthesize addressVM=_addressVM;
@property(retain, nonatomic) COCheckoutInvoiceGeneralReq *requestModel; // @synthesize requestModel=_requestModel;
@property(copy, nonatomic) NSString *productTypeParam; // @synthesize productTypeParam=_productTypeParam;
@property(nonatomic) _Bool showInvoiceTypeView; // @synthesize showInvoiceTypeView=_showInvoiceTypeView;
@property(retain, nonatomic) COCheckoutNotifyRM *notifyInfos; // @synthesize notifyInfos=_notifyInfos;
@property(retain, nonatomic) COCheckoutNewInVoiceModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(nonatomic) unsigned long long invoiceType; // @synthesize invoiceType=_invoiceType;
- (void).cxx_destruct;
- (id)compontRegionWithRegionAddressModel:(id)arg1 compontStr:(id)arg2;
- (void)updateApiModelBySelectAddressViewResponseModel:(id)arg1;
- (id)getSelectAddressViewRequestModel;
- (void)refreshCurrentAddress;
- (void)firstSubmitVatWithOrderInfoModel;
- (void)parseNeedShowTypeView;
- (void)parseDataWithResult:(id)arg1;
- (void)fetchInvoiceDataSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithModel:(id)arg1;

@end

