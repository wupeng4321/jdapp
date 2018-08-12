//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDiCarouselDataSource-Protocol.h"
#import "JDiCarouselDelegate-Protocol.h"

@class JDiCarousel, NSString, NSTimer;
@protocol TTTListCarouselViewDelegate;

@interface TTTListCarouselView : UIView <JDiCarouselDelegate, JDiCarouselDataSource>
{
    id <TTTListCarouselViewDelegate> _delegate;
    double _carouselTime;
    JDiCarousel *_carouselView;
    long long _currentIndex;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) JDiCarousel *carouselView; // @synthesize carouselView=_carouselView;
@property(nonatomic) double carouselTime; // @synthesize carouselTime=_carouselTime;
@property(nonatomic) __weak id <TTTListCarouselViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)cyclingViewFrame;
- (struct CATransform3D)JDiCarousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (void)luckyNodeTimerFire;
- (void)reloadListData;
- (void)resumeCarousel;
- (void)pauseCarousel;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 carouselTime:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

