//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDSHAppSearchNetworkUtil : NSObject
{
}

+ (id)appSearchItemsForNetworkData:(id)arg1 imageDataDict:(id)arg2;
+ (void)fetchImage:(id)arg1 cacheDict:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)tryCache:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)iconArrayFromNetworkData:(id)arg1;
+ (void)appSearchDataFinished:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
+ (id)privateSharedSerialQueue;
+ (id)privateSharedConcurrentQueue;
+ (id)privateSharedRequest;
+ (id)privateRequestModel;
+ (id)privateAppSearchItemForDict:(id)arg1 imageDataDict:(id)arg2;
+ (id)privateAppSearchDomainWithType:(id)arg1;

@end
