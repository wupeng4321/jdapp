//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HttpDNSTCPSpeedTester, NSMutableDictionary, NSOperationQueue, NSRecursiveLock;

@interface HttpDNSSpeedTestManager : NSObject
{
    HttpDNSTCPSpeedTester *_speedTester;
    NSMutableDictionary *_runningTask;
    NSOperationQueue *_taskQueue;
    NSRecursiveLock *_safeLock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)testSpeedOfIpArrayOfDomain:(id)arg1:(id)arg2:(id)arg3:(id)arg4;
- (id)init;

@end

