//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseReturnModel.h"

@class CBPaymentModel, NSString;

@interface JDPVisitControlReturnModel : CBPaymentBaseReturnModel
{
    _Bool _isEditPhone;
    NSString *_payParam;
    NSString *_repeatParam;
    CBPaymentModel *_paymentModel;
    NSString *_appId;
    NSString *_helpUrl;
    NSString *_pinPhone;
}

@property(nonatomic) _Bool isEditPhone; // @synthesize isEditPhone=_isEditPhone;
@property(copy, nonatomic) NSString *pinPhone; // @synthesize pinPhone=_pinPhone;
@property(copy, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) CBPaymentModel *paymentModel; // @synthesize paymentModel=_paymentModel;
@property(copy, nonatomic) NSString *repeatParam; // @synthesize repeatParam=_repeatParam;
@property(copy, nonatomic) NSString *payParam; // @synthesize payParam=_payParam;
- (void).cxx_destruct;

@end

