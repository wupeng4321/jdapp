//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface audioEncodeManager : NSObject
{
    NSString *_path;
}

+ (id)sharedaudioEncodeManager;
@property(retain, nonatomic) NSString *path; // @synthesize path=_path;
- (id)writeWaveAudioPath:(id)arg1 withSampleRate:(long long)arg2 withBitsPerSample:(int)arg3 withChannelNumber:(int)arg4;
- (id)writeWaveAuidoData:(id)arg1 withSampleRate:(long long)arg2 withBitsPerSample:(int)arg3 withChannelNumber:(int)arg4;
- (void)encodeWithPath:(id)arg1 type:(id)arg2;
- (void)encodeToOGGWithPath:(id)arg1;
- (void)setBitsPerChanael:(double)arg1;
- (void)setSampleRate:(double)arg1;
- (void)encodeToAMRWithPath:(id)arg1;

@end

