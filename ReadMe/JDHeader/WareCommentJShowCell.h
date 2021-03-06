//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WareCommentBaseCell.h"

@class JDImageView, NSMutableArray, NSString, UIImageView, UILabel, UITapGestureRecognizer, UIView, WareCommentJShowInfoModel;
@protocol WareCommentBaseDelegate;

@interface WareCommentJShowCell : WareCommentBaseCell
{
    JDImageView *_bannnerImageView;
    UIView *_mainView;
    UIImageView *_iconImage;
    UILabel *_titleLabel;
    UILabel *_buttonLabel;
    UIImageView *_rightImageView;
    UIView *_imagesView;
    NSMutableArray *_playerArray;
    struct CGRect _playViewRect;
    _Bool _shouldReplay;
    UITapGestureRecognizer *_mainTap;
    NSString *_testId;
    WareCommentJShowInfoModel *_model;
    id <WareCommentBaseDelegate> _delegate;
}

@property(nonatomic) __weak id <WareCommentBaseDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WareCommentJShowInfoModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *testId; // @synthesize testId=_testId;
- (void).cxx_destruct;
- (void)gotoMainPicView:(id)arg1;
- (void)headerTap:(id)arg1;
- (void)picsTap:(id)arg1;
- (void)play:(id)arg1;
- (void)Releasevideo;
- (void)prepareForReuse;
- (_Bool)canPlayPlayer:(id)arg1;
- (_Bool)setPlayerPlay:(id)arg1 withRect:(struct CGRect)arg2;
- (_Bool)setCurrentPlayer:(id)arg1;
- (void)setPlayerPlay:(id)arg1 withOldRect:(struct CGRect)arg2 isPlay:(_Bool)arg3;
- (_Bool)setPlayerRect:(_Bool)arg1;
- (void)stopPlayer;
- (void)playOrStopPlayerWithOldRect:(struct CGRect)arg1;
- (void)positionChange;
- (void)imageviewTap:(id)arg1;
- (void)mainTapEvent:(id)arg1;
- (void)bannerTapEvent:(id)arg1;
- (id)getPlayerView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

