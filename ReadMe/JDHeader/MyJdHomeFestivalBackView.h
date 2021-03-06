//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NSString, UIColor, UILabel;
@protocol MyJdHomeFestivalBackViewDelegate;

@interface MyJdHomeFestivalBackView : UIView
{
    _Bool _isPushAnimating;
    NSString *_functionId;
    NSString *_jumpLink;
    NSString *_hintText;
    UIColor *_textColor;
    NSString *_imageUrl;
    NSString *_shortCutIconUrl;
    id <MyJdHomeFestivalBackViewDelegate> _delegate;
    JDImageView *_imageView;
    UILabel *_stateLabel;
    long long _state;
    UIView *_maskView;
    long long _secondFloorLocation;
    struct CGPoint _scrollviewOffset;
}

+ (_Bool)isShowRightIcon;
+ (_Bool)hasFestival;
@property(nonatomic) struct CGPoint scrollviewOffset; // @synthesize scrollviewOffset=_scrollviewOffset;
@property(nonatomic) long long secondFloorLocation; // @synthesize secondFloorLocation=_secondFloorLocation;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool isPushAnimating; // @synthesize isPushAnimating=_isPushAnimating;
@property(nonatomic) __weak id <MyJdHomeFestivalBackViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *shortCutIconUrl; // @synthesize shortCutIconUrl=_shortCutIconUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSString *hintText; // @synthesize hintText=_hintText;
@property(copy, nonatomic) NSString *jumpLink; // @synthesize jumpLink=_jumpLink;
@property(copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
- (void).cxx_destruct;
- (void)setUpUI;
- (id)colorFromString:(id)arg1;
- (void)refreshFestivalSetting;
- (void)setLabelOrigin:(double)arg1;
- (void)hiddenHintLabel;
- (void)showHintLabel;
- (_Bool)willPullingDownInScrollView:(id)arg1;
- (void)refreshScrollViewDidScroll:(id)arg1;
- (void)setLabelLoading;
- (id)initWithFrame:(struct CGRect)arg1;

@end

