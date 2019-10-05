//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SoundRecording : NSObject
{
    struct AQRecorder *recorder;
    _Bool playbackWasInterrupted;
    _Bool playbackWasPaused;
    _Bool inBackground;
    double _sampleRate;
    double _bitsPerChannel;
}

- (void)checkAudioformat;
- (id)privateKey;
- (id)decryptUseDES:(id)arg1 key:(id)arg2;
- (void)encodeRecordWithPath:(id)arg1 withEncodeType:(id)arg2;
- (float)power;
- (_Bool)isRuning;
- (void)startRecordingWithFileName:(id)arg1;
- (void)stopRecording;
- (void)setBitsPerChanael:(double)arg1;
- (void)setSampleRate:(double)arg1;
- (void)initConfig;
- (id)init;

@end
