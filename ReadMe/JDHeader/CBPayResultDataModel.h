//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class CBPayResultInfoModel, CBPaySuccessDisDataModel, JDPPayPartSuccessDataModel, NSString;

@interface CBPayResultDataModel : JDPayModel
{
    _Bool _fullSuccess;
    NSString *_signResult;
    NSString *_checkResultParam;
    CBPaySuccessDisDataModel *_paySuccessDisDataModel;
    JDPPayPartSuccessDataModel *_payPartSuccessDataModel;
    CBPayResultInfoModel *_payResultInfoModel;
    NSString *_reBindCardType;
    NSString *_toastMsg;
}

@property(copy, nonatomic) NSString *toastMsg; // @synthesize toastMsg=_toastMsg;
@property(copy, nonatomic) NSString *reBindCardType; // @synthesize reBindCardType=_reBindCardType;
@property(nonatomic) _Bool fullSuccess; // @synthesize fullSuccess=_fullSuccess;
@property(retain, nonatomic) CBPayResultInfoModel *payResultInfoModel; // @synthesize payResultInfoModel=_payResultInfoModel;
@property(retain, nonatomic) JDPPayPartSuccessDataModel *payPartSuccessDataModel; // @synthesize payPartSuccessDataModel=_payPartSuccessDataModel;
@property(retain, nonatomic) CBPaySuccessDisDataModel *paySuccessDisDataModel; // @synthesize paySuccessDisDataModel=_paySuccessDisDataModel;
@property(copy, nonatomic) NSString *checkResultParam; // @synthesize checkResultParam=_checkResultParam;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
- (void).cxx_destruct;

@end
