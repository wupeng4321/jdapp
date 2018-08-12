//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMPostViewModel.h"

@class NSAttributedString, NSString, ZDMProductRecommendationVideo, ZDMProductViewModel;

@interface ZDMProductRecommendationVideoViewModel : ZDMPostViewModel
{
    ZDMProductRecommendationVideo *_productRecommendationVideo;
    ZDMProductViewModel *_productViewModel;
}

@property(readonly, nonatomic) ZDMProductViewModel *productViewModel; // @synthesize productViewModel=_productViewModel;
@property(readonly, nonatomic) ZDMProductRecommendationVideo *productRecommendationVideo; // @synthesize productRecommendationVideo=_productRecommendationVideo;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *viewNumString;
@property(readonly, nonatomic) NSString *likeCountString;
@property(readonly, nonatomic) NSAttributedString *recommendationText;
- (id)initWithProductRecommendationVideo:(id)arg1;

@end

