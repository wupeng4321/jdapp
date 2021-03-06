//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;
@protocol PDVideoNoWifiViewDelegate;

@interface PDVideoNoWifiView : UIView
{
    id <PDVideoNoWifiViewDelegate> _delegate;
    UILabel *_nowifiTipLabel;
    UIButton *_nowifiPlayBtn;
    UIButton *_nowifiPlayBtnSmall;
    UIButton *_closeButton;
    UIButton *_mainCloseButton;
}

@property(retain, nonatomic) UIButton *mainCloseButton; // @synthesize mainCloseButton=_mainCloseButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *nowifiPlayBtnSmall; // @synthesize nowifiPlayBtnSmall=_nowifiPlayBtnSmall;
@property(retain, nonatomic) UIButton *nowifiPlayBtn; // @synthesize nowifiPlayBtn=_nowifiPlayBtn;
@property(retain, nonatomic) UILabel *nowifiTipLabel; // @synthesize nowifiTipLabel=_nowifiTipLabel;
@property(nonatomic) __weak id <PDVideoNoWifiViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)pressCloseButton;
- (void)pressPlayButton;
- (void)setVideoNoWifiViewFrame:(struct CGRect)arg1 withVideoPlayerLoc:(unsigned long long)arg2;
- (void)pressTap;
- (id)initWithFrame:(struct CGRect)arg1;

@end

