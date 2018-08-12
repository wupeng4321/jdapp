//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDMTAContext, JDMTAFMDatabaseQueue, NSDictionary, NSOperationQueue, NSTimer;

@interface JDMTAManager : NSObject
{
    NSDictionary *_DAUDic;
    NSOperationQueue *_startupOperateQueue;
    NSOperationQueue *_operateQueue;
    JDMTAFMDatabaseQueue *_databaseQueue;
    NSOperationQueue *_networkQueue;
    JDMTAContext *_context;
    double _currentTime;
    NSTimer *_timer;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) JDMTAContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSOperationQueue *networkQueue; // @synthesize networkQueue=_networkQueue;
@property(retain, nonatomic) JDMTAFMDatabaseQueue *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(retain, nonatomic) NSOperationQueue *operateQueue; // @synthesize operateQueue=_operateQueue;
@property(retain, nonatomic) NSOperationQueue *startupOperateQueue; // @synthesize startupOperateQueue=_startupOperateQueue;
@property(retain, nonatomic) NSDictionary *DAUDic; // @synthesize DAUDic=_DAUDic;
- (void).cxx_destruct;
- (int)policyInterval;
- (void)queryPolicy;
- (void)applicationWillResignActive;
- (void)applicationTerminateSetOpenflag;
- (void)onDidApplicationRecvMemoryWarning;
- (void)jd_sendDUAWithState:(id)arg1;
- (void)onWillApplicationEnterBackground;
- (void)onWillApplicationEnterForeground;
- (void)onDidApplicationBecomeActiveWithDAU;
- (_Bool)jd_isTadayWithDate:(id)arg1;
- (_Bool)jd_isTadayNeedSendDUA;
- (void)onDidApplicationBecomeActive;
- (void)checkAndSendPerformancePVData;
- (void)checkAndSendData;
- (void)queryAndSendPerformancePVData;
- (void)insertPerformancePVWithData:(id)arg1;
- (void)removeSentDataByIDs:(id)arg1 fromTable:(id)arg2;
- (void)recordWithModel:(id)arg1 parameters:(id)arg2;
- (void)queryStrategyByType:(int)arg1;
- (void)sendDAUData:(id)arg1;
- (void)sendPerformancePVData:(id)arg1;
- (void)updateStrategy:(id)arg1 withString:(id)arg2;
- (void)requestURL:(id)arg1 withPostBody:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

