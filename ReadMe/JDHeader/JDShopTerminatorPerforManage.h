//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface JDShopTerminatorPerforManage : NSObject
{
    NSMutableDictionary *_terminatorDic;
    double _engineLoadingTime;
}

+ (id)shareJDShopTerminatorPerforManage;
@property(nonatomic) double engineLoadingTime; // @synthesize engineLoadingTime=_engineLoadingTime;
@property(retain, nonatomic) NSMutableDictionary *terminatorDic; // @synthesize terminatorDic=_terminatorDic;
- (void).cxx_destruct;
- (void)sendAPMDataInfoWithPageId:(id)arg1;
- (id)dataToJsonString:(id)arg1;
- (id)performanceDicWithPageId:(id)arg1;
- (void)removeTerminatorPerfomanceWithType:(id)arg1;
- (id)performanceModelWithType:(id)arg1;
- (void)setTerminatorPerformace:(id)arg1 type:(id)arg2;
- (void)setEngineLoadingTimeWith:(double)arg1;

@end

