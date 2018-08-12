//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMPostViewModel.h"

@class NSArray, NSURL, ZDMProductRecommendationList;

@interface ZDMProductRecommendationListViewModel : ZDMPostViewModel
{
    ZDMProductRecommendationList *_productRecommendationList;
    NSURL *_listImageURL;
    NSArray *_productRecommendationViewModels;
    NSArray *_relatedProductRecommendationListViewModels;
}

@property(readonly, nonatomic) NSArray *relatedProductRecommendationListViewModels; // @synthesize relatedProductRecommendationListViewModels=_relatedProductRecommendationListViewModels;
@property(readonly, nonatomic) NSArray *productRecommendationViewModels; // @synthesize productRecommendationViewModels=_productRecommendationViewModels;
@property(readonly, nonatomic) NSURL *listImageURL; // @synthesize listImageURL=_listImageURL;
@property(readonly, nonatomic) ZDMProductRecommendationList *productRecommendationList; // @synthesize productRecommendationList=_productRecommendationList;
- (void).cxx_destruct;
- (id)initWithProductRecommendationList:(id)arg1;

@end

