//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDButton, JDImageView, SCShopCartClearItemModel, UILabel;
@protocol SCShopCartClearCartCellDelegate;

@interface SCShopCartClearCartCell : UICollectionViewCell
{
    SCShopCartClearItemModel *_itemModel;
    JDImageView *_imageView;
    JDButton *_checkBox;
    UILabel *_descLabel;
    id <SCShopCartClearCartCellDelegate> _delegate;
}

@property(nonatomic) __weak id <SCShopCartClearCartCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) JDButton *checkBox; // @synthesize checkBox=_checkBox;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SCShopCartClearItemModel *itemModel; // @synthesize itemModel=_itemModel;
- (void).cxx_destruct;
- (void)itemClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

