//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface JDAVFItemHeadView : UIView
{
    UIImageView *_mImageView;
    UILabel *_mPriceLabel;
    UILabel *_mNumberLabel;
    UIView *_mLineView;
}

@property(retain, nonatomic) UIView *mLineView; // @synthesize mLineView=_mLineView;
@property(retain, nonatomic) UILabel *mNumberLabel; // @synthesize mNumberLabel=_mNumberLabel;
@property(retain, nonatomic) UILabel *mPriceLabel; // @synthesize mPriceLabel=_mPriceLabel;
@property(retain, nonatomic) UIImageView *mImageView; // @synthesize mImageView=_mImageView;
- (void).cxx_destruct;
- (void)renderUIWithModel:(id)arg1 showPrice:(_Bool)arg2;
- (void)renderUIWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

