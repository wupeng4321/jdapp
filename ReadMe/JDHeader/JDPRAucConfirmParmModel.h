//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPRBankCardInfoModel, NSString;

@interface JDPRAucConfirmParmModel : NSObject
{
    NSString *_activeCode;
    JDPRBankCardInfoModel *_bankCardInfoModel;
    NSString *_signResult;
    NSString *_payChannelId;
    NSString *_sendMsgType;
}

@property(copy, nonatomic) NSString *sendMsgType; // @synthesize sendMsgType=_sendMsgType;
@property(copy, nonatomic) NSString *payChannelId; // @synthesize payChannelId=_payChannelId;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
@property(retain, nonatomic) JDPRBankCardInfoModel *bankCardInfoModel; // @synthesize bankCardInfoModel=_bankCardInfoModel;
@property(copy, nonatomic) NSString *activeCode; // @synthesize activeCode=_activeCode;
- (void).cxx_destruct;

@end

