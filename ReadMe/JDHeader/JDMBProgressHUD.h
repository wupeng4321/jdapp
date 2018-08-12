//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDate, NSString, NSTimer, UIFont, UILabel;
@protocol JDMBProgressHUDDelegate;

@interface JDMBProgressHUD : UIView
{
    int mode;
    int animationType;
    SEL methodForExecution;
    id targetForExecution;
    id objectForExecution;
    _Bool useAnimation;
    float yOffset;
    float xOffset;
    float width;
    float height;
    _Bool taskInProgress;
    float graceTime;
    float minShowTime;
    NSTimer *graceTimer;
    NSTimer *minShowTimer;
    NSDate *showStarted;
    UIView *indicator;
    UILabel *label;
    UILabel *detailsLabel;
    float progress;
    id <JDMBProgressHUDDelegate> delegate;
    NSString *labelText;
    NSString *detailsLabelText;
    float opacity;
    UIFont *labelFont;
    UIFont *detailsLabelFont;
    _Bool isFinished;
    _Bool removeFromSuperViewOnHide;
    UIView *customView;
    struct CGAffineTransform rotationTransform;
    _Bool isLoading_;
}

+ (_Bool)hideHUDForView:(id)arg1 animated:(_Bool)arg2;
+ (id)showHUDAddedTo:(id)arg1 animated:(_Bool)arg2;
@property(retain) NSDate *showStarted; // @synthesize showStarted;
@property(retain, nonatomic) UIView *customView; // @synthesize customView;
@property _Bool removeFromSuperViewOnHide; // @synthesize removeFromSuperViewOnHide;
@property _Bool taskInProgress; // @synthesize taskInProgress;
@property(retain) NSTimer *minShowTimer; // @synthesize minShowTimer;
@property(retain) NSTimer *graceTimer; // @synthesize graceTimer;
@property float minShowTime; // @synthesize minShowTime;
@property float graceTime; // @synthesize graceTime;
@property float yOffset; // @synthesize yOffset;
@property float xOffset; // @synthesize xOffset;
@property float height; // @synthesize height;
@property float width; // @synthesize width;
@property(retain) UIView *indicator; // @synthesize indicator;
@property(retain) UIFont *detailsLabelFont; // @synthesize detailsLabelFont;
@property(retain) UIFont *labelFont; // @synthesize labelFont;
@property float opacity; // @synthesize opacity;
@property id <JDMBProgressHUDDelegate> delegate; // @synthesize delegate;
@property int animationType; // @synthesize animationType;
- (void).cxx_destruct;
- (void)setTransformForCurrentOrientation:(_Bool)arg1;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)fillRoundedRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)hideUsingAnimation:(_Bool)arg1;
- (void)showUsingAnimation:(_Bool)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)cleanUp;
- (void)done;
- (void)animationFinished:(id)arg1 finished:(_Bool)arg2 context:(void *)arg3;
- (void)launchExecution;
- (void)showWhileExecuting:(SEL)arg1 onTarget:(id)arg2 withObject:(id)arg3 animated:(_Bool)arg4;
- (void)handleMinShowTimer:(id)arg1;
- (void)handleGraceTimer:(id)arg1;
- (void)hide:(_Bool)arg1;
- (void)show:(_Bool)arg1;
- (void)setLoading:(_Bool)arg1;
- (_Bool)isLoading;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithView:(id)arg1;
- (id)initWithWindow:(id)arg1;
- (void)updateIndicators;
- (void)updateProgress;
- (void)updateDetailsLabelText:(id)arg1;
- (void)updateLabelText:(id)arg1;
@property float progress;
@property(copy) NSString *detailsLabelText;
@property(copy) NSString *labelText;
@property int mode;

@end

