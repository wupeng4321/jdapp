//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionReusableView.h>

@class JDImageView, NSMutableArray, SCShopCartWarrantyBrandModel, SCShopCartWarrantyItemModel;

@interface SCShopCartWarrantyHeaderView : UICollectionReusableView
{
    JDImageView *_imageView;
    SCShopCartWarrantyBrandModel *_brandModel;
    SCShopCartWarrantyItemModel *_itemModel;
    CDUnknownBlockType _briefBlock;
    NSMutableArray *_accessElements;
}

@property(retain, nonatomic) NSMutableArray *accessElements; // @synthesize accessElements=_accessElements;
@property(copy, nonatomic) CDUnknownBlockType briefBlock; // @synthesize briefBlock=_briefBlock;
@property(retain, nonatomic) SCShopCartWarrantyItemModel *itemModel; // @synthesize itemModel=_itemModel;
@property(retain, nonatomic) SCShopCartWarrantyBrandModel *brandModel; // @synthesize brandModel=_brandModel;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (_Bool)isAccessibilityElement;
- (long long)accessibilityElementCount;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)showDescriptionInfo:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateHeaderInfoWithItem:(id)arg1 briefAction:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

