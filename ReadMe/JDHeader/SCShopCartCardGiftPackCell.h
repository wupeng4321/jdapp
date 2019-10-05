//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartBaseCell.h"

@class NSMutableArray, NSString, SCShopCartSkuModel, UILabel;

@interface SCShopCartCardGiftPackCell : SCShopCartBaseCell
{
    struct CGRect _titleRect;
    struct CGRect _priceRect;
    float _originY;
    SCShopCartSkuModel *_giftModel;
    NSString *_titleString;
    NSString *_priceString;
    long long _number;
    NSMutableArray *_accessElements;
    UILabel *_leftLabel;
    UILabel *_titleLabel;
    UILabel *_rightLabel;
}

@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) NSMutableArray *accessElements; // @synthesize accessElements=_accessElements;
@property(nonatomic) long long number; // @synthesize number=_number;
@property(copy, nonatomic) NSString *priceString; // @synthesize priceString=_priceString;
@property(copy, nonatomic) NSString *titleString; // @synthesize titleString=_titleString;
@property(retain, nonatomic) SCShopCartSkuModel *giftModel; // @synthesize giftModel=_giftModel;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
