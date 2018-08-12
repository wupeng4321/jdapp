//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, SHVPBaseListItem, SHVPListLivingIndicator, UIButton, UILabel, UIView;

@interface SHVPSSSListCell : UITableViewCell
{
    UIButton *_remindButton;
    SHVPBaseListItem *_cellModel;
    JDImageView *_avatarImg;
    UILabel *_userNameLabel;
    JDImageView *_mainImg;
    UIView *_statusView;
    UILabel *_titleLabel;
    UIView *_blackBGView;
    UILabel *_subTitleLabel;
    SHVPListLivingIndicator *_livingIndicator;
}

@property(retain, nonatomic) SHVPListLivingIndicator *livingIndicator; // @synthesize livingIndicator=_livingIndicator;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) UIView *blackBGView; // @synthesize blackBGView=_blackBGView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) JDImageView *avatarImg; // @synthesize avatarImg=_avatarImg;
@property(retain, nonatomic) SHVPBaseListItem *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UIButton *remindButton; // @synthesize remindButton=_remindButton;
- (void).cxx_destruct;
- (void)configPlaybackStatus;
- (void)configOnGoingStatus;
- (void)configComingStatus;
- (void)configPlayback;
- (void)configOnGoing;
- (void)configComingSoon;
- (void)configByStatus;
- (void)configRemindButtonUI;
- (void)configLivingIndicator;
- (void)configSubTitleLabel;
- (void)updateCellContent;
- (void)bindCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

