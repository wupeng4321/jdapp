//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDNavigationController, JDSHCameraSessionManager;

@interface JDSHQRsaoController : NSObject
{
    _Bool _isDecodingAlbumPhoto;
    JDSHCameraSessionManager *_sessionManager;
    JDNavigationController *_navigationController;
}

@property(retain, nonatomic) JDNavigationController *navigationController; // @synthesize navigationController=_navigationController;
@property(nonatomic) __weak JDSHCameraSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
@property(nonatomic) _Bool isDecodingAlbumPhoto; // @synthesize isDecodingAlbumPhoto=_isDecodingAlbumPhoto;
- (void).cxx_destruct;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)QRHistoryTouched;
- (void)JDPayHistoryTouched;
- (void)JDPayDiscountTouched;
- (void)decodeWriteQRCode:(id)arg1;
- (void)enterQRCodeButtonTouched;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)JDSHQRDecoder:(unsigned long long)arg1 failedToDecodeImage:(id)arg2 reason:(id)arg3;
- (void)JDSHQRDecoder:(unsigned long long)arg1 didDecodeImage:(id)arg2 withResult:(id)arg3;
- (void)decodePhotoImage:(id)arg1 andAsset:(id)arg2;
- (void)photoAlbumButtonTouched;
- (void)popToLastPage;
- (void)gotoPaymentCodeSDK;
- (void)payCodeButtonTouched;
- (void)vipCodeButtonTouched;
- (void)lightTouch:(_Bool)arg1;

@end

