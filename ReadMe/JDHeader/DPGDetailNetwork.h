//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork;

@interface DPGDetailNetwork : NSObject
{
    JDStoreNetwork *_attentionNetWork;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)fetchDPGDetailDataWithId:(id)arg1 channel:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;

@end
