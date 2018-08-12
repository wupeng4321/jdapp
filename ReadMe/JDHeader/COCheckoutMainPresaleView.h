//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractView.h"

#import "PreSaleStepViewMainDelegate-Protocol.h"

@class COCheckoutMainPresaleInfoVM, COCheckoutMainPresaleVM, NSString, UIView;

@interface COCheckoutMainPresaleView : COCheckoutMainAbstractView <PreSaleStepViewMainDelegate>
{
    UIView *_presaleBackView;
    COCheckoutMainPresaleVM *_vm;
    COCheckoutMainPresaleInfoVM *_presaleInfoVM;
}

@property(retain, nonatomic) COCheckoutMainPresaleInfoVM *presaleInfoVM; // @synthesize presaleInfoVM=_presaleInfoVM;
@property(retain, nonatomic) COCheckoutMainPresaleVM *vm; // @synthesize vm=_vm;
@property(retain, nonatomic) UIView *presaleBackView; // @synthesize presaleBackView=_presaleBackView;
- (void).cxx_destruct;
- (void)didSelectedStep:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setViewModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
