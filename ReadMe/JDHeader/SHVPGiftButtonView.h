//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView;

@interface SHVPGiftButtonView : UIView
{
    UIView *_redPoint;
    UIButton *_mainBtn;
    UIImageView *_boneImg;
    CDUnknownBlockType _clictBtnBlock;
}

@property(copy, nonatomic) CDUnknownBlockType clictBtnBlock; // @synthesize clictBtnBlock=_clictBtnBlock;
@property(retain, nonatomic) UIImageView *boneImg; // @synthesize boneImg=_boneImg;
@property(retain, nonatomic) UIButton *mainBtn; // @synthesize mainBtn=_mainBtn;
@property(retain, nonatomic) UIView *redPoint; // @synthesize redPoint=_redPoint;
- (void).cxx_destruct;
- (void)mainBtnAction;
- (void)boneAnimationFinished;
- (void)beginBoneAnimation;
- (void)stopRedPointAnimation;
- (void)beginRedPointAnimation;
- (void)setUpViews;
- (id)initWithFrame:(struct CGRect)arg1 clictBtnBlock:(CDUnknownBlockType)arg2;

@end
