//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UICollectionView, UIImageView, UILabel;

@interface BrandKillAwardView : UIView
{
    UICollectionView *_collectionView;
    UILabel *_titleLabel;
    UIImageView *_arrawImageView;
}

@property(retain, nonatomic) UIImageView *arrawImageView; // @synthesize arrawImageView=_arrawImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)awardViewBrankStartTime:(id)arg1 backgroudColor:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
