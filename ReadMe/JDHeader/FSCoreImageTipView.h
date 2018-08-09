//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FSCoreImageTipConfig, UIImageView;

@interface FSCoreImageTipView : UIView
{
    FSCoreImageTipConfig *_tipConfig;
    UIImageView *_tipImageView;
}

+ (_Bool)displayedImageTipViewWithkeyName:(id)arg1;
@property(retain, nonatomic) UIImageView *tipImageView; // @synthesize tipImageView=_tipImageView;
@property(retain, nonatomic) FSCoreImageTipConfig *tipConfig; // @synthesize tipConfig=_tipConfig;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)willMoveToSuperview:(id)arg1;
- (void)didHideTipView;
- (void)willHideTipImageView;
- (void)showImageTipView;
- (void)showImageTipViewWithImageTipConfig:(CDUnknownBlockType)arg1;

@end

