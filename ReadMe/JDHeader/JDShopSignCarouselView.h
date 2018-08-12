//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSTimer, UIScrollView;

@interface JDShopSignCarouselView : UIView
{
    NSArray *_dataArr;
    UIScrollView *_scrollView;
    NSTimer *_timer;
    int index;
}

@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
- (void)nextPage;
- (void)stopAnimation;
- (void)setData;
- (void)setViewData:(id)arg1;
- (void)dealloc;
- (void)appDidEnterBackgroundNotification;
- (void)appWillEnterForegroundNotification;
- (id)initWithFrame:(struct CGRect)arg1;

@end

