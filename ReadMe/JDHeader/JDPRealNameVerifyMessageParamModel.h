//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseParamModel.h"

@class NSDictionary, NSString;

@interface JDPRealNameVerifyMessageParamModel : CBPaymentBaseParamModel
{
    NSString *_authParam;
    NSDictionary *_bankCard;
    NSString *_signData;
    NSString *_activeCode;
    NSString *_bizSource;
}

@property(retain, nonatomic) NSString *bizSource; // @synthesize bizSource=_bizSource;
@property(retain, nonatomic) NSString *activeCode; // @synthesize activeCode=_activeCode;
@property(retain, nonatomic) NSString *signData; // @synthesize signData=_signData;
@property(retain, nonatomic) NSDictionary *bankCard; // @synthesize bankCard=_bankCard;
@property(retain, nonatomic) NSString *authParam; // @synthesize authParam=_authParam;
- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *appSource;
@property(retain, nonatomic) NSString *mode;

@end

