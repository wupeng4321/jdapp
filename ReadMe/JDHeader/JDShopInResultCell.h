//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CALayer, JDActivityForSearchUnitView, JDButton, JDIcon, JDIconLabel, JDImageView, JDShopPlusPriceView, JDShopPriceLabel, JDShopSamPriceView, NSMutableDictionary, UILabel;
@protocol JDShopInResultCellDelegate;

@interface JDShopInResultCell : UITableViewCell
{
    JDImageView *m_logoImageView;
    UILabel *m_titleLabel;
    JDShopPriceLabel *m_priceLabel;
    JDIcon *m_promotionIcon;
    JDIcon *m_tagIcon;
    JDIconLabel *m_jdDeliverIcon;
    UILabel *m_ScoreLabel;
    JDShopSamPriceView *m_samPriceLabel;
    JDShopPlusPriceView *m_plusPriceLabel;
    JDButton *m_outCartButton;
    JDActivityForSearchUnitView *unitView1;
    JDActivityForSearchUnitView *unitView2;
    id <JDShopInResultCellDelegate> _delegate;
    NSMutableDictionary *_dicProduct;
    CALayer *_stockLayer;
}

@property(retain, nonatomic) CALayer *stockLayer; // @synthesize stockLayer=_stockLayer;
@property(retain, nonatomic) NSMutableDictionary *dicProduct; // @synthesize dicProduct=_dicProduct;
@property(nonatomic) id <JDShopInResultCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) JDActivityForSearchUnitView *unitView2; // @synthesize unitView2;
@property(retain, nonatomic) JDActivityForSearchUnitView *unitView1; // @synthesize unitView1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)handleStock:(_Bool)arg1 withUnderCarriage:(_Bool)arg2;
- (void)handleScoreLable:(id)arg1 scoreLblWidth:(double)arg2;
- (void)loadCellWithDictionary:(id)arg1;
- (void)updateImageViewsWithDic:(id)arg1;
- (void)createImageViews;
- (void)addingCartTapped:(id)arg1;
- (void)resetCellFrame:(_Bool)arg1;
- (void)initCellWithStyle:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
