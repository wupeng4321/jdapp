//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TTTVideoCardInfoModel, TTTVideoInfoModel, TTTVideoPositionModel, UIColor;

@interface TTTVideoInfoConfigModel : NSObject
{
    _Bool _showPadding;
    _Bool _isLast;
    TTTVideoCardInfoModel *_cardInfoModel;
    TTTVideoPositionModel *_cardPositionModel;
    TTTVideoInfoModel *_videoInfoModel;
    UIColor *_cardColor;
    UIColor *_floorColor;
    struct CGPoint _videoCoverLo;
    struct CGPoint _videoTitle;
    struct CGPoint _author;
    struct CGPoint _playTimes;
    struct CGRect _videoFrame;
    struct CGRect _titleFrame;
    struct CGRect _authorIconFrame;
    struct CGRect _authorNameFrame;
    struct CGRect _playCountFrame;
}

@property(nonatomic) struct CGPoint playTimes; // @synthesize playTimes=_playTimes;
@property(nonatomic) struct CGPoint author; // @synthesize author=_author;
@property(nonatomic) struct CGPoint videoTitle; // @synthesize videoTitle=_videoTitle;
@property(nonatomic) struct CGPoint videoCoverLo; // @synthesize videoCoverLo=_videoCoverLo;
@property(nonatomic) struct CGRect playCountFrame; // @synthesize playCountFrame=_playCountFrame;
@property(nonatomic) struct CGRect authorNameFrame; // @synthesize authorNameFrame=_authorNameFrame;
@property(nonatomic) struct CGRect authorIconFrame; // @synthesize authorIconFrame=_authorIconFrame;
@property(nonatomic) struct CGRect titleFrame; // @synthesize titleFrame=_titleFrame;
@property(nonatomic) struct CGRect videoFrame; // @synthesize videoFrame=_videoFrame;
@property(retain, nonatomic) UIColor *floorColor; // @synthesize floorColor=_floorColor;
@property(retain, nonatomic) UIColor *cardColor; // @synthesize cardColor=_cardColor;
@property(nonatomic) _Bool isLast; // @synthesize isLast=_isLast;
@property(nonatomic) _Bool showPadding; // @synthesize showPadding=_showPadding;
@property(retain, nonatomic) TTTVideoInfoModel *videoInfoModel; // @synthesize videoInfoModel=_videoInfoModel;
@property(retain, nonatomic) TTTVideoPositionModel *cardPositionModel; // @synthesize cardPositionModel=_cardPositionModel;
@property(retain, nonatomic) TTTVideoCardInfoModel *cardInfoModel; // @synthesize cardInfoModel=_cardInfoModel;
- (void).cxx_destruct;
- (struct CGPoint)coordinateCovert:(id)arg1;
@property(readonly, nonatomic) _Bool showAuthorInfo;
@property(readonly, nonatomic) _Bool showVideoTitle;
@property(readonly, nonatomic) _Bool showPlaytimes;

@end

