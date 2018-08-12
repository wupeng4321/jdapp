//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioPlayerDelegate-Protocol.h"

@class AVAudioPlayer, NSString;
@protocol TDPAudioPlayerDelegate;

@interface TDPAudioPlayer : NSObject <AVAudioPlayerDelegate>
{
    AVAudioPlayer *_player;
    id <TDPAudioPlayerDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <TDPAudioPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sensorStateChange:(id)arg1;
- (void)configureAVAudioSession;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopPlay;
- (void)play;
- (id)initWithData:(id)arg1 delegate:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

