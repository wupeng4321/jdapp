//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, TTTInventoryPriceView;

@interface TTTInventoryImageView : UIView
{
    JDImageView *_imageView;
    TTTInventoryPriceView *_priceView;
}

@property(retain, nonatomic) TTTInventoryPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setGrayCommodityImageWithURL:(id)arg1 showPrice:(_Bool)arg2 price:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

