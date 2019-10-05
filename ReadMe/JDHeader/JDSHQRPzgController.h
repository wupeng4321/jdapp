//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class JDNavigationController, NSString;

@interface JDSHQRPzgController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    JDNavigationController *_navigationController;
}

@property(retain, nonatomic) JDNavigationController *navigationController; // @synthesize navigationController=_navigationController;
- (void).cxx_destruct;
- (void)historyTouchedWithType:(unsigned long long)arg1;
- (void)pzgTapFocusPoint:(struct CGPoint)arg1;
- (void)turnOverCameraButtonTouched;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)pzgPhotoAlbumButtonTouchedWithType:(unsigned long long)arg1;
- (void)takePhotoAndSwitchToPZG;
- (void)lightTouch:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
