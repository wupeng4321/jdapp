//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseParamModel.h"

@class NSString;

@interface JDPQueryBtFastParamModel : CBPaymentBaseParamModel
{
    NSString *_bizMethod;
    NSString *_payChannelId;
    NSString *_channelSign;
}

@property(copy, nonatomic) NSString *channelSign; // @synthesize channelSign=_channelSign;
@property(copy, nonatomic) NSString *payChannelId; // @synthesize payChannelId=_payChannelId;
@property(copy, nonatomic) NSString *bizMethod; // @synthesize bizMethod=_bizMethod;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) NSString *token;

@end
