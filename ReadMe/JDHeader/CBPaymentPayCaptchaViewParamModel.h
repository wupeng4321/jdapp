//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class CBBankCardInfoModel, NSString;

@interface CBPaymentPayCaptchaViewParamModel : JDPayModel
{
    NSString *_message;
    NSString *_signResult;
    CBBankCardInfoModel *_bankCardInfoModel;
    NSString *_token;
    NSString *_nextMethod;
    NSString *_channelId;
    NSString *_reBindCardType;
    NSString *_commonTip;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(copy, nonatomic) NSString *reBindCardType; // @synthesize reBindCardType=_reBindCardType;
@property(copy, nonatomic) NSString *channelId; // @synthesize channelId=_channelId;
@property(copy, nonatomic) NSString *nextMethod; // @synthesize nextMethod=_nextMethod;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) CBBankCardInfoModel *bankCardInfoModel; // @synthesize bankCardInfoModel=_bankCardInfoModel;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
- (void).cxx_destruct;

@end
