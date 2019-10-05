//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMutableArray, TDPTargetActionModel, TPD3DPhotoView, UIButton, UIImage, UIImageView;

@interface TPD3DShareView : UIView
{
    int _orientation;
    UIImage *_picShareImage;
    NSMutableArray *_shareList;
    UIButton *_blurBackButton;
    UIImageView *_backgroundView;
    TPD3DPhotoView *_picView;
    UIView *_bottomView;
    TDPTargetActionModel *_actionModel;
    UIButton *_saveButton;
    UIView *_bottomShareView;
    NSDictionary *_param;
}

@property(retain, nonatomic) NSDictionary *param; // @synthesize param=_param;
@property(retain, nonatomic) UIView *bottomShareView; // @synthesize bottomShareView=_bottomShareView;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) __weak TDPTargetActionModel *actionModel; // @synthesize actionModel=_actionModel;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView=_bottomView;
@property(retain, nonatomic) TPD3DPhotoView *picView; // @synthesize picView=_picView;
@property(retain, nonatomic) UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIButton *blurBackButton; // @synthesize blurBackButton=_blurBackButton;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) NSMutableArray *shareList; // @synthesize shareList=_shareList;
@property(retain, nonatomic) UIImage *picShareImage; // @synthesize picShareImage=_picShareImage;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)screenShotImage;
- (id)createViewWithNormalImage:(id)arg1 andHightImage:(id)arg2 andText:(id)arg3 andSelector:(SEL)arg4;
- (id)initWithFrame:(struct CGRect)arg1 withParam:(id)arg2 targetActionModel:(id)arg3 deviceOrientation:(int)arg4 withShareArray:(id)arg5;
- (void)layoutSubviews;

@end
