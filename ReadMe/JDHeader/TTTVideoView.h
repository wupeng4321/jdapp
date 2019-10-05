//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "TTTVideoPlayDelegate-Protocol.h"

@class JDImageView, NSString, TTTFloorModel, TTTVideoCoverView, TTTVideoInfoConfigModel, TTTVideoInfoModel, UILabel, UIView;
@protocol TTTVideoPlayDelegate;

@interface TTTVideoView : TTTBaseView <TTTVideoPlayDelegate, TTTBaseViewProtocol>
{
    id <TTTVideoPlayDelegate> _delegate;
    UILabel *_titleLabel;
    UILabel *_authorLabel;
    JDImageView *_authorIcon;
    UILabel *_playCountLabel;
    TTTVideoCoverView *_videoView;
    TTTVideoInfoModel *_videoModel;
    TTTVideoInfoConfigModel *_configModel;
    TTTFloorModel *_viewData;
    long long _videoPlayType;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) long long videoPlayType; // @synthesize videoPlayType=_videoPlayType;
@property(retain, nonatomic) TTTFloorModel *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) TTTVideoInfoConfigModel *configModel; // @synthesize configModel=_configModel;
@property(retain, nonatomic) TTTVideoInfoModel *videoModel; // @synthesize videoModel=_videoModel;
@property(retain, nonatomic) TTTVideoCoverView *videoView; // @synthesize videoView=_videoView;
@property(retain, nonatomic) UILabel *playCountLabel; // @synthesize playCountLabel=_playCountLabel;
@property(retain, nonatomic) JDImageView *authorIcon; // @synthesize authorIcon=_authorIcon;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TTTVideoPlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)currentVideoPlayerEventType;
- (void)currentVideoPlayerCanPlay:(_Bool)arg1;
- (void)viewDidEndDisplaying;
- (void)videoViewTapped;
- (void)postNoti;
- (void)reportPlayCount;
- (void)p_endPlay;
- (void)play:(_Bool)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)readytoPlay;
- (void)configColor;
- (void)configValue;
- (void)configLayout;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
