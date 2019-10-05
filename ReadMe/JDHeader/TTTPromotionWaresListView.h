//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSString, TTTWareImageView, TTTWaresContrastPriceView, TTTWaresRowModel, TTTWaresSloganView, UIButton, UILabel, UIView;

@interface TTTPromotionWaresListView : TTTBaseView <TTTBaseViewProtocol>
{
    UIView *_containerView;
    TTTWareImageView *_imageView;
    UILabel *_nameLabel;
    TTTWaresSloganView *_sloganView;
    TTTWaresContrastPriceView *_priceLabel;
    UIButton *_buyButton;
    UIButton *_cartButton;
    TTTWaresRowModel *_rowModel;
}

@property(retain, nonatomic) TTTWaresRowModel *rowModel; // @synthesize rowModel=_rowModel;
@property(retain, nonatomic) UIButton *cartButton; // @synthesize cartButton=_cartButton;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) TTTWaresContrastPriceView *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) TTTWaresSloganView *sloganView; // @synthesize sloganView=_sloganView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTTWareImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (struct CGRect)cartButtonFrame;
- (struct CGRect)buyButtonFrame;
- (struct CGRect)priceLabelFrame;
- (struct CGRect)sloganViewFrame;
- (struct CGRect)nameLabelFrame;
- (struct CGRect)imageViewFrame;
- (struct CGRect)containerViewFrame;
- (void)updateBackcolor;
- (void)updateItemColor:(id)arg1;
- (void)updateButtonStyle:(id)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (void)shopCart:(id)arg1;
- (void)wareViewClick;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
