//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface MyJdNetworkManager : NSObject
{
    NSMutableDictionary *_requestDic;
}

@property(retain, nonatomic) NSMutableDictionary *requestDic; // @synthesize requestDic=_requestDic;
- (void).cxx_destruct;
- (void)cancelAllRequest;
- (void)cancelRequest:(id)arg1;
- (void)requestDataFromNetWithFunctionId:(id)arg1 params:(id)arg2 finishBlock:(CDUnknownBlockType)arg3 cancelBlock:(CDUnknownBlockType)arg4;

@end

