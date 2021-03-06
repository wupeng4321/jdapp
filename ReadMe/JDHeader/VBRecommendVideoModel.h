//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VBListBaseContentModel.h"

@class NSString, VBJumpModel, VBRecommendVideoInfo;

@interface VBRecommendVideoModel : VBListBaseContentModel
{
    _Bool _hasLiked;
    long long _articleId;
    VBRecommendVideoInfo *_videoInfo;
    NSString *_title;
    long long _isTop;
    NSString *_videoId;
    NSString *_indexImage;
    NSString *_authorName;
    NSString *_authorPic;
    VBJumpModel *_authorPageJump;
    long long _likeNum;
    NSString *_likeNumStr;
    long long _pageView;
    NSString *_pageViewStr;
    NSString *_skuNumStr;
    NSString *_commentNum;
    NSString *_biimpr;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *biimpr; // @synthesize biimpr=_biimpr;
@property(copy, nonatomic) NSString *commentNum; // @synthesize commentNum=_commentNum;
@property(copy, nonatomic) NSString *skuNumStr; // @synthesize skuNumStr=_skuNumStr;
@property(copy, nonatomic) NSString *pageViewStr; // @synthesize pageViewStr=_pageViewStr;
@property(nonatomic) long long pageView; // @synthesize pageView=_pageView;
@property(copy, nonatomic) NSString *likeNumStr; // @synthesize likeNumStr=_likeNumStr;
@property(nonatomic) long long likeNum; // @synthesize likeNum=_likeNum;
@property(nonatomic) _Bool hasLiked; // @synthesize hasLiked=_hasLiked;
@property(retain, nonatomic) VBJumpModel *authorPageJump; // @synthesize authorPageJump=_authorPageJump;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) long long isTop; // @synthesize isTop=_isTop;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) VBRecommendVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(nonatomic) long long articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (double)cellHeight;
- (void)keyValuesDidFinishConvertingToObject;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

