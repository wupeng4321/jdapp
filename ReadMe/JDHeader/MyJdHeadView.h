//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class JDImageView, MyJdHomeModel, MyJdJDScoreView, MyJdMemberActivityView, NSArray, NSDictionary, NSString, UIButton, UIImageView, UILabel, UserModel;
@protocol MyJdHeadViewDelegate;

@interface MyJdHeadView : UIView <UIGestureRecognizerDelegate>
{
    JDImageView *_bgView;
    UIImageView *_headBg;
    JDImageView *_userHeadView;
    UILabel *_nickNameLabel;
    UIImageView *_levelNoteBg;
    UILabel *_levelNoteLabel;
    JDImageView *_gongyiIcon;
    UIImageView *_rightBg;
    UIButton *_biggerRightButton;
    UIButton *_rightButton;
    UIImageView *_rightArrow;
    UIButton *_authenButton;
    UIView *_loginView;
    JDImageView *_newUserGuideIcon;
    _Bool _isLevelBorderShow;
    _Bool _isRightButtonBorderShow;
    JDImageView *_plusEnterImage;
    _Bool _isLogin;
    _Bool _hasAnimated;
    _Bool _isFaceloginNeedExpo;
    _Bool _turnToPersonHomeVC;
    JDImageView *_radianbgView;
    UserModel *_userModel;
    NSString *_defaultHeadImage;
    NSArray *_dataArr;
    NSString *_guideIconUrl;
    NSDictionary *_numberMessageDic;
    id <MyJdHeadViewDelegate> _delegate;
    long long _xiaobaiExpoType;
    long long _leftViewShowStyle;
    MyJdMemberActivityView *_memberActivityView;
    MyJdJDScoreView *_jdScoreView;
    MyJdHomeModel *_showModel;
}

@property(retain, nonatomic) MyJdHomeModel *showModel; // @synthesize showModel=_showModel;
@property(retain, nonatomic) MyJdJDScoreView *jdScoreView; // @synthesize jdScoreView=_jdScoreView;
@property(retain, nonatomic) MyJdMemberActivityView *memberActivityView; // @synthesize memberActivityView=_memberActivityView;
@property(nonatomic) long long leftViewShowStyle; // @synthesize leftViewShowStyle=_leftViewShowStyle;
@property(nonatomic, getter=isTurnToPersonHomeVC) _Bool turnToPersonHomeVC; // @synthesize turnToPersonHomeVC=_turnToPersonHomeVC;
@property(nonatomic) long long xiaobaiExpoType; // @synthesize xiaobaiExpoType=_xiaobaiExpoType;
@property(nonatomic) _Bool isFaceloginNeedExpo; // @synthesize isFaceloginNeedExpo=_isFaceloginNeedExpo;
@property(nonatomic) _Bool hasAnimated; // @synthesize hasAnimated=_hasAnimated;
@property(nonatomic) __weak id <MyJdHeadViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *numberMessageDic; // @synthesize numberMessageDic=_numberMessageDic;
@property(retain, nonatomic) NSString *guideIconUrl; // @synthesize guideIconUrl=_guideIconUrl;
@property(retain, nonatomic) NSArray *dataArr; // @synthesize dataArr=_dataArr;
@property(nonatomic) _Bool isLogin; // @synthesize isLogin=_isLogin;
@property(retain, nonatomic) NSString *defaultHeadImage; // @synthesize defaultHeadImage=_defaultHeadImage;
@property(retain, nonatomic) UserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) JDImageView *userHeadView; // @synthesize userHeadView=_userHeadView;
@property(retain, nonatomic) JDImageView *radianbgView; // @synthesize radianbgView=_radianbgView;
@property(retain, nonatomic) JDImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)p_tapJDScoreView;
- (void)p_tapMemberActivityView;
- (void)updateRedPointVersion:(id)arg1;
- (_Bool)checkGoldBorderWithModel:(id)arg1;
- (id)getCustomDateWithHour:(long long)arg1;
- (_Bool)isBetweenFromHour:(long long)arg1 toHour:(long long)arg2;
- (void)plusTapGestureHandle:(id)arg1;
- (void)tapGestureHandle:(id)arg1;
- (void)bubbleTapped:(id)arg1;
- (void)tapHeadImageView:(id)arg1;
- (void)memberButtonTapped:(id)arg1;
- (void)authenButtonTapped:(id)arg1;
- (void)initMemberArea;
- (void)removePlusAnimation;
- (id)getNologinDefaultHeadImage;
- (void)noLoginHandleWithInfo:(id)arg1;
- (void)updateViewBg:(id)arg1 currentUser:(id)arg2;
- (void)loginHandleWithInfo:(id)arg1;
- (void)startAnimationWithRepeatCount:(long long)arg1;
- (id)festivalActivityModelFromMenuConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

