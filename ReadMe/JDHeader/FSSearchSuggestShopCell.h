//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, JDImageView, UILabel, UIView;

@interface FSSearchSuggestShopCell : UITableViewCell
{
    _Bool _isHighLight;
    UIView *_shopBackgroudView;
    JDImageView *_shopIcon;
    UILabel *_shopTitle;
    CALayer *_separatorlayer;
}

@property(retain, nonatomic) CALayer *separatorlayer; // @synthesize separatorlayer=_separatorlayer;
@property(retain, nonatomic) UILabel *shopTitle; // @synthesize shopTitle=_shopTitle;
@property(retain, nonatomic) JDImageView *shopIcon; // @synthesize shopIcon=_shopIcon;
@property(retain, nonatomic) UIView *shopBackgroudView; // @synthesize shopBackgroudView=_shopBackgroudView;
@property(nonatomic) _Bool isHighLight; // @synthesize isHighLight=_isHighLight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setShopStyleWithShopTitle:(id)arg1 shopIcon:(id)arg2;
- (void)setlayoutUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

