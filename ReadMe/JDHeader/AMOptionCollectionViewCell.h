//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AMDoubelColorView, UIImageView;

@interface AMOptionCollectionViewCell : UICollectionViewCell
{
    UIImageView *_mBackgroundImageView;
    AMDoubelColorView *_mColorView;
}

@property(retain, nonatomic) AMDoubelColorView *mColorView; // @synthesize mColorView=_mColorView;
@property(retain, nonatomic) UIImageView *mBackgroundImageView; // @synthesize mBackgroundImageView=_mBackgroundImageView;
- (void).cxx_destruct;
- (void)cellDidSelected:(_Bool)arg1;
- (void)showCellWithArray:(id)arg1;
- (void)showCellWithModel:(id)arg1;
- (void)initSubViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
