//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDGoMainImgInfoModel : NSObject
{
    NSString *_activityId;
    NSString *_shareIcon;
    NSString *_laudIcon;
    NSString *_laudedIcon;
    NSString *_indexIcon;
    long long _index;
    long long _showIndex;
    NSString *_indexDesc;
    long long _duration;
    NSString *_playIcon;
    NSArray *_imageList;
    long long _laudMax;
}

+ (id)objectClassInArray;
@property(nonatomic) long long laudMax; // @synthesize laudMax=_laudMax;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList=_imageList;
@property(copy, nonatomic) NSString *playIcon; // @synthesize playIcon=_playIcon;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSString *indexDesc; // @synthesize indexDesc=_indexDesc;
@property(nonatomic) long long showIndex; // @synthesize showIndex=_showIndex;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *indexIcon; // @synthesize indexIcon=_indexIcon;
@property(copy, nonatomic) NSString *laudedIcon; // @synthesize laudedIcon=_laudedIcon;
@property(copy, nonatomic) NSString *laudIcon; // @synthesize laudIcon=_laudIcon;
@property(copy, nonatomic) NSString *shareIcon; // @synthesize shareIcon=_shareIcon;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;

@end

