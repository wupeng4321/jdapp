//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CommuneDetailQuestionStatusModel, CommuneQuestionModel, JDImageView, UIButton, UILabel, UIView;
@protocol CommuneDetailQuestionDelegate;

@interface CommuneDetailQuestionCell : UITableViewCell
{
    JDImageView *_userHeadView;
    UILabel *_nickNameLabel;
    UIButton *_wantQuestButton;
    UILabel *_timeLabel;
    UILabel *_questionContentLabel;
    UIView *_bottomlineview;
    UIButton *_moreButton;
    UIButton *_questButton;
    CommuneQuestionModel *_model;
    CommuneDetailQuestionStatusModel *_statusModel;
    CDUnknownBlockType _report;
    id <CommuneDetailQuestionDelegate> _delegate;
}

@property(nonatomic) __weak id <CommuneDetailQuestionDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType report; // @synthesize report=_report;
@property(retain, nonatomic) CommuneDetailQuestionStatusModel *statusModel; // @synthesize statusModel=_statusModel;
@property(retain, nonatomic) CommuneQuestionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)questButtonTap:(id)arg1;
- (void)wantQuestButtonTap:(id)arg1;
- (void)moreButtonTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

