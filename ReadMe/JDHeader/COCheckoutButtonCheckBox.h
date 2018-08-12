//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, NSNumber, NSString, UILabel;
@protocol COCheckoutButtonCheckBoxDelegate;

@interface COCheckoutButtonCheckBox : UIView
{
    JDButton *jdIconButton_;
    UILabel *titleLabel_;
    NSString *title_;
    _Bool checked_;
    _Bool enabled_;
    NSNumber *Id;
    id <COCheckoutButtonCheckBoxDelegate> _delegate;
}

@property(nonatomic) __weak id <COCheckoutButtonCheckBoxDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSNumber *Id; // @synthesize Id;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=titleLabel_;
@property(nonatomic) _Bool enabled; // @synthesize enabled=enabled_;
@property(retain, nonatomic) NSString *title; // @synthesize title=title_;
@property(nonatomic) _Bool checked; // @synthesize checked=checked_;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg1;
- (void)alignmentCenterCheckBox;
- (void)layoutSubviews;
- (id)initWithTitle:(id)arg1;

@end
