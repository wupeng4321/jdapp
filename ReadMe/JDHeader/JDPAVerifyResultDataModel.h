//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class JDPPaySetInfoModel, NSString;

@interface JDPAVerifyResultDataModel : JDPayModel
{
    _Bool _verifyResult;
    _Bool _isNeedGuidePage;
    NSString *_commendVerifyWay;
    NSString *_verifyDesc;
    NSString *_tdVerifyData;
    NSString *_verifyType;
    JDPPaySetInfoModel *_setInfoModel;
}

+ (id)modelWithDict:(id)arg1;
@property(retain, nonatomic) JDPPaySetInfoModel *setInfoModel; // @synthesize setInfoModel=_setInfoModel;
@property(nonatomic) _Bool isNeedGuidePage; // @synthesize isNeedGuidePage=_isNeedGuidePage;
@property(copy, nonatomic) NSString *verifyType; // @synthesize verifyType=_verifyType;
@property(copy, nonatomic) NSString *tdVerifyData; // @synthesize tdVerifyData=_tdVerifyData;
@property(nonatomic) _Bool verifyResult; // @synthesize verifyResult=_verifyResult;
@property(copy, nonatomic) NSString *verifyDesc; // @synthesize verifyDesc=_verifyDesc;
@property(copy, nonatomic) NSString *commendVerifyWay; // @synthesize commendVerifyWay=_commendVerifyWay;
- (void).cxx_destruct;

@end

