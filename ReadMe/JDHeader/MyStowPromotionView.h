//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDIconLabel, NSString, UIButton, UILabel;

@interface MyStowPromotionView : UIView
{
    NSString *_promotionIntro;
    NSString *_giftSku;
    NSString *_giftImageUrl;
    NSString *_prometionID;
    NSString *_wareID;
    NSString *_promotionType;
    UILabel *titleLabel;
    JDIconLabel *_reduceLabel;
    UIButton *_moreButton;
    UILabel *_reducePriceLabel;
    NSString *_adURL;
}

@property(copy, nonatomic) NSString *adURL; // @synthesize adURL=_adURL;
@property(retain, nonatomic) UILabel *reducePriceLabel; // @synthesize reducePriceLabel=_reducePriceLabel;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) JDIconLabel *reduceLabel; // @synthesize reduceLabel=_reduceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void).cxx_destruct;
- (void)showMorePromotionInfos;
- (void)setPromotionTitle:(id)arg1 promotionButtonType:(long long)arg2 cellRow:(long long)arg3;
- (void)setPromotionInfo:(id)arg1 promotionIntro:(id)arg2 promotionButtonType:(long long)arg3 GiftSku:(id)arg4 giftImageUrl:(id)arg5 PromotionID:(id)arg6 WareID:(id)arg7 cellRow:(long long)arg8 promotionType:(id)arg9;
- (void)setPromotionInfo:(id)arg1 promotionIntro:(id)arg2 promotionButtonType:(long long)arg3 PromotionID:(id)arg4 WareID:(id)arg5 cellRow:(long long)arg6 promotionType:(id)arg7;
- (void)setPromotionInfo:(id)arg1 promotionIntro:(id)arg2 promotionButtonType:(long long)arg3 GiftSku:(id)arg4 giftImageUrl:(id)arg5 WareID:(id)arg6 cellRow:(long long)arg7 promotionType:(id)arg8;
- (void)setPromotionInfo:(id)arg1 promotionIntro:(id)arg2 promotionButtonType:(long long)arg3 WareID:(id)arg4 cellRow:(long long)arg5 promotionType:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end

