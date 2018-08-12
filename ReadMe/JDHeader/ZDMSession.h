//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ZDMRequest, ZDMResponse, ZDMSessionDelegate;
@protocol ZDMSessionDelegate;

@interface ZDMSession : NSObject
{
    long long _submodule;
    id <ZDMSessionDelegate> _delegate;
    ZDMRequest *_request;
    ZDMResponse *_response;
    ZDMSessionDelegate *_defaultDelegate;
}

@property(retain, nonatomic) ZDMSessionDelegate *defaultDelegate; // @synthesize defaultDelegate=_defaultDelegate;
@property(retain, nonatomic) ZDMResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) ZDMRequest *request; // @synthesize request=_request;
@property(nonatomic) __weak id <ZDMSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long submodule; // @synthesize submodule=_submodule;
- (void).cxx_destruct;
- (void)callCompletionHandler:(CDUnknownBlockType)arg1 withRequest:(id)arg2 response:(id)arg3;
- (void)startRequest:(id)arg1 usingCache:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)initWithSubmodule:(long long)arg1;

@end

