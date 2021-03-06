//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSString, SHVPBaseListItem, SHVPListAniThumbView, SHVPListGradientView, UIImageView, UILabel;

@interface SHVPList3DBannerItemView : UIView
{
    SHVPListGradientView *_blackBGImgView;
    JDImageView *_mainImg;
    UIView *_contentView;
    SHVPBaseListItem *_liveModel;
    NSString *_startColorStr;
    NSString *_endColorStr;
    UIView *_columnColorView;
    UILabel *_descLabel;
    UILabel *_titleLabel;
    UIView *_statusView;
    UIImageView *_vrIcon;
    SHVPListAniThumbView *_thumbAniView;
    UIImageView *_playBackIcon;
}

@property(retain, nonatomic) UIImageView *playBackIcon; // @synthesize playBackIcon=_playBackIcon;
@property(retain, nonatomic) SHVPListAniThumbView *thumbAniView; // @synthesize thumbAniView=_thumbAniView;
@property(retain, nonatomic) UIImageView *vrIcon; // @synthesize vrIcon=_vrIcon;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *columnColorView; // @synthesize columnColorView=_columnColorView;
@property(copy, nonatomic) NSString *endColorStr; // @synthesize endColorStr=_endColorStr;
@property(copy, nonatomic) NSString *startColorStr; // @synthesize startColorStr=_startColorStr;
@property(retain, nonatomic) SHVPBaseListItem *liveModel; // @synthesize liveModel=_liveModel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
@property(retain, nonatomic) SHVPListGradientView *blackBGImgView; // @synthesize blackBGImgView=_blackBGImgView;
- (void).cxx_destruct;
- (void)configPlayBackIcon;
- (void)configVRIcon;
- (void)configStatus;
- (void)configAniThumb;
- (void)setAlphaToZeroIfNeed;
- (void)updateContent;
- (void)bindData:(id)arg1 startColor:(id)arg2 endColor:(id)arg3;
- (void)customerLayoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

