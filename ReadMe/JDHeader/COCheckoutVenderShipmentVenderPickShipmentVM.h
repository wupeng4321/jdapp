//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutVenderShipmentAbstractVM.h"

@class COCheckoutMainBasicVM, COCheckoutVenderShipmentVenderPickSelectedVM, NSString;

@interface COCheckoutVenderShipmentVenderPickShipmentVM : COCheckoutVenderShipmentAbstractVM
{
    _Bool _isSelected;
    COCheckoutVenderShipmentVenderPickSelectedVM *_selectedVM;
    COCheckoutMainBasicVM *_unSelectedVM;
    NSString *_addressText;
    NSString *_openTimeText;
}

@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(copy, nonatomic) NSString *openTimeText; // @synthesize openTimeText=_openTimeText;
@property(copy, nonatomic) NSString *addressText; // @synthesize addressText=_addressText;
@property(retain, nonatomic) COCheckoutMainBasicVM *unSelectedVM; // @synthesize unSelectedVM=_unSelectedVM;
@property(retain, nonatomic) COCheckoutVenderShipmentVenderPickSelectedVM *selectedVM; // @synthesize selectedVM=_selectedVM;
- (void).cxx_destruct;
- (unsigned long long)type;

@end

