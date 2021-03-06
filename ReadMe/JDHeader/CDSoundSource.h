//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CDAudioInterruptProtocol-Protocol.h"
#import "CDAudioTransportProtocol-Protocol.h"

@class CDSoundEngine, NSString;

@interface CDSoundSource : NSObject <CDAudioTransportProtocol, CDAudioInterruptProtocol>
{
    int lastError;
    unsigned int _sourceId;
    unsigned int _sourceIndex;
    CDSoundEngine *_engine;
    int _soundId;
    float _preMuteGain;
    _Bool enabled_;
    _Bool mute_;
}

@property(readonly) int lastError; // @synthesize lastError;
- (void)setEnabled:(_Bool)arg1;
- (_Bool)enabled;
- (void)setMute:(_Bool)arg1;
- (_Bool)mute;
@property(readonly) float durationInSeconds;
@property(nonatomic) int soundId;
- (_Bool)rewind;
- (_Bool)pause;
- (_Bool)play;
- (_Bool)stop;
@property(nonatomic) _Bool looping;
@property(nonatomic) float gain;
@property(nonatomic) float pan;
@property(nonatomic) float pitch;
@property(readonly) _Bool isPlaying;
- (void)dealloc;
- (id)init:(unsigned int)arg1 sourceIndex:(int)arg2 soundEngine:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

