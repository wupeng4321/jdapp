//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMListSectionController.h"

#import "ZDMListSectionType-Protocol.h"

@class NSString, ZDMProductRecommendationList;

@interface ZDMProductRecommendationListADetailsHeaderSectionController : ZDMListSectionController <ZDMListSectionType>
{
    ZDMProductRecommendationList *_productRecommendationList;
}

@property(retain, nonatomic) ZDMProductRecommendationList *productRecommendationList; // @synthesize productRecommendationList=_productRecommendationList;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)collectionViewCellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

