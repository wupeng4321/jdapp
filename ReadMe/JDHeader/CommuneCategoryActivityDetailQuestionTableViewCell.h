//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CommuneCategoryActivityQuestionDetailModel, UIImageView, UILabel, UIView;

@interface CommuneCategoryActivityDetailQuestionTableViewCell : UITableViewCell
{
    UIImageView *_askIcon;
    UIView *_endLine;
    CommuneCategoryActivityQuestionDetailModel *_model;
    UILabel *_questionContentLabel;
    UILabel *_firstAnswerLabel;
    UILabel *_sencondAnswerLabel;
    UIView *_answerView;
    UILabel *_timeLabel;
    UILabel *_messageLable;
}

@property(retain, nonatomic) UILabel *messageLable; // @synthesize messageLable=_messageLable;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UIView *answerView; // @synthesize answerView=_answerView;
@property(retain, nonatomic) UILabel *sencondAnswerLabel; // @synthesize sencondAnswerLabel=_sencondAnswerLabel;
@property(retain, nonatomic) UILabel *firstAnswerLabel; // @synthesize firstAnswerLabel=_firstAnswerLabel;
@property(retain, nonatomic) UILabel *questionContentLabel; // @synthesize questionContentLabel=_questionContentLabel;
@property(retain, nonatomic) CommuneCategoryActivityQuestionDetailModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)resetFrame;
- (void)setSubView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
