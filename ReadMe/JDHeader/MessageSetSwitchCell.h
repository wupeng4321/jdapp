//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel, UISwitch, UIView;
@protocol MessageSettingCellDelegate;

@interface MessageSetSwitchCell : UITableViewCell
{
    id <MessageSettingCellDelegate> _delegate;
    UILabel *_typeLbl;
    UISwitch *_switchView;
    UIView *_topSeperatorView;
    UIView *_bottomSeperatorView;
}

@property(retain, nonatomic) UIView *bottomSeperatorView; // @synthesize bottomSeperatorView=_bottomSeperatorView;
@property(retain, nonatomic) UIView *topSeperatorView; // @synthesize topSeperatorView=_topSeperatorView;
@property(retain, nonatomic) UISwitch *switchView; // @synthesize switchView=_switchView;
@property(retain, nonatomic) UILabel *typeLbl; // @synthesize typeLbl=_typeLbl;
@property(nonatomic) __weak id <MessageSettingCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)hideBottomSeperator:(_Bool)arg1;
- (void)hideTopSeperator:(_Bool)arg1;
- (void)clickSwitch;
- (void)setTypeName:(id)arg1;
- (void)setSwitchOn:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

