//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderTemplateBaseModel.h"

@class NSString;

@interface OrderVideoShareModel : OrderTemplateBaseModel
{
    _Bool _canShare;
    NSString *_videoId;
    NSString *_shareImgStr;
    NSString *_pageUrl;
    NSString *_title;
    NSString *_timelineTitle;
    NSString *_weixinFriendsContent;
    NSString *_weixinContent;
    NSString *_weiboContent;
    NSString *_weiboText;
}

@property(retain, nonatomic) NSString *weiboText; // @synthesize weiboText=_weiboText;
@property(retain, nonatomic) NSString *weiboContent; // @synthesize weiboContent=_weiboContent;
@property(retain, nonatomic) NSString *weixinContent; // @synthesize weixinContent=_weixinContent;
@property(retain, nonatomic) NSString *weixinFriendsContent; // @synthesize weixinFriendsContent=_weixinFriendsContent;
@property(retain, nonatomic) NSString *timelineTitle; // @synthesize timelineTitle=_timelineTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(retain, nonatomic) NSString *shareImgStr; // @synthesize shareImgStr=_shareImgStr;
@property(retain, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool canShare; // @synthesize canShare=_canShare;
- (void).cxx_destruct;
- (void)setShareData:(id)arg1;
- (void)dealloc;

@end

