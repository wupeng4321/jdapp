//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface FinalSearchRentPriceModel : JDModel
{
    NSString *_stageKind;
    NSString *_ccySymbol;
    NSString *_rentPrice;
    NSString *_priceTailTxt;
    NSString *_multStageTxt;
    NSString *_longestStage;
}

@property(readonly, copy, nonatomic) NSString *longestStage; // @synthesize longestStage=_longestStage;
@property(readonly, copy, nonatomic) NSString *multStageTxt; // @synthesize multStageTxt=_multStageTxt;
@property(readonly, copy, nonatomic) NSString *priceTailTxt; // @synthesize priceTailTxt=_priceTailTxt;
@property(readonly, copy, nonatomic) NSString *rentPrice; // @synthesize rentPrice=_rentPrice;
@property(readonly, copy, nonatomic) NSString *ccySymbol; // @synthesize ccySymbol=_ccySymbol;
@property(readonly, copy, nonatomic) NSString *stageKind; // @synthesize stageKind=_stageKind;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

