//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class AMQRView, NSArray, NSString, UIButton, UIImage;
@protocol AMPictureSaveDelegate;

@interface AMArPictureShareView : UIImageView
{
    _Bool _canMakeShare;
    _Bool _picIsSave;
    id <AMPictureSaveDelegate> _delegate;
    NSString *_skuId;
    UIImage *_saveImage;
    UIButton *_mBackButton;
    UIImageView *_mPictureImageView;
    AMQRView *_mQRView;
    UIButton *_savaBtn;
    unsigned long long _makeupType;
    NSArray *_mShareList;
    NSString *_verdorType;
}

@property(copy, nonatomic) NSString *verdorType; // @synthesize verdorType=_verdorType;
@property(copy, nonatomic) NSArray *mShareList; // @synthesize mShareList=_mShareList;
@property(nonatomic) unsigned long long makeupType; // @synthesize makeupType=_makeupType;
@property(nonatomic) __weak UIButton *savaBtn; // @synthesize savaBtn=_savaBtn;
@property(nonatomic) _Bool picIsSave; // @synthesize picIsSave=_picIsSave;
@property(retain, nonatomic) AMQRView *mQRView; // @synthesize mQRView=_mQRView;
@property(retain, nonatomic) UIImageView *mPictureImageView; // @synthesize mPictureImageView=_mPictureImageView;
@property(retain, nonatomic) UIButton *mBackButton; // @synthesize mBackButton=_mBackButton;
@property(retain, nonatomic) UIImage *saveImage; // @synthesize saveImage=_saveImage;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(nonatomic) _Bool canMakeShare; // @synthesize canMakeShare=_canMakeShare;
@property(nonatomic) __weak id <AMPictureSaveDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)sharePictureWithImage:(id)arg1;
- (void)shareButtonOnClicded;
- (void)saveButtonOnClicked:(id)arg1;
- (void)retryButtonOnClicked;
- (void)onClickChangeView;
- (void)backButtonOnClicked;
- (void)showShareViewWithImage:(id)arg1;
- (void)reportPlatformClickEventId:(id)arg1 eventParam:(id)arg2 eventName:(id)arg3;
- (void)reportClickEventId:(id)arg1 eventParam:(id)arg2 eventName:(id)arg3;
- (id)createViewWithNormalImage:(id)arg1 andHightImage:(id)arg2 andText:(id)arg3 andSelector:(SEL)arg4;
- (void)initSubViews;
- (id)screenShotImage;
- (id)initWithFrame:(struct CGRect)arg1 skuId:(id)arg2 makeupType:(unsigned long long)arg3 listArray:(id)arg4 verdorType:(id)arg5;

@end
