//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartBaseModel.h"

@class NSString;

@interface SCShopCartPriceTagModel : SCShopCartBaseModel
{
    _Bool _isChecked;
    NSString *_tagName;
    NSString *_priceRange;
    NSString *_plusBanner;
    NSString *_plusJumpUrl;
    NSString *_plusType;
}

+ (id)sc_objectWithKeyValues:(id)arg1;
@property(copy, nonatomic) NSString *plusType; // @synthesize plusType=_plusType;
@property(copy, nonatomic) NSString *plusJumpUrl; // @synthesize plusJumpUrl=_plusJumpUrl;
@property(copy, nonatomic) NSString *plusBanner; // @synthesize plusBanner=_plusBanner;
@property(copy, nonatomic) NSString *priceRange; // @synthesize priceRange=_priceRange;
@property(copy, nonatomic) NSString *tagName; // @synthesize tagName=_tagName;
@property(nonatomic) _Bool isChecked; // @synthesize isChecked=_isChecked;
- (void).cxx_destruct;

@end

