//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseParamModel.h"

@class NSString;

@interface JDPLoginParamModel : CBPaymentBaseParamModel
{
    NSString *_signData;
    NSString *_phoneNum;
    NSString *_activeCode;
}

@property(copy, nonatomic) NSString *activeCode; // @synthesize activeCode=_activeCode;
@property(copy, nonatomic) NSString *phoneNum; // @synthesize phoneNum=_phoneNum;
@property(copy, nonatomic) NSString *signData; // @synthesize signData=_signData;
- (void).cxx_destruct;

// Remaining properties
@property(copy, nonatomic) NSString *signResult;

@end

