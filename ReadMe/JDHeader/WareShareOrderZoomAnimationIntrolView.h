//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WareShareOrderZoomAnimationIntrolView : UIView
{
    UIImageView *_tipsImageView;
    UIImageView *_gestureImageView;
    UIImageView *_arrowImageView;
    double *_timeInterval;
    CDUnknownBlockType _dismissCompletion;
}

+ (_Bool)hasShowed;
+ (void)dismiss;
+ (id)showInView:(id)arg1 dissmissCompletion:(CDUnknownBlockType)arg2;
+ (id)show;
@property(copy, nonatomic) CDUnknownBlockType dismissCompletion; // @synthesize dismissCompletion=_dismissCompletion;
- (void).cxx_destruct;
- (_Bool)_getServerConfig;
- (void)autoDissmisss;
- (void)onTap:(id)arg1;
- (void)dismiss;
- (_Bool)showInView:(id)arg1 dissmissCompletion:(CDUnknownBlockType)arg2;
- (void)startContentAnimation;
- (void)setupSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

