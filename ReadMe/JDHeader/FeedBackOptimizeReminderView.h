//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FeedBackRecentOptimizeModel, JDImageView, NSArray, NSTimer, UIImageView, UILabel;

@interface FeedBackOptimizeReminderView : UIView
{
    JDImageView *_titleImageView;
    UIImageView *_segmentationImageView;
    UILabel *_moreLabel;
    UIView *_animationContentView;
    NSTimer *_timer;
    UILabel *_firstContentLabel;
    UILabel *_secondContentLabel;
    long long _index;
    long long _maxIndex;
    UIImageView *_backImageView;
    FeedBackRecentOptimizeModel *_optimizeModel;
    NSArray *_contentArray;
    struct CGRect _contentAnimationRect;
}

@property(retain, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(retain, nonatomic) FeedBackRecentOptimizeModel *optimizeModel; // @synthesize optimizeModel=_optimizeModel;
@property(retain, nonatomic) UIImageView *backImageView; // @synthesize backImageView=_backImageView;
@property(nonatomic) long long maxIndex; // @synthesize maxIndex=_maxIndex;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) struct CGRect contentAnimationRect; // @synthesize contentAnimationRect=_contentAnimationRect;
@property(retain, nonatomic) UILabel *secondContentLabel; // @synthesize secondContentLabel=_secondContentLabel;
@property(retain, nonatomic) UILabel *firstContentLabel; // @synthesize firstContentLabel=_firstContentLabel;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UIView *animationContentView; // @synthesize animationContentView=_animationContentView;
@property(retain, nonatomic) UILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) UIImageView *segmentationImageView; // @synthesize segmentationImageView=_segmentationImageView;
@property(retain, nonatomic) JDImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
- (void).cxx_destruct;
- (id)getAnimationLabel;
- (struct CGRect)animationFrame:(long long)arg1;
- (void)setModel;
- (id)getOptimizeReminderStr;
- (void)resumeTimer;
- (void)pauseTimer;
- (void)scrollTimerFired:(id)arg1;
- (void)beginAnimation;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

