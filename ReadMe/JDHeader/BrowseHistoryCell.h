//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BrowseHistoryModel, BrowseHistoryOnOffModel, JDButton, JDIconLabel, JDImageView, UILabel, UITableView, UIView;
@protocol BrowseHistoryCellDelegate;

@interface BrowseHistoryCell : UITableViewCell
{
    _Bool _isUseByStageWare;
    BrowseHistoryModel *_productModel;
    JDButton *_checkButton;
    id <BrowseHistoryCellDelegate> _delegate;
    UITableView *_tableView;
    UILabel *_titleLabel;
    UILabel *_priceLabel;
    JDImageView *_wareImageView;
    JDImageView *_wareImageViewNoGoods;
    UILabel *_deprecatedGoodsLabel;
    UIView *_addToCarView;
    JDButton *_similarBtn;
    BrowseHistoryOnOffModel *_onOffModel;
    JDIconLabel *_installmentLabel;
}

@property(nonatomic) _Bool isUseByStageWare; // @synthesize isUseByStageWare=_isUseByStageWare;
@property(retain, nonatomic) JDIconLabel *installmentLabel; // @synthesize installmentLabel=_installmentLabel;
@property(retain, nonatomic) BrowseHistoryOnOffModel *onOffModel; // @synthesize onOffModel=_onOffModel;
@property(retain, nonatomic) JDButton *similarBtn; // @synthesize similarBtn=_similarBtn;
@property(retain, nonatomic) UIView *addToCarView; // @synthesize addToCarView=_addToCarView;
@property(retain, nonatomic) UILabel *deprecatedGoodsLabel; // @synthesize deprecatedGoodsLabel=_deprecatedGoodsLabel;
@property(retain, nonatomic) JDImageView *wareImageViewNoGoods; // @synthesize wareImageViewNoGoods=_wareImageViewNoGoods;
@property(retain, nonatomic) JDImageView *wareImageView; // @synthesize wareImageView=_wareImageView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <BrowseHistoryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JDButton *checkButton; // @synthesize checkButton=_checkButton;
@property(retain, nonatomic) BrowseHistoryModel *productModel; // @synthesize productModel=_productModel;
- (void).cxx_destruct;
- (void)addInitConstraints;
- (id)_priceText:(id)arg1 color:(id)arg2 fontSize:(double)arg3;
- (id)_attributedPrice:(id)arg1 color:(id)arg2 andPriceSymbol:(id)arg3;
- (long long)_productState:(id)arg1;
- (id)_color:(id)arg1 isPrice:(_Bool)arg2;
- (void)_updateCheckBtnState;
- (void)_updateSimilarBtnState:(id)arg1;
- (void)_updateCartViewState:(id)arg1;
- (void)_updateImageViewState:(id)arg1;
- (void)_configCartViewAndSimilarBtn;
- (void)configInstallmentLabelWithModel:(id)arg1;
- (void)_configPriceLabel;
- (void)_configTitleLabel;
- (void)_configImageView;
- (void)fillData:(id)arg1 onOffModel:(id)arg2;
- (void)clickSimilarBtn;
- (void)addCartAction;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
