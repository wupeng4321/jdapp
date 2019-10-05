//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureAudioDataOutputSampleBufferDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "JDVideoWriterDelegate-Protocol.h"

@class AVCaptureAudioDataOutput, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, JDVideoWriter, NSString, NSURL, UIView;
@protocol JDVideoRecorderDelegate, OS_dispatch_queue;

@interface JDVideoRecorder : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, JDVideoWriterDelegate>
{
    id <JDVideoRecorderDelegate> _delegate;
    long long _state;
    AVCaptureDeviceInput *_videoInput;
    UIView *_superView;
    AVCaptureSession *_session;
    AVCaptureDeviceInput *_audioInput;
    AVCaptureVideoPreviewLayer *_previewLayer;
    JDVideoWriter *_videoWriter;
    NSObject<OS_dispatch_queue> *_videoQueue;
    AVCaptureVideoDataOutput *_videoOutput;
    AVCaptureAudioDataOutput *_audioOutput;
    AVCaptureStillImageOutput *_stillImageOutput;
    NSURL *_videoUrl;
    long long _flashMode;
    long long _torchMode;
    long long _sizeType;
}

@property(nonatomic) long long sizeType; // @synthesize sizeType=_sizeType;
@property(nonatomic) long long torchMode; // @synthesize torchMode=_torchMode;
@property(nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(retain, nonatomic) NSURL *videoUrl; // @synthesize videoUrl=_videoUrl;
@property(retain, nonatomic) AVCaptureStillImageOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureAudioDataOutput *audioOutput; // @synthesize audioOutput=_audioOutput;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoOutput; // @synthesize videoOutput=_videoOutput;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *videoQueue; // @synthesize videoQueue=_videoQueue;
@property(retain, nonatomic) JDVideoWriter *videoWriter; // @synthesize videoWriter=_videoWriter;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(retain, nonatomic) AVCaptureDeviceInput *audioInput; // @synthesize audioInput=_audioInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) __weak UIView *superView; // @synthesize superView=_superView;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput=_videoInput;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(nonatomic) __weak id <JDVideoRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)sessionRuntimeError:(id)arg1;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)videoWriter:(id)arg1 didFinishWritingToOutputFileAtURL:(id)arg2;
- (void)videoWriter:(id)arg1 didStartWritingToOutputFileAtURL:(id)arg2;
- (void)videoWriter:(id)arg1 failedWritingToOutputFileAtURL:(id)arg2;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureImage:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isRunning;
- (void)reset;
- (void)pause;
- (void)cancel;
- (void)stop;
- (void)start;
- (void)stopRunning;
- (void)startRunning;
- (void)setCaptureDevicePosition:(long long)arg1;
@property(nonatomic) long long orientation;
- (void)changeDeviceProperty:(CDUnknownBlockType)arg1;
- (void)setFocusWithMode:(long long)arg1 exposureMode:(long long)arg2 atPoint:(struct CGPoint)arg3;
- (struct CGSize)outputSizeWithType:(long long)arg1;
- (void)setupPreviewLayer;
- (void)setupWriter;
- (void)setupImageOutput;
- (void)setupAudio;
- (void)setWhiteBalanceMode:(long long)arg1;
- (void)setupVideo;
- (void)setupInit;
- (void)setup;
- (void)addSessionObserver;
- (id)initWithType:(long long)arg1 previewIn:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
