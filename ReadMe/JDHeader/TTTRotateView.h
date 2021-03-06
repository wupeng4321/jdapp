//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSArray, NSString, NSTimer, TTTFloorModel, TTTLotteryNumView, UIButton;

@interface TTTRotateView : TTTBaseView <TTTBaseViewProtocol>
{
    double _rotateSpeed;
    double _currentAngle;
    _Bool _slowerToEnd;
    double _stopRatio;
    JDImageView *_drawBackImageView;
    JDImageView *_rotateViewContainer;
    UIButton *_roateButton;
    UIButton *_ruleButton;
    TTTFloorModel *_floorModel;
    NSArray *_rotateViews;
    CDUnknownBlockType _callBackBlock;
    double _beginTime;
    NSTimer *_rotateTimer;
    TTTLotteryNumView *_lotteryNumView;
}

@property(retain, nonatomic) TTTLotteryNumView *lotteryNumView; // @synthesize lotteryNumView=_lotteryNumView;
@property(retain, nonatomic) NSTimer *rotateTimer; // @synthesize rotateTimer=_rotateTimer;
@property(nonatomic) double beginTime; // @synthesize beginTime=_beginTime;
@property(copy, nonatomic) CDUnknownBlockType callBackBlock; // @synthesize callBackBlock=_callBackBlock;
@property(retain, nonatomic) NSArray *rotateViews; // @synthesize rotateViews=_rotateViews;
@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) UIButton *ruleButton; // @synthesize ruleButton=_ruleButton;
@property(retain, nonatomic) UIButton *roateButton; // @synthesize roateButton=_roateButton;
@property(retain, nonatomic) JDImageView *rotateViewContainer; // @synthesize rotateViewContainer=_rotateViewContainer;
@property(retain, nonatomic) JDImageView *drawBackImageView; // @synthesize drawBackImageView=_drawBackImageView;
- (void).cxx_destruct;
- (void)p_initRotateUnitViews;
- (void)p_afterStop;
- (void)p_RetoteStop;
- (void)p_stepRotate;
- (void)p_startRotate;
- (void)viewDidEndDisplaying;
- (void)viewWillDisplay;
- (void)p_lotteryRequestBack;
- (void)p_startRequet;
- (void)rotateButtonPressed:(id)arg1;
- (void)showOrHideRuleButton;
- (void)clickRuleButton:(id)arg1;
- (void)updateLotteryNumView;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

