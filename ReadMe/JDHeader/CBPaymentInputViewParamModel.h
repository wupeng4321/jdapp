//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPayMode, JDPPayExtendRequestModel, NSString;

@interface CBPaymentInputViewParamModel : NSObject
{
    _Bool _needFingerprintFailedTip;
    _Bool _demote;
    CBPayMode *_payMode;
    JDPPayExtendRequestModel *_payExtendRequestModel;
    NSString *_tip;
    NSString *_nextMethod;
    NSString *_token;
    NSString *_bizMethod;
}

@property(copy, nonatomic) NSString *bizMethod; // @synthesize bizMethod=_bizMethod;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool demote; // @synthesize demote=_demote;
@property(copy, nonatomic) NSString *nextMethod; // @synthesize nextMethod=_nextMethod;
@property(nonatomic) _Bool needFingerprintFailedTip; // @synthesize needFingerprintFailedTip=_needFingerprintFailedTip;
@property(copy, nonatomic) NSString *tip; // @synthesize tip=_tip;
@property(retain, nonatomic) JDPPayExtendRequestModel *payExtendRequestModel; // @synthesize payExtendRequestModel=_payExtendRequestModel;
@property(retain, nonatomic) CBPayMode *payMode; // @synthesize payMode=_payMode;
- (void).cxx_destruct;

@end

