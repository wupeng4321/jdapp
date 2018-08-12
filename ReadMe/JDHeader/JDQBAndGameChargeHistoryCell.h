//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDButton, JDImageView, UIImageView, UILabel;

@interface JDQBAndGameChargeHistoryCell : UITableViewCell
{
    UIImageView *_topLineView;
    UILabel *_orderListCodeLable;
    UILabel *_orderListStatusLable;
    UIImageView *_midLineView;
    JDImageView *_iconView;
    UILabel *_nameLable;
    UILabel *_payTypeLable;
    UILabel *_timeLable;
    UIImageView *_bottomLineView;
    JDButton *_payBtn;
    UIImageView *_complete;
}

@property(retain, nonatomic) UIImageView *complete; // @synthesize complete=_complete;
@property(retain, nonatomic) UILabel *timeLable; // @synthesize timeLable=_timeLable;
@property(retain, nonatomic) UILabel *nameLable; // @synthesize nameLable=_nameLable;
@property(retain, nonatomic) JDImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *orderListStatusLable; // @synthesize orderListStatusLable=_orderListStatusLable;
@property(retain, nonatomic) UILabel *orderListCodeLable; // @synthesize orderListCodeLable=_orderListCodeLable;
@property(retain, nonatomic) JDButton *payBtn; // @synthesize payBtn=_payBtn;
@property(retain, nonatomic) UILabel *payTypeLable; // @synthesize payTypeLable=_payTypeLable;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

