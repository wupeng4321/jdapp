//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPReachability, NSDate;
@protocol OS_dispatch_queue;

@interface DAP : NSObject
{
    JDPReachability *_reachability;
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _sendingStorageData;
    NSDate *_sendSrorageDataTimestamp;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDate *sendSrorageDataTimestamp; // @synthesize sendSrorageDataTimestamp=_sendSrorageDataTimestamp;
@property(nonatomic) _Bool sendingStorageData; // @synthesize sendingStorageData=_sendingStorageData;
- (void).cxx_destruct;
- (void)trackCustomEvent:(id)arg1 customProperties:(id)arg2 delegate:(id)arg3;
- (void)sendStorageDataIfNeeds;
- (void)sendStorageData;
- (void)sendDataForModel:(id)arg1 withFinishBlock:(CDUnknownBlockType)arg2;
- (id)composeParamForModel:(id)arg1 error:(id *)arg2;
- (id)init;

@end
