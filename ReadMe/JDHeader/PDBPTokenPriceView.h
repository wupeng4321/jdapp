//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDIcon, UIButton, UILabel;

@interface PDBPTokenPriceView : UIView
{
    _Bool _showTip;
    UIButton *_infoIconBtn;
    UILabel *_priceLabel;
    JDIcon *_tokenPriceIcon;
}

@property(retain, nonatomic) JDIcon *tokenPriceIcon; // @synthesize tokenPriceIcon=_tokenPriceIcon;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(nonatomic) _Bool showTip; // @synthesize showTip=_showTip;
@property(retain, nonatomic) UIButton *infoIconBtn; // @synthesize infoIconBtn=_infoIconBtn;
- (void).cxx_destruct;
- (void)updateData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

