//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSError, NSString;

@protocol VoiceSynthesisDelegate <NSObject>
- (void)SynthesisOnEvent:(int)arg1 arg0:(int)arg2 arg1:(int)arg3 data:(NSData *)arg4;
- (void)SynthesisOnSpeakCancel;
- (void)SynthesisOnSpeakResumed;
- (void)SynthesisOnSpeakPaused;
- (void)SynthesisOnSpeakProgress:(int)arg1 beginPos:(int)arg2 endPos:(int)arg3;
- (void)SynthesisOnBufferProgress:(int)arg1 message:(NSString *)arg2;
- (void)SynthesisOnSpeakBegin;
- (void)SynthesisOnCompleted:(NSError *)arg1;
@end

