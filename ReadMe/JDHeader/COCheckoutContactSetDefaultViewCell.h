//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class COCheckoutSwitch, NSString, UILabel, UIView;

@interface COCheckoutContactSetDefaultViewCell : UITableViewCell
{
    COCheckoutSwitch *_switchBtn;
    NSString *_subLabelText;
    UIView *_baseView;
    UILabel *_subLabel;
    UIView *_bottomLine;
}

+ (double)heightOfNormal;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UIView *baseView; // @synthesize baseView=_baseView;
@property(copy, nonatomic) NSString *subLabelText; // @synthesize subLabelText=_subLabelText;
@property(readonly, nonatomic) COCheckoutSwitch *switchBtn; // @synthesize switchBtn=_switchBtn;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

