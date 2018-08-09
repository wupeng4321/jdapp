//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BJXViewInfosModel, CCCWeakTimer, CCCouponXViewTrailerView, JDImageView, JDLabel;

@interface CCCouponXView : UIView
{
    long long currentTime;
    JDImageView *_IconImageView;
    JDImageView *_btnView;
    JDLabel *_textLabel;
    CCCWeakTimer *_timer;
    CCCouponXViewTrailerView *_trailerView;
    BJXViewInfosModel *_item;
    CDUnknownBlockType _showBlock;
}

@property(copy, nonatomic) CDUnknownBlockType showBlock; // @synthesize showBlock=_showBlock;
@property(retain, nonatomic) BJXViewInfosModel *item; // @synthesize item=_item;
@property(retain, nonatomic) CCCouponXViewTrailerView *trailerView; // @synthesize trailerView=_trailerView;
@property(retain, nonatomic) CCCWeakTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) JDLabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) JDImageView *btnView; // @synthesize btnView=_btnView;
@property(retain, nonatomic) JDImageView *IconImageView; // @synthesize IconImageView=_IconImageView;
- (void).cxx_destruct;
- (void)showXView;
- (void)refreshTimerView;
- (void)stopTimer;
- (void)coundDown;
- (void)setNoTimeStyle;
- (void)setHasTimeStyle;
- (void)updateData:(id)arg1 showXView:(CDUnknownBlockType)arg2;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

