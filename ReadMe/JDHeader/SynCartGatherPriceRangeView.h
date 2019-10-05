//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDAddOnItemModel, NSArray, SCShopCartScrollView, UIButton;

@interface SynCartGatherPriceRangeView : UIView
{
    long long _wareListType;
    CDUnknownBlockType _defalutPriceSelectedAction;
    JDAddOnItemModel *_addOnItemModel;
    UIButton *_selectedButton;
    SCShopCartScrollView *_tagScrollView;
    NSArray *_priceTags;
    CDUnknownBlockType _selectedAction;
}

@property(copy, nonatomic) CDUnknownBlockType selectedAction; // @synthesize selectedAction=_selectedAction;
@property(retain, nonatomic) NSArray *priceTags; // @synthesize priceTags=_priceTags;
@property(retain, nonatomic) SCShopCartScrollView *tagScrollView; // @synthesize tagScrollView=_tagScrollView;
@property(retain, nonatomic) UIButton *selectedButton; // @synthesize selectedButton=_selectedButton;
@property(retain, nonatomic) JDAddOnItemModel *addOnItemModel; // @synthesize addOnItemModel=_addOnItemModel;
@property(copy, nonatomic) CDUnknownBlockType defalutPriceSelectedAction; // @synthesize defalutPriceSelectedAction=_defalutPriceSelectedAction;
@property(nonatomic) long long wareListType; // @synthesize wareListType=_wareListType;
- (void).cxx_destruct;
- (void)clickedPriceRange:(id)arg1;
- (void)setScrollViewIndexWithButton:(id)arg1;
- (void)buildPriceTagButtonView;
- (void)updateWithPriceRanges:(id)arg1 addOnItemModel:(id)arg2 selectedAction:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end
