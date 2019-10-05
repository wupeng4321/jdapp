//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface JDTemplateVideoModel : NSObject
{
    NSNumber *_videoId;
    NSString *_videoName;
    NSNumber *_agentVideoId;
    NSNumber *_agentVideoUuid;
    NSString *_videoDuration;
    NSString *_coverUrl;
    NSString *_imageUrl;
    NSString *_videoAddress;
    NSNumber *_videoType;
    NSNumber *_viewstatus;
    NSNumber *_pageView;
    NSString *_liveShowStartDes;
    NSNumber *_liveShowStartTime;
}

@property(retain, nonatomic) NSNumber *liveShowStartTime; // @synthesize liveShowStartTime=_liveShowStartTime;
@property(retain, nonatomic) NSString *liveShowStartDes; // @synthesize liveShowStartDes=_liveShowStartDes;
@property(retain, nonatomic) NSNumber *pageView; // @synthesize pageView=_pageView;
@property(retain, nonatomic) NSNumber *viewstatus; // @synthesize viewstatus=_viewstatus;
@property(retain, nonatomic) NSNumber *videoType; // @synthesize videoType=_videoType;
@property(retain, nonatomic) NSString *videoAddress; // @synthesize videoAddress=_videoAddress;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSString *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(retain, nonatomic) NSNumber *agentVideoUuid; // @synthesize agentVideoUuid=_agentVideoUuid;
@property(retain, nonatomic) NSNumber *agentVideoId; // @synthesize agentVideoId=_agentVideoId;
@property(retain, nonatomic) NSString *videoName; // @synthesize videoName=_videoName;
@property(retain, nonatomic) NSNumber *videoId; // @synthesize videoId=_videoId;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg1;

@end
