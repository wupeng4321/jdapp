//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WanderShopActivityDownwardTimingView;

@interface WanderShopActivityStateView : UIView
{
    unsigned long long _state;
    long long _secondsToDecrease;
    CDUnknownBlockType _applyingActivityBlock;
    CDUnknownBlockType _pushContentForActivityBlock;
    CDUnknownBlockType _modifyStateCompleteBlock;
    WanderShopActivityDownwardTimingView *_timingView;
    UIButton *_applyingBtn;
    UIView *_haveAppliedView;
    UIView *_waitForResultView;
    UIButton *_userInResultBtn;
    UILabel *_userNotInResultView;
    struct CGRect _maxRect;
    struct CGRect _minRect;
}

@property(retain, nonatomic) UILabel *userNotInResultView; // @synthesize userNotInResultView=_userNotInResultView;
@property(retain, nonatomic) UIButton *userInResultBtn; // @synthesize userInResultBtn=_userInResultBtn;
@property(retain, nonatomic) UIView *waitForResultView; // @synthesize waitForResultView=_waitForResultView;
@property(retain, nonatomic) UIView *haveAppliedView; // @synthesize haveAppliedView=_haveAppliedView;
@property(retain, nonatomic) UIButton *applyingBtn; // @synthesize applyingBtn=_applyingBtn;
@property(retain, nonatomic) WanderShopActivityDownwardTimingView *timingView; // @synthesize timingView=_timingView;
@property(nonatomic) struct CGRect minRect; // @synthesize minRect=_minRect;
@property(nonatomic) struct CGRect maxRect; // @synthesize maxRect=_maxRect;
@property(copy, nonatomic) CDUnknownBlockType modifyStateCompleteBlock; // @synthesize modifyStateCompleteBlock=_modifyStateCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType pushContentForActivityBlock; // @synthesize pushContentForActivityBlock=_pushContentForActivityBlock;
@property(copy, nonatomic) CDUnknownBlockType applyingActivityBlock; // @synthesize applyingActivityBlock=_applyingActivityBlock;
@property(nonatomic) long long secondsToDecrease; // @synthesize secondsToDecrease=_secondsToDecrease;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)configState:(unsigned long long)arg1;
- (void)clearState:(unsigned long long)arg1;
- (_Bool)isValidState:(unsigned long long)arg1;
- (void)pushContentForActivity;
- (void)applyingForActivity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
