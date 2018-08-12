//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IAMainSessionBaseCell.h"

@class IAGrowthLevelView, IAMainSessionGrowthModel, UIButton, UIImageView, UILabel, UIView;

@interface IAMainSessionGrowthCell : IAMainSessionBaseCell
{
    IAMainSessionGrowthModel *_activityModel;
    UIView *_backContentView;
    UILabel *_headerLabel;
    UIImageView *_headerImageView;
    IAGrowthLevelView *_growthLevelView;
    UILabel *_firstTitle;
    UILabel *_secondTitle;
    UIButton *_leftButton;
    UIButton *_rightButton;
}

@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(retain, nonatomic) UILabel *secondTitle; // @synthesize secondTitle=_secondTitle;
@property(retain, nonatomic) UILabel *firstTitle; // @synthesize firstTitle=_firstTitle;
@property(retain, nonatomic) IAGrowthLevelView *growthLevelView; // @synthesize growthLevelView=_growthLevelView;
@property(retain, nonatomic) UIImageView *headerImageView; // @synthesize headerImageView=_headerImageView;
@property(retain, nonatomic) UILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) UIView *backContentView; // @synthesize backContentView=_backContentView;
@property(retain, nonatomic) IAMainSessionGrowthModel *activityModel; // @synthesize activityModel=_activityModel;
- (void).cxx_destruct;
- (void)_clickRightButton;
- (void)_clickLeftButton;
- (void)setRightBtnColor;
- (void)setLeftBtnColor;
- (void)setupRightButton;
- (void)setupLeftButton;
- (void)setupSecondTitle;
- (void)setupFirstTitle;
- (void)setupGrowthLevelView;
- (void)setupHeaderLabel;
- (void)setupHeaderImageView;
- (void)setupBackContentView;
- (id)_attrForheaderLabel:(id)arg1 ext:(id)arg2;
- (void)configModel:(id)arg1 publicModel:(id)arg2;
- (void)customLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

