//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VBBaseTableViewCell.h"

@class JDImageView, UIImageView, UILabel, UITapGestureRecognizer, UIView, VBNetworkDataProvider, VBRecommendVideoModel, VBVideoListCustomButton;

@interface VBVideoTableViewCell : VBBaseTableViewCell
{
    CDUnknownBlockType _clickCall;
    UIView *_customerView;
    JDImageView *_bgImageView;
    UIView *_customerMaskView;
    UILabel *_titleLab;
    UIImageView *_eyeImgView;
    UILabel *_playedTimesLabel;
    UIImageView *_playImageView;
    UILabel *_timeDurationLabel;
    JDImageView *_authorImageView;
    UILabel *_authorLabel;
    UIView *_authorTapView;
    VBVideoListCustomButton *_commentButton;
    VBVideoListCustomButton *_praiseButton;
    VBVideoListCustomButton *_attentionButton;
    VBRecommendVideoModel *_model;
    UITapGestureRecognizer *_authorHeaderTap;
    UITapGestureRecognizer *_authorTitleTap;
    VBNetworkDataProvider *_dataProvider;
}

@property(retain, nonatomic) VBNetworkDataProvider *dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) UITapGestureRecognizer *authorTitleTap; // @synthesize authorTitleTap=_authorTitleTap;
@property(retain, nonatomic) UITapGestureRecognizer *authorHeaderTap; // @synthesize authorHeaderTap=_authorHeaderTap;
@property(retain, nonatomic) VBRecommendVideoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) VBVideoListCustomButton *attentionButton; // @synthesize attentionButton=_attentionButton;
@property(retain, nonatomic) VBVideoListCustomButton *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(retain, nonatomic) VBVideoListCustomButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) UIView *authorTapView; // @synthesize authorTapView=_authorTapView;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) JDImageView *authorImageView; // @synthesize authorImageView=_authorImageView;
@property(retain, nonatomic) UILabel *timeDurationLabel; // @synthesize timeDurationLabel=_timeDurationLabel;
@property(retain, nonatomic) UIImageView *playImageView; // @synthesize playImageView=_playImageView;
@property(retain, nonatomic) UILabel *playedTimesLabel; // @synthesize playedTimesLabel=_playedTimesLabel;
@property(retain, nonatomic) UIImageView *eyeImgView; // @synthesize eyeImgView=_eyeImgView;
@property(retain, nonatomic) UILabel *titleLab; // @synthesize titleLab=_titleLab;
@property(retain, nonatomic) UIView *customerMaskView; // @synthesize customerMaskView=_customerMaskView;
@property(retain, nonatomic) JDImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *customerView; // @synthesize customerView=_customerView;
@property(copy, nonatomic) CDUnknownBlockType clickCall; // @synthesize clickCall=_clickCall;
- (void).cxx_destruct;
- (void)likeFailure:(id)arg1;
- (void)processLikeNum:(id)arg1 status:(long long)arg2;
- (void)praiseButtonPressed;
- (void)cellWillEndDisPlay;
- (void)setPlayButtonHiden:(_Bool)arg1;
- (void)_shUpdateAttentionStatus;
- (void)_vbPostAttentionAuthorNotification;
- (void)attentionButtonPressed;
- (void)commentButtonPressed;
- (void)tapAvatarEvent;
- (void)tapAuthorNameEvent;
- (void)updateView;
- (void)assignValue:(id)arg1;
- (void)setupViews;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)dealloc;

@end

