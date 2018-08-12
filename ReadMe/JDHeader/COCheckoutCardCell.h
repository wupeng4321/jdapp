//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class COCheckoutOrderInfoGiftModel, JDButton, JDPriceLabel, UIImageView, UILabel, UIView;
@protocol COCheckoutCardCellDelegate;

@interface COCheckoutCardCell : UITableViewCell
{
    _Bool _available;
    COCheckoutOrderInfoGiftModel *_gift;
    id <COCheckoutCardCellDelegate> _giftCardCellDelegate;
    long long _cardType;
    UIImageView *_backGroundImageView;
    UIImageView *_iconImageView;
    UIImageView *_joyImageView;
    UILabel *_titleLabel;
    UILabel *_faceValueLabel;
    UILabel *_expiredDateLabel;
    JDPriceLabel *_moneyLabel;
    UILabel *_descriptionLabel;
    UIView *_lineView;
    UILabel *_unavailableLabel;
    JDButton *_useOrCancelBtn;
}

+ (double)heightOfCellWithModel:(id)arg1;
@property(retain, nonatomic) JDButton *useOrCancelBtn; // @synthesize useOrCancelBtn=_useOrCancelBtn;
@property(retain, nonatomic) UILabel *unavailableLabel; // @synthesize unavailableLabel=_unavailableLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) JDPriceLabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UILabel *expiredDateLabel; // @synthesize expiredDateLabel=_expiredDateLabel;
@property(retain, nonatomic) UILabel *faceValueLabel; // @synthesize faceValueLabel=_faceValueLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *joyImageView; // @synthesize joyImageView=_joyImageView;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIImageView *backGroundImageView; // @synthesize backGroundImageView=_backGroundImageView;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(nonatomic) long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) __weak id <COCheckoutCardCellDelegate> giftCardCellDelegate; // @synthesize giftCardCellDelegate=_giftCardCellDelegate;
@property(retain, nonatomic) COCheckoutOrderInfoGiftModel *gift; // @synthesize gift=_gift;
- (void).cxx_destruct;
- (void)drawLineAtView:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
