//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface COCheckoutSaveOrderInvoiceModel : NSObject
{
    _Bool _sendSeparate;
    _Bool _hasSopSku;
    NSNumber *_IdInvoiceContentsType;
    NSNumber *_IdInvoiceContentTypeBook;
    NSString *_InvoiceContentsType;
    NSNumber *_IdInvoiceType;
    NSString *_CompanyName;
    NSString *_CompanyTaxCode;
    NSString *_InvoiceTitle;
    NSNumber *_IdInvoiceHeaderType;
    NSNumber *_IsPutBookInvoice;
}

@property(retain, nonatomic) NSNumber *IsPutBookInvoice; // @synthesize IsPutBookInvoice=_IsPutBookInvoice;
@property(retain, nonatomic) NSNumber *IdInvoiceHeaderType; // @synthesize IdInvoiceHeaderType=_IdInvoiceHeaderType;
@property(copy, nonatomic) NSString *InvoiceTitle; // @synthesize InvoiceTitle=_InvoiceTitle;
@property(copy, nonatomic) NSString *CompanyTaxCode; // @synthesize CompanyTaxCode=_CompanyTaxCode;
@property(copy, nonatomic) NSString *CompanyName; // @synthesize CompanyName=_CompanyName;
@property(retain, nonatomic) NSNumber *IdInvoiceType; // @synthesize IdInvoiceType=_IdInvoiceType;
@property(copy, nonatomic) NSString *InvoiceContentsType; // @synthesize InvoiceContentsType=_InvoiceContentsType;
@property(retain, nonatomic) NSNumber *IdInvoiceContentTypeBook; // @synthesize IdInvoiceContentTypeBook=_IdInvoiceContentTypeBook;
@property(retain, nonatomic) NSNumber *IdInvoiceContentsType; // @synthesize IdInvoiceContentsType=_IdInvoiceContentsType;
@property(nonatomic) _Bool hasSopSku; // @synthesize hasSopSku=_hasSopSku;
@property(nonatomic) _Bool sendSeparate; // @synthesize sendSeparate=_sendSeparate;
- (void).cxx_destruct;

@end

