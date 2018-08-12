//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractView.h"

@class COCheckoutGoodsView, COCheckoutMainSingleGoodsVM, COCheckoutRuleToastView, JDImageView, NSMutableArray, NSString, UIButton, UILabel;

@interface COCheckoutMainSingleGoodsView : COCheckoutMainAbstractView
{
    COCheckoutMainSingleGoodsVM *_vm;
    COCheckoutGoodsView *_goodsImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_priceLabel;
    UIButton *_remindPriceButton;
    UILabel *_numberLabel;
    UILabel *_plusPriceLabel;
    JDImageView *_plusPriceIcon;
    JDImageView *_samPriceIcon;
    NSString *_plusIconUrl;
    NSString *_samIconUrl;
    COCheckoutRuleToastView *_ruleToastView;
    NSMutableArray *_tagLabelArray;
}

@property(retain, nonatomic) NSMutableArray *tagLabelArray; // @synthesize tagLabelArray=_tagLabelArray;
@property(retain, nonatomic) COCheckoutRuleToastView *ruleToastView; // @synthesize ruleToastView=_ruleToastView;
@property(copy, nonatomic) NSString *samIconUrl; // @synthesize samIconUrl=_samIconUrl;
@property(copy, nonatomic) NSString *plusIconUrl; // @synthesize plusIconUrl=_plusIconUrl;
@property(retain, nonatomic) JDImageView *samPriceIcon; // @synthesize samPriceIcon=_samPriceIcon;
@property(retain, nonatomic) JDImageView *plusPriceIcon; // @synthesize plusPriceIcon=_plusPriceIcon;
@property(retain, nonatomic) UILabel *plusPriceLabel; // @synthesize plusPriceLabel=_plusPriceLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UIButton *remindPriceButton; // @synthesize remindPriceButton=_remindPriceButton;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) COCheckoutGoodsView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) COCheckoutMainSingleGoodsVM *vm; // @synthesize vm=_vm;
- (void).cxx_destruct;
- (void)explainBtnTaped;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setViewModel:(id)arg1;

@end
