//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDSpeechRecognizer, NSError, NSString;

@protocol JDSpeechRecognizerDelegate <NSObject>
- (void)speechRecognizer:(JDSpeechRecognizer *)arg1 recognizeResults:(NSString *)arg2 isLast:(_Bool)arg3;
- (void)speechRecognizer:(JDSpeechRecognizer *)arg1 recognizeError:(NSError *)arg2;
- (void)speechRecognizer:(JDSpeechRecognizer *)arg1 volumeChanged:(float)arg2;
- (void)cancelOfSpeechRecognizer:(JDSpeechRecognizer *)arg1;
- (void)endOfSpeechRecognizer:(JDSpeechRecognizer *)arg1;
- (void)beginOfSpeechRecognizer:(JDSpeechRecognizer *)arg1;
@end

