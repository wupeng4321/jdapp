//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface JDAirManager : NSObject
{
    NSMutableArray *_networks;
}

+ (void)getJSBundleWithBundleParam:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
+ (id)manager;
@property(retain, nonatomic) NSMutableArray *networks; // @synthesize networks=_networks;
- (void).cxx_destruct;
- (void)cleanAll;
- (void)cleanJsBundleBySize;
- (void)cleanJsBundleByCount;
- (void)cleanJSBundle;
- (void)updateJSBundleConfigLastUseTimeWithActivityId:(id)arg1;
- (_Bool)compareJSBundleConfig:(id)arg1;
- (void)deleteJSBundleWithBundleId:(id)arg1;
- (void)downloadJSBundleWithConfig:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getJSBundleWithBundleConfig:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)getJSBundleWithBundleParam:(id)arg1 progressBlock:(CDUnknownBlockType)arg2 successBlock:(CDUnknownBlockType)arg3 failureBlock:(CDUnknownBlockType)arg4;
- (void)dealloc;

@end

