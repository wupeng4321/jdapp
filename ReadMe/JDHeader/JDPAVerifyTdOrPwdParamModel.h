//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseParamModel.h"

@class NSDictionary, NSString;

@interface JDPAVerifyTdOrPwdParamModel : CBPaymentBaseParamModel
{
    NSString *_paymentType;
    NSString *_tdSignedData;
    NSDictionary *_verifyTdBizDataDict;
}

@property(retain, nonatomic) NSDictionary *verifyTdBizDataDict; // @synthesize verifyTdBizDataDict=_verifyTdBizDataDict;
@property(copy, nonatomic) NSString *tdSignedData; // @synthesize tdSignedData=_tdSignedData;
@property(copy, nonatomic) NSString *paymentType; // @synthesize paymentType=_paymentType;
- (void).cxx_destruct;

@end

