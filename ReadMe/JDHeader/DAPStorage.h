//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDPFMDatabaseQueue;
@protocol OS_dispatch_queue;

@interface DAPStorage : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    JDPFMDatabaseQueue *_dbQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)clearAllData;
- (void)enumerateModelWithBlock:(CDUnknownBlockType)arg1;
- (void)removeModel:(id)arg1;
- (void)insertModel:(id)arg1;
@property(readonly, nonatomic) long long storageCount;
- (id)init;

@end

