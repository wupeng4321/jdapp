//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface COCheckoutRouterShareManagerInfoReq : NSObject
{
    NSString *_title;
    NSString *_timelineTitle;
    NSString *_pageUrl;
    NSString *_shareImgStr;
    NSString *_shareImgStrName;
    NSString *_weiBoContent;
    NSString *_weiXinFriendsContent;
    NSString *_weiXinContent;
    NSString *_weiboText;
    NSArray *_shareChannelParamArray;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSArray *shareChannelParamArray; // @synthesize shareChannelParamArray=_shareChannelParamArray;
@property(copy, nonatomic) NSString *weiboText; // @synthesize weiboText=_weiboText;
@property(copy, nonatomic) NSString *weiXinContent; // @synthesize weiXinContent=_weiXinContent;
@property(copy, nonatomic) NSString *weiXinFriendsContent; // @synthesize weiXinFriendsContent=_weiXinFriendsContent;
@property(copy, nonatomic) NSString *weiBoContent; // @synthesize weiBoContent=_weiBoContent;
@property(copy, nonatomic) NSString *shareImgStrName; // @synthesize shareImgStrName=_shareImgStrName;
@property(copy, nonatomic) NSString *shareImgStr; // @synthesize shareImgStr=_shareImgStr;
@property(copy, nonatomic) NSString *pageUrl; // @synthesize pageUrl=_pageUrl;
@property(copy, nonatomic) NSString *timelineTitle; // @synthesize timelineTitle=_timelineTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

