//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPaymentCrossBorderRealNameModel, CBPaymentModel, JDPCrossBorderProtocolViewController;

@interface CBPaymentCrossBorderRealNameDataController : NSObject
{
    CBPaymentModel *_paymentModel;
    CBPaymentCrossBorderRealNameModel *_crossBorderRealNameModel;
    JDPCrossBorderProtocolViewController *_viewController;
}

@property(nonatomic) __weak JDPCrossBorderProtocolViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) CBPaymentCrossBorderRealNameModel *crossBorderRealNameModel; // @synthesize crossBorderRealNameModel=_crossBorderRealNameModel;
@property(retain, nonatomic) CBPaymentModel *paymentModel; // @synthesize paymentModel=_paymentModel;
- (void).cxx_destruct;
- (void)updateViewModel;
- (id)initWithViewController:(id)arg1;

@end

