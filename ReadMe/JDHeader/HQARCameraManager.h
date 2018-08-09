//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "JDBaseToastViewDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, CMMotionManager, HiARManager, NSDate, NSString;
@protocol HQCaptureVideoDataOutputSampleBufferDelegate, OS_dispatch_queue;

@interface HQARCameraManager : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, JDBaseToastViewDelegate>
{
    AVCaptureDevice *_device;
    AVCaptureDeviceInput *_input;
    NSString *_captureType;
    HiARManager *_manager;
    AVCaptureVideoDataOutput *_dataOutput;
    _Bool _isOpen;
    _Bool _isFinish;
    _Bool _windowOpen;
    id <HQCaptureVideoDataOutputSampleBufferDelegate> _delegate;
    long long _position;
    AVCaptureSession *_session;
    double _scanning_delay;
    CMMotionManager *_cmmanager;
    NSDate *_prevMotionDate;
    NSObject<OS_dispatch_queue> *_bgSerialQueue;
    struct _HiARSize _arSize;
}

+ (void)initialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *bgSerialQueue; // @synthesize bgSerialQueue=_bgSerialQueue;
@property(nonatomic) _Bool windowOpen; // @synthesize windowOpen=_windowOpen;
@property(retain, nonatomic) NSDate *prevMotionDate; // @synthesize prevMotionDate=_prevMotionDate;
@property(retain, nonatomic) CMMotionManager *cmmanager; // @synthesize cmmanager=_cmmanager;
@property(nonatomic) double scanning_delay; // @synthesize scanning_delay=_scanning_delay;
@property(nonatomic) _Bool isFinish; // @synthesize isFinish=_isFinish;
@property(nonatomic) struct _HiARSize arSize; // @synthesize arSize=_arSize;
@property(readonly, nonatomic) AVCaptureSession *session; // @synthesize session=_session;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(readonly, nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) __weak id <HQCaptureVideoDataOutputSampleBufferDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)tapGestureMethod:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)captureImage:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2;
- (id)getSysInfoByName:(char *)arg1;
- (void)showAlertView;
- (id)imageByCroppingWithImage:(id)arg1;
- (id)imageCompressWithSimple:(id)arg1 scaledToSize:(struct CGSize)arg2;
- (void)delayMothod;
- (void)captureImageWhenTimeOut;
- (void)cancelTimeOut;
- (void)stopCamera;
- (void)startCamera:(id)arg1;
- (void)startCamera;
- (void)createCamera;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (id)shareManager;
- (void)useAccelerometerPush;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

