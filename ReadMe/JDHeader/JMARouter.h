//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JMAClientCpaInfo, NSArray, NSDate, NSDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_semaphore;

@interface JMARouter : NSObject
{
    _Bool _isRequestwhwswswws;
    _Bool _isrequestCCP;
    _Bool _isMainThread;
    NSOperationQueue *_operationQueue;
    JMAClientCpaInfo *_clientCpaInfo;
    NSDictionary *_alterationInfo;
    NSDictionary *_fixedInfo;
    NSDictionary *_clientCpaId;
    NSDictionary *_clientCpatoYHD;
    NSString *_whwswswws;
    long long _sid;
    long long _seq;
    NSDate *_lastReportAlterationDate;
    NSDate *_lastReportFixDate;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSString *_alterationInfoInterval;
    NSString *_fixedInfoInterval;
    NSString *_openall;
    NSString *_openalltouch;
    NSString *_appkey;
    NSString *_ccpVer;
    NSString *_preactivity;
    NSString *_pin;
    NSString *_nextsyncdt;
    NSArray *_userTrackArray;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isMainThread; // @synthesize isMainThread=_isMainThread;
@property(retain, nonatomic) NSArray *userTrackArray; // @synthesize userTrackArray=_userTrackArray;
@property(nonatomic) _Bool isrequestCCP; // @synthesize isrequestCCP=_isrequestCCP;
@property(copy, nonatomic) NSString *nextsyncdt; // @synthesize nextsyncdt=_nextsyncdt;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *preactivity; // @synthesize preactivity=_preactivity;
@property(copy, nonatomic) NSString *ccpVer; // @synthesize ccpVer=_ccpVer;
@property(copy, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(copy, nonatomic) NSString *openalltouch; // @synthesize openalltouch=_openalltouch;
@property(copy, nonatomic) NSString *openall; // @synthesize openall=_openall;
@property(copy, nonatomic) NSString *fixedInfoInterval; // @synthesize fixedInfoInterval=_fixedInfoInterval;
@property(copy, nonatomic) NSString *alterationInfoInterval; // @synthesize alterationInfoInterval=_alterationInfoInterval;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) NSDate *lastReportFixDate; // @synthesize lastReportFixDate=_lastReportFixDate;
@property(retain, nonatomic) NSDate *lastReportAlterationDate; // @synthesize lastReportAlterationDate=_lastReportAlterationDate;
@property(nonatomic) _Bool isRequestwhwswswws; // @synthesize isRequestwhwswswws=_isRequestwhwswswws;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(nonatomic) long long sid; // @synthesize sid=_sid;
@property(copy, nonatomic) NSString *whwswswws; // @synthesize whwswswws=_whwswswws;
@property(retain, nonatomic) NSDictionary *clientCpatoYHD; // @synthesize clientCpatoYHD=_clientCpatoYHD;
@property(retain, nonatomic) NSDictionary *clientCpaId; // @synthesize clientCpaId=_clientCpaId;
@property(retain, nonatomic) NSDictionary *fixedInfo; // @synthesize fixedInfo=_fixedInfo;
@property(retain, nonatomic) NSDictionary *alterationInfo; // @synthesize alterationInfo=_alterationInfo;
@property(retain, nonatomic) JMAClientCpaInfo *clientCpaInfo; // @synthesize clientCpaInfo=_clientCpaInfo;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
- (void).cxx_destruct;
- (void)handleCCPInfo:(id)arg1;
- (void)reportTrackNotification:(id)arg1;
- (void)whwswswwsNotification:(id)arg1;
- (void)CCPNotifaction:(id)arg1;
- (void)reportHardwareInfo:(_Bool)arg1 lat:(id)arg2 lon:(id)arg3;
- (void)requestCCP;
- (void)requestwhwswswws;
- (void)cloudAutomatedTested:(id)arg1;
- (void)cloudAutomatedTesting:(id)arg1;
- (void)initializeCPAInfo;
- (void)initConfiguration:(id)arg1;
- (void)initialize;
- (id)getwhwswswws;
- (id)reportUserTrackVCArray;
- (void)reportUserTrack:(id)arg1 eventParam:(id)arg2;
- (void)reportGIS:(id)arg1;
- (void)reportFireEye:(id)arg1;
- (void)reportJMA:(id)arg1;
- (void)registerJMA:(id)arg1 unionId:(id)arg2 subunionId:(id)arg3 partner:(id)arg4 uid:(id)arg5;

@end

