//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, SHVPLivingRedView;

@interface SHVPReCommertCollectionViewCell : UICollectionViewCell
{
    JDImageView *_backImg;
    SHVPLivingRedView *_livingView;
}

@property(retain, nonatomic) SHVPLivingRedView *livingView; // @synthesize livingView=_livingView;
@property(retain, nonatomic) JDImageView *backImg; // @synthesize backImg=_backImg;
- (void).cxx_destruct;
- (void)cofigCellWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

