//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CommuneCategoryDetailQuestionModel, CommuneDetailQuestionStatusModel, JDButton, JDImageView, UIButton, UIImageView, UILabel, UIView;
@protocol CommuneCategoryDetailQuestionDelegate;

@interface CommuneCategoryDetailPageQuestionCell : UITableViewCell
{
    JDImageView *_userHeadView;
    UILabel *_nickNameLabel;
    UILabel *_timeLabel;
    UILabel *_questionContentLabel;
    UIView *_bottomlineview;
    UILabel *_activityLabel;
    UILabel *_categoryLabel;
    UIButton *_moreButton;
    JDButton *_wantQuestButton;
    UIImageView *_categoryImageView;
    JDButton *_questButton;
    CommuneCategoryDetailQuestionModel *_model;
    CommuneDetailQuestionStatusModel *_statusModel;
    CDUnknownBlockType _report;
    CDUnknownBlockType _categoryClicked;
    CDUnknownBlockType _activeClicked;
    id <CommuneCategoryDetailQuestionDelegate> _delegate;
}

@property(nonatomic) __weak id <CommuneCategoryDetailQuestionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType activeClicked; // @synthesize activeClicked=_activeClicked;
@property(copy, nonatomic) CDUnknownBlockType categoryClicked; // @synthesize categoryClicked=_categoryClicked;
@property(copy, nonatomic) CDUnknownBlockType report; // @synthesize report=_report;
@property(retain, nonatomic) CommuneDetailQuestionStatusModel *statusModel; // @synthesize statusModel=_statusModel;
@property(retain, nonatomic) CommuneCategoryDetailQuestionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)questButtonTap:(id)arg1;
- (void)wantQuestButtonTap:(id)arg1;
- (void)moreButtonTap:(id)arg1;
- (void)activeTap;
- (void)categoryTap;
- (void)setActivityLabel:(id)arg1 withString:(id)arg2;
- (void)setCategoryLabel:(id)arg1 withString:(id)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

