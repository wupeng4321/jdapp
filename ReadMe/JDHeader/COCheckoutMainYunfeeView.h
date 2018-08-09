//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractView.h"

@class UIImageView, UILabel, UIView;

@interface COCheckoutMainYunfeeView : COCheckoutMainAbstractView
{
    UILabel *_keyLabel;
    UILabel *_signLable;
    UILabel *_valueLabel;
    UIImageView *_helpImageView;
    UIView *_helpResponseView;
}

@property(retain, nonatomic) UIView *helpResponseView; // @synthesize helpResponseView=_helpResponseView;
@property(retain, nonatomic) UIImageView *helpImageView; // @synthesize helpImageView=_helpImageView;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *signLable; // @synthesize signLable=_signLable;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)handleTapGesture:(id)arg1;
- (void)updateUiFrame;
- (void)setViewModel:(id)arg1;
- (void)prepareForReuse;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

