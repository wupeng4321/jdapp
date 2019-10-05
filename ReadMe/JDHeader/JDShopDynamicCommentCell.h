//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, UILabel, UIView;

@interface JDShopDynamicCommentCell : UITableViewCell
{
    JDImageView *_headIcon;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UILabel *_floorLabel;
    UILabel *_commnetLabel;
    UILabel *_pCommentLabel;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *pCommentLabel; // @synthesize pCommentLabel=_pCommentLabel;
@property(retain, nonatomic) UILabel *commnetLabel; // @synthesize commnetLabel=_commnetLabel;
@property(retain, nonatomic) UILabel *floorLabel; // @synthesize floorLabel=_floorLabel;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) JDImageView *headIcon; // @synthesize headIcon=_headIcon;
- (void).cxx_destruct;
- (void)setCellWithModel:(id)arg1;
- (void)initUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
