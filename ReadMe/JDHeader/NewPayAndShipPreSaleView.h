//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewPayAndShipBaseView.h"

#import "PreSaleStepViewDelegate2-Protocol.h"

@class COCheckoutEntryLabel, COCheckoutExceptionLabel, COCheckoutOrderInfoModel, JDButton, NSString, UILabel, UIView;

@interface NewPayAndShipPreSaleView : NewPayAndShipBaseView <PreSaleStepViewDelegate2>
{
    UIView *payBgView_;
    UILabel *titleLabel_;
    COCheckoutEntryLabel *_prdShipEntryLabel;
    COCheckoutExceptionLabel *_exceptionabel;
    UILabel *payMentLabel_;
    UILabel *shipTypeLabel_;
    UIView *bottomLine_;
    UIView *centerLine_;
    COCheckoutOrderInfoModel *_orderInfoModel;
    JDButton *accessoryButton;
    UILabel *deliveryServiceLabel;
}

@property(retain, nonatomic) UIView *centerLine_; // @synthesize centerLine_;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeWithText:(id)arg1 font:(id)arg2;
- (_Bool)willDeliveryTouch:(struct CGPoint)arg1;
- (void)didSelectedStep:(id)arg1;
- (void)reloadRect;
- (void)setPreShipUi;
- (void)setPrePayUi;
- (void)showWithData:(id)arg1;
- (void)show;
- (void)setDeliveryServiceLabel;
- (void)setBottomLineHidden:(_Bool)arg1;
- (void)setupUI;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

