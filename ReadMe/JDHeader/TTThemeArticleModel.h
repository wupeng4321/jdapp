//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol-Protocol.h"

@class NSString, TTTCommonConfigModel, TTTJumpModel;

@interface TTThemeArticleModel : TTTBaseModel <TTTJumpProtocol>
{
    _Bool _isShowPV;
    _Bool _isShowPublisher;
    _Bool _isShowVideoFlag;
    _Bool _isShowContent;
    _Bool _isShowSL;
    _Bool _isShowSubtitle;
    _Bool _isShowSkuNum;
    _Bool _haveMargin;
    NSString *_content;
    NSString *_browseNum;
    NSString *_pictureUrl;
    NSString *_name;
    NSString *_showPV;
    NSString *_showPublisher;
    NSString *_authorName;
    NSString *_authorPic;
    NSString *_videoFlag;
    NSString *_style;
    NSString *_PVColor;
    NSString *_isLast;
    NSString *_showSL;
    NSString *_showSubtitle;
    NSString *_showSkuNum;
    NSString *_skuNum;
    NSString *_margin;
    TTTJumpModel *_jump;
    TTTCommonConfigModel *_config;
}

@property(retain, nonatomic) TTTCommonConfigModel *config; // @synthesize config=_config;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(nonatomic) _Bool haveMargin; // @synthesize haveMargin=_haveMargin;
@property(nonatomic) _Bool isShowSkuNum; // @synthesize isShowSkuNum=_isShowSkuNum;
@property(nonatomic) _Bool isShowSubtitle; // @synthesize isShowSubtitle=_isShowSubtitle;
@property(nonatomic) _Bool isShowSL; // @synthesize isShowSL=_isShowSL;
@property(nonatomic) _Bool isShowContent; // @synthesize isShowContent=_isShowContent;
@property(nonatomic) _Bool isShowVideoFlag; // @synthesize isShowVideoFlag=_isShowVideoFlag;
@property(nonatomic) _Bool isShowPublisher; // @synthesize isShowPublisher=_isShowPublisher;
@property(nonatomic) _Bool isShowPV; // @synthesize isShowPV=_isShowPV;
@property(copy, nonatomic) NSString *margin; // @synthesize margin=_margin;
@property(copy, nonatomic) NSString *skuNum; // @synthesize skuNum=_skuNum;
@property(copy, nonatomic) NSString *showSkuNum; // @synthesize showSkuNum=_showSkuNum;
@property(retain, nonatomic) NSString *showSubtitle; // @synthesize showSubtitle=_showSubtitle;
@property(retain, nonatomic) NSString *showSL; // @synthesize showSL=_showSL;
@property(copy, nonatomic) NSString *isLast; // @synthesize isLast=_isLast;
@property(copy, nonatomic) NSString *PVColor; // @synthesize PVColor=_PVColor;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *videoFlag; // @synthesize videoFlag=_videoFlag;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *showPublisher; // @synthesize showPublisher=_showPublisher;
@property(copy, nonatomic) NSString *showPV; // @synthesize showPV=_showPV;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(copy, nonatomic) NSString *browseNum; // @synthesize browseNum=_browseNum;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
- (void).cxx_destruct;
- (id)firstJumpObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

