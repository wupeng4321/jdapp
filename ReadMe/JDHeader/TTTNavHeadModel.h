//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSNumber, NSString, TTTShareModel;

@interface TTTNavHeadModel : TTTBaseModel
{
    NSString *_showTitle;
    NSString *_nameType;
    NSString *_name;
    NSString *_imgUrl;
    NSString *_opimgUrl;
    NSString *_slideUpBgColor;
    NSString *_titleBgImgUrl;
    NSNumber *_cartButton;
    NSNumber *_searchButton;
    NSNumber *_msgCenterButton;
    NSNumber *_homeButton;
    NSNumber *_shareButton;
    NSNumber *_favShopButton;
    NSNumber *_showSSImg;
    NSNumber *_calendarButton;
    NSNumber *_showFeedbackEntry;
    NSString *_ssType;
    TTTShareModel *_shareInfo;
    NSString *_slideUpIconFontColor;
    NSString *_immerIconFontColor;
}

@property(retain, nonatomic) NSString *immerIconFontColor; // @synthesize immerIconFontColor=_immerIconFontColor;
@property(retain, nonatomic) NSString *slideUpIconFontColor; // @synthesize slideUpIconFontColor=_slideUpIconFontColor;
@property(retain, nonatomic) TTTShareModel *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(copy, nonatomic) NSString *ssType; // @synthesize ssType=_ssType;
@property(copy, nonatomic) NSNumber *showFeedbackEntry; // @synthesize showFeedbackEntry=_showFeedbackEntry;
@property(copy, nonatomic) NSNumber *calendarButton; // @synthesize calendarButton=_calendarButton;
@property(copy, nonatomic) NSNumber *showSSImg; // @synthesize showSSImg=_showSSImg;
@property(copy, nonatomic) NSNumber *favShopButton; // @synthesize favShopButton=_favShopButton;
@property(copy, nonatomic) NSNumber *shareButton; // @synthesize shareButton=_shareButton;
@property(copy, nonatomic) NSNumber *homeButton; // @synthesize homeButton=_homeButton;
@property(copy, nonatomic) NSNumber *msgCenterButton; // @synthesize msgCenterButton=_msgCenterButton;
@property(copy, nonatomic) NSNumber *searchButton; // @synthesize searchButton=_searchButton;
@property(copy, nonatomic) NSNumber *cartButton; // @synthesize cartButton=_cartButton;
@property(copy, nonatomic) NSString *titleBgImgUrl; // @synthesize titleBgImgUrl=_titleBgImgUrl;
@property(copy, nonatomic) NSString *slideUpBgColor; // @synthesize slideUpBgColor=_slideUpBgColor;
@property(copy, nonatomic) NSString *opimgUrl; // @synthesize opimgUrl=_opimgUrl;
@property(copy, nonatomic) NSString *imgUrl; // @synthesize imgUrl=_imgUrl;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *nameType; // @synthesize nameType=_nameType;
@property(copy, nonatomic) NSString *showTitle; // @synthesize showTitle=_showTitle;
- (void).cxx_destruct;

@end
