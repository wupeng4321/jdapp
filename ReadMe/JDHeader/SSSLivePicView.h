//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, SSSListLivingIndicator, SSSLiveListBrandModel, UIImageView, UILabel;

@interface SSSLivePicView : UIView
{
    SSSLiveListBrandModel *_brandModel;
    JDImageView *_mainImg;
    UIImageView *_statusImg_normal;
    JDImageView *_statusImg_living;
    UILabel *_timeLabel;
    UIView *_blackBgView;
    UILabel *_titleLabel;
    SSSListLivingIndicator *_livingIndicator;
}

@property(retain, nonatomic) SSSListLivingIndicator *livingIndicator; // @synthesize livingIndicator=_livingIndicator;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *blackBgView; // @synthesize blackBgView=_blackBgView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) JDImageView *statusImg_living; // @synthesize statusImg_living=_statusImg_living;
@property(retain, nonatomic) UIImageView *statusImg_normal; // @synthesize statusImg_normal=_statusImg_normal;
@property(retain, nonatomic) JDImageView *mainImg; // @synthesize mainImg=_mainImg;
@property(retain, nonatomic) SSSLiveListBrandModel *brandModel; // @synthesize brandModel=_brandModel;
- (void).cxx_destruct;
- (void)configLivingIndicator;
- (id)imageStrechName:(id)arg1;
- (void)prepare;
- (id)initWithFrame:(struct CGRect)arg1;

@end
