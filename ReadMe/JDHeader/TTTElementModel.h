//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseModel.h"

@class NSNumber, NSString, TTTFlexibleDataModel;

@interface TTTElementModel : TTTBaseModel
{
    _Bool _textCenter;
    NSString *_type;
    NSString *_source;
    NSString *_style;
    NSString *_floorStyleId;
    NSNumber *_x;
    NSNumber *_y;
    NSNumber *_w;
    NSNumber *_h;
    NSNumber *_textLine;
    NSNumber *_textSize;
    NSString *_textColor;
    NSString *_backgroundColor;
    NSString *_key;
    NSNumber *_brandSize;
    NSString *_brandColor;
    NSString *_promotionColor;
    NSNumber *_promotionNum;
    NSString *_textAlign;
    NSNumber *_attributeNum;
    NSString *_plusTab;
    NSString *_samTab;
    NSNumber *_soldSize;
    NSString *_soldColor;
    NSNumber *_priceTextSize;
    NSString *_priceTextColor;
    NSString *_isBold;
    NSString *_showComparePrice;
    NSString *_comparePriceStyle;
    NSString *_comparePriceFont;
    NSString *_comparePriceColor;
    long long _elementType;
    long long _imageSource;
    long long _priceSource;
    long long _textSource;
    long long _wareNameStyle;
    long long _priceStyle;
    long long _cartStyle;
    long long _promotionSource;
    long long _brandSource;
    long long _stockSource;
    long long _similarSource;
    long long _isPlusTab;
    long long _isSamTab;
    long long _textBold1;
    NSString *_bold;
    NSNumber *_space;
    long long _count;
    long long _adsImageSource;
    long long _adsTextSource;
    long long _textBold2;
    long long _adsGroupStyle;
    NSString *_jumpKey;
    NSString *_bgStyle;
    NSString *_bgColor;
    NSString *_bgPicUrl;
    NSString *_alignStyle;
    NSString *_isRolling;
    NSString *_showStyle;
    NSNumber *_interval;
    NSNumber *_showHeight;
    long long _adsRolling;
    long long _wordsStyle;
    long long _wordsAlignStyle;
    long long _videosStyle;
    long long _videoRolling;
    long long _videoSource;
    unsigned long long _foucsIndex;
    TTTFlexibleDataModel *_flexibleDataModel;
    NSString *_color;
    NSString *_size;
    NSString *_align;
    NSString *_lineCount;
    struct CGSize _itemSize;
    struct CGPoint _scrollOffset;
}

