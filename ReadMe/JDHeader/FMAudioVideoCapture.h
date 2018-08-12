//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSString;

@interface FMAudioVideoCapture : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    _Bool _cameraOpened;
    CDUnknownBlockType mSnapshotResultCallback;
    long long _videoOrientation;
    AVCaptureVideoPreviewLayer *_previewLayer;
    CDUnknownBlockType _captureCallback;
    AVCaptureSession *_session;
    AVCaptureInput *_videoInput;
    AVCaptureVideoDataOutput *_stillImageOutput;
}

@property(retain, nonatomic) AVCaptureVideoDataOutput *stillImageOutput; // @synthesize stillImageOutput=_stillImageOutput;
@property(retain, nonatomic) AVCaptureInput *videoInput; // @synthesize videoInput=_videoInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(copy, nonatomic) CDUnknownBlockType captureCallback; // @synthesize captureCallback=_captureCallback;
@property(readonly, retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
@property(nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
- (void).cxx_destruct;
- (void)flashButtonClick:(id)arg1;
- (void)updateOrientaion;
- (long long)avOrientationForDeviceOrientation:(long long)arg1;
- (void)stopCameraSession;
- (void)pauseCameraSession;
- (void)resumeCameraSession;
- (void)fireCallBack:(long long)arg1;
- (void)openFlashlight:(_Bool)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)takePhotoWithCallBack:(CDUnknownBlockType)arg1;
- (void)startAVCaptureSession;
- (void)openCamera;
- (void)activeNotification:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

