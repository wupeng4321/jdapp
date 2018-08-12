//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, NSString, UIActivityIndicatorView, UIButton, UIFont, UIImage, UIImageView, UILabel;
@protocol UPAlertViewExDelegate;

@interface UPAAlertViewEx : UIView
{
    _Bool _loadingStyle;
    double mWidth;
    double mHeight;
    struct CGSize mTitleSize;
    struct CGSize mMsgSize;
    struct CGSize mImgSize;
    UIView *mBaseView;
    UIFont *mTitleFont;
    UIFont *mMsgFont;
    UIImage *mLogo;
    UIView *_opacityView;
    CALayer *_subLayer;
    UIImageView *_logoView;
    UIButton *_ok;
    UIButton *_cancel;
    UILabel *_title;
    UILabel *_message;
    UIActivityIndicatorView *_loadingView;
    UIImageView *_loadingImageView;
    id <UPAlertViewExDelegate> mDelegate;
    CDUnknownBlockType button_action_block;
    NSString *ok_block_action;
    NSString *cancel_block_action;
}

@property(copy, nonatomic) NSString *cancel_block_action; // @synthesize cancel_block_action;
@property(copy, nonatomic) NSString *ok_block_action; // @synthesize ok_block_action;
@property(copy, nonatomic) CDUnknownBlockType button_action_block; // @synthesize button_action_block;
- (void).cxx_destruct;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)buttonOKClicked:(id)arg1;
- (void)buttonCancelClicked:(id)arg1;
- (void)resetLayer:(id)arg1;
- (id)imageWithR:(double)arg1 G:(double)arg2 B:(double)arg3;
- (id)imageWithColor:(id)arg1;
- (void)addOKButton:(id)arg1 cancelButton:(id)arg2;
- (void)addWaitIndicator;
- (void)addMessage:(id)arg1 waiting:(_Bool)arg2;
- (void)addTitle:(id)arg1;
- (void)addImageView;
- (void)addBaseView;
- (id)backgroundView;
- (void)caculateSizeWithWaiting:(_Bool)arg1 title:(id)arg2 message:(id)arg3 btnOK:(id)arg4 btnCancel:(id)arg5;
- (void)dismissAlertView;
- (void)showAlertViewWithItem:(id)arg1 actionBlock:(CDUnknownBlockType)arg2;
- (void)showAlertViewWithTitle:(id)arg1 message:(id)arg2 btnOk:(id)arg3 btnCancel:(id)arg4 delegate:(id)arg5;
- (void)showLoadingViewWithMessage:(id)arg1 delegate:(id)arg2;
- (void)showLoadingViewWithDelegate:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

