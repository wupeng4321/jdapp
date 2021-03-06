//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;
@protocol JDVFShareViewDelegate;

@interface JDVFShareView : UIView
{
    _Bool _canShowHint;
    int _genderType;
    id <JDVFShareViewDelegate> _delegate;
    UIImageView *_backgroundImageView;
    UIImageView *_modelImaegView;
    UIView *_bottomView;
    UIButton *_saveButton;
    UILabel *_saveLabel;
    UILabel *_shareLabel;
    UIButton *_shareButton;
    UIButton *_backButton;
    UIView *_whiteView;
    UIImageView *_jdLogImageView;
    UIImageView *_codesImageView;
    UILabel *_wordLabel;
}

@property(retain, nonatomic) UILabel *wordLabel; // @synthesize wordLabel=_wordLabel;
@property(retain, nonatomic) UIImageView *codesImageView; // @synthesize codesImageView=_codesImageView;
@property(retain, nonatomic) UIImageView *jdLogImageView; // @synthesize jdLogImageView=_jdLogImageView;
@property(retain, nonatomic) UIView *whiteView; // @synthesize whiteView=_whiteView;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UILabel *shareLabel; // @synthesize shareLabel=_shareLabel;
@property(retain, nonatomic) UILabel *saveLabel; // @synthesize saveLabel=_saveLabel;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) UIImageView *modelImaegView; // @synthesize modelImaegView=_modelImaegView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) _Bool canShowHint; // @synthesize canShowHint=_canShowHint;
@property(nonatomic) int genderType; // @synthesize genderType=_genderType;
@property(nonatomic) __weak id <JDVFShareViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)subImageWithRect:(struct CGRect)arg1 andUIImage:(id)arg2;
- (id)screenshotForView:(id)arg1 size:(struct CGSize)arg2;
- (id)screenshotForView:(id)arg1;
- (void)onClickShareButton:(id)arg1;
- (void)image:(id)arg1 didFinishSavingWithError:(id)arg2 contextInfo:(void *)arg3;
- (void)onClickStoreButton:(id)arg1;
- (void)onClickBackButton:(id)arg1;
- (void)setShareImage:(id)arg1;
- (void)initViews;
- (void)setImageAndColorForViews;
- (id)initWithFrame:(struct CGRect)arg1 andGender:(int)arg2;

@end

