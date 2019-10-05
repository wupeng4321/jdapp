//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDButton, UIButton, UIImageView, UILabel;

@interface JDMobileOrderListCell : UITableViewCell
{
    UILabel *m_orderIdLabel;
    UILabel *_orderIdTipLabel;
    UILabel *m_orderStatusLabel;
    UIImageView *m_skuImage;
    UILabel *m_skuNameLabel;
    UILabel *m_phoneNumberLabel;
    JDButton *m_orderOperateBtn;
    UILabel *m_orderPriceLabel;
    UILabel *m_skuSaleFace;
    UIButton *m_delButton;
    id m_delegate;
    UIImageView *_complete;
}

@property(retain, nonatomic) UIImageView *complete; // @synthesize complete=_complete;
@property(retain, nonatomic) UILabel *orderIdTipLabel; // @synthesize orderIdTipLabel=_orderIdTipLabel;
@property(retain, nonatomic) UIButton *delButton; // @synthesize delButton=m_delButton;
@property(nonatomic) id mDelegate; // @synthesize mDelegate=m_delegate;
@property(retain, nonatomic) UILabel *skuSaleFace; // @synthesize skuSaleFace=m_skuSaleFace;
@property(retain, nonatomic) UILabel *orderPriceLabel; // @synthesize orderPriceLabel=m_orderPriceLabel;
@property(retain, nonatomic) JDButton *orderOperateBtn; // @synthesize orderOperateBtn=m_orderOperateBtn;
@property(retain, nonatomic) UILabel *phoneNumberLabel; // @synthesize phoneNumberLabel=m_phoneNumberLabel;
@property(retain, nonatomic) UILabel *skuNameLabel; // @synthesize skuNameLabel=m_skuNameLabel;
@property(retain, nonatomic) UIImageView *skuImage; // @synthesize skuImage=m_skuImage;
@property(retain, nonatomic) UILabel *orderStatusLabel; // @synthesize orderStatusLabel=m_orderStatusLabel;
@property(retain, nonatomic) UILabel *orderIdLabel; // @synthesize orderIdLabel=m_orderIdLabel;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
