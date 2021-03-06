//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, LaunchVideoPlayBackView, NSString, NSURL;

@interface LaunchVideoPlayer : UIView
{
    LaunchVideoPlayBackView *_playerView;
    _Bool _isPlaying;
    _Bool _openAudio;
    CDUnknownBlockType _playCompletionBlock;
    CDUnknownBlockType _readyToPlayBlock;
    NSURL *_url;
    NSString *_videoId;
    NSString *_playType;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
}

@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(copy, nonatomic) NSString *playType; // @synthesize playType=_playType;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) _Bool openAudio; // @synthesize openAudio=_openAudio;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy, nonatomic) CDUnknownBlockType readyToPlayBlock; // @synthesize readyToPlayBlock=_readyToPlayBlock;
@property(copy, nonatomic) CDUnknownBlockType playCompletionBlock; // @synthesize playCompletionBlock=_playCompletionBlock;
@property(readonly, nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void).cxx_destruct;
- (void)reportPerformance;
- (void)applicationDidEnterBackground;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)destory;
- (void)pause;
- (void)moviePlayDidEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)addItemObserver;
- (void)removeItemObserver;
@property(readonly, nonatomic) double duration;
- (void)replay;
- (void)play;
- (void)setupPlayer;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

