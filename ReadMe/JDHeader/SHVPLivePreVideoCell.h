//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPTableViewCell.h"

@class JDImageView, UILabel, UIView;

@interface SHVPLivePreVideoCell : SHVPTableViewCell
{
    JDImageView *_videoImageView;
    UILabel *_statuLabel;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_bottomLabel;
    UIView *_viewLiveGif;
}

@property(retain, nonatomic) UIView *viewLiveGif; // @synthesize viewLiveGif=_viewLiveGif;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *statuLabel; // @synthesize statuLabel=_statuLabel;
@property(retain, nonatomic) JDImageView *videoImageView; // @synthesize videoImageView=_videoImageView;
- (void).cxx_destruct;
- (void)resumeAnimation;
- (void)assignValue:(id)arg1;
- (void)setupViews;

@end

