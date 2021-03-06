//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FinderVideoBuyJumpProtocol-Protocol.h"

@class FinderVideoBuyJumpModel, NSDictionary, NSString;

@interface FinderVideoBuySimilarArticleItemModel : NSObject <FinderVideoBuyJumpProtocol>
{
    NSString *_articleId;
    NSString *_videoDuration;
    NSString *_videoSize;
    NSString *_videoImg;
    NSString *_vid;
    NSString *_style;
    NSString *_title;
    NSDictionary *_videoInfo;
    FinderVideoBuyJumpModel *_jump;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) FinderVideoBuyJumpModel *jump; // @synthesize jump=_jump;
@property(retain, nonatomic) NSDictionary *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *vid; // @synthesize vid=_vid;
@property(copy, nonatomic) NSString *videoImg; // @synthesize videoImg=_videoImg;
@property(copy, nonatomic) NSString *videoSize; // @synthesize videoSize=_videoSize;
@property(copy, nonatomic) NSString *videoDuration; // @synthesize videoDuration=_videoDuration;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (id)firstJumpObject;
- (void)keyValuesDidFinishConvertingToObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

