//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JMAServices.h"

#import "JMACompletionHandlerProtocol-Protocol.h"
#import "JMAObtainRequestParamsProtocol-Protocol.h"
#import "JMAServicesProtocol-Protocol.h"

@class JMASwhwswswwsAdapter, JMASwhwswswwsHelper, NSString;

@interface JMASecuritywhwswswws : JMAServices <JMAObtainRequestParamsProtocol, JMACompletionHandlerProtocol, JMAServicesProtocol>
{
    JMASwhwswswwsHelper *_jmaSwhwswswwsHelper;
    JMASwhwswswwsAdapter *_jmaSwhwswswwsAdapter;
}

@property(retain, nonatomic) JMASwhwswswwsAdapter *jmaSwhwswswwsAdapter; // @synthesize jmaSwhwswswwsAdapter=_jmaSwhwswswwsAdapter;
@property(retain, nonatomic) JMASwhwswswwsHelper *jmaSwhwswswwsHelper; // @synthesize jmaSwhwswswwsHelper=_jmaSwhwswswwsHelper;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *reportPath;
@property(readonly, nonatomic) NSString *reportHost;
- (void)report;
- (void)completionHandlerFail:(id)arg1;
- (void)completionHandlerSuccess:(id)arg1;
- (id)paramsForRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

