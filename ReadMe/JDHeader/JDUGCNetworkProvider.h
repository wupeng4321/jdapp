//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork;

@interface JDUGCNetworkProvider : NSObject
{
    _Bool _isRequesting;
    JDStoreNetwork *_likeRequest;
    JDStoreNetwork *_followRequest;
}

@property(retain, nonatomic) JDStoreNetwork *followRequest; // @synthesize followRequest=_followRequest;
@property(retain, nonatomic) JDStoreNetwork *likeRequest; // @synthesize likeRequest=_likeRequest;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
- (void).cxx_destruct;
- (void)startAttentionWithType:(long long)arg1 ContentId:(id)arg2 Action:(long long)arg3 View:(id)arg4 SuccessBlock:(CDUnknownBlockType)arg5 FailureBlock:(CDUnknownBlockType)arg6;
- (void)startLikeWithType:(long long)arg1 ContentId:(id)arg2 Action:(long long)arg3 View:(id)arg4 SuccessBlock:(CDUnknownBlockType)arg5 FailureBlock:(CDUnknownBlockType)arg6;
- (void)dealloc;
- (id)init;

@end

