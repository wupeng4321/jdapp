//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDProtocolHandler.h"

#import "JDBaseToastViewDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class JDStoreNetwork, NSString;

@interface ObjcCameraHandler : JDProtocolHandler <UIActionSheetDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, JDBaseToastViewDelegate>
{
    JDStoreNetwork *_network;
    NSString *_callCameraParams;
}

+ (void)load;
@property(copy, nonatomic) NSString *callCameraParams; // @synthesize callCameraParams=_callCameraParams;
- (void).cxx_destruct;
- (void)didCancelInToastView:(id)arg1;
- (void)didFinishInToastView:(id)arg1;
- (void)poorOutHandlerPool;
- (void)poorInHandlerPool;
- (id)callCameraCompress;
- (long long)verifyCallCameraParams;
- (void)updateSelectedImageForURL:(id)arg1 compress:(float)arg2;
- (void)updateSelectedImageForData:(id)arg1 compress:(float)arg2;
- (void)updateSelectedImage:(id)arg1;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)presentPickVCWithActionIndex:(long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)callCamera:(id)arg1;
- (_Bool)handleProtocolWithWebView:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

