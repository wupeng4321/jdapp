//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPaymentCodeBaseReturnModel.h"

@class JDPaymentCodeAucSendMsgDisplayInfoMoel, NSString;

@interface JDPaymentCodeAucSendMsgReturnModel : JDPaymentCodeBaseReturnModel
{
    NSString *_repeatParam;
    NSString *_signResult;
    JDPaymentCodeAucSendMsgDisplayInfoMoel *_displayInfoModel;
}

@property(retain, nonatomic) JDPaymentCodeAucSendMsgDisplayInfoMoel *displayInfoModel; // @synthesize displayInfoModel=_displayInfoModel;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
@property(copy, nonatomic) NSString *repeatParam; // @synthesize repeatParam=_repeatParam;
- (void).cxx_destruct;

@end
