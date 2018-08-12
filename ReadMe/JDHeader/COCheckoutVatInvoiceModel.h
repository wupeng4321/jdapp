//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutNormalInvoiceModel.h"

@class NSNumber, NSString;

@interface COCheckoutVatInvoiceModel : COCheckoutNormalInvoiceModel
{
    NSString *_address;
    NSString *_city;
    NSNumber *_cityId;
    NSString *_code;
    NSString *_company;
    NSString *_consigneeName;
    NSString *_county;
    NSNumber *_countyId;
    NSString *_phone;
    NSString *_editPhone;
    NSString *_province;
    NSNumber *_provinceId;
    NSString *_regAddr;
    NSString *_regBank;
    NSString *_regBankAccount;
    NSString *_regPhone;
    long long _showVatPrompt;
    NSString *_town;
    NSNumber *_townId;
}

@property(retain, nonatomic) NSNumber *townId; // @synthesize townId=_townId;
@property(retain, nonatomic) NSString *town; // @synthesize town=_town;
@property(nonatomic) long long showVatPrompt; // @synthesize showVatPrompt=_showVatPrompt;
@property(retain, nonatomic) NSString *regPhone; // @synthesize regPhone=_regPhone;
@property(retain, nonatomic) NSString *regBankAccount; // @synthesize regBankAccount=_regBankAccount;
@property(retain, nonatomic) NSString *regBank; // @synthesize regBank=_regBank;
@property(retain, nonatomic) NSString *regAddr; // @synthesize regAddr=_regAddr;
@property(retain, nonatomic) NSNumber *provinceId; // @synthesize provinceId=_provinceId;
@property(retain, nonatomic) NSString *province; // @synthesize province=_province;
@property(copy, nonatomic) NSString *editPhone; // @synthesize editPhone=_editPhone;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(retain, nonatomic) NSNumber *countyId; // @synthesize countyId=_countyId;
@property(retain, nonatomic) NSString *county; // @synthesize county=_county;
@property(retain, nonatomic) NSString *consigneeName; // @synthesize consigneeName=_consigneeName;
@property(retain, nonatomic) NSString *company; // @synthesize company=_company;
@property(retain, nonatomic) NSString *code; // @synthesize code=_code;
@property(retain, nonatomic) NSNumber *cityId; // @synthesize cityId=_cityId;
@property(retain, nonatomic) NSString *city; // @synthesize city=_city;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
