//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface CCCouponGiftCollectionView : UIView
{
    UIImageView *_bgView;
    UILabel *_titleLabel;
    CDUnknownBlockType _receiveBlock;
}

@property(copy, nonatomic) CDUnknownBlockType receiveBlock; // @synthesize receiveBlock=_receiveBlock;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)receiveCoupon:(id)arg1;
- (void)updateCouponInfoWithTitle:(id)arg1 receiveCoupon:(CDUnknownBlockType)arg2;
- (void)setupContentViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
