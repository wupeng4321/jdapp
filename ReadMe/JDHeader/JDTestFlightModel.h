//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class JDTestFlightAlertModel, JDTestFlightDetailModel, NSString;

@interface JDTestFlightModel : JDModel
{
    NSString *_state;
    NSString *_appVersion;
    NSString *_appBuild;
    JDTestFlightAlertModel *_alertModel;
    JDTestFlightDetailModel *_detailModel;
}

@property(retain, nonatomic) JDTestFlightDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) JDTestFlightAlertModel *alertModel; // @synthesize alertModel=_alertModel;
@property(copy, nonatomic) NSString *appBuild; // @synthesize appBuild=_appBuild;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

