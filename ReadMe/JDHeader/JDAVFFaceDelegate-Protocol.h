//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol JDAVFFaceDelegate <NSObject>
- (void)setFacePath:(NSString *)arg1 andIsTakePicture:(_Bool)arg2;

@optional
- (void)backFromFaceViewController;
- (void)onClickConfirmPhoto:(NSString *)arg1;
- (void)onClickCancelPhoto:(NSString *)arg1;
- (void)onClickGalleryButton:(NSString *)arg1;
- (void)onClickTakePhotoButton:(NSString *)arg1;
@end
