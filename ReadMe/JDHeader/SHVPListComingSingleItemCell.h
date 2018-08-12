//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, SHVPBaseListItem, UIButton, UILabel, UIView;

@interface SHVPListComingSingleItemCell : UITableViewCell
{
    UIButton *_remindButton;
    UIView *_grayLine;
    JDImageView *_mainImg;
    UIView *_blackBGView;
    UILabel *_descLabel;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    SHVPBaseListItem *_cellModel;
}

@property(retain, nonatomic) SHVPBaseListItem *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *blackBGView; // @synthesize blackBGView=_blackBGView;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
@property(retain, nonatomic) UIView *grayLine; // @synthesize grayLine=_grayLine;
@property(retain, nonatomic) UIButton *remindButton; // @synthesize remindButton=_remindButton;
- (void).cxx_destruct;
- (void)configRemindButtonUI;
- (void)updateCellContent;
- (void)bindCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

