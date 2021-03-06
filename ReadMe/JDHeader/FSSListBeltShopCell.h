//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FSSearchResultCollectionCellProtocol-Protocol.h"

@class FSSBeltShopViewModel, NSArray, NSString, UIButton, UIImageView, UILabel;

@interface FSSListBeltShopCell : UICollectionViewCell <FSSearchResultCollectionCellProtocol>
{
    FSSBeltShopViewModel *_viewModel;
    UIButton *_btnBackground;
    UIImageView *_imgViewShopIcon;
    UILabel *_labShopName;
    NSArray *_arrShopItemsBtn;
    NSArray *_arrShopItemsPic;
    NSArray *_arrShopItemsPrice;
    UIImageView *_adIcon;
}

+ (double)cellHeightWithVM:(id)arg1;
@property(retain, nonatomic) UIImageView *adIcon; // @synthesize adIcon=_adIcon;
@property(retain, nonatomic) NSArray *arrShopItemsPrice; // @synthesize arrShopItemsPrice=_arrShopItemsPrice;
@property(retain, nonatomic) NSArray *arrShopItemsPic; // @synthesize arrShopItemsPic=_arrShopItemsPic;
@property(retain, nonatomic) NSArray *arrShopItemsBtn; // @synthesize arrShopItemsBtn=_arrShopItemsBtn;
@property(nonatomic) __weak UILabel *labShopName; // @synthesize labShopName=_labShopName;
@property(nonatomic) __weak UIImageView *imgViewShopIcon; // @synthesize imgViewShopIcon=_imgViewShopIcon;
@property(nonatomic) __weak UIButton *btnBackground; // @synthesize btnBackground=_btnBackground;
@property(retain, nonatomic) FSSBeltShopViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)btnShopItemClicked:(id)arg1;
- (void)btnBackgroundClick;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

