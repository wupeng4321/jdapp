//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface JDAirDebugHistoryModel : NSObject
{
    int _index;
    NSString *_debugUrl;
    NSString *_appName;
    double _updateTime;
    NSDictionary *_params;
}

@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(nonatomic) int index; // @synthesize index=_index;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(copy, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property(copy, nonatomic) NSString *debugUrl; // @synthesize debugUrl=_debugUrl;
- (void).cxx_destruct;

@end

