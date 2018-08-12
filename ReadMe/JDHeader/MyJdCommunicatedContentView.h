//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, MyCommunicateModel, UIButton, UILabel;
@protocol MyJdCommunicatedContentViewDelegate;

@interface MyJdCommunicatedContentView : UIView
{
    JDImageView *_userImageView;
    UILabel *_userPinLabel;
    JDImageView *_questionIcon;
    UILabel *_questionLabel;
    JDImageView *_answerIcon;
    UILabel *_answerLabel;
    UILabel *_answerCountLabel;
    UIButton *_answerButton;
    JDImageView *_productImageView;
    UIView *_line;
    MyCommunicateModel *_model;
    id <MyJdCommunicatedContentViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MyJdCommunicatedContentViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MyCommunicateModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
- (void).cxx_destruct;
- (void)tapGesgureHandle:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

