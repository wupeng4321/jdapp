//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, NSString, SHVPListPlayerView;
@protocol SHVPListPlayerDelegate;

@interface SHVPListPlayer : UIView
{
    _Bool _isPlaying;
    id <SHVPListPlayerDelegate> _delegate;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    SHVPListPlayerView *_playerView;
    NSString *_videoPathStr;
    double _stallBeginLoadedRange;
}

@property(nonatomic) double stallBeginLoadedRange; // @synthesize stallBeginLoadedRange=_stallBeginLoadedRange;
@property(copy, nonatomic) NSString *videoPathStr; // @synthesize videoPathStr=_videoPathStr;
@property(retain, nonatomic) SHVPListPlayerView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) __weak id <SHVPListPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeListPlayItemObserver;
- (void)addListPlayItemObserver;
- (void)videoReadyToPlay;
- (void)videoStalledCallback;
- (void)livePageWillDisappear:(id)arg1;
- (void)appWillResignActive:(id)arg1;
- (void)videoBeginStall:(id)arg1;
- (void)videoPlayDidEnd:(id)arg1;
- (void)destory;
- (void)pause;
- (void)play;
- (double)availableDuration;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)initPlayerWithVideoPath:(id)arg1;
- (void)initPlayerView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

