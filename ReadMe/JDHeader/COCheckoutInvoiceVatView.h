//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutInvoiceBaseView.h"

#import "COCheckoutInvoiceMakeWayDelagate-Protocol.h"
#import "COCheckoutReceivePersonInfoViewDelegate-Protocol.h"

@class COCheckoutInvoiceAddressVM, COCheckoutInvoiceMakeWayView, COCheckoutInvoiceReceivePersonInfoView, COCheckoutInvoiceVatContentView, COCheckoutInvoiceVatQualificationView, COCheckoutNewInVoiceModel, NSString;
@protocol COCheckoutInvoiceVatDelegate;

@interface COCheckoutInvoiceVatView : COCheckoutInvoiceBaseView <COCheckoutReceivePersonInfoViewDelegate, COCheckoutInvoiceMakeWayDelagate>
{
    _Bool isResponseSwitchVender;
    COCheckoutInvoiceReceivePersonInfoView *_receiveInfoView;
    COCheckoutInvoiceMakeWayView *_makeWayView;
    id <COCheckoutInvoiceVatDelegate> _vatDelegate;
    COCheckoutInvoiceVatQualificationView *_qualificationView;
    COCheckoutInvoiceVatContentView *_contentView;
    COCheckoutNewInVoiceModel *_invoiceModel;
    COCheckoutInvoiceAddressVM *_contactViewModel;
}

@property(retain, nonatomic) COCheckoutInvoiceAddressVM *contactViewModel; // @synthesize contactViewModel=_contactViewModel;
@property(retain, nonatomic) COCheckoutNewInVoiceModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(retain, nonatomic) COCheckoutInvoiceVatContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) COCheckoutInvoiceVatQualificationView *qualificationView; // @synthesize qualificationView=_qualificationView;
@property(nonatomic) __weak id <COCheckoutInvoiceVatDelegate> vatDelegate; // @synthesize vatDelegate=_vatDelegate;
@property(retain, nonatomic) COCheckoutInvoiceMakeWayView *makeWayView; // @synthesize makeWayView=_makeWayView;
@property(retain, nonatomic) COCheckoutInvoiceReceivePersonInfoView *receiveInfoView; // @synthesize receiveInfoView=_receiveInfoView;
- (void).cxx_destruct;
- (_Bool)checkInvoiceViewInput;
- (id)getInvoiceMTAParams;
- (void)invoiceMakeWayBtnTapedWithModel:(id)arg1;
- (void)receivePersonInfoTextViewBeginEdit:(id)arg1;
- (void)receivePersonInfoTextFieldBeginEdit:(id)arg1;
- (void)receivePersonInfoViewBtnTaped:(id)arg1;
- (void)receivePersonInfoUpDateTextViewHeight:(id)arg1;
- (id)getNoSelectContentIdInvoiceContentsTypeWithVatInvoiceModel:(id)arg1;
- (id)getIdInvoiceContentsTypeWithVatInvoiceModel:(id)arg1;
- (id)getNoSelectContentIdInvoiceContentTypeBookWithVatInvoiceModel:(id)arg1;
- (id)getIdInvoiceContentTypeBookWithVatInvoiceModel:(id)arg1;
- (id)getInvoiceDictionary;
- (void)reloadReceiveInfoView;
- (void)reloadQualificationView;
- (void)reloadMakeWayView;
- (void)refreshViewWithModel:(id)arg1 AndContactViewModel:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

