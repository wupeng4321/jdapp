//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewCouponGiftView.h"

@class COCheckoutConsignmentGiftInfosRM, NSDictionary;

@interface COCheckoutConsignmentCodeView : NewCouponGiftView
{
    COCheckoutConsignmentGiftInfosRM *_consignmentGiftInfosModel;
    NSDictionary *_entryDictionary;
}

@property(retain, nonatomic) NSDictionary *entryDictionary; // @synthesize entryDictionary=_entryDictionary;
@property(retain, nonatomic) COCheckoutConsignmentGiftInfosRM *consignmentGiftInfosModel; // @synthesize consignmentGiftInfosModel=_consignmentGiftInfosModel;
- (void).cxx_destruct;
- (void)show;

@end
