//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class CAShapeLayer, JDImageView, NSString, TTTPlusPriceView, TTTPriceCentreView, TTTWareModel, TTTWaresBeltView, TTTWaresMarkView, TTTWaresSimilarView, UIButton, UIImageView, UILabel;
@protocol TTTWaresLLItemDelegate;

@interface TTTWaresLLItem : TTTBaseView <TTTBaseViewProtocol>
{
    id <TTTWaresLLItemDelegate> _delegate;
    JDImageView *_imageView;
    UIImageView *_statusView;
    TTTWaresMarkView *_markView;
    UILabel *_popularizeLabel;
    UILabel *_promoteLabel;
    CAShapeLayer *_lineLayer;
    UILabel *_nameLabel;
    TTTPriceCentreView *_priceView;
    UIButton *_cartButton;
    TTTWareModel *_wareModel;
    TTTPlusPriceView *_plusPriceView;
    TTTWaresBeltView *_beltView;
    TTTWaresSimilarView *_similarView;
}

@property(retain, nonatomic) TTTWaresSimilarView *similarView; // @synthesize similarView=_similarView;
@property(retain, nonatomic) TTTWaresBeltView *beltView; // @synthesize beltView=_beltView;
@property(retain, nonatomic) TTTPlusPriceView *plusPriceView; // @synthesize plusPriceView=_plusPriceView;
@property(retain, nonatomic) TTTWareModel *wareModel; // @synthesize wareModel=_wareModel;
@property(retain, nonatomic) UIButton *cartButton; // @synthesize cartButton=_cartButton;
@property(retain, nonatomic) TTTPriceCentreView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) CAShapeLayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UILabel *promoteLabel; // @synthesize promoteLabel=_promoteLabel;
@property(retain, nonatomic) UILabel *popularizeLabel; // @synthesize popularizeLabel=_popularizeLabel;
@property(retain, nonatomic) TTTWaresMarkView *markView; // @synthesize markView=_markView;
@property(retain, nonatomic) UIImageView *statusView; // @synthesize statusView=_statusView;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) __weak id <TTTWaresLLItemDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)cartButtonFrame;
- (struct CGRect)priceViewFrame;
- (struct CGRect)nameLabelFrame;
- (struct CGRect)lineLayerFrame;
- (struct CGRect)promoteLabelFrame;
- (struct CGRect)popularizeLabelFrame;
- (struct CGRect)statusViewFrame;
- (void)adjustPopularizeLabel;
- (void)p_configColor;
- (void)p_wareSellStatus;
- (void)p_wareSimilarShow;
- (void)p_wareBeltShow;
- (void)updatePrice;
- (void)bindDataWithViewModel:(id)arg1;
- (void)showShadow:(_Bool)arg1;
- (void)shopCart:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

