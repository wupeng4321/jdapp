//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class COCheckoutConsigneeModel, NSString;

@interface COCheckoutInvoicePutTypeModel : JDModel
{
    _Bool _isSelect;
    _Bool _canEdit;
    unsigned long long _invoicePutType;
    NSString *_invoicePutName;
    COCheckoutConsigneeModel *_consigneeModel;
    NSString *_invoiceDescription;
}

@property(nonatomic) _Bool canEdit; // @synthesize canEdit=_canEdit;
@property(retain, nonatomic) NSString *invoiceDescription; // @synthesize invoiceDescription=_invoiceDescription;
@property(retain, nonatomic) COCheckoutConsigneeModel *consigneeModel; // @synthesize consigneeModel=_consigneeModel;
@property(nonatomic) _Bool isSelect; // @synthesize isSelect=_isSelect;
@property(retain, nonatomic) NSString *invoicePutName; // @synthesize invoicePutName=_invoicePutName;
@property(nonatomic) unsigned long long invoicePutType; // @synthesize invoicePutType=_invoicePutType;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

