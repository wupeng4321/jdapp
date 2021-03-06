//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class JDAdStartJumpModel, NSDate, NSNumber, NSString;

@interface OpertationPicModel : NSObject <NSCoding>
{
    NSNumber *_groupId;
    NSString *_sourceValue;
    NSNumber *_time;
    NSString *_title;
    NSDate *_referralsTime;
    NSDate *_onlineTime;
    NSNumber *_ynSkip;
    NSString *_url;
    NSNumber *_type;
    NSString *_fileName;
    NSNumber *_maxShowTimes;
    JDAdStartJumpModel *_jump;
    NSString *_videoId;
    NSString *_videoUrl;
    NSString *_foldEnable;
    NSString *_bindFloorId;
    NSString *_bindSubFloor;
    NSString *_displaceEnable;
    NSNumber *_displaceDirection;
    NSNumber *_displaceStartTime;
    NSString *_imagePath;
}

@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSNumber *displaceStartTime; // @synthesize displaceStartTime=_displaceStartTime;
@property(retain, nonatomic) NSNumber *displaceDirection; // @synthesize displaceDirection=_displaceDirection;
@property(copy, nonatomic) NSString *displaceEnable; // @synthesize displaceEnable=_displaceEnable;
@property(copy, nonatomic) NSString *bindSubFloor; // @synthesize bindSubFloor=_bindSubFloor;
@property(copy, nonatomic) NSString *bindFloorId; // @synthesize bindFloorId=_bindFloorId;
@property(copy, nonatomic) NSString *foldEnable; // @synthesize foldEnable=_foldEnable;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(retain, nonatomic) JDAdStartJumpModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) NSNumber *maxShowTimes; // @synthesize maxShowTimes=_maxShowTimes;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSNumber *ynSkip; // @synthesize ynSkip=_ynSkip;
@property(copy, nonatomic) NSDate *onlineTime; // @synthesize onlineTime=_onlineTime;
@property(copy, nonatomic) NSDate *referralsTime; // @synthesize referralsTime=_referralsTime;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSNumber *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *sourceValue; // @synthesize sourceValue=_sourceValue;
@property(copy, nonatomic) NSNumber *groupId; // @synthesize groupId=_groupId;
- (void).cxx_destruct;
- (id)jumpInfoModel;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initDataWithDic:(id)arg1;
- (id)parseMaxShowTimes:(id)arg1;

@end

