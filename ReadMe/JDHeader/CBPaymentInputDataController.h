//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPaymentInputViewController, CBPaymentModel;

@interface CBPaymentInputDataController : NSObject
{
    CBPaymentModel *_paymentModel;
    CBPaymentInputViewController *_viewController;
}

@property(nonatomic) __weak CBPaymentInputViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) CBPaymentModel *paymentModel; // @synthesize paymentModel=_paymentModel;
- (void).cxx_destruct;
- (void)private_updateViewModelWithShowMobilePwdInput:(_Bool)arg1 showPCPwdInput:(_Bool)arg2 showCVV2Input:(_Bool)arg3 showDateInput:(_Bool)arg4;
- (void)updateViewModel;
- (id)initWithViewController:(id)arg1;

@end

