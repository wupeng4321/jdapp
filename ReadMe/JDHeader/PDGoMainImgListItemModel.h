//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PDGoMainImgListItemModel : NSObject
{
    NSString *_imgUrl;
    long long _type;
    NSString *_showId;
    NSString *_videoUrl;
    NSString *_userImg;
    NSString *_nickname;
    NSString *_pin;
}

@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *nickname; // @synthesize nickname=_nickname;
@property(copy, nonatomic) NSString *userImg; // @synthesize userImg=_userImg;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *showId; // @synthesize showId=_showId;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
- (void).cxx_destruct;

@end

