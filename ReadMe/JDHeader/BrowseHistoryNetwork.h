//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork;

@interface BrowseHistoryNetwork : NSObject
{
    JDStoreNetwork *_net;
}

@property(retain, nonatomic) JDStoreNetwork *net; // @synthesize net=_net;
- (void).cxx_destruct;
- (void)checkNetwork;
- (id)_handleResponseForRequestBrowseHistory:(id)arg1;
- (void)net_requestBrowseHistoryFromIndex:(unsigned long long)arg1 success:(CDUnknownBlockType)arg2 failed:(CDUnknownBlockType)arg3;
- (id)_handleABTestParam:(id)arg1;
- (void)net_requestABTest:(CDUnknownBlockType)arg1 failed:(CDUnknownBlockType)arg2;

@end

