//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHVPNextLiveModel : NSObject
{
    long long _liveId;
    NSString *_blurredImg;
    long long _direction;
}

+ (id)replacedKeyFromPropertyName;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *blurredImg; // @synthesize blurredImg=_blurredImg;
@property(nonatomic) long long liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;

@end
