//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

#import "TTTJumpProtocol-Protocol.h"

@class NSArray, NSNumber, NSString, TTTElementMoreModel, TTTJumpModel;

@interface TTTListConfigModel : TTTBaseModel <TTTJumpProtocol>
{
    NSString *_jdPrice;
    NSString *_slogan;
    NSString *_subscript;
    NSString *_subscriptUrl;
    NSString *_sloganPicture;
    NSString *_showAppPrice;
    NSString *_showGoodCount;
    NSString *_buttonText;
    NSString *_buttonTextColor;
    NSString *_buttonBackgroundColor;
    NSString *_showMore;
    TTTJumpModel *_jump;
    NSString *_advanceDeposit;
    NSString *_stock;
    NSString *_promoTag;
    NSString *_showBuyCar;
    NSString *_colorDetailConfig;
    NSString *_commentColor;
    NSString *_phoneColor;
    NSString *_sloganUpColor;
    NSString *_peopleNumColor;
    NSString *_stockColor;
    NSString *_cartBackgroundColor;
    NSString *_titleColor;
    NSString *_cardColor;
    NSString *_promotionTagColor;
    NSString *_mainPriceColor;
    NSString *_assistPriceColor;
    NSString *_sloganColor;
    NSString *_plusColor;
    NSString *_fansPriceColor;
    NSString *_cartButtonTxt;
    NSString *_cartStyle;
    NSString *_proWareTitleColor;
    NSString *_proWareTagColor;
    NSString *_proWareMainPriceColor;
    NSString *_proWareAssistPriceColor;
    NSString *_proWareCardColor;
    NSString *_proWareSloganColor;
    NSString *_proWareCartBackgroundColor;
    NSString *_pushColor;
    NSString *_titleBackgroundColor;
    NSString *_promo;
    NSString *_consumerColor;
    NSString *_buttonColor;
    NSString *_sloganStyle;
    long long _configSloganStyle;
    NSNumber *_width;
    NSNumber *_height;
    NSNumber *_lrBorderPx;
    NSNumber *_udBorderPx;
    NSString *_bgStyle;
    NSArray *_elementList;
    TTTElementMoreModel *_moreConfig;
    NSString *_moreSrv;
    NSString *_similar;
    NSString *_showLongPic;
    NSString *_promoFontColor;
    NSString *_promoBgStyle;
    NSString *_promoPicURL;
}

