//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, SHVPProductFlagView, UILabel;

@interface SHVPMainPageNewProductView : UIView
{
    JDImageView *_productImage;
    UIView *_bottomBGView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    SHVPProductFlagView *_flagView;
}

@property(retain, nonatomic) SHVPProductFlagView *flagView; // @synthesize flagView=_flagView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *bottomBGView; // @synthesize bottomBGView=_bottomBGView;
@property(retain, nonatomic) JDImageView *productImage; // @synthesize productImage=_productImage;
- (void).cxx_destruct;
- (void)setUpWithModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

