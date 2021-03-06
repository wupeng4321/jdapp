//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NewFinderImageView, UIImageView, UILabel, UIView;

@interface FinderAttentionMultiPictureCollectionViewCell : UICollectionViewCell
{
    NewFinderImageView *_imageView;
    UIView *_maskView;
    UILabel *_displayLabel;
    UIImageView *_displayIconImageView;
}

@property(retain, nonatomic) UIImageView *displayIconImageView; // @synthesize displayIconImageView=_displayIconImageView;
@property(retain, nonatomic) UILabel *displayLabel; // @synthesize displayLabel=_displayLabel;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) NewFinderImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)addBlurViewAndDisplayStr:(id)arg1;
- (void)configCellWithModel:(id)arg1 displayStr:(id)arg2;
- (void)commonInit;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

