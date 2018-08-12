//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VBBaseTableViewCell.h"

@class JDImageView, UIButton, UILabel, UIView, VBColumnItemView, VBFollowPromptView, VBFollowVideoModel, VBNetworkDataProvider, VBVideoListCustomButton;

@interface VBFollowTableViewCell : VBBaseTableViewCell
{
    CDUnknownBlockType _clickCall;
    VBFollowPromptView *_followPromtView;
    UIView *_topView;
    JDImageView *_avatarView;
    UILabel *_nameLab;
    UILabel *_infoLab;
    UIButton *_followBtn;
    VBColumnItemView *_videoInfoView;
    UIView *_bottomView;
    VBVideoListCustomButton *_commentButton;
    VBVideoListCustomButton *_likeButton;
    VBFollowVideoModel *_model;
    VBNetworkDataProvider *_dataProvider;
    UIButton *_authorClickBtn;
}

@property(retain, nonatomic) UIButton *authorClickBtn; // @synthesize authorClickBtn=_authorClickBtn;
@property(retain, nonatomic) VBNetworkDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) VBFollowVideoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) VBVideoListCustomButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) VBVideoListCustomButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) VBColumnItemView *videoInfoView; // @synthesize videoInfoView=_videoInfoView;
@property(retain, nonatomic) UIButton *followBtn; // @synthesize followBtn=_followBtn;
@property(retain, nonatomic) UILabel *infoLab; // @synthesize infoLab=_infoLab;
@property(retain, nonatomic) UILabel *nameLab; // @synthesize nameLab=_nameLab;
@property(retain, nonatomic) JDImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
@property(retain, nonatomic) VBFollowPromptView *followPromtView; // @synthesize followPromtView=_followPromtView;
@property(copy, nonatomic) CDUnknownBlockType clickCall; // @synthesize clickCall=_clickCall;
- (void).cxx_destruct;
- (void)setPlayButtonHiden:(_Bool)arg1;
- (void)_shUpdateLikeButtonStatus;
- (void)_shUpdateAttentionStatus;
- (void)likeFailure:(id)arg1;
- (void)processLikeNum:(id)arg1 status:(long long)arg2;
- (void)praiseButtonPressed;
- (void)cellWillEndDisPlay;
- (void)_vbPostAttentionAuthorNotification;
- (void)updateFansNumber;
- (void)attentionButtonPressed;
- (void)authorInfoButtonPressed;
- (void)commentButtonPressed;
- (void)updateView;
- (void)assignValue:(id)arg1;
@property(readonly, nonatomic) __weak UIView *videoSuperView;
- (void)setupViews;
- (void)layoutSubviews;
- (void)dealloc;

@end

