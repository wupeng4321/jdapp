//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractView.h"

@class NSMutableArray;

@interface COCheckoutMainGoodsServiceView : COCheckoutMainAbstractView
{
    NSMutableArray *_serviceTextLabelArray;
    NSMutableArray *_serviceStockLabelArray;
}

@property(retain, nonatomic) NSMutableArray *serviceStockLabelArray; // @synthesize serviceStockLabelArray=_serviceStockLabelArray;
@property(retain, nonatomic) NSMutableArray *serviceTextLabelArray; // @synthesize serviceTextLabelArray=_serviceTextLabelArray;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setViewModel:(id)arg1;

@end
