//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PDNetworkAccessBase;

@interface PDNetworkContext : NSObject
{
    PDNetworkAccessBase *_network;
}

@property(retain, nonatomic) PDNetworkAccessBase *network; // @synthesize network=_network;
- (void).cxx_destruct;
- (void)cancelRequest;
- (void)dataAccessFromNet:(id)arg1 finishBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (id)initWithFunctionId:(id)arg1;
- (void)dealloc;

@end

