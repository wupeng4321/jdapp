//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDRankAuthoritiesModel : NSObject
{
    NSString *_currentimgPath;
    NSString *_currenturl;
    NSString *_historyimgPath;
    NSString *_historyurl;
    NSString *_nextimgPath;
    NSString *_nexturl;
    NSString *_bannerTitle;
    NSString *_bannerType;
    NSString *_bannerUrl;
    NSString *_bannerImg;
    NSString *_beginTime;
    NSString *_endTime;
}

@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSString *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) NSString *bannerImg; // @synthesize bannerImg=_bannerImg;
@property(retain, nonatomic) NSString *bannerUrl; // @synthesize bannerUrl=_bannerUrl;
@property(retain, nonatomic) NSString *bannerType; // @synthesize bannerType=_bannerType;
@property(retain, nonatomic) NSString *bannerTitle; // @synthesize bannerTitle=_bannerTitle;
@property(retain, nonatomic) NSString *nexturl; // @synthesize nexturl=_nexturl;
@property(retain, nonatomic) NSString *nextimgPath; // @synthesize nextimgPath=_nextimgPath;
@property(retain, nonatomic) NSString *historyurl; // @synthesize historyurl=_historyurl;
@property(retain, nonatomic) NSString *historyimgPath; // @synthesize historyimgPath=_historyimgPath;
@property(retain, nonatomic) NSString *currenturl; // @synthesize currenturl=_currenturl;
@property(retain, nonatomic) NSString *currentimgPath; // @synthesize currentimgPath=_currentimgPath;
- (id)initWithDictionary:(id)arg1;

@end
