//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CommuneQuestionModel, UIImageView, UILabel;

@interface CommuneAnswerView : UIView
{
    UILabel *_timeLabel;
    CommuneQuestionModel *_model;
    unsigned long long _answerCount;
    UILabel *_countLabel;
    UIImageView *_answIcon1;
    UILabel *_answerLabel1;
    UIImageView *_answIcon2;
    UILabel *_answerLabel2;
    UIImageView *_answNOIcon;
}

@property(retain, nonatomic) UIImageView *answNOIcon; // @synthesize answNOIcon=_answNOIcon;
@property(retain, nonatomic) UILabel *answerLabel2; // @synthesize answerLabel2=_answerLabel2;
@property(retain, nonatomic) UIImageView *answIcon2; // @synthesize answIcon2=_answIcon2;
@property(retain, nonatomic) UILabel *answerLabel1; // @synthesize answerLabel1=_answerLabel1;
@property(retain, nonatomic) UIImageView *answIcon1; // @synthesize answIcon1=_answIcon1;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(nonatomic) unsigned long long answerCount; // @synthesize answerCount=_answerCount;
@property(retain, nonatomic) CommuneQuestionModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (int)getAnswerHeight;
- (void)setAnswerFrame:(unsigned long long)arg1;
- (id)getAnswerString:(id)arg1;
- (void)setAnswerTime:(id)arg1;
- (void)setAnswer2Text:(id)arg1;
- (void)setAnswer1Text:(id)arg1;
- (void)setSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

