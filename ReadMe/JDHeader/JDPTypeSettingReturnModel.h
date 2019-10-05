//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseReturnModel.h"

@class NSArray, NSString;

@interface JDPTypeSettingReturnModel : CBPaymentBaseReturnModel
{
    NSString *_helpUrl;
    NSString *_feedbackUrl;
    NSString *_accountParam;
    NSString *_serverPin;
    NSArray *_payWayInfoArray;
    NSArray *_bottomPayWayInfoArray;
}

@property(copy, nonatomic) NSArray *bottomPayWayInfoArray; // @synthesize bottomPayWayInfoArray=_bottomPayWayInfoArray;
@property(copy, nonatomic) NSArray *payWayInfoArray; // @synthesize payWayInfoArray=_payWayInfoArray;
@property(copy, nonatomic) NSString *serverPin; // @synthesize serverPin=_serverPin;
@property(copy, nonatomic) NSString *accountParam; // @synthesize accountParam=_accountParam;
@property(copy, nonatomic) NSString *feedbackUrl; // @synthesize feedbackUrl=_feedbackUrl;
@property(copy, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
- (void).cxx_destruct;

@end
