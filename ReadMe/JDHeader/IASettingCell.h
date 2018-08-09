//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class IASettingModel, JDSwitch, UIImageView, UILabel, UIView;

@interface IASettingCell : UITableViewCell
{
    UILabel *titleLabel;
    UILabel *contentLabel;
    UIImageView *contentImgView;
    UIImageView *arrowImgView;
    JDSwitch *functionSwitch;
    UIView *topLine;
    UIView *bottomLine;
    IASettingModel *model;
    UIImageView *_redDot;
}

@property(retain, nonatomic) UIImageView *redDot; // @synthesize redDot=_redDot;
- (void).cxx_destruct;
- (void)switchAction:(id)arg1;
- (void)layoutSubviews;
- (void)fillWithObject:(id)arg1 withIndexPath:(id)arg2;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

