//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface ZDMCache : NSObject
{
    NSString *_cacheDirectory;
    NSObject<OS_dispatch_queue> *_ioQueue;
    long long _mode;
}

@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
- (void).cxx_destruct;
- (id)md5ValueForKey:(id)arg1;
- (void)removeCachedResponseForKey:(id)arg1;
- (void)removeAllCachedResponses;
- (void)storeCachedResponse:(id)arg1 forKey:(id)arg2;
- (id)cachedResponseForKey:(id)arg1;
- (id)initWithMode:(long long)arg1;

@end

