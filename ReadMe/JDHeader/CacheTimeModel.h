//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@interface CacheTimeModel : JDModel
{
    double _productDetail;
    double _indexOfAll;
    double _miaoShaAreaList;
    double _catelogy;
    double _myJdHome;
}

@property(nonatomic) double myJdHome; // @synthesize myJdHome=_myJdHome;
@property(nonatomic) double catelogy; // @synthesize catelogy=_catelogy;
@property(nonatomic) double miaoShaAreaList; // @synthesize miaoShaAreaList=_miaoShaAreaList;
@property(nonatomic) double indexOfAll; // @synthesize indexOfAll=_indexOfAll;
@property(nonatomic) double productDetail; // @synthesize productDetail=_productDetail;
- (void)setDataWithDic:(id)arg1;
- (id)initWithDic:(id)arg1;
- (id)init;

@end

