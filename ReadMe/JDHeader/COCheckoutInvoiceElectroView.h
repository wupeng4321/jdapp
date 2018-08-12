//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutInvoiceBaseView.h"

#import "COCheckoutInvoiceCheckViewDelegate-Protocol.h"
#import "COCheckoutInvoiceContentViewDelegate-Protocol.h"
#import "COCheckoutInvoiceMakeWayDelagate-Protocol.h"
#import "COCheckoutInvoicePersonInfoDelagate-Protocol.h"
#import "COCheckoutInvoiceTitleViewDelagate-Protocol.h"

@class COCheckoutInvoiceMakeWayView, COCheckoutInvoicePersonInfoView, COCheckoutInvoiceTitleView, COCheckoutNewInVoiceModel, COCheckoutOrderInfoModel, NSString, UIView;
@protocol COCheckoutInvoiceElectrDelegate;

@interface COCheckoutInvoiceElectroView : COCheckoutInvoiceBaseView <COCheckoutInvoiceContentViewDelegate, COCheckoutInvoiceCheckViewDelegate, COCheckoutInvoicePersonInfoDelagate, COCheckoutInvoiceTitleViewDelagate, COCheckoutInvoiceMakeWayDelagate>
{
    _Bool isResponseSwitchVender;
    _Bool _isSupportInvoiceImprove;
    COCheckoutOrderInfoModel *_orderInfoModel;
    COCheckoutInvoicePersonInfoView *_personInfoView;
    id <COCheckoutInvoiceElectrDelegate> _electrDelegate;
    COCheckoutInvoiceTitleView *_titleView;
    COCheckoutInvoiceMakeWayView *_makeWayView;
    COCheckoutNewInVoiceModel *_invoiceModel;
    UIView *_contentView;
}

@property(nonatomic) _Bool isSupportInvoiceImprove; // @synthesize isSupportInvoiceImprove=_isSupportInvoiceImprove;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) COCheckoutNewInVoiceModel *invoiceModel; // @synthesize invoiceModel=_invoiceModel;
@property(retain, nonatomic) COCheckoutInvoiceMakeWayView *makeWayView; // @synthesize makeWayView=_makeWayView;
@property(retain, nonatomic) COCheckoutInvoiceTitleView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) __weak id <COCheckoutInvoiceElectrDelegate> electrDelegate; // @synthesize electrDelegate=_electrDelegate;
@property(retain, nonatomic) COCheckoutInvoicePersonInfoView *personInfoView; // @synthesize personInfoView=_personInfoView;
@property(retain, nonatomic) COCheckoutOrderInfoModel *orderInfoModel; // @synthesize orderInfoModel=_orderInfoModel;
- (void).cxx_destruct;
- (_Bool)checkInvoiceViewInput;
- (id)getInvoiceMTAParams;
- (void)invoicePersonInfoTextFieldBeginEdit;
- (void)invoiceTitleTextFieldBeginEdit:(id)arg1;
- (void)invoiceTitleHeightChange;
- (void)InvoiceCheckViewSelected:(id)arg1 bookContent:(_Bool)arg2;
- (void)invoiceMakeWayBtnTapedWithModel:(id)arg1;
- (void)invoiceContentViewDidSelectedWithID:(id)arg1;
- (id)getInvoiceDictionary;
- (void)reloadContentView;
- (void)reloadPersonView;
- (void)reloadTitleView;
- (void)reloadMakeWayView;
- (void)refreshViewWithModel:(id)arg1 AndContactViewModel:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withInvoiceImprove:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
