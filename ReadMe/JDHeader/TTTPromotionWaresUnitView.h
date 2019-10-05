//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class NSString, TTTWareImageView, TTTWareModel, TTTWaresContrastPriceView, UIButton, UILabel, UIView;

@interface TTTPromotionWaresUnitView : TTTBaseView <TTTBaseViewProtocol>
{
    TTTWareImageView *_wareImageView;
    UIView *_txtContentView;
    UILabel *_nameLabel;
    UILabel *_userLevelLabel;
    UILabel *_sloganLabel;
    TTTWaresContrastPriceView *_priceLabel;
    UIButton *_cartImageButton;
    UIButton *_cartTxtButton;
    TTTWareModel *_ware;
}

@property(nonatomic) __weak TTTWareModel *ware; // @synthesize ware=_ware;
@property(retain, nonatomic) UIButton *cartTxtButton; // @synthesize cartTxtButton=_cartTxtButton;
@property(retain, nonatomic) UIButton *cartImageButton; // @synthesize cartImageButton=_cartImageButton;
@property(retain, nonatomic) TTTWaresContrastPriceView *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) UILabel *userLevelLabel; // @synthesize userLevelLabel=_userLevelLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *txtContentView; // @synthesize txtContentView=_txtContentView;
@property(retain, nonatomic) TTTWareImageView *wareImageView; // @synthesize wareImageView=_wareImageView;
- (void).cxx_destruct;
- (void)p_createCartTxtButton;
- (void)p_createCartImageButton;
- (void)p_createSloganLabel;
- (void)p_createPriceLabel;
- (void)p_createUserLevelLabel;
- (void)p_createNameLabel;
- (void)p_wareSellStatus:(id)arg1;
- (void)p_configColor;
- (void)p_configTxtContent;
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
