//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface JDPQuickTypeTableViewCell : UITableViewCell
{
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
}

@property(nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)loadCellModel:(id)arg1;
- (void)awakeFromNib;

@end

