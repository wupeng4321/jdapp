//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

@class JDLabel, PDBPDiscountPriceInfoModel;

@interface PDBPDiscountPriceInfoFloorView : PDFloorBaseView
{
    JDLabel *_marketPriceLabel;
    JDLabel *_discountLabel;
    PDBPDiscountPriceInfoModel *_model;
}

@property(retain, nonatomic) PDBPDiscountPriceInfoModel *model; // @synthesize model=_model;
@property(retain, nonatomic) JDLabel *discountLabel; // @synthesize discountLabel=_discountLabel;
@property(retain, nonatomic) JDLabel *marketPriceLabel; // @synthesize marketPriceLabel=_marketPriceLabel;
- (void).cxx_destruct;
- (void)renderWithData:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

@end
