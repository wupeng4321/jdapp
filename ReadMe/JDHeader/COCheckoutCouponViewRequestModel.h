//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSDictionary;

@interface COCheckoutCouponViewRequestModel : JDModel
{
    _Bool _isYYS;
    _Bool _isSolidCard;
    _Bool _isIousBuy;
    _Bool _isEasyBuy;
    _Bool _isInternational;
    _Bool _isGiftBuy;
    _Bool _isPresale;
    _Bool _isRegularBuy;
    NSDictionary *_cartStr;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) _Bool isRegularBuy; // @synthesize isRegularBuy=_isRegularBuy;
@property(nonatomic) _Bool isPresale; // @synthesize isPresale=_isPresale;
@property(nonatomic) _Bool isGiftBuy; // @synthesize isGiftBuy=_isGiftBuy;
@property(nonatomic) _Bool isInternational; // @synthesize isInternational=_isInternational;
@property(nonatomic) _Bool isEasyBuy; // @synthesize isEasyBuy=_isEasyBuy;
@property(nonatomic) _Bool isIousBuy; // @synthesize isIousBuy=_isIousBuy;
@property(retain, nonatomic) NSDictionary *cartStr; // @synthesize cartStr=_cartStr;
@property(nonatomic) _Bool isSolidCard; // @synthesize isSolidCard=_isSolidCard;
@property(nonatomic) _Bool isYYS; // @synthesize isYYS=_isYYS;
- (void).cxx_destruct;
- (id)serialize;

@end

