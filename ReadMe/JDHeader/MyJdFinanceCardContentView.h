//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FinanceCardContentCellPresenter, JDImageView, UIButton, UILabel;

@interface MyJdFinanceCardContentView : UIView
{
    UIView *_bizView;
    UIView *_infoView;
    UIView *_extraView;
    JDImageView *_bizImageView;
    UILabel *_bizLabel;
    UILabel *_upInfoLabel;
    UILabel *_downInfoLabel;
    JDImageView *_extraImageView;
    UIButton *_extraButton;
    UIView *_line;
    FinanceCardContentCellPresenter *_presenter;
}

+ (double)heightForCell;
@property(retain, nonatomic) FinanceCardContentCellPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIButton *extraButton; // @synthesize extraButton=_extraButton;
@property(retain, nonatomic) JDImageView *extraImageView; // @synthesize extraImageView=_extraImageView;
@property(retain, nonatomic) UILabel *downInfoLabel; // @synthesize downInfoLabel=_downInfoLabel;
@property(retain, nonatomic) UILabel *upInfoLabel; // @synthesize upInfoLabel=_upInfoLabel;
@property(retain, nonatomic) UILabel *bizLabel; // @synthesize bizLabel=_bizLabel;
@property(retain, nonatomic) JDImageView *bizImageView; // @synthesize bizImageView=_bizImageView;
@property(retain, nonatomic) UIView *extraView; // @synthesize extraView=_extraView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *bizView; // @synthesize bizView=_bizView;
- (void).cxx_destruct;
- (void)updateWithPresenter:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

