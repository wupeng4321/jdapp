//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, FinderFollowGiftDetailView, FinderFollowGiftInfoModel, JDImageView, UILabel;

@interface FinderFollowGiftView : UIView
{
    FinderFollowGiftInfoModel *_giftInfoModel;
    UIView *_bacView;
    CAGradientLayer *_gradientLayer;
    JDImageView *_ivTop;
    UILabel *_titleLabel;
    FinderFollowGiftDetailView *_giftDetailView;
    UIView *_detailListView;
    long long _listCount;
    JDImageView *_ivClose;
}

@property(retain, nonatomic) JDImageView *ivClose; // @synthesize ivClose=_ivClose;
@property(nonatomic) long long listCount; // @synthesize listCount=_listCount;
@property(retain, nonatomic) UIView *detailListView; // @synthesize detailListView=_detailListView;
@property(retain, nonatomic) FinderFollowGiftDetailView *giftDetailView; // @synthesize giftDetailView=_giftDetailView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *ivTop; // @synthesize ivTop=_ivTop;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *bacView; // @synthesize bacView=_bacView;
@property(retain, nonatomic) FinderFollowGiftInfoModel *giftInfoModel; // @synthesize giftInfoModel=_giftInfoModel;
- (void).cxx_destruct;
- (void)didClickClose;
- (void)layoutSubviews;
- (void)prepare;
- (id)initWithFrame:(struct CGRect)arg1;

@end

