//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UILabel;

@interface TTTRankListWareView : UIView
{
    JDImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)bindData:(id)arg1 showPrice:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
