//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface LifeChargeRecordCell : UITableViewCell
{
    struct CGSize size;
    UIImageView *_clockImg;
    UILabel *_recordPageLabel;
}

@property(retain, nonatomic) UILabel *recordPageLabel; // @synthesize recordPageLabel=_recordPageLabel;
@property(retain, nonatomic) UIImageView *clockImg; // @synthesize clockImg=_clockImg;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
