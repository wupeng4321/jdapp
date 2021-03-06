//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface JDSErrorLog : NSObject <NSCoding>
{
    NSString *_stackTrace;
    NSString *_time;
    NSString *_appkey;
    NSString *_iOSVersion;
    NSString *_appVersion;
    NSString *_sdkVersion;
    NSString *_cpuType;
    NSString *_binImageName;
}

@property(retain, nonatomic) NSString *binImageName; // @synthesize binImageName=_binImageName;
@property(retain, nonatomic) NSString *cpuType; // @synthesize cpuType=_cpuType;
@property(retain, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(retain, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(retain, nonatomic) NSString *iOSVersion; // @synthesize iOSVersion=_iOSVersion;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
@property(retain, nonatomic) NSString *time; // @synthesize time=_time;
@property(retain, nonatomic) NSString *stackTrace; // @synthesize stackTrace=_stackTrace;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

