//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

@class COCheckoutButtonGroupView, COCheckoutChooseButtonView, COCheckoutNewInVoiceModel, UILabel, UIView;

@interface COCheckoutInvoiceTypeView : JDContentItem
{
    UILabel *titleLabel_;
    UILabel *tipLabel_;
    UIView *lineView_;
    UILabel *titleDetailLabel;
    COCheckoutNewInVoiceModel *invoiceModel;
    CDUnknownBlockType _pressInvoiceTypeBlock;
    COCheckoutButtonGroupView *_buttonGroupView;
    COCheckoutChooseButtonView *_chooseButtonView;
}

@property(retain, nonatomic) COCheckoutChooseButtonView *chooseButtonView; // @synthesize chooseButtonView=_chooseButtonView;
@property(retain, nonatomic) COCheckoutButtonGroupView *buttonGroupView; // @synthesize buttonGroupView=_buttonGroupView;
@property(copy, nonatomic) CDUnknownBlockType pressInvoiceTypeBlock; // @synthesize pressInvoiceTypeBlock=_pressInvoiceTypeBlock;
@property(retain, nonatomic) COCheckoutNewInVoiceModel *invoiceModel; // @synthesize invoiceModel;
- (void).cxx_destruct;
- (void)showToastWithMessage:(id)arg1;
- (id)getInvoiceModelWithSelectIndex:(long long)arg1;
- (void)resetHeightWithSelectIndex:(long long)arg1;
- (void)reloadChooseButtonView;
- (void)reloadButtonGroupView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

