//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommentSuperModel.h"

@class NSString;

@interface CommentVideoInfoListModel : CommentSuperModel
{
    NSString *_commentDateVideo;
    NSString *_videoImgUrl;
    NSString *_largeVideoImgUrl;
    NSString *_videoUrl;
    NSString *_videoTime;
    NSString *_commentContentVideo;
    NSString *_videoId;
    NSString *_SkuId;
    NSString *_videoPlayAddress;
}

@property(copy, nonatomic) NSString *videoPlayAddress; // @synthesize videoPlayAddress=_videoPlayAddress;
@property(copy, nonatomic) NSString *SkuId; // @synthesize SkuId=_SkuId;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(copy, nonatomic) NSString *commentContentVideo; // @synthesize commentContentVideo=_commentContentVideo;
@property(copy, nonatomic) NSString *videoTime; // @synthesize videoTime=_videoTime;
@property(copy, nonatomic) NSString *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(copy, nonatomic) NSString *largeVideoImgUrl; // @synthesize largeVideoImgUrl=_largeVideoImgUrl;
@property(copy, nonatomic) NSString *videoImgUrl; // @synthesize videoImgUrl=_videoImgUrl;
@property(copy, nonatomic) NSString *commentDateVideo; // @synthesize commentDateVideo=_commentDateVideo;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
