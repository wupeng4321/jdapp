//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MyJdBaseFloor, UIImageView;

@interface MyJdFloorFooterView : UIView
{
    MyJdBaseFloor *_floor;
    UIView *_contentView;
    UIImageView *_shadowImageView;
}

@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) MyJdBaseFloor *floor; // @synthesize floor=_floor;
- (void).cxx_destruct;
- (void)configWithFloor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

