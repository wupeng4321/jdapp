//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IFlySpeechSynthesizerDelegate-Protocol.h"

@class IFlySpeechSynthesizer, NSMutableArray, NSString;
@protocol VoiceSynthesisDelegate;

@interface VoiceSynthesis : NSObject <IFlySpeechSynthesizerDelegate>
{
    _Bool isInOrderPlay;
    _Bool _isSpeak;
    id <VoiceSynthesisDelegate> _synthesisDelegate;
    NSString *_voiceName;
    IFlySpeechSynthesizer *_iFlySpeechSynthesizer;
    NSMutableArray *_speakingTextArr;
}

+ (_Bool)destroy;
+ (id)sharedInstance;
@property(nonatomic) _Bool isSpeak; // @synthesize isSpeak=_isSpeak;
@property(retain, nonatomic) NSMutableArray *speakingTextArr; // @synthesize speakingTextArr=_speakingTextArr;
@property(retain, nonatomic) IFlySpeechSynthesizer *iFlySpeechSynthesizer; // @synthesize iFlySpeechSynthesizer=_iFlySpeechSynthesizer;
@property(copy, nonatomic) NSString *voiceName; // @synthesize voiceName=_voiceName;
@property(nonatomic) __weak id <VoiceSynthesisDelegate> synthesisDelegate; // @synthesize synthesisDelegate=_synthesisDelegate;
- (void).cxx_destruct;
- (void)enterForeground;
- (void)resignActive;
- (void)registerForBackgroundNotifications;
- (void)beginRemoteControl;
- (void)endRemoteControl;
- (void)deactiveAudioSession;
- (void)activeAudioSession;
- (void)onSpeakProgress:(int)arg1 beginPos:(int)arg2 endPos:(int)arg3;
- (void)onBufferProgress:(int)arg1 message:(id)arg2;
- (void)onSpeakBegin;
- (void)onCompleted:(id)arg1;
- (void)iflyStopSpeakingText;
- (void)iflyStartSpeakingText:(id)arg1;
- (void)stopSpeakingWithClear:(_Bool)arg1;
- (void)stopSpeaking;
- (void)resumeSpeaking;
- (void)pauseSpeaking;
- (void)startSpeaking:(id)arg1 withIsInOrder:(_Bool)arg2;
- (void)startSpeaking:(id)arg1;
- (_Bool)isSpeaking;
- (void)initiFlySpeechSynthesizer;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

