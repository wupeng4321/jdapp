//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface COCheckoutFreightRiskInfosModel : JDModel
{
    _Bool _isOnlyOne;
    _Bool _isUseFreightRisk;
    NSString *_insuranceFeeMsg;
    NSString *_freightRiskDescription;
    NSArray *_freightRiskList;
    NSString *_riskType;
}

@property(retain, nonatomic) NSString *riskType; // @synthesize riskType=_riskType;
@property(nonatomic) _Bool isUseFreightRisk; // @synthesize isUseFreightRisk=_isUseFreightRisk;
@property(retain, nonatomic) NSArray *freightRiskList; // @synthesize freightRiskList=_freightRiskList;
@property(retain, nonatomic) NSString *freightRiskDescription; // @synthesize freightRiskDescription=_freightRiskDescription;
@property(retain, nonatomic) NSString *insuranceFeeMsg; // @synthesize insuranceFeeMsg=_insuranceFeeMsg;
@property(nonatomic) _Bool isOnlyOne; // @synthesize isOnlyOne=_isOnlyOne;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;
- (id)getFreightRiskParamValueForRecord;

@end

