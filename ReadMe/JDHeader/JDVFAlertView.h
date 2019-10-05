//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIButton, UILabel, UIView;

@interface JDVFAlertView : UIControl
{
    UIView *_iKnowView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    UIButton *_rightButton;
    CDUnknownBlockType _btnClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType btnClickBlock; // @synthesize btnClickBlock=_btnClickBlock;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *iKnowView; // @synthesize iKnowView=_iKnowView;
- (void).cxx_destruct;
- (void)backgroundOnClicked;
- (void)rightButtonOnClicked:(id)arg1;
- (void)resetMessageLabelConstraints;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1 andTitle:(id)arg2 andMessage:(id)arg3 andBlock:(CDUnknownBlockType)arg4;

@end
