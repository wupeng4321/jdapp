//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinderVideoBuyFloatSkuModel, JDImageView, NSString, NSTimer, UIImageView, UILabel, UITapGestureRecognizer;
@protocol FinderVideoBuyFolatSkuViewDelegate;

@interface FinderVideoBuyFolatSkuView : UIView
{
    NSString *_showingSkuId;
    id <FinderVideoBuyFolatSkuViewDelegate> _delegate;
    UIView *_leftView;
    UIView *_rightView;
    JDImageView *_imgView;
    UILabel *_priceView;
    UIImageView *_cartIconView;
    UITapGestureRecognizer *_leftTapGesture;
    UITapGestureRecognizer *_rightTapGesture;
    FinderVideoBuyFloatSkuModel *_data;
    NSTimer *_autoHidenTimer;
    double _showDuration;
    struct CGPoint _showOrigin;
}

@property(nonatomic) double showDuration; // @synthesize showDuration=_showDuration;
@property(nonatomic) struct CGPoint showOrigin; // @synthesize showOrigin=_showOrigin;
@property(retain, nonatomic) NSTimer *autoHidenTimer; // @synthesize autoHidenTimer=_autoHidenTimer;
@property(retain, nonatomic) FinderVideoBuyFloatSkuModel *data; // @synthesize data=_data;
@property(retain, nonatomic) UITapGestureRecognizer *rightTapGesture; // @synthesize rightTapGesture=_rightTapGesture;
@property(retain, nonatomic) UITapGestureRecognizer *leftTapGesture; // @synthesize leftTapGesture=_leftTapGesture;
@property(retain, nonatomic) UIImageView *cartIconView; // @synthesize cartIconView=_cartIconView;
@property(retain, nonatomic) UILabel *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) JDImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property(nonatomic) __weak id <FinderVideoBuyFolatSkuViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSString *showingSkuId; // @synthesize showingSkuId=_showingSkuId;
- (void).cxx_destruct;
- (void)resetAutoHidenViewTimer;
- (void)destroyTimer;
- (void)timerFinshedEvent;
- (void)show;
- (void)hidenView;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)_didTapRightViewTouchEvent:(id)arg1;
- (void)_didTapLeftViewTouchEvent:(id)arg1;
- (void)createSubViews;
- (void)updateViewShow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