@property(copy, nonatomic) NSString *lineCount; // @synthesize lineCount=_lineCount;
@property(copy, nonatomic) NSString *align; // @synthesize align=_align;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(retain, nonatomic) TTTFlexibleDataModel *flexibleDataModel; // @synthesize flexibleDataModel=_flexibleDataModel;
@property(nonatomic) unsigned long long foucsIndex; // @synthesize foucsIndex=_foucsIndex;
@property(nonatomic) struct CGPoint scrollOffset; // @synthesize scrollOffset=_scrollOffset;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) long long videoSource; // @synthesize videoSource=_videoSource;
@property(nonatomic) long long videoRolling; // @synthesize videoRolling=_videoRolling;
@property(nonatomic) long long videosStyle; // @synthesize videosStyle=_videosStyle;
@property(nonatomic) long long wordsAlignStyle; // @synthesize wordsAlignStyle=_wordsAlignStyle;
@property(nonatomic) long long wordsStyle; // @synthesize wordsStyle=_wordsStyle;
@property(nonatomic) long long adsRolling; // @synthesize adsRolling=_adsRolling;
@property(copy, nonatomic) NSNumber *showHeight; // @synthesize showHeight=_showHeight;
@property(copy, nonatomic) NSNumber *interval; // @synthesize interval=_interval;
@property(copy, nonatomic) NSString *showStyle; // @synthesize showStyle=_showStyle;
@property(copy, nonatomic) NSString *isRolling; // @synthesize isRolling=_isRolling;
@property(copy, nonatomic) NSString *alignStyle; // @synthesize alignStyle=_alignStyle;
@property(copy, nonatomic) NSString *bgPicUrl; // @synthesize bgPicUrl=_bgPicUrl;
@property(copy, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(copy, nonatomic) NSString *bgStyle; // @synthesize bgStyle=_bgStyle;
@property(copy, nonatomic) NSString *jumpKey; // @synthesize jumpKey=_jumpKey;
@property(nonatomic) long long adsGroupStyle; // @synthesize adsGroupStyle=_adsGroupStyle;
@property(nonatomic) long long textBold2; // @synthesize textBold2=_textBold2;
@property(nonatomic) long long adsTextSource; // @synthesize adsTextSource=_adsTextSource;
@property(nonatomic) long long adsImageSource; // @synthesize adsImageSource=_adsImageSource;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSNumber *space; // @synthesize space=_space;
@property(copy, nonatomic) NSString *bold; // @synthesize bold=_bold;
@property(nonatomic) long long textBold1; // @synthesize textBold1=_textBold1;
@property(nonatomic) _Bool textCenter; // @synthesize textCenter=_textCenter;
@property(nonatomic) long long isSamTab; // @synthesize isSamTab=_isSamTab;
@property(nonatomic) long long isPlusTab; // @synthesize isPlusTab=_isPlusTab;
@property(nonatomic) long long similarSource; // @synthesize similarSource=_similarSource;
@property(nonatomic) long long stockSource; // @synthesize stockSource=_stockSource;
@property(nonatomic) long long brandSource; // @synthesize brandSource=_brandSource;
@property(nonatomic) long long promotionSource; // @synthesize promotionSource=_promotionSource;
@property(nonatomic) long long cartStyle; // @synthesize cartStyle=_cartStyle;
@property(nonatomic) long long priceStyle; // @synthesize priceStyle=_priceStyle;
@property(nonatomic) long long wareNameStyle; // @synthesize wareNameStyle=_wareNameStyle;
@property(nonatomic) long long textSource; // @synthesize textSource=_textSource;
@property(nonatomic) long long priceSource; // @synthesize priceSource=_priceSource;
@property(nonatomic) long long imageSource; // @synthesize imageSource=_imageSource;
@property(nonatomic) long long elementType; // @synthesize elementType=_elementType;
@property(copy, nonatomic) NSString *comparePriceColor; // @synthesize comparePriceColor=_comparePriceColor;
@property(copy, nonatomic) NSString *comparePriceFont; // @synthesize comparePriceFont=_comparePriceFont;
@property(copy, nonatomic) NSString *comparePriceStyle; // @synthesize comparePriceStyle=_comparePriceStyle;
@property(copy, nonatomic) NSString *showComparePrice; // @synthesize showComparePrice=_showComparePrice;
@property(copy, nonatomic) NSString *isBold; // @synthesize isBold=_isBold;
@property(copy, nonatomic) NSString *priceTextColor; // @synthesize priceTextColor=_priceTextColor;
@property(copy, nonatomic) NSNumber *priceTextSize; // @synthesize priceTextSize=_priceTextSize;
@property(copy, nonatomic) NSString *soldColor; // @synthesize soldColor=_soldColor;
@property(copy, nonatomic) NSNumber *soldSize; // @synthesize soldSize=_soldSize;
@property(copy, nonatomic) NSString *samTab; // @synthesize samTab=_samTab;
@property(copy, nonatomic) NSString *plusTab; // @synthesize plusTab=_plusTab;
@property(copy, nonatomic) NSNumber *attributeNum; // @synthesize attributeNum=_attributeNum;
@property(copy, nonatomic) NSString *textAlign; // @synthesize textAlign=_textAlign;
@property(copy, nonatomic) NSNumber *promotionNum; // @synthesize promotionNum=_promotionNum;
@property(copy, nonatomic) NSString *promotionColor; // @synthesize promotionColor=_promotionColor;
@property(copy, nonatomic) NSString *brandColor; // @synthesize brandColor=_brandColor;
@property(copy, nonatomic) NSNumber *brandSize; // @synthesize brandSize=_brandSize;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSNumber *textSize; // @synthesize textSize=_textSize;
@property(copy, nonatomic) NSNumber *textLine; // @synthesize textLine=_textLine;
@property(copy, nonatomic) NSNumber *h; // @synthesize h=_h;
@property(copy, nonatomic) NSNumber *w; // @synthesize w=_w;
@property(copy, nonatomic) NSNumber *y; // @synthesize y=_y;
@property(copy, nonatomic) NSNumber *x; // @synthesize x=_x;
@property(copy, nonatomic) NSString *floorStyleId; // @synthesize floorStyleId=_floorStyleId;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isMyVideo:(id)arg1;
- (id)fetchVideoModel:(long long)arg1;
- (id)fetchWordModel:(long long)arg1;
- (id)fetchDisplayAdsListIndex:(long long)arg1;

@end

