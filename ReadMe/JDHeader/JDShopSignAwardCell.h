//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, NSString, UIButton, UILabel;

@interface JDShopSignAwardCell : UITableViewCell
{
    JDImageView *_iconView;
    UILabel *_provideTimeLabel;
    UILabel *_validTimeLabel;
    UILabel *_statusLabel;
    UILabel *_detailLabel;
    UIButton *_actionButton;
    NSString *_wareId;
    NSString *_zxPrice;
}

@property(retain, nonatomic) NSString *zxPrice; // @synthesize zxPrice=_zxPrice;
@property(retain, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
- (void)setCellData:(id)arg1;
- (void)actionButtonClick;
- (void)dealloc;
- (void)setActionButtonTitle:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;

@end

