//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, UILabel;

@interface PDBPParameterFloorViewCell : UICollectionViewCell
{
    JDImageView *_titleImage;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
}

@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *titleImage; // @synthesize titleImage=_titleImage;
- (void).cxx_destruct;
- (void)layoutCollectionViewSubViews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

