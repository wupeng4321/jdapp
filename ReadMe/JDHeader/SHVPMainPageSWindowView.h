//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface SHVPMainPageSWindowView : UIView
{
    CDUnknownBlockType _tapBlock;
    UIImageView *_bgView;
    UIButton *_closeBtn;
    UIView *_gestureView;
    UITapGestureRecognizer *_tap;
    UIPanGestureRecognizer *_pan;
}

+ (id)sharedSWindow;
@property(retain, nonatomic) UIPanGestureRecognizer *pan; // @synthesize pan=_pan;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void).cxx_destruct;
- (id)windowLiveState;
- (void)viewPanned:(id)arg1;
- (void)viewTaped:(id)arg1;
- (void)closeSWindow_p;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)setOrientation:(unsigned long long)arg1;
- (void)closeSWindow;
- (void)destroySWindow;
- (id)initWithFrame:(struct CGRect)arg1;

@end
