//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDArMakeupModelInfo : NSObject
{
    NSString *_icon;
    NSString *_jumpUrl;
    long long _jumpType;
    NSString *_preLoadUrl;
}

@property(copy, nonatomic) NSString *preLoadUrl; // @synthesize preLoadUrl=_preLoadUrl;
@property(nonatomic) long long jumpType; // @synthesize jumpType=_jumpType;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;

@end
