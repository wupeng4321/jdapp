//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CBPaymentModel, JDPPaymentPlanViewController;

@interface JDPPaymentPlanDataController : NSObject
{
    CBPaymentModel *_paymentModel;
    JDPPaymentPlanViewController *_viewController;
}

@property(nonatomic) __weak JDPPaymentPlanViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) CBPaymentModel *paymentModel; // @synthesize paymentModel=_paymentModel;
- (void).cxx_destruct;
- (void)changeDefaultChannelCouponWithIdentifier:(id)arg1;
- (void)replacePlanInfoModel:(id)arg1;
- (void)updateViewModel;
- (id)initWithViewController:(id)arg1;

@end

