//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MyJdContentFocusedCellModel : NSObject
{
    NSString *_contentId;
    NSString *_contentType;
    NSString *_contentText;
    NSString *_contentSubText;
    NSString *_attentionText;
    NSString *_contentImage;
    NSString *_contentSkipid;
    NSString *_attentionIcon;
    NSString *_contentLabel;
    NSNumber *_contentVideo;
    NSString *_videoImage;
    NSNumber *_contentStatus;
    NSString *_des;
    NSString *_queryId;
}

@property(copy, nonatomic) NSString *queryId; // @synthesize queryId=_queryId;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(retain, nonatomic) NSNumber *contentStatus; // @synthesize contentStatus=_contentStatus;
@property(copy, nonatomic) NSString *videoImage; // @synthesize videoImage=_videoImage;
@property(retain, nonatomic) NSNumber *contentVideo; // @synthesize contentVideo=_contentVideo;
@property(copy, nonatomic) NSString *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(copy, nonatomic) NSString *attentionIcon; // @synthesize attentionIcon=_attentionIcon;
@property(copy, nonatomic) NSString *contentSkipid; // @synthesize contentSkipid=_contentSkipid;
@property(copy, nonatomic) NSString *contentImage; // @synthesize contentImage=_contentImage;
@property(copy, nonatomic) NSString *attentionText; // @synthesize attentionText=_attentionText;
@property(copy, nonatomic) NSString *contentSubText; // @synthesize contentSubText=_contentSubText;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;

@end

