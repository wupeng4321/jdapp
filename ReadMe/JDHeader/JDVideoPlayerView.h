//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDPlayerBottomBarDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, JDVideoPlayerBottomBar, NSString, NSURL, UIButton, UITapGestureRecognizer;
@protocol JDVideoPlayerViewDelegate;

@interface JDVideoPlayerView : UIView <JDPlayerBottomBarDelegate>
{
    _Bool _isNeedBottomBar;
    _Bool _isNeedPlayButton;
    _Bool _autoDeactive;
    _Bool _autorotation;
    _Bool _isFullscreenMode;
    _Bool _assetLoaded;
    _Bool _accessedPlay;
    _Bool _isPlaying;
    id <JDVideoPlayerViewDelegate> _delegate;
    AVPlayer *_avPlayer;
    AVPlayerLayer *_avPlayerLayer;
    AVPlayerItem *_playerItem;
    NSURL *_videoURL;
    NSString *_assetIdentifier;
    UIButton *_playButton;
    UITapGestureRecognizer *_tap;
    JDVideoPlayerBottomBar *_bottomBar;
    id _timerObserver;
    double _totalSeconds;
    struct CGRect _originFrame;
}

+ (Class)layerClass;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool accessedPlay; // @synthesize accessedPlay=_accessedPlay;
@property(nonatomic) _Bool assetLoaded; // @synthesize assetLoaded=_assetLoaded;
@property(nonatomic) double totalSeconds; // @synthesize totalSeconds=_totalSeconds;
@property(nonatomic) struct CGRect originFrame; // @synthesize originFrame=_originFrame;
@property(nonatomic) _Bool isFullscreenMode; // @synthesize isFullscreenMode=_isFullscreenMode;
@property(retain, nonatomic) id timerObserver; // @synthesize timerObserver=_timerObserver;
@property(retain, nonatomic) JDVideoPlayerBottomBar *bottomBar; // @synthesize bottomBar=_bottomBar;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) NSString *assetIdentifier; // @synthesize assetIdentifier=_assetIdentifier;
@property(retain, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayerLayer *avPlayerLayer; // @synthesize avPlayerLayer=_avPlayerLayer;
@property(retain, nonatomic) AVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
@property(nonatomic) _Bool autorotation; // @synthesize autorotation=_autorotation;
@property(nonatomic) _Bool autoDeactive; // @synthesize autoDeactive=_autoDeactive;
@property(nonatomic) __weak id <JDVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isNeedPlayButton; // @synthesize isNeedPlayButton=_isNeedPlayButton;
@property(nonatomic) _Bool isNeedBottomBar; // @synthesize isNeedBottomBar=_isNeedBottomBar;
- (void).cxx_destruct;
- (void)setOrientation:(long long)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)interruptionListenner:(id)arg1;
- (struct CGSize)videoSizeWithAsset:(id)arg1;
- (_Bool)isInPreviewArea:(id)arg1;
- (id)timeFormat:(long long)arg1;
- (void)eventChanged:(unsigned long long)arg1 info:(id)arg2;
- (void)setVideoGravity:(id)arg1;
- (void)playerBottomBar:(id)arg1 progressBeganChange:(float)arg2;
- (void)playerBottomBar:(id)arg1 progressChanged:(float)arg2;
- (void)playerBottomBar:(id)arg1 clickedRightBtn:(id)arg2;
- (void)playerBottomBar:(id)arg1 clickedLeftBtn:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)tapAction:(id)arg1;
- (void)hideBottomBar:(_Bool)arg1;
- (void)exitOrInFullScreen:(id)arg1;
- (void)playButtonClick:(id)arg1;
- (void)seekToTheTimeValue:(double)arg1;
- (void)prepareToPlay;
- (void)playSetting;
- (void)pauseSetting;
- (void)stopSetting;
- (void)stop;
- (void)pause;
- (void)play;
- (void)replay;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)destroyPlayer;
- (void)creatPlayer;
- (void)requestPlayerItemWithLocalIdentifier:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 videoURL:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 assetIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
