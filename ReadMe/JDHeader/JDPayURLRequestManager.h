//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURLSession;

@interface JDPayURLRequestManager : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_requests;
    NSURLSession *_urlSession;
    NSDictionary *_HTTPAdditionalHeaders;
}

+ (id)errorWithCode:(long long)arg1;
+ (id)errorWithCode:(long long)arg1 desc:(id)arg2 debugDesc:(id)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(copy) NSDictionary *HTTPAdditionalHeaders; // @synthesize HTTPAdditionalHeaders=_HTTPAdditionalHeaders;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)removeRequest:(id)arg1;
- (void)request:(id)arg1 didFinishWithError:(id)arg2;
- (id)localizedStringForStatusCode:(long long)arg1;
- (void)cancelRequest:(id)arg1;
- (void)sendRequest:(id)arg1 withFinishBlock:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

