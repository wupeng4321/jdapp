//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, TTTAdsModel, UILabel, UITapGestureRecognizer;

@interface TTTDetailList1R2Unit : UIView
{
    TTTAdsModel *_adsModel;
    UILabel *_mainTitleLabel;
    UIView *_boderColorView;
    JDImageView *_imageView1;
    JDImageView *_imageView2;
    JDImageView *_imageView3;
    UILabel *_authorNameLabel;
    UILabel *_goodsNumLabel;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILabel *goodsNumLabel; // @synthesize goodsNumLabel=_goodsNumLabel;
@property(retain, nonatomic) UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
@property(retain, nonatomic) JDImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(retain, nonatomic) JDImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(retain, nonatomic) JDImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(retain, nonatomic) UIView *boderColorView; // @synthesize boderColorView=_boderColorView;
@property(retain, nonatomic) UILabel *mainTitleLabel; // @synthesize mainTitleLabel=_mainTitleLabel;
@property(retain, nonatomic) TTTAdsModel *adsModel; // @synthesize adsModel=_adsModel;
- (void).cxx_destruct;
- (void)p_configPublisherAndProductNum:(id)arg1;
- (void)p_configAdsList:(id)arg1;
- (void)p_configTitle:(id)arg1;
- (void)viewClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end
