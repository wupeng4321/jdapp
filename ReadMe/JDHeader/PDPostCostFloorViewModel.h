//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

@class NewProductModel, PDCommonPostCostView;

@interface PDPostCostFloorViewModel : PDFloorBaseViewModel
{
    NewProductModel *_model;
    PDCommonPostCostView *_postCost_common;
}

+ (void)load;
@property(retain, nonatomic) PDCommonPostCostView *postCost_common; // @synthesize postCost_common=_postCost_common;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)renderUIWithProductModel:(id)arg1;
- (void)refreshViewForFloorTemplate;
- (void)resetState;

@end

