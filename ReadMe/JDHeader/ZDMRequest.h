//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, NSOperationQueue, RequestSetupModel, ZDMResponse;

@interface ZDMRequest : NSObject
{
    _Bool _completed;
    long long _submodule;
    RequestSetupModel *_configuration;
    ZDMResponse *_response;
    NSOperationQueue *_queue;
    JDStoreNetwork *_network;
}

@property(retain, nonatomic) JDStoreNetwork *network; // @synthesize network=_network;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) ZDMResponse *response; // @synthesize response=_response;
@property(nonatomic, getter=isCompleted) _Bool completed; // @synthesize completed=_completed;
@property(readonly, nonatomic) RequestSetupModel *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) long long submodule; // @synthesize submodule=_submodule;
- (void).cxx_destruct;
- (void)response:(CDUnknownBlockType)arg1;
- (id)initWithSubmodule:(long long)arg1 configuration:(id)arg2;
- (void)dealloc;

@end

