//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractVM.h"

@class NSAttributedString, NSString;

@interface COCheckoutMainSubmitVM : COCheckoutMainAbstractVM
{
    unsigned long long _type;
    NSAttributedString *_priceAttributedStr;
    NSAttributedString *_baitiaoAttributedStr;
    NSString *_submitTitle;
}

@property(copy, nonatomic) NSString *submitTitle; // @synthesize submitTitle=_submitTitle;
@property(retain, nonatomic) NSAttributedString *baitiaoAttributedStr; // @synthesize baitiaoAttributedStr=_baitiaoAttributedStr;
@property(retain, nonatomic) NSAttributedString *priceAttributedStr; // @synthesize priceAttributedStr=_priceAttributedStr;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)init;

@end

