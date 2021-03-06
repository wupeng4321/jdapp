//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class FVBFullScreenSliderView, NSString, UIButton, UILabel, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface FVBFullScreenControlView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _isTimeOverHour;
    _Bool _isTouching;
    double _videoDuration;
    NSString *_videoDurationStr;
    UIButton *_playeBtn;
    FVBFullScreenSliderView *_slider;
    UILabel *_LTimeLabel;
    UILabel *_RTimeLabel;
    CDUnknownBlockType _stateChangeBlock;
    CDUnknownBlockType _valueChangeBlock;
    UITapGestureRecognizer *_slidertap;
    UIView *_customMaskView;
    UIPanGestureRecognizer *_panGestureRecognizer;
    double _startSliderValue;
    double _origSliderValue;
    double _newSliderValue;
    double _cacheValue;
    CDUnknownBlockType _beginDragBlock;
    struct CGPoint _startPoint;
}

@property(nonatomic) _Bool isTouching; // @synthesize isTouching=_isTouching;
@property(copy, nonatomic) CDUnknownBlockType beginDragBlock; // @synthesize beginDragBlock=_beginDragBlock;
@property(nonatomic) double cacheValue; // @synthesize cacheValue=_cacheValue;
@property(nonatomic) double newSliderValue; // @synthesize newSliderValue=_newSliderValue;
@property(nonatomic) double origSliderValue; // @synthesize origSliderValue=_origSliderValue;
@property(nonatomic) _Bool isTimeOverHour; // @synthesize isTimeOverHour=_isTimeOverHour;
@property(nonatomic) double startSliderValue; // @synthesize startSliderValue=_startSliderValue;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // @synthesize panGestureRecognizer=_panGestureRecognizer;
@property(retain, nonatomic) UIView *customMaskView; // @synthesize customMaskView=_customMaskView;
@property(retain, nonatomic) UITapGestureRecognizer *slidertap; // @synthesize slidertap=_slidertap;
@property(copy, nonatomic) CDUnknownBlockType valueChangeBlock; // @synthesize valueChangeBlock=_valueChangeBlock;
@property(copy, nonatomic) CDUnknownBlockType stateChangeBlock; // @synthesize stateChangeBlock=_stateChangeBlock;
@property(retain, nonatomic) UILabel *RTimeLabel; // @synthesize RTimeLabel=_RTimeLabel;
@property(retain, nonatomic) UILabel *LTimeLabel; // @synthesize LTimeLabel=_LTimeLabel;
@property(retain, nonatomic) FVBFullScreenSliderView *slider; // @synthesize slider=_slider;
@property(retain, nonatomic) UIButton *playeBtn; // @synthesize playeBtn=_playeBtn;
@property(retain, nonatomic) NSString *videoDurationStr; // @synthesize videoDurationStr=_videoDurationStr;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
- (void).cxx_destruct;
- (void)panGestureRecognize:(id)arg1;
- (void)touchSlider:(id)arg1;
- (void)endSliderTrackingEvent;
- (void)moveSliderTrackingEvent;
- (void)beginSliderTrackingEvent;
- (void)changePlayBtnStateEvent:(id)arg1;
- (void)resetTimeLabelFrame;
- (double)getNowPosition;
- (id)getStrWithDuration:(double)arg1;
- (void)refreshTimeLabel;
- (void)refreshCacheValue:(double)arg1 videoDuration:(double)arg2;
- (void)refreshProgressValue:(double)arg1 videoDuration:(double)arg2;
- (void)beginDragSliderCall:(CDUnknownBlockType)arg1;
- (void)stateChangeBlock:(CDUnknownBlockType)arg1 changeValueBlock:(CDUnknownBlockType)arg2;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)updatePlayButtonShowIsPause:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

