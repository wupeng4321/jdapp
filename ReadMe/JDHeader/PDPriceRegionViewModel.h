//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "PDPriceRegionViewDelegate-Protocol.h"

@class NSString, NewProductModel, PDPriceRegionJXView, PDPriceRegionView, PDTokenPricePopupView;
@protocol PDPriceRegionViewModellDelegate;

@interface PDPriceRegionViewModel : PDFloorBaseViewModel <PDPriceRegionViewDelegate>
{
    id <PDPriceRegionViewModellDelegate> _delegate;
    PDPriceRegionJXView *_priceRegionJXView;
    PDPriceRegionView *_priceRegionView;
    NewProductModel *_model;
    PDTokenPricePopupView *_tokenPricePopupView;
}

+ (void)load;
@property(retain, nonatomic) PDTokenPricePopupView *tokenPricePopupView; // @synthesize tokenPricePopupView=_tokenPricePopupView;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PDPriceRegionView *priceRegionView; // @synthesize priceRegionView=_priceRegionView;
@property(retain, nonatomic) PDPriceRegionJXView *priceRegionJXView; // @synthesize priceRegionJXView=_priceRegionJXView;
@property(nonatomic) __weak id <PDPriceRegionViewModellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setFavoriteButtonState:(_Bool)arg1 animate:(_Bool)arg2;
- (void)favoriteButtonAction:(id)arg1;
- (void)showTokenPriceInfoPopupView;
- (void)pressConfirmedButton;
- (void)priceNotificeButtonTapped:(id)arg1;
- (void)bargainButtonTapped:(id)arg1;
- (void)renderUIWithProductModel:(id)arg1;
- (void)refreshViewForFloorTemplate;
- (void)resetState;
- (void)expoSpecial;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

