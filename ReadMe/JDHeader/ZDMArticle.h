//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMPost.h"

#import "ZDMViewModelProvider-Protocol.h"

@class NSArray, NSString, ZDMArticleBackFlow, ZDMArticleViewModel, ZDMProduct;

@interface ZDMArticle : ZDMPost <ZDMViewModelProvider>
{
    _Bool _jdSelection;
    NSString *_articleImagePath;
    NSString *_productImagePath;
    NSArray *_paragraphs;
    long long _similarRecommendNum;
    ZDMProduct *_productInfo;
    NSArray *_relatedArticles;
    NSArray *_authorRelatedArticles;
    ZDMArticleBackFlow *_backFlow;
    long long _subPosition;
    long long _showCallBack;
    NSArray *_callBackTags;
    long long _isWhiteBg;
    long long _isOversea;
    NSString *_countryNameCn;
    NSString *_countryFlagImg;
}

+ (id)articleWithDict:(id)arg1 imgHost:(id)arg2;
+ (id)article;
@property(retain, nonatomic) NSString *countryFlagImg; // @synthesize countryFlagImg=_countryFlagImg;
@property(retain, nonatomic) NSString *countryNameCn; // @synthesize countryNameCn=_countryNameCn;
@property(nonatomic) long long isOversea; // @synthesize isOversea=_isOversea;
@property(nonatomic) _Bool jdSelection; // @synthesize jdSelection=_jdSelection;
@property(nonatomic) long long isWhiteBg; // @synthesize isWhiteBg=_isWhiteBg;
@property(retain, nonatomic) NSArray *callBackTags; // @synthesize callBackTags=_callBackTags;
@property(nonatomic) long long showCallBack; // @synthesize showCallBack=_showCallBack;
@property(nonatomic) long long subPosition; // @synthesize subPosition=_subPosition;
@property(retain, nonatomic) ZDMArticleBackFlow *backFlow; // @synthesize backFlow=_backFlow;
@property(copy, nonatomic) NSArray *authorRelatedArticles; // @synthesize authorRelatedArticles=_authorRelatedArticles;
@property(copy, nonatomic) NSArray *relatedArticles; // @synthesize relatedArticles=_relatedArticles;
@property(retain, nonatomic) ZDMProduct *productInfo; // @synthesize productInfo=_productInfo;
@property(nonatomic) long long similarRecommendNum; // @synthesize similarRecommendNum=_similarRecommendNum;
@property(copy, nonatomic) NSArray *paragraphs; // @synthesize paragraphs=_paragraphs;
@property(copy, nonatomic) NSString *productImagePath; // @synthesize productImagePath=_productImagePath;
@property(copy, nonatomic) NSString *articleImagePath; // @synthesize articleImagePath=_articleImagePath;
- (void).cxx_destruct;
- (id)containBigProducts;
@property(readonly) ZDMArticleViewModel *viewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
