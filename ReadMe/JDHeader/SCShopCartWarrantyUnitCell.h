//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSMutableArray, SCShopCartWarrantyItemModel, UIButton;

@interface SCShopCartWarrantyUnitCell : UICollectionViewCell
{
    _Bool _shouldSelected;
    SCShopCartWarrantyItemModel *_unitItem;
    NSMutableArray *_accessElements;
    UIButton *_resizableButton;
}

@property(retain, nonatomic) UIButton *resizableButton; // @synthesize resizableButton=_resizableButton;
@property(retain, nonatomic) NSMutableArray *accessElements; // @synthesize accessElements=_accessElements;
@property(retain, nonatomic) SCShopCartWarrantyItemModel *unitItem; // @synthesize unitItem=_unitItem;
@property(nonatomic) _Bool shouldSelected; // @synthesize shouldSelected=_shouldSelected;
- (void).cxx_destruct;
- (void)drawOnePixRectangleRect:(struct CGRect)arg1 roundRadius:(float)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)updateUnitViewWithItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

