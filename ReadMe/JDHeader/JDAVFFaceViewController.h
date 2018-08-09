//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class AVCaptureDevice, AVCaptureDeviceInput, AVCaptureSession, AVCaptureStillImageOutput, AVCaptureVideoPreviewLayer, NSMutableString, NSString, UIView;
@protocol JDAVFFaceDelegate;

@interface JDAVFFaceViewController : JDViewController <UINavigationControllerDelegate, UIImagePickerControllerDelegate, JDBaseToastViewDelegate>
{
    NSMutableString *skuIdString;
    UIView *takePhotoView;
    AVCaptureDevice *device;
    AVCaptureDeviceInput *input;
    AVCaptureStillImageOutput *imageOutput;
    AVCaptureSession *session;
    AVCaptureVideoPreviewLayer *previewLayer;
    _Bool _isBackTop;
    int _genderType;
    id <JDAVFFaceDelegate> _delegate;
}

@property(nonatomic) int genderType; // @synthesize genderType=_genderType;
@property(nonatomic) _Bool isBackTop; // @synthesize isBackTop=_isBackTop;
@property(nonatomic) __weak id <JDAVFFaceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSku:(id)arg1;
- (void)photoBtnDidClick;
- (id)cameraWithPosition:(long long)arg1;
- (void)takePhoto;
- (id)compressOriginalImage:(id)arg1 toSize:(struct CGSize)arg2;
- (id)savescanresultimage:(id)arg1 imagename:(id)arg2;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)getImageFromIpc:(long long)arg1;
- (void)onClickConfirmButton:(id)arg1;
- (void)onClickTakePhotoBackButton:(id)arg1;
- (void)photoLibraryIsAuthorization:(_Bool)arg1;
- (void)onClickGalleryButton:(id)arg1;
- (void)cameraIsAuthorization:(_Bool)arg1;
- (void)onClickTakePhotoButton:(id)arg1;
- (void)onClickFaceBackButton:(id)arg1;
- (void)initViews;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithGender:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