+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *promoPicURL; // @synthesize promoPicURL=_promoPicURL;
@property(copy, nonatomic) NSString *promoBgStyle; // @synthesize promoBgStyle=_promoBgStyle;
@property(copy, nonatomic) NSString *promoFontColor; // @synthesize promoFontColor=_promoFontColor;
@property(retain, nonatomic) NSString *showLongPic; // @synthesize showLongPic=_showLongPic;
@property(copy, nonatomic) NSString *similar; // @synthesize similar=_similar;
@property(copy, nonatomic) NSString *moreSrv; // @synthesize moreSrv=_moreSrv;
@property(retain, nonatomic) TTTElementMoreModel *moreConfig; // @synthesize moreConfig=_moreConfig;
@property(retain, nonatomic) NSArray *elementList; // @synthesize elementList=_elementList;
@property(copy, nonatomic) NSString *bgStyle; // @synthesize bgStyle=_bgStyle;
@property(copy, nonatomic) NSNumber *udBorderPx; // @synthesize udBorderPx=_udBorderPx;
@property(copy, nonatomic) NSNumber *lrBorderPx; // @synthesize lrBorderPx=_lrBorderPx;
@property(copy, nonatomic) NSNumber *height; // @synthesize height=_height;
@property(copy, nonatomic) NSNumber *width; // @synthesize width=_width;
@property(nonatomic) long long configSloganStyle; // @synthesize configSloganStyle=_configSloganStyle;
@property(copy, nonatomic) NSString *sloganStyle; // @synthesize sloganStyle=_sloganStyle;
@property(copy, nonatomic) NSString *buttonColor; // @synthesize buttonColor=_buttonColor;
@property(copy, nonatomic) NSString *consumerColor; // @synthesize consumerColor=_consumerColor;
@property(copy, nonatomic) NSString *promo; // @synthesize promo=_promo;
@property(copy, nonatomic) NSString *titleBackgroundColor; // @synthesize titleBackgroundColor=_titleBackgroundColor;
@property(copy, nonatomic) NSString *pushColor; // @synthesize pushColor=_pushColor;
@property(copy, nonatomic) NSString *proWareCartBackgroundColor; // @synthesize proWareCartBackgroundColor=_proWareCartBackgroundColor;
@property(copy, nonatomic) NSString *proWareSloganColor; // @synthesize proWareSloganColor=_proWareSloganColor;
@property(copy, nonatomic) NSString *proWareCardColor; // @synthesize proWareCardColor=_proWareCardColor;
@property(copy, nonatomic) NSString *proWareAssistPriceColor; // @synthesize proWareAssistPriceColor=_proWareAssistPriceColor;
@property(copy, nonatomic) NSString *proWareMainPriceColor; // @synthesize proWareMainPriceColor=_proWareMainPriceColor;
@property(copy, nonatomic) NSString *proWareTagColor; // @synthesize proWareTagColor=_proWareTagColor;
@property(copy, nonatomic) NSString *proWareTitleColor; // @synthesize proWareTitleColor=_proWareTitleColor;
@property(copy, nonatomic) NSString *cartStyle; // @synthesize cartStyle=_cartStyle;
@property(copy, nonatomic) NSString *cartButtonTxt; // @synthesize cartButtonTxt=_cartButtonTxt;
@property(copy, nonatomic) NSString *fansPriceColor; // @synthesize fansPriceColor=_fansPriceColor;
@property(copy, nonatomic) NSString *plusColor; // @synthesize plusColor=_plusColor;
@property(copy, nonatomic) NSString *sloganColor; // @synthesize sloganColor=_sloganColor;
@property(copy, nonatomic) NSString *assistPriceColor; // @synthesize assistPriceColor=_assistPriceColor;
@property(copy, nonatomic) NSString *mainPriceColor; // @synthesize mainPriceColor=_mainPriceColor;
@property(copy, nonatomic) NSString *promotionTagColor; // @synthesize promotionTagColor=_promotionTagColor;
@property(copy, nonatomic) NSString *cardColor; // @synthesize cardColor=_cardColor;
@property(copy, nonatomic) NSString *titleColor; // @synthesize titleColor=_titleColor;
@property(copy, nonatomic) NSString *cartBackgroundColor; // @synthesize cartBackgroundColor=_cartBackgroundColor;
@property(copy, nonatomic) NSString *stockColor; // @synthesize stockColor=_stockColor;
@property(copy, nonatomic) NSString *peopleNumColor; // @synthesize peopleNumColor=_peopleNumColor;
@property(copy, nonatomic) NSString *sloganUpColor; // @synthesize sloganUpColor=_sloganUpColor;
@property(copy, nonatomic) NSString *phoneColor; // @synthesize phoneColor=_phoneColor;
@property(copy, nonatomic) NSString *commentColor; // @synthesize commentColor=_commentColor;
@property(copy, nonatomic) NSString *colorDetailConfig; // @synthesize colorDetailConfig=_colorDetailConfig;
@property(copy, nonatomic) NSString *showBuyCar; // @synthesize showBuyCar=_showBuyCar;
@property(copy, nonatomic) NSString *promoTag; // @synthesize promoTag=_promoTag;
@property(copy, nonatomic) NSString *stock; // @synthesize stock=_stock;
@property(copy, nonatomic) NSString *advanceDeposit; // @synthesize advanceDeposit=_advanceDeposit;
@property(retain, nonatomic) TTTJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *showMore; // @synthesize showMore=_showMore;
@property(copy, nonatomic) NSString *buttonBackgroundColor; // @synthesize buttonBackgroundColor=_buttonBackgroundColor;
@property(copy, nonatomic) NSString *buttonTextColor; // @synthesize buttonTextColor=_buttonTextColor;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *showGoodCount; // @synthesize showGoodCount=_showGoodCount;
@property(copy, nonatomic) NSString *showAppPrice; // @synthesize showAppPrice=_showAppPrice;
@property(copy, nonatomic) NSString *sloganPicture; // @synthesize sloganPicture=_sloganPicture;
@property(copy, nonatomic) NSString *subscriptUrl; // @synthesize subscriptUrl=_subscriptUrl;
@property(copy, nonatomic) NSString *subscript; // @synthesize subscript=_subscript;
@property(copy, nonatomic) NSString *slogan; // @synthesize slogan=_slogan;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
- (void).cxx_destruct;
- (id)sencondJumpObject;
- (id)firstJumpObject;
- (void)groupBuyingList;
- (void)groupBuyingThreeItem;
- (void)groupBuyingTwoItem;
- (void)groupBuyingSlide;
- (void)waresNormalColor;
- (void)carousel3L;
- (void)carouselLL;
- (void)configCarouselLH;
- (void)configColor:(long long)arg1;
- (void)inspectShowCar;
- (void)keyValuesDidFinishConvertingToObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

