//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseReturnModel.h"

@class NSString;

@interface JDPQuickPaySendSMSReturnModel : CBPaymentBaseReturnModel
{
    NSString *_authOrderInfo;
    NSString *_bizMethod;
    NSString *_commonTip;
}

@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(copy, nonatomic) NSString *bizMethod; // @synthesize bizMethod=_bizMethod;
@property(copy, nonatomic) NSString *authOrderInfo; // @synthesize authOrderInfo=_authOrderInfo;
- (void).cxx_destruct;

@end

