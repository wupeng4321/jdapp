//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UILabel;

@interface JZHomePageThemeItemCell : UICollectionViewCell
{
    JDImageView *_mainImg;
    UILabel *_titleLbl;
    UILabel *_sloganLbl;
}

@property(retain, nonatomic) UILabel *sloganLbl; // @synthesize sloganLbl=_sloganLbl;
@property(retain, nonatomic) UILabel *titleLbl; // @synthesize titleLbl=_titleLbl;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

