//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractView.h"

@class COCheckoutMainVenderPagingToastVM, COCheckoutSelectedTextView, COCheckoutSwitch, NSNumber, NSString, UILabel;

@interface COCheckoutMainVenderPagingView : COCheckoutMainAbstractView
{
    UILabel *_titleLabel;
    COCheckoutSelectedTextView *_descriptionTextView;
    COCheckoutSwitch *_pagingSwitch;
    NSNumber *_packageId;
    NSString *_venderId;
    COCheckoutMainVenderPagingToastVM *_toastVM;
    NSNumber *_charge;
}

@property(retain, nonatomic) NSNumber *charge; // @synthesize charge=_charge;
@property(retain, nonatomic) COCheckoutMainVenderPagingToastVM *toastVM; // @synthesize toastVM=_toastVM;
@property(copy, nonatomic) NSString *venderId; // @synthesize venderId=_venderId;
@property(retain, nonatomic) NSNumber *packageId; // @synthesize packageId=_packageId;
@property(retain, nonatomic) COCheckoutSwitch *pagingSwitch; // @synthesize pagingSwitch=_pagingSwitch;
@property(retain, nonatomic) COCheckoutSelectedTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)pressOnTips;
- (void)layoutSubviews;
- (void)setViewModel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

