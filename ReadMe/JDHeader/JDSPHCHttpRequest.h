//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDSPHCHttpRequest : NSObject
{
}

+ (id)handleResponseData:(id)arg1;
+ (void)requestDSecretWithSkey:(id)arg1 pubCert:(id)arg2 finger:(id)arg3 OnComplete:(CDUnknownBlockType)arg4;
+ (void)postRequestWithBodyData:(id)arg1 atURL:(id)arg2 onComplete:(CDUnknownBlockType)arg3;
+ (id)createRequestWithBodyData:(id)arg1 atURL:(id)arg2;
+ (void)postRequestWithParam:(id)arg1 withEncrypt:(_Bool)arg2;
+ (void)configEvn:(long long)arg1;

@end

