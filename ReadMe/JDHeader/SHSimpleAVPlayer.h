//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, NSDate, NSError, NSString, NSURL, SHMPAVPlayBackView;

@interface SHSimpleAVPlayer : UIView
{
    NSDate *_beginTime;
    NSDate *_readyTime;
    NSString *_status;
    long long _stuckCnt;
    double _stuckTime;
    NSDate *_lastStuckTime;
    NSError *_error;
    _Bool _openAudio;
    _Bool _isPlayEnd;
    NSURL *_url;
    double _duration;
    NSString *_videoId;
    CDUnknownBlockType _keyValuesCompletion;
    CDUnknownBlockType _readyToPlayCallback;
    CDUnknownBlockType _stalledCallback;
    CDUnknownBlockType _playEndCallback;
    CDUnknownBlockType _keepUpCallback;
    CDUnknownBlockType _playErrorCallback;
    SHMPAVPlayBackView *_playerView;
    AVPlayer *_player;
    AVPlayerItem *_currentPlayerItem;
}

@property(nonatomic) _Bool isPlayEnd; // @synthesize isPlayEnd=_isPlayEnd;
@property(retain, nonatomic) AVPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) SHMPAVPlayBackView *playerView; // @synthesize playerView=_playerView;
@property(copy, nonatomic) CDUnknownBlockType playErrorCallback; // @synthesize playErrorCallback=_playErrorCallback;
@property(copy, nonatomic) CDUnknownBlockType keepUpCallback; // @synthesize keepUpCallback=_keepUpCallback;
@property(copy, nonatomic) CDUnknownBlockType playEndCallback; // @synthesize playEndCallback=_playEndCallback;
@property(copy, nonatomic) CDUnknownBlockType stalledCallback; // @synthesize stalledCallback=_stalledCallback;
@property(copy, nonatomic) CDUnknownBlockType readyToPlayCallback; // @synthesize readyToPlayCallback=_readyToPlayCallback;
@property(copy, nonatomic) CDUnknownBlockType keyValuesCompletion; // @synthesize keyValuesCompletion=_keyValuesCompletion;
@property(copy, nonatomic) NSString *videoId; // @synthesize videoId=_videoId;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) _Bool openAudio; // @synthesize openAudio=_openAudio;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (void)reportPerformance;
- (void)applicationDidEnterBackground;
- (void)audioInterruption:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)setAudioActive:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)seekToZero;
- (void)pause;
- (void)play;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)moviePlayDidEnd:(id)arg1;
- (float)getVolumeLevel;
- (void)addItemObserver;
- (void)removeItemObserver;
- (void)assetFailedToPrepareForPlayback:(id)arg1;
- (void)prepareToPlayAsset:(id)arg1 withKeys:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end

