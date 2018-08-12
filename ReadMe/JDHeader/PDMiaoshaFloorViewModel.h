//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

@class NewProductModel, PDMiaoShaFloorView;

@interface PDMiaoshaFloorViewModel : PDFloorBaseViewModel
{
    PDMiaoShaFloorView *_miaoshaFloorView;
    NewProductModel *_model;
}

+ (void)load;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PDMiaoShaFloorView *miaoshaFloorView; // @synthesize miaoshaFloorView=_miaoshaFloorView;
- (void).cxx_destruct;
- (void)stopTimer;
- (void)renderUIWithProductModel:(id)arg1;
- (void)refreshViewForFloorTemplate;
- (void)resetState;

@end

