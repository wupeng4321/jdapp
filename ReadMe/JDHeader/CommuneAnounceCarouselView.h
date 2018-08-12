//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CommuneAnounceCarouselUnitView, NSMutableArray, NSTimer;

@interface CommuneAnounceCarouselView : UIView
{
    double _scrollTime;
    NSMutableArray *_activityArray;
    CDUnknownBlockType _anounceUnitAction;
    NSTimer *_scrollTimer;
    double _scrollIndex;
    CommuneAnounceCarouselUnitView *_firstUnitView;
    CommuneAnounceCarouselUnitView *_secondUnitView;
}

@property(retain, nonatomic) CommuneAnounceCarouselUnitView *secondUnitView; // @synthesize secondUnitView=_secondUnitView;
@property(retain, nonatomic) CommuneAnounceCarouselUnitView *firstUnitView; // @synthesize firstUnitView=_firstUnitView;
@property(nonatomic) double scrollIndex; // @synthesize scrollIndex=_scrollIndex;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(copy, nonatomic) CDUnknownBlockType anounceUnitAction; // @synthesize anounceUnitAction=_anounceUnitAction;
@property(retain, nonatomic) NSMutableArray *activityArray; // @synthesize activityArray=_activityArray;
@property(nonatomic) double scrollTime; // @synthesize scrollTime=_scrollTime;
- (void).cxx_destruct;
- (void)scrollTimerFired:(id)arg1;
- (void)pauseTimer;
- (id)getActivityModel:(double)arg1;
- (void)resetScroll;
- (void)startTimer;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
