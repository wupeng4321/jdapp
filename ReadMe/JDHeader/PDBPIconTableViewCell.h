//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, UIImageView, UILabel, UIView;

@interface PDBPIconTableViewCell : UITableViewCell
{
    JDImageView *_icon;
    UILabel *_title;
    UILabel *_detailTitle;
    UIView *_line;
    UIImageView *_rightIcon;
}

@property(retain, nonatomic) UIImageView *rightIcon; // @synthesize rightIcon=_rightIcon;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *detailTitle; // @synthesize detailTitle=_detailTitle;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) JDImageView *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setCellDataWithDict:(id)arg1;
- (void)resetState;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
