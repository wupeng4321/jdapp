//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, SHVPSecKillLivePreModel, UIButton, UIImageView, UILabel;
@protocol SHVPSecKillLivePreViewDelegate;

@interface SHVPSecKillLivePreView : UIView
{
    id <SHVPSecKillLivePreViewDelegate> _delegate;
    SHVPSecKillLivePreModel *_model;
    JDImageView *_backgroundImageView;
    UIImageView *_maskImageView;
    UILabel *_preLabel;
    UIButton *_shareBtn;
    UIButton *_closeBtn;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_timeLabel;
    UIButton *_remindBtn;
}

@property(retain, nonatomic) UIButton *remindBtn; // @synthesize remindBtn=_remindBtn;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UILabel *preLabel; // @synthesize preLabel=_preLabel;
@property(retain, nonatomic) UIImageView *maskImageView; // @synthesize maskImageView=_maskImageView;
@property(retain, nonatomic) JDImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) SHVPSecKillLivePreModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <SHVPSecKillLivePreViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showSubViewAfterLoadData;
- (void)hideSubViewBeforeEnterLiveRoom;
- (void)hideSubView;
- (void)touchRemindBtn:(id)arg1;
- (void)touchCloseBtn:(id)arg1;
- (void)touchShareBtn:(id)arg1;
- (void)resetRemindBtn;
- (void)setData:(id)arg1;
- (id)init;

@end
