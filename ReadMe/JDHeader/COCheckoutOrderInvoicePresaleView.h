//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutOrderInvoiceBaseView.h"

@class COCheckoutEntryLabel, COCheckoutExceptionLabel, JDButton, UILabel;

@interface COCheckoutOrderInvoicePresaleView : COCheckoutOrderInvoiceBaseView
{
    JDButton *_accessoryBtn;
    UILabel *_titleLabel;
    COCheckoutEntryLabel *_entryLabel;
    COCheckoutExceptionLabel *_exceptionLabel;
    long long _exceptionType;
}

- (void).cxx_destruct;
- (void)show;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)addNoInvoiceTitleLabel:(double)arg1 andWidth:(double)arg2;
- (id)getEntryDictionaryWithModel:(id)arg1;
- (void)resetSubviews;
- (void)showWithData:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end

