//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WareCommentBaseCell.h"

#import "WareCommentVideoToastViewDelegate-Protocol.h"

@class JDButton, JDImageView, NSString, UILabel, UIView, WareCommentFoldView, WareCommentPlayerView, WareCommentVideoInfoModel, WareCommentVideoToastView;
@protocol WareCommentBaseDelegate;

@interface WareCommentVideoCell : WareCommentBaseCell <WareCommentVideoToastViewDelegate>
{
    JDImageView *_userHeaderView;
    UILabel *_userInfoLabel;
    UILabel *_postDate;
    UILabel *_commentDetail;
    JDImageView *_imageview;
    UILabel *_timeLabel;
    struct CGRect _playViewRect;
    struct CGRect _selfRect;
    double _beginTime;
    JDButton *_backgroundButton;
    UIView *_mainView;
    WareCommentFoldView *_foldView;
    NSString *_testId;
    id <WareCommentBaseDelegate> _delegate;
    WareCommentVideoInfoModel *_videoModel;
    WareCommentPlayerView *_playView;
    WareCommentVideoToastView *_videoTostView;
}

@property(retain, nonatomic) WareCommentVideoToastView *videoTostView; // @synthesize videoTostView=_videoTostView;
@property(retain, nonatomic) WareCommentPlayerView *playView; // @synthesize playView=_playView;
@property(retain, nonatomic) WareCommentVideoInfoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(nonatomic) __weak id <WareCommentBaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
- (void).cxx_destruct;
- (id)getDisplayImageView;
- (void)didTapCheckButtonVideoToastView:(_Bool)arg1;
- (void)didTapComitVideoToastView:(_Bool)arg1;
- (void)didTapCancelVideoToastView;
- (void)layoutSubviews;
- (void)gotoBigImageView;
- (void)play;
- (void)Releasevideo;
- (_Bool)canPlayPlayer:(id)arg1;
- (_Bool)setPlayerPlay:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)setCurrentPlayer:(id)arg1;
- (_Bool)setPlayerRect:(_Bool)arg1;
- (void)stopPlayer;
- (void)expoSingleTime;
- (void)expoVisibelSingleTime;
- (void)setBeginTime;
- (void)scrollForSingTime;
- (void)positionChange;
- (void)foldTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
