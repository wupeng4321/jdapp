//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class JDVideoRecorder, NSURL;

@protocol JDVideoRecorderDelegate <NSObject>

@optional
- (void)videoRecorder:(JDVideoRecorder *)arg1 didFinishRecordingWithUrl:(NSURL *)arg2;
- (void)videoRecorder:(JDVideoRecorder *)arg1 recorderStateChanged:(long long)arg2;
@end
