//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NewRecommendBase.h"

@class JDImageView, UILabel, UIView;

@interface NewRecommendShop : NewRecommendBase
{
    JDImageView *brandImageView;
    UILabel *shopNameLabel;
    UILabel *jdShopLabel;
    UILabel *recommendLabel;
    UIView *itemView;
    UILabel *shopLabel;
    JDImageView *item1ImageView;
    JDImageView *item2ImageView;
    UIView *blackView;
    float recommendLabelCenterY;
    JDImageView *_backgroundImg;
}

@property(retain) JDImageView *backgroundImg; // @synthesize backgroundImg=_backgroundImg;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)loadItemView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

