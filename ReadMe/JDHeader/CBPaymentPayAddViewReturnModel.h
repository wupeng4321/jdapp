//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class CBBankCardInfoModel, NSString;

@interface CBPaymentPayAddViewReturnModel : JDPayModel
{
    CBBankCardInfoModel *_bankCardInfoModel;
    NSString *_cardNumber;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(copy, nonatomic) NSString *cardNumber; // @synthesize cardNumber=_cardNumber;
@property(retain, nonatomic) CBBankCardInfoModel *bankCardInfoModel; // @synthesize bankCardInfoModel=_bankCardInfoModel;
- (void).cxx_destruct;

@end
