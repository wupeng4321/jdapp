//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CategoryThirdModel, JDImageView, UILabel;

@interface CategoryFourRowsCardItemCell : UICollectionViewCell
{
    JDImageView *_coverImageView;
    UILabel *_lblTitle;
    UILabel *_lblDes;
    CategoryThirdModel *_thirdItem;
}

@property(retain, nonatomic) CategoryThirdModel *thirdItem; // @synthesize thirdItem=_thirdItem;
@property(retain, nonatomic) UILabel *lblDes; // @synthesize lblDes=_lblDes;
@property(retain, nonatomic) UILabel *lblTitle; // @synthesize lblTitle=_lblTitle;
@property(retain, nonatomic) JDImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)addShadow;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;

@end

