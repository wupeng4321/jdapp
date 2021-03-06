//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class JDImageView, NSString;

@interface CCPlusToastView : UIView <UIGestureRecognizerDelegate>
{
    JDImageView *_bgImageView;
    UIView *_toastView;
    CDUnknownBlockType _clickAction;
}

+ (id)seperateLine;
+ (id)toastViewWithCancelTitle:(id)arg1 doneTitle:(id)arg2 actionBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType clickAction; // @synthesize clickAction=_clickAction;
@property(retain, nonatomic) UIView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) JDImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)mta_cancel_action;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)hideView;
- (void)show;
- (void)buttonAction:(id)arg1;
- (id)confirmButtonWithTitle:(id)arg1;
- (id)cancelButtonWithTitle:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

