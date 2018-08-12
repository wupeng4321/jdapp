//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol CommuneUserCenterHeadSwitchDelegate;

@interface CommuneUserCenterHeadSwitchView : UIView
{
    UIView *_bottomLine;
    id <CommuneUserCenterHeadSwitchDelegate> _delegate;
    UIButton *_questionCategory;
    UIButton *_questionSingle;
    UIButton *_answerCategory;
    UIButton *_answerSingle;
    UIButton *_followCategory;
    UIButton *_followSingle;
    UIButton *_questionButton;
    UIButton *_answerButton;
    UIButton *_followButton;
}

@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *answerButton; // @synthesize answerButton=_answerButton;
@property(retain, nonatomic) UIButton *questionButton; // @synthesize questionButton=_questionButton;
@property(retain, nonatomic) UIButton *followSingle; // @synthesize followSingle=_followSingle;
@property(retain, nonatomic) UIButton *followCategory; // @synthesize followCategory=_followCategory;
@property(retain, nonatomic) UIButton *answerSingle; // @synthesize answerSingle=_answerSingle;
@property(retain, nonatomic) UIButton *answerCategory; // @synthesize answerCategory=_answerCategory;
@property(retain, nonatomic) UIButton *questionSingle; // @synthesize questionSingle=_questionSingle;
@property(retain, nonatomic) UIButton *questionCategory; // @synthesize questionCategory=_questionCategory;
@property(nonatomic) __weak id <CommuneUserCenterHeadSwitchDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)createButton;
- (void)sencondClick:(id)arg1;
- (void)moveBootomLine:(long long)arg1 isAnimate:(_Bool)arg2;
- (void)didClick:(id)arg1;
- (void)changSelected:(unsigned long long)arg1;
- (void)changeButtonHidden:(unsigned long long)arg1;
- (id)createTopButton;
- (void)setSubViews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
