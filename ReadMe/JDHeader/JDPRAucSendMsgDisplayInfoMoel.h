//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPRAucSendMsgDisplayInfoMoel : JDPayModel
{
    NSString *_amount;
    NSString *_payChannelDes;
    NSString *_orderPayDesc;
    NSString *_discountDesc;
    NSString *_shouldPay;
    NSString *_resultMsg;
    NSString *_pageDesc;
    NSString *_title;
    NSString *_commonTip;
}

@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *pageDesc; // @synthesize pageDesc=_pageDesc;
@property(copy, nonatomic) NSString *resultMsg; // @synthesize resultMsg=_resultMsg;
@property(copy, nonatomic) NSString *shouldPay; // @synthesize shouldPay=_shouldPay;
@property(copy, nonatomic) NSString *discountDesc; // @synthesize discountDesc=_discountDesc;
@property(copy, nonatomic) NSString *orderPayDesc; // @synthesize orderPayDesc=_orderPayDesc;
@property(copy, nonatomic) NSString *payChannelDes; // @synthesize payChannelDes=_payChannelDes;
@property(copy, nonatomic) NSString *amount; // @synthesize amount=_amount;
- (void).cxx_destruct;

@end
