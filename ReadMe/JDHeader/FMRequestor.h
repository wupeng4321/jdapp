//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork;

@interface FMRequestor : NSObject
{
    JDStoreNetwork *_nNetWork;
}

@property(retain, nonatomic) JDStoreNetwork *nNetWork; // @synthesize nNetWork=_nNetWork;
- (void).cxx_destruct;
- (void)tryShoeUploadFootData:(id)arg1 rightFootData:(id)arg2 gender:(int)arg3 completed:(CDUnknownBlockType)arg4 errored:(CDUnknownBlockType)arg5;

@end

