//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPPaymentCodeResultCtrlModel, NSString;

@interface JDPayOpenVerifyCodeModel : NSObject
{
    NSString *_nextStep;
    NSString *_phoneDesc;
    NSString *_openResult;
    NSString *_openTitleDesc;
    NSString *_commonTip;
    NSString *_pinMd5;
    JDPPaymentCodeResultCtrlModel *_resultCtrlModel;
}

@property(retain, nonatomic) JDPPaymentCodeResultCtrlModel *resultCtrlModel; // @synthesize resultCtrlModel=_resultCtrlModel;
@property(copy, nonatomic) NSString *pinMd5; // @synthesize pinMd5=_pinMd5;
@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(copy, nonatomic) NSString *openTitleDesc; // @synthesize openTitleDesc=_openTitleDesc;
@property(copy, nonatomic) NSString *openResult; // @synthesize openResult=_openResult;
@property(copy, nonatomic) NSString *phoneDesc; // @synthesize phoneDesc=_phoneDesc;
@property(copy, nonatomic) NSString *nextStep; // @synthesize nextStep=_nextStep;
- (void).cxx_destruct;

@end

