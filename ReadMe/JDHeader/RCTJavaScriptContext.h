//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RCTInvalidating-Protocol.h"

@class JSContext, NSString, NSThread;

@interface RCTJavaScriptContext : NSObject <RCTInvalidating>
{
    RCTJavaScriptContext *_selfReference;
    NSThread *_javaScriptThread;
    JSContext *_context;
}

@property(readonly, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (void)invalidate;
- (_Bool)isValid;
- (id)init;
- (id)initWithJSContext:(id)arg1 onThread:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

