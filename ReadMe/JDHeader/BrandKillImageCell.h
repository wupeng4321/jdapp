//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BrandKillImageModel, JDImageView, SSSNewBrandKillImageModel;

@interface BrandKillImageCell : UITableViewCell
{
    SSSNewBrandKillImageModel *_imageModel;
    BrandKillImageModel *_brandImageModel;
    JDImageView *_brandImageView;
}

@property(retain, nonatomic) JDImageView *brandImageView; // @synthesize brandImageView=_brandImageView;
@property(retain, nonatomic) BrandKillImageModel *brandImageModel; // @synthesize brandImageModel=_brandImageModel;
@property(retain, nonatomic) SSSNewBrandKillImageModel *imageModel; // @synthesize imageModel=_imageModel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

