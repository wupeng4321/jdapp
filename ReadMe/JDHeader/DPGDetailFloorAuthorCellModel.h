//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "DPGDetailElementModel.h"

@class NSString;

@interface DPGDetailFloorAuthorCellModel : DPGDetailElementModel
{
    NSString *_mAuthorName;
    NSString *_mAuthorPic;
    NSString *_mFollowNumStr;
    NSString *_mAuthorArticleNum;
    NSString *_mFollowButtonImg;
    NSString *_mUnFollowButtonImg;
}

@property(copy, nonatomic) NSString *mUnFollowButtonImg; // @synthesize mUnFollowButtonImg=_mUnFollowButtonImg;
@property(copy, nonatomic) NSString *mFollowButtonImg; // @synthesize mFollowButtonImg=_mFollowButtonImg;
@property(copy, nonatomic) NSString *mAuthorArticleNum; // @synthesize mAuthorArticleNum=_mAuthorArticleNum;
@property(copy, nonatomic) NSString *mFollowNumStr; // @synthesize mFollowNumStr=_mFollowNumStr;
@property(copy, nonatomic) NSString *mAuthorPic; // @synthesize mAuthorPic=_mAuthorPic;
@property(copy, nonatomic) NSString *mAuthorName; // @synthesize mAuthorName=_mAuthorName;
- (void).cxx_destruct;
- (double)cellHeight;

@end

