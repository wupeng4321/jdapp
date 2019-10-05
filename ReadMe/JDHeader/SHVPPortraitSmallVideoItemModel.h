//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPPortraitSmallVideoBaseModel.h"

@class NSArray, NSString, SHVPPortraitSmallVideoJumpModel, SHVPPortraitSmallVideoPlayBackModel, ShareModel, VideoInfo;

@interface SHVPPortraitSmallVideoItemModel : SHVPPortraitSmallVideoBaseModel
{
    _Bool _hasFond;
    _Bool _hasFollowed;
    _Bool _hasStore;
    _Bool _reportSwitch;
    _Bool _needShowMunu;
    NSString *_ItemId;
    NSString *_title;
    NSString *_indexImage;
    NSString *_blurredImg;
    NSString *_userName;
    NSString *_userPic;
    NSString *_authorId;
    SHVPPortraitSmallVideoPlayBackModel *_playInfo;
    NSString *_fondNumStr;
    unsigned long long _fondNum;
    long long _skuNum;
    unsigned long long _commentNum;
    NSString *_commentNumStr;
    SHVPPortraitSmallVideoJumpModel *_reportJump;
    SHVPPortraitSmallVideoJumpModel *_authorJump;
    ShareModel *_shareInfo;
    NSArray *_tags;
    NSString *_roomId;
    NSString *_source;
    NSString *_subPozitionStr;
    NSString *_subPosition;
    NSString *_pin;
    NSString *_unionId;
    NSString *_style;
    NSString *_channel;
    NSString *_commentBId;
    NSString *_commentChannelId;
    NSString *_commentType;
    long long _adaptationType;
    long long _layoutType;
    NSString *_authorName;
    NSString *_authorPic;
    long long _publishTime;
    long long _screenType;
    NSArray *_skuList;
    VideoInfo *_videoInfo;
    struct CGSize _titleSize;
    struct CGSize _authorNameSize;
    struct CGPoint _videoViewCenter;
    struct CGRect _videoViewRect;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(nonatomic) struct CGPoint videoViewCenter; // @synthesize videoViewCenter=_videoViewCenter;
@property(nonatomic) struct CGRect videoViewRect; // @synthesize videoViewRect=_videoViewRect;
@property(retain, nonatomic) VideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) NSArray *skuList; // @synthesize skuList=_skuList;
@property(nonatomic) long long screenType; // @synthesize screenType=_screenType;
@property(nonatomic) long long publishTime; // @synthesize publishTime=_publishTime;
@property(nonatomic) struct CGSize authorNameSize; // @synthesize authorNameSize=_authorNameSize;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property(nonatomic) long long adaptationType; // @synthesize adaptationType=_adaptationType;
@property(nonatomic) _Bool needShowMunu; // @synthesize needShowMunu=_needShowMunu;
@property(copy, nonatomic) NSString *commentType; // @synthesize commentType=_commentType;
@property(copy, nonatomic) NSString *commentChannelId; // @synthesize commentChannelId=_commentChannelId;
@property(copy, nonatomic) NSString *commentBId; // @synthesize commentBId=_commentBId;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(copy, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *subPosition; // @synthesize subPosition=_subPosition;
@property(copy, nonatomic) NSString *subPozitionStr; // @synthesize subPozitionStr=_subPozitionStr;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(retain, nonatomic) ShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) SHVPPortraitSmallVideoJumpModel *authorJump; // @synthesize authorJump=_authorJump;
@property(retain, nonatomic) SHVPPortraitSmallVideoJumpModel *reportJump; // @synthesize reportJump=_reportJump;
@property(nonatomic) _Bool reportSwitch; // @synthesize reportSwitch=_reportSwitch;
@property(nonatomic) _Bool hasStore; // @synthesize hasStore=_hasStore;
@property(nonatomic) _Bool hasFollowed; // @synthesize hasFollowed=_hasFollowed;
@property(copy, nonatomic) NSString *commentNumStr; // @synthesize commentNumStr=_commentNumStr;
@property(nonatomic) unsigned long long commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) long long skuNum; // @synthesize skuNum=_skuNum;
@property(nonatomic) _Bool hasFond; // @synthesize hasFond=_hasFond;
@property(nonatomic) unsigned long long fondNum; // @synthesize fondNum=_fondNum;
@property(copy, nonatomic) NSString *fondNumStr; // @synthesize fondNumStr=_fondNumStr;
@property(retain, nonatomic) SHVPPortraitSmallVideoPlayBackModel *playInfo; // @synthesize playInfo=_playInfo;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *userPic; // @synthesize userPic=_userPic;
@property(copy, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) NSString *blurredImg; // @synthesize blurredImg=_blurredImg;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(nonatomic) struct CGSize titleSize; // @synthesize titleSize=_titleSize;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *ItemId; // @synthesize ItemId=_ItemId;
- (void).cxx_destruct;
- (id)articleShareWeiBoContent;
- (id)articleFirstSectionContentLength:(long long)arg1;
- (id)fetchShareModel;
- (void)keyValuesDidFinishConvertingToObject;
- (id)init;

@end
