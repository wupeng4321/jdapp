//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WanderBaseModel.h"

@class NSString, WanderShopCirclePublishInfoModel;

@interface WanderShopCircleInfoListModel : WanderBaseModel
{
    NSString *_summary;
    NSString *_isChoice;
    NSString *_title;
    NSString *_pageView;
    NSString *_tag;
    NSString *_image;
    NSString *_isTop;
    NSString *_destId;
    NSString *_type;
    WanderShopCirclePublishInfoModel *_pubInfo;
}

@property(retain, nonatomic) WanderShopCirclePublishInfoModel *pubInfo; // @synthesize pubInfo=_pubInfo;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *destId; // @synthesize destId=_destId;
@property(readonly, copy, nonatomic) NSString *isTop; // @synthesize isTop=_isTop;
@property(readonly, copy, nonatomic) NSString *image; // @synthesize image=_image;
@property(readonly, copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, copy, nonatomic) NSString *pageView; // @synthesize pageView=_pageView;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *isChoice; // @synthesize isChoice=_isChoice;
@property(readonly, copy, nonatomic) NSString *summary; // @synthesize summary=_summary;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long itemHeight;

@end
