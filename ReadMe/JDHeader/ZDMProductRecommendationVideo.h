//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMPost.h"

#import "ZDMViewModelProvider-Protocol.h"

@class NSArray, NSString, ZDMProduct, ZDMProductRecommendationVideoViewModel, ZDMVideoInfo;

@interface ZDMProductRecommendationVideo : ZDMPost <ZDMViewModelProvider>
{
    ZDMVideoInfo *_video;
    ZDMProduct *_product;
    NSArray *_relatedProductRecommendations;
    long long _similarRecommendNum;
    NSString *_articleImagePath;
}

+ (id)productRecommendationVideo;
@property(retain, nonatomic) NSString *articleImagePath; // @synthesize articleImagePath=_articleImagePath;
@property(nonatomic) long long similarRecommendNum; // @synthesize similarRecommendNum=_similarRecommendNum;
@property(retain, nonatomic) NSArray *relatedProductRecommendations; // @synthesize relatedProductRecommendations=_relatedProductRecommendations;
@property(retain, nonatomic) ZDMProduct *product; // @synthesize product=_product;
@property(retain, nonatomic) ZDMVideoInfo *video; // @synthesize video=_video;
- (void).cxx_destruct;
@property(readonly) ZDMProductRecommendationVideoViewModel *viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
