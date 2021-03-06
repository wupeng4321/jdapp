//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "COCheckoutWareAttributeLabelDelegate-Protocol.h"

@class COCheckoutCloudLabel, COCheckoutGoodsView, COCheckoutOrderListWareGroupModel, COCheckoutOrderListWareModel, COCheckoutOrderWareGiftsView, COCheckoutWareLocInfoView, COWareAttributeLabel, JDPriceLabel, NSString, UIImageView, UILabel;

@interface COCheckoutOrderWareGroupItemView : UIView <COCheckoutWareAttributeLabelDelegate>
{
    COCheckoutGoodsView *_goodsView;
    UILabel *_titleLabel;
    UILabel *_numLabel;
    COCheckoutOrderWareGiftsView *_giftServiceView;
    UIImageView *_samsPrice;
    COWareAttributeLabel *wareAttributeLabel;
    COCheckoutWareLocInfoView *_locView;
    UIImageView *_plusPriceIcon;
    UILabel *_heightLightLabel;
    _Bool _isShowPlusPrice;
    CDUnknownBlockType _response;
    COCheckoutOrderListWareGroupModel *_wareGroupModel;
    COCheckoutOrderListWareModel *_wareModel;
    COCheckoutCloudLabel *_cloudLabel;
    JDPriceLabel *_priceLabel;
    NSString *_pageParam;
    JDPriceLabel *_plusPriceLabel;
}

@property(retain, nonatomic) UILabel *heightLightLabel; // @synthesize heightLightLabel=_heightLightLabel;
@property(nonatomic) _Bool isShowPlusPrice; // @synthesize isShowPlusPrice=_isShowPlusPrice;
@property(retain, nonatomic) JDPriceLabel *plusPriceLabel; // @synthesize plusPriceLabel=_plusPriceLabel;
@property(retain, nonatomic) NSString *pageParam; // @synthesize pageParam=_pageParam;
@property(retain, nonatomic) JDPriceLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) COCheckoutCloudLabel *cloudLabel; // @synthesize cloudLabel=_cloudLabel;
@property(retain, nonatomic) COCheckoutOrderListWareModel *wareModel; // @synthesize wareModel=_wareModel;
@property(retain, nonatomic) COCheckoutOrderListWareGroupModel *wareGroupModel; // @synthesize wareGroupModel=_wareGroupModel;
@property(copy, nonatomic) CDUnknownBlockType response; // @synthesize response=_response;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (struct CGSize)sizeWithStr:(id)arg1 andFont:(id)arg2;
- (id)wareStatesLabelWithFrame:(struct CGRect)arg1;
- (id)imageViewTopImageViewWithFrame:(struct CGRect)arg1;
- (id)giftServiceViewWithFrame:(struct CGRect)arg1;
- (id)cloudLabelWithFrame:(struct CGRect)arg1;
- (id)plusPriceLabelWithFrame:(struct CGRect)arg1;
- (id)priceLabelWithFrame:(struct CGRect)arg1;
- (id)numLabelWithFrame:(struct CGRect)arg1;
- (id)heightLightLabelWithFrame:(struct CGRect)arg1;
- (id)titleLabelWithFrame:(struct CGRect)arg1;
- (void)setPlusPriceIcon:(id)arg1;
- (void)setSamsPriceIcon:(id)arg1;
- (void)setWithWareModel:(id)arg1;
- (double)setServiceOrGiftViewWithModel:(id)arg1 withViewBottom:(double)arg2;
- (void)resetItemSubviewsTopWithOrderListWareGroupModel:(id)arg1;
- (void)setOrinYOfView;
- (id)getTitleLabelPlaceholderTextWithText:(id)arg1;
- (void)setHeightLightLabelInfoWithModel:(id)arg1;
- (void)setWithModel:(id)arg1 withShowType:(long long)arg2;
- (void)layoutSubviews;
- (void)responseWhenStatusChangedOfLabel:(id)arg1 isDrop:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

