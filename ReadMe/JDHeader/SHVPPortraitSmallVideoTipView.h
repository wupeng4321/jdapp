//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface SHVPPortraitSmallVideoTipView : UIView
{
    CDUnknownBlockType _btnClickCall;
    UILabel *_tipLabel;
    UIButton *_tryAgainBtn;
}

@property(retain, nonatomic) UIButton *tryAgainBtn; // @synthesize tryAgainBtn=_tryAgainBtn;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) CDUnknownBlockType btnClickCall; // @synthesize btnClickCall=_btnClickCall;
- (void).cxx_destruct;
- (void)tryAgainBtnAction;
- (void)setErrorType:(long long)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
