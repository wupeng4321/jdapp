//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIAlertViewDelegate-Protocol.h"

@class FMAudioVideoCapture, NSString;

@interface FMCameraView : UIView <UIAlertViewDelegate>
{
    CDUnknownBlockType _closeAction;
    FMAudioVideoCapture *_capture;
}

@property(retain, nonatomic) FMAudioVideoCapture *capture; // @synthesize capture=_capture;
@property(copy, nonatomic) CDUnknownBlockType closeAction; // @synthesize closeAction=_closeAction;
- (void).cxx_destruct;
- (void)takePhotoWithCallBack:(CDUnknownBlockType)arg1;
- (void)updateFrame:(struct CGRect)arg1;
- (void)pauseCamera;
- (void)resumeCamera;
- (_Bool)isARKit;
- (id)cameralView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)initCapture;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

