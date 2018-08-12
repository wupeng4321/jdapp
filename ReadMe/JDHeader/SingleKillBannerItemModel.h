//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SecKillBaseModel.h"

@class NSNumber, NSString, SSSJumpModel;

@interface SingleKillBannerItemModel : SecKillBaseModel
{
    NSNumber *_bannerId;
    NSString *_img;
    SSSJumpModel *_jump;
    NSString *_labelImg;
    NSString *_activityName;
    NSString *_operatorWord;
    NSString *_fontColor;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) NSString *operatorWord; // @synthesize operatorWord=_operatorWord;
@property(retain, nonatomic) NSString *activityName; // @synthesize activityName=_activityName;
@property(retain, nonatomic) NSString *labelImg; // @synthesize labelImg=_labelImg;
@property(retain, nonatomic) SSSJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *img; // @synthesize img=_img;
@property(copy, nonatomic) NSNumber *bannerId; // @synthesize bannerId=_bannerId;
- (void).cxx_destruct;

@end

