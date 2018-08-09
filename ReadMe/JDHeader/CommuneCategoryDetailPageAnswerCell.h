//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "CAAnimationDelegate-Protocol.h"

@class CommuneCategoryDetailAnswerModel, CommuneCategoryListProductView, JDIconLabel, JDImageView, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol CommuneCategoryDetailAnswerDelegate;

@interface CommuneCategoryDetailPageAnswerCell : UITableViewCell <CAAnimationDelegate>
{
    UIView *_cardView;
    CommuneCategoryDetailAnswerModel *_answerModel;
    _Bool _isGrayBackground;
    id <CommuneCategoryDetailAnswerDelegate> _delegate;
    UIImageView *_bestImageView;
    JDImageView *_userHeadImage;
    UIButton *_reportButton;
    JDIconLabel *_praiseButton;
    JDIconLabel *_commentButton;
    UILabel *_questionContentLabel;
    UILabel *_timeLabel;
    UILabel *_nickNameLabel;
    JDImageView *_userTypeView;
    CommuneCategoryListProductView *_wareView;
    UIButton *_bestButton;
}

@property(retain, nonatomic) UIButton *bestButton; // @synthesize bestButton=_bestButton;
@property(retain, nonatomic) CommuneCategoryListProductView *wareView; // @synthesize wareView=_wareView;
@property(retain, nonatomic) JDImageView *userTypeView; // @synthesize userTypeView=_userTypeView;
@property(retain, nonatomic) UILabel *nickNameLabel; // @synthesize nickNameLabel=_nickNameLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *questionContentLabel; // @synthesize questionContentLabel=_questionContentLabel;
@property(retain, nonatomic) JDIconLabel *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) JDIconLabel *praiseButton; // @synthesize praiseButton=_praiseButton;
@property(retain, nonatomic) UIButton *reportButton; // @synthesize reportButton=_reportButton;
@property(retain, nonatomic) JDImageView *userHeadImage; // @synthesize userHeadImage=_userHeadImage;
@property(retain, nonatomic) UIImageView *bestImageView; // @synthesize bestImageView=_bestImageView;
@property(nonatomic) _Bool isGrayBackground; // @synthesize isGrayBackground=_isGrayBackground;
@property(nonatomic) __weak id <CommuneCategoryDetailAnswerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unpraise:(id)arg1 count:(id)arg2;
- (void)praise:(id)arg1 count:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animationDidStart:(id)arg1;
- (void)buttonTap:(id)arg1;
- (void)bestButtonTap:(id)arg1;
- (void)reportButtonTap:(id)arg1;
- (void)addBorderForSetBest:(id)arg1;
@property(retain, nonatomic) CommuneCategoryDetailAnswerModel *model;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

