//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UPHttpsConnectDelegate-Protocol.h"

@class NSString, NSTimer, UPHttpsConnect;
@protocol UPMPServiceDelegate;

@interface UPMPService : NSObject <UPHttpsConnectDelegate>
{
    long long _currentCMD;
    NSString *_queryType;
    NSTimer *_queryTimer;
    _Bool _queryTimeout;
    long long _queryForType;
    UPHttpsConnect *_httpConnection;
    struct UPPProguardUtil *_cryptUtil;
    id <UPMPServiceDelegate> delegate;
    NSString *queryNumber;
    NSString *queryType;
    NSString *queryRequest;
}

+ (void)nowTestMode:(id)arg1 andKeyType:(_Bool)arg2;
+ (void)nowTestMode:(id)arg1;
@property long long currentCMD; // @synthesize currentCMD=_currentCMD;
@property(copy, nonatomic) NSString *queryRequest; // @synthesize queryRequest;
@property(retain, nonatomic) NSString *queryType; // @synthesize queryType;
@property(retain, nonatomic) NSString *queryNumber; // @synthesize queryNumber;
@property(nonatomic) __weak id <UPMPServiceDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (id)decryptString:(id)arg1;
- (id)encryptString:(id)arg1;
- (id)userDefaultPayMode;
- (void)storageUserDefaultPayMode:(id)arg1;
- (void)httpsConnectFailed:(id)arg1;
- (void)httpsRecvDataFinished:(id)arg1;
- (_Bool)parseUPMPResponse:(id)arg1;
- (void)parseQueryResponse:(id)arg1;
- (void)parseSmsResponse:(id)arg1;
- (void)parseInitResponse:(id)arg1;
- (void)handleNetworkError:(id)arg1;
- (void)handleResponseError:(id)arg1;
- (void)handleResponseFormatError;
- (void)startQueryWithResponse:(id)arg1;
- (void)postQueryRequest:(id)arg1;
- (void)postSmsRequestWithFlag:(id)arg1 params:(id)arg2;
- (void)postInitRequestWithTn:(id)arg1 uid:(id)arg2 locale:(id)arg3 terminalVersion:(id)arg4 terminalResolution:(id)arg5 osName:(id)arg6 osVersion:(id)arg7 deviceMode:(id)arg8 terminalType:(id)arg9 systemType:(id)arg10 timeZone:(id)arg11 networkMode:(id)arg12;
- (void)postTempRequestWithCmd:(id)arg1 elements:(id)arg2;
- (void)postRequestWithCmd:(id)arg1 elements:(id)arg2;
- (void)postPreCmd:(id)arg1 elements:(id)arg2;
- (void)postHttpsRequest:(id)arg1;
- (void)sendFrontNotification:(id)arg1 to:(id)arg2;
- (id)dictionaryToJson:(id)arg1;
- (id)getParamsFormResponse:(id)arg1;
- (void)releaseCommon;
- (void)cancelCurNetwork;
- (void)startQueryTimer;
- (void)startQuery;
- (void)stopQueryTimerWhenTimeout;
- (void)stopQueryTimer;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

