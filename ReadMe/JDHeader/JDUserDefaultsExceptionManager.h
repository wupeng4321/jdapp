//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDCrashDAO, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface JDUserDefaultsExceptionManager : NSObject
{
    NSObject<OS_dispatch_queue> *_cacheIOQueue;
    JDCrashDAO *_crashDao;
    _Bool _change;
    NSMutableDictionary *_keysInfo;
}

+ (void)saveKey:(id)arg1 withSuiteName:(id)arg2;
+ (id)sharedInstance;
@property(nonatomic, getter=isChange) _Bool change; // @synthesize change=_change;
@property(retain, nonatomic) NSMutableDictionary *keysInfo; // @synthesize keysInfo=_keysInfo;
- (void).cxx_destruct;
- (void)handleNotification:(id)arg1;
- (void)startRequest:(id)arg1;
- (void)sendExceptionInfo;
- (id)exceptionFileFilePath;
- (id)cacheIOQueue;
- (void)dealloc;
- (id)init;

@end

