//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JZHomeBaseCollectionViewCell.h"

@class JDImageView, JZHomeNormalFloorModel;

@interface JZHomeNormalFloorCell : JZHomeBaseCollectionViewCell
{
    JDImageView *_imageView;
    JZHomeNormalFloorModel *_model;
}

@property(retain, nonatomic) JZHomeNormalFloorModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)p_imgTapped;
- (void)setupViews;

@end

