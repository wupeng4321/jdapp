//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

@class NSMutableArray;

@interface FinderInventoryDetailSkuCell : JDFinderTableViewCell
{
    CDUnknownBlockType _clickSku;
    CDUnknownBlockType _clickAddCart;
    NSMutableArray *_viewArray;
}

@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(copy, nonatomic) CDUnknownBlockType clickAddCart; // @synthesize clickAddCart=_clickAddCart;
@property(copy, nonatomic) CDUnknownBlockType clickSku; // @synthesize clickSku=_clickSku;
- (void).cxx_destruct;
- (void)addSkuToShoppingCart:(id)arg1;
- (void)tapSku:(id)arg1;
- (void)assignValue:(id)arg1;
- (void)layoutSubviews;
- (void)setupViews;

@end

