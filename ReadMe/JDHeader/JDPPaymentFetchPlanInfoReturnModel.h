//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentBaseReturnModel.h"

@class JDPPlanInfoModel, NSString;

@interface JDPPaymentFetchPlanInfoReturnModel : CBPaymentBaseReturnModel
{
    JDPPlanInfoModel *_planInfoModel;
    NSString *_realAmount;
    NSString *_topDiscountDesc;
    NSString *_shouldPayDesc;
}

@property(copy, nonatomic) NSString *shouldPayDesc; // @synthesize shouldPayDesc=_shouldPayDesc;
@property(copy, nonatomic) NSString *topDiscountDesc; // @synthesize topDiscountDesc=_topDiscountDesc;
@property(copy, nonatomic) NSString *realAmount; // @synthesize realAmount=_realAmount;
@property(retain, nonatomic) JDPPlanInfoModel *planInfoModel; // @synthesize planInfoModel=_planInfoModel;
- (void).cxx_destruct;

@end

