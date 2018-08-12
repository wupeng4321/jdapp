//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMetadataOutput, AVCaptureSession, AVCaptureVideoDataOutput;
@protocol AVCaptureMetadataOutputObjectsDelegate, AVCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface CameraController : NSObject
{
    AVCaptureSession *_captureSession;
    AVCaptureDevice *_captureDevice;
    AVCaptureDeviceInput *_captureInput;
    AVCaptureVideoDataOutput *_captureOutput;
    AVCaptureMetadataOutput *_metadataOutput;
    _Bool _isFrontCamera;
    NSObject<OS_dispatch_queue> *_cameraQueue;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    struct CGSize _imageSize;
}

+ (id)defaultControllerWithFrontCamera:(_Bool)arg1;
@property(nonatomic) _Bool isFrontCamera; // @synthesize isFrontCamera=_isFrontCamera;
@property struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *metadataQueue; // @synthesize metadataQueue=_metadataQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cameraQueue; // @synthesize cameraQueue=_cameraQueue;
- (void).cxx_destruct;
@property(retain) id <AVCaptureMetadataOutputObjectsDelegate> faceDetectionDelegate;
@property(retain) id <AVCaptureVideoDataOutputSampleBufferDelegate> captureDelegate;
@property(readonly) long long orientation;
- (void)stopFaceDetection;
- (void)startFaceDetection;
- (void)stop;
- (void)suspend;
- (void)start;
- (id)setSessionPreset:(id)arg1;
- (id)initWithFrontCamera:(_Bool)arg1;
- (id)frontFacingCameraWithFrontCamera:(_Bool)arg1;

@end
