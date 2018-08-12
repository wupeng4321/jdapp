//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface IARankListCell : UITableViewCell
{
    UIImageView *_rankImageView;
    UILabel *_rankLabel;
    UILabel *_userNameLabel;
    UILabel *_growthValueLabel;
    UILabel *_bottomLine;
}

@property(retain, nonatomic) UILabel *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *growthValueLabel; // @synthesize growthValueLabel=_growthValueLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UILabel *rankLabel; // @synthesize rankLabel=_rankLabel;
@property(retain, nonatomic) UIImageView *rankImageView; // @synthesize rankImageView=_rankImageView;
- (void).cxx_destruct;
- (void)setupBottomLine;
- (void)setupGrowthValueLabel;
- (void)setupUserNameLabel;
- (void)setupRankLabel;
- (void)setupRankImageView;
- (void)customLayout;
- (void)_configFirstThreeView:(id)arg1;
- (void)configModel:(id)arg1 indexPath:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

