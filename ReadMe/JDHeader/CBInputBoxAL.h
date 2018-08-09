//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIColor, UIFont, UIImage, UIImageView, UILabel, UITapGestureRecognizer, UITextField;

@interface CBInputBoxAL : UIView
{
    UIImageView *_backgroundImageView;
    _Bool _enabled;
    _Bool _disableCopyActions;
    _Bool _enableValidateIDCardNumber;
    UIImage *_logo;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    NSString *_detail;
    UIColor *_detailColor;
    UIFont *_detailFont;
    long long _maxLength;
    double _minWidthOfTextField;
    UIView *_rightView;
    NSArray *_horizentalSpaces;
    NSArray *_verticalSpaces;
    UIImage *_highlightImage;
    UIImage *_normalImage;
    UIImage *_disabledImage;
    NSLayoutConstraint *_logoWidthConstraint;
    NSLayoutConstraint *_logoLeftConstraint;
    NSLayoutConstraint *_titleLeftConstraint;
    NSLayoutConstraint *_inputLeftConstraint;
    NSLayoutConstraint *_inputTopConstraint;
    NSLayoutConstraint *_infoInputConstraint;
    NSLayoutConstraint *_inputRightConstraint;
    NSLayoutConstraint *_infoBottomConstraint;
    NSLayoutConstraint *_rightWithConstraint;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UITextField *_inputBox;
    UILabel *_infoLabel;
    UIView *_rightPanel;
    UITapGestureRecognizer *_tapGesture;
    double _rightWidth;
}

@property(nonatomic) double rightWidth; // @synthesize rightWidth=_rightWidth;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) __weak UIView *rightPanel; // @synthesize rightPanel=_rightPanel;
@property(nonatomic) __weak UILabel *infoLabel; // @synthesize infoLabel=_infoLabel;
@property(nonatomic) __weak UITextField *inputBox; // @synthesize inputBox=_inputBox;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(nonatomic) __weak NSLayoutConstraint *rightWithConstraint; // @synthesize rightWithConstraint=_rightWithConstraint;
@property(nonatomic) __weak NSLayoutConstraint *infoBottomConstraint; // @synthesize infoBottomConstraint=_infoBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *inputRightConstraint; // @synthesize inputRightConstraint=_inputRightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *infoInputConstraint; // @synthesize infoInputConstraint=_infoInputConstraint;
@property(nonatomic) __weak NSLayoutConstraint *inputTopConstraint; // @synthesize inputTopConstraint=_inputTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *inputLeftConstraint; // @synthesize inputLeftConstraint=_inputLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLeftConstraint; // @synthesize titleLeftConstraint=_titleLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *logoLeftConstraint; // @synthesize logoLeftConstraint=_logoLeftConstraint;
@property(nonatomic) __weak NSLayoutConstraint *logoWidthConstraint; // @synthesize logoWidthConstraint=_logoWidthConstraint;
@property(retain, nonatomic) UIImage *disabledImage; // @synthesize disabledImage=_disabledImage;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage=_highlightImage;
@property(nonatomic) _Bool enableValidateIDCardNumber; // @synthesize enableValidateIDCardNumber=_enableValidateIDCardNumber;
@property(nonatomic) _Bool disableCopyActions; // @synthesize disableCopyActions=_disableCopyActions;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSArray *verticalSpaces; // @synthesize verticalSpaces=_verticalSpaces;
@property(copy, nonatomic) NSArray *horizentalSpaces; // @synthesize horizentalSpaces=_horizentalSpaces;
@property(readonly, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property(nonatomic) double minWidthOfTextField; // @synthesize minWidthOfTextField=_minWidthOfTextField;
@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(retain, nonatomic) UIFont *detailFont; // @synthesize detailFont=_detailFont;
@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
- (void).cxx_destruct;
- (_Bool)isTextValid;
- (void)cb_didChange:(id)arg1;
- (void)editEnd:(id)arg1;
- (void)editBegin:(id)arg1;
- (void)setRightView:(id)arg1 withWidth:(double)arg2;
- (void)setEnableValidateIDNumber:(_Bool)arg1;
@property(readonly, nonatomic) UITextField *textField;
- (void)adjust;
- (void)cb_onTapped;
- (void)cb_setup;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

