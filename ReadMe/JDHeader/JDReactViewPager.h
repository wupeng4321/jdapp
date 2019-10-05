//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTView.h"

#import "JDReactCarouselDataSource-Protocol.h"
#import "JDReactCarouselDelegate-Protocol.h"

@class JDReactCarousel, JDReactWeakTimer, NSDictionary, NSNumber, NSString, UIPageControl, UIView;

@interface JDReactViewPager : RCTView <JDReactCarouselDataSource, JDReactCarouselDelegate>
{
    double _lastScrollDispatchTime;
    _Bool _isIndicatorHidden;
    _Bool _scrollEnabled;
    _Bool _autoScroll;
    _Bool _isChange;
    _Bool _wrap;
    NSDictionary *_optionValue;
    long long _initialPage;
    double _timeInteval;
    long long _type;
    CDUnknownBlockType _onPageScroll;
    CDUnknownBlockType _onPageScrollStateChanged;
    CDUnknownBlockType _onPageSelected;
    CDUnknownBlockType _onPageClick;
    NSNumber *_bgViewRef;
    UIView *_blurView;
    UIView *_bgImage;
    double _offsetCenter;
    UIPageControl *_pageControl;
    JDReactCarousel *_carousel;
    JDReactWeakTimer *_timer;
    NSNumber *_blurAmount;
}

@property(copy, nonatomic) NSNumber *blurAmount; // @synthesize blurAmount=_blurAmount;
@property(nonatomic) _Bool wrap; // @synthesize wrap=_wrap;
@property(retain, nonatomic) JDReactWeakTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) JDReactCarousel *carousel; // @synthesize carousel=_carousel;
@property(retain, nonatomic) UIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(nonatomic) double offsetCenter; // @synthesize offsetCenter=_offsetCenter;
@property(nonatomic) _Bool isChange; // @synthesize isChange=_isChange;
@property(retain, nonatomic) UIView *bgImage; // @synthesize bgImage=_bgImage;
@property(retain, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property(retain, nonatomic) NSNumber *bgViewRef; // @synthesize bgViewRef=_bgViewRef;
@property(copy, nonatomic) CDUnknownBlockType onPageClick; // @synthesize onPageClick=_onPageClick;
@property(copy, nonatomic) CDUnknownBlockType onPageSelected; // @synthesize onPageSelected=_onPageSelected;
@property(copy, nonatomic) CDUnknownBlockType onPageScrollStateChanged; // @synthesize onPageScrollStateChanged=_onPageScrollStateChanged;
@property(copy, nonatomic) CDUnknownBlockType onPageScroll; // @synthesize onPageScroll=_onPageScroll;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) double timeInteval; // @synthesize timeInteval=_timeInteval;
@property(nonatomic) _Bool autoScroll; // @synthesize autoScroll=_autoScroll;
@property(nonatomic) _Bool scrollEnabled; // @synthesize scrollEnabled=_scrollEnabled;
@property(nonatomic) _Bool isIndicatorHidden; // @synthesize isIndicatorHidden=_isIndicatorHidden;
@property(nonatomic) long long initialPage; // @synthesize initialPage=_initialPage;
@property(retain, nonatomic) NSDictionary *optionValue; // @synthesize optionValue=_optionValue;
- (void).cxx_destruct;
- (double)carousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (struct CATransform3D)carousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (struct CATransform3D)carousel:(id)arg1 itemTransformOutForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)resetBlurStatus;
- (void)carouselDidEndScrollingAnimation:(id)arg1;
- (void)carouselDidEndDecelerating:(id)arg1;
- (void)carouselDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)carouselWillBeginDragging:(id)arg1;
- (void)carouselCurrentItemIndexDidChange:(id)arg1;
- (void)carousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)carousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)numberOfItemsInCarousel:(id)arg1;
- (void)timerFire;
- (void)pauseTimer;
- (void)resumeTimer;
- (void)hidePageControl;
- (void)addPageControl;
- (void)setupTimer;
- (void)changePlayStatus:(id)arg1;
- (void)reloadData;
- (void)setAutoReload:(_Bool)arg1;
- (void)setBgView:(id)arg1;
- (void)carouselDidScroll:(id)arg1;
- (void)didUpdateReactSubviews;
- (void)layoutSubviews;
- (void)reviseSubviewSize;
- (void)reactSetFrame:(struct CGRect)arg1;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)setRemoveClippedSubviews:(_Bool)arg1;
- (void)addCarouselView;
- (id)optionConfig;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
