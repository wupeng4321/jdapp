//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDReactExceptionManage : NSObject
{
    long long _reportLimitNumber;
}

+ (id)crashTimeConvert:(id)arg1;
+ (id)sharedInstance;
@property(nonatomic) long long reportLimitNumber; // @synthesize reportLimitNumber=_reportLimitNumber;
- (void)uploadCrashException:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;
- (void)uploadExceptionReason:(id)arg1 info:(id)arg2;
- (void)uploadExceptionError:(id)arg1;
- (id)init;

@end
