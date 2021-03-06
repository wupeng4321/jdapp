//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString, NSURLRequest;

@protocol JDReactUpgradeNetworkDelegate <NSObject>
- (void)upgrade:(NSString *)arg1 moduleVersion:(NSString *)arg2 downloadType:(int)arg3;
- (void)getDegradeDataRequest:(void (^)(id, NSError *))arg1;
- (void)sendAsynchronousRequest:(NSURLRequest *)arg1 progressBlock:(void (^)(NSProgress *))arg2 completionHandlerBlock:(void (^)(NSURLResponse *, NSURL *, NSData *, NSError *))arg3;
- (void)getAllModuleConfig:(NSDictionary *)arg1 block:(void (^)(id, NSError *))arg2;
@end

