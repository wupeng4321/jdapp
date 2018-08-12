//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "MessageScrollNumberViewDelegate-Protocol.h"

@class JDViewController, LOTAnimationView, MessageScrollNumberView, NSString, UILabel, UIView;

@interface MessageHomePageDoor : UIControl <MessageScrollNumberViewDelegate>
{
    _Bool _firstLoad;
    long long _style;
    long long _showStyle;
    long long _msgNumber;
    UILabel *_titleLabel;
    UIView *_redDot;
    UIView *_redDotSubView;
    UIView *_numBackImg;
    CDUnknownBlockType _clickBlock;
    LOTAnimationView *_animationView;
    JDViewController *_viewController;
    MessageScrollNumberView *_numberView;
    UILabel *_plusLabel;
    NSString *_animationPrefix;
    UIView *_frameView;
}

@property(nonatomic) _Bool firstLoad; // @synthesize firstLoad=_firstLoad;
@property(retain, nonatomic) UIView *frameView; // @synthesize frameView=_frameView;
@property(copy, nonatomic) NSString *animationPrefix; // @synthesize animationPrefix=_animationPrefix;
@property(retain, nonatomic) UILabel *plusLabel; // @synthesize plusLabel=_plusLabel;
@property(retain, nonatomic) MessageScrollNumberView *numberView; // @synthesize numberView=_numberView;
@property(nonatomic) __weak JDViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) LOTAnimationView *animationView; // @synthesize animationView=_animationView;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIView *numBackImg; // @synthesize numBackImg=_numBackImg;
@property(retain, nonatomic) UIView *redDotSubView; // @synthesize redDotSubView=_redDotSubView;
@property(retain, nonatomic) UIView *redDot; // @synthesize redDot=_redDot;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) long long msgNumber; // @synthesize msgNumber=_msgNumber;
@property(nonatomic) long long showStyle; // @synthesize showStyle=_showStyle;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)messageNumberViewWillChangeCellView:(_Bool)arg1;
- (void)messageNumberViewScrollDidComplete;
- (id)doorTitleBlodSystemFontOfSize:(double)arg1;
- (id)doorTitleSystemFontOfSize:(double)arg1;
- (void)refreshMessageDoorView:(id)arg1;
- (void)changeAnimationView;
- (void)reverseRedDotColor:(_Bool)arg1;
- (void)homepageChangeFrame:(_Bool)arg1;
- (void)scrollChangeBlackIcon:(_Bool)arg1;
- (void)stopAnimation;
- (void)showLottieAnimation:(id)arg1;
- (id)getAnimationPath;
- (void)didTapMessageAction:(id)arg1;
- (void)resetNumberView;
- (void)layoutAllFrame;
- (void)configMessageDoorView;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 clickBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

