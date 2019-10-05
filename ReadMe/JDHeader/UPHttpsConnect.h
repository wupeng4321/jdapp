//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableData, NSTimer, NSURLConnection, UPServiceURL;
@protocol UPHttpsConnectDelegate;

@interface UPHttpsConnect : NSObject
{
    NSMutableData *mRecvData;
    NSURLConnection *mURLConnection;
    NSTimer *mTimeOut;
    _Bool mFinished;
    long long _serviceType;
    UPServiceURL *_serviceURL;
    id <UPHttpsConnectDelegate> delegate;
}

+ (void)releaseInstance;
+ (id)shareInstance;
@property(nonatomic) __weak id <UPHttpsConnectDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)postMessage:(id)arg1;
- (void)cancelConnection;
- (void)stopConnection;
- (void)stopTimer;
- (void)handleTimeOut:(id)arg1;
- (void)dealloc;
- (id)init;

@end
