//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, UIColor, UIFont, UILabel;

@interface DJXYPageSegmentViewCell : UICollectionViewCell
{
    NSString *_title;
    UILabel *_titleLB;
}

@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
@property(retain, nonatomic) UIFont *titleFont;
@property(retain, nonatomic) UIColor *titleColor;
- (void)setUpUI;
- (void)layoutSubviews;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

@end

