//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDContentItem.h"

@class COCheckoutChooseButton, UILabel;

@interface COCheckoutInvoiceVatContentView : JDContentItem
{
    UILabel *titleLabel_;
    UILabel *titleAfterLabel_;
    UILabel *detailLabel_;
    COCheckoutChooseButton *_chooseDetailButton;
}

@property(retain, nonatomic) COCheckoutChooseButton *chooseDetailButton; // @synthesize chooseDetailButton=_chooseDetailButton;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

