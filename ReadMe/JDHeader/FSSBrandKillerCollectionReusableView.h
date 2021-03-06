//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class CALayer, FSSBrandKillerHeaderViewModel, JDImageView, UIImageView, UILabel;

@interface FSSBrandKillerCollectionReusableView : UICollectionReusableView
{
    FSSBrandKillerHeaderViewModel *_headerViewModel;
    JDImageView *_imageView;
    UILabel *_mainTitleLabel;
    CALayer *_whiteLayer;
    UILabel *_subTitleLabel;
    UIImageView *_leftImageView;
    UIImageView *_rightImageView;
    UILabel *_adWordLabel;
}

@property(retain, nonatomic) UILabel *adWordLabel; // @synthesize adWordLabel=_adWordLabel;
@property(retain, nonatomic) UIImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) CALayer *whiteLayer; // @synthesize whiteLayer=_whiteLayer;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) FSSBrandKillerHeaderViewModel *headerViewModel; // @synthesize headerViewModel=_headerViewModel;
- (void).cxx_destruct;
- (void)createReusableView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

