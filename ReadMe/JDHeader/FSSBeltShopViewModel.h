//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSSearchListCellViewModelProtocol-Protocol.h"

@class FSMiddleBeltShopModel, NSString, UIImage;

@interface FSSBeltShopViewModel : NSObject <FSSearchListCellViewModelProtocol>
{
    int _layoutType;
    long long _cellContentType;
    CDUnknownBlockType _exposed;
    long long _mta_position;
    FSMiddleBeltShopModel *_shopModel;
    UIImage *_imgAdIcon;
    CDUnknownBlockType _goToShopClicked;
    CDUnknownBlockType _goToShopItemClicked;
}

+ (void)initialize;
+ (id)arrReuseId;
+ (id)vmWithBeltShopModel:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType goToShopItemClicked; // @synthesize goToShopItemClicked=_goToShopItemClicked;
@property(copy, nonatomic) CDUnknownBlockType goToShopClicked; // @synthesize goToShopClicked=_goToShopClicked;
@property(retain, nonatomic) UIImage *imgAdIcon; // @synthesize imgAdIcon=_imgAdIcon;
@property(readonly, nonatomic) FSMiddleBeltShopModel *shopModel; // @synthesize shopModel=_shopModel;
@property(nonatomic) long long mta_position; // @synthesize mta_position=_mta_position;
@property(copy, nonatomic) CDUnknownBlockType exposed; // @synthesize exposed=_exposed;
@property(nonatomic) int layoutType; // @synthesize layoutType=_layoutType;
@property(readonly, nonatomic) long long cellContentType; // @synthesize cellContentType=_cellContentType;
- (void).cxx_destruct;
- (void)clearCachedMemoryIfNeeded;
- (struct CGSize)cellSizeWithCellType:(int)arg1;
- (id)reuseIdWithCellType:(int)arg1;
- (_Bool)hasAdIcon;
- (id)initWithBeltShopModel:(id)arg1;

// Remaining properties
@property(copy, nonatomic) CDUnknownBlockType addCart;
@property(copy, nonatomic) CDUnknownBlockType addFollow;
@property(nonatomic) _Bool bottomLineVisible;
@property(nonatomic) double cellHeight;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool isLeftProduct;
@property(copy, nonatomic) CDUnknownBlockType spuClick;
@property(readonly) Class superclass;

@end

