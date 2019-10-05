//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface ZDMVideoInfo : JDModel <NSCopying>
{
    NSString *_videoUnique;
    NSString *_videoId;
    long long _videoDuration;
    NSString *_videoUrl;
    NSString *_videoType;
    NSString *_videoImg;
    long long _videoCode;
    long long _videoIndex;
    long long _playType;
}

@property(nonatomic) long long playType; // @synthesize playType=_playType;
@property(nonatomic) long long videoIndex; // @synthesize videoIndex=_videoIndex;
@property(nonatomic) long long videoCode; // @synthesize videoCode=_videoCode;
@property(retain, nonatomic) NSString *videoImg; // @synthesize videoImg=_videoImg;
@property(retain, nonatomic) NSString *videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) NSString *videoUnique; // @synthesize videoUnique=_videoUnique;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDic:(id)arg1 imghost:(id)arg2;

@end
