//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CAAnimationDelegate-Protocol.h"

@class CommuneDetailAnswerModel, CommuneRewardLogoView, JDIconLabel, JDImageView, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol CommuneDetailAnswerDelegate;

@interface CommuneDetailAnswerCell : UITableViewCell <CAAnimationDelegate>
{
    CommuneDetailAnswerModel *_answerModel;
    UIView *_cardView;
    _Bool _showRewardBeans;
    id <CommuneDetailAnswerDelegate> _delegate;
    long long _currentRow;
    JDImageView *_userHeadImage;
    UIButton *_reportButton;
    UIButton *_bestButton;
    JDIconLabel *_praiseButton;
    JDIconLabel *_commentButton;
    UILabel *_questionContentLabel;
    UIImageView *_userTypeView;
    UILabel *_timeLabel;
    UILabel *_nickNameLabel;
    CommuneRewardLogoView *_bestImageView;
    JDImageView *_paopaoImageView;
    JDImageView *_topImageView;
}

@property(retain, nonatomic) JDImageView *topImageView; // @synthesize topImageView=_topImageView;
@property(retain, nonatomic) JDImageView *paopaoImageView; // @synthesize paopaoImageView=_paopaoImageView;
@property(retain, nonatomic) CommuneRewardLogoView *bestImageView; // @synthesize bestImageView=_bestImageView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIImageView *userTypeView; // @synthesize userTypeView=_userTypeView;
@property(retain, nonatomic) UILabel *questionContentLabel; // @synthesize questionContentLabel=_questionContentLabel;
@property(retain, nonatomic) JDIconLabel *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) JDIconLabel *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(retain, nonatomic) UIButton *bestButton; // @synthesize bestButton=_bestButton;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) JDImageView *userHeadImage; // @synthesize userHeadImage=_userHeadImage;
@property(nonatomic) long long currentRow; // @synthesize currentRow=_currentRow;
@property(nonatomic) __weak id <CommuneDetailAnswerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showRewardBeans; // @synthesize showRewardBeans=_showRewardBeans;
- (void).cxx_destruct;
- (void)unpraise:(id)arg1;
- (void)praise:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)buttonTap:(id)arg1;
- (void)bestButtonTap:(id)arg1;
- (void)reportButtonTap:(id)arg1;
- (void)userTypeViewTap:(id)arg1;
- (void)addBorderForSetBest:(id)arg1;
- (void)addBorderForReward:(id)arg1;
@property(retain, nonatomic) CommuneDetailAnswerModel *model;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

