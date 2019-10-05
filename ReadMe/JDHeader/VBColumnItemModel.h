//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, VBJumpModel, VBPlayBackModel, VBVideoInfoModel;

@interface VBColumnItemModel : NSObject <NSCopying, NSCoding>
{
    NSString *_articleId;
    NSString *_authorId;
    NSString *_title;
    NSString *_indexImage;
    NSString *_pageView;
    NSString *_videoViewNumStr;
    VBPlayBackModel *_playBack;
    VBVideoInfoModel *_videoInfo;
    VBJumpModel *_jump;
}

@property(retain, nonatomic) VBJumpModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) VBVideoInfoModel *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(retain, nonatomic) VBPlayBackModel *playBack; // @synthesize playBack=_playBack;
@property(copy, nonatomic) NSString *videoViewNumStr; // @synthesize videoViewNumStr=_videoViewNumStr;
@property(copy, nonatomic) NSString *pageView; // @synthesize pageView=_pageView;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
