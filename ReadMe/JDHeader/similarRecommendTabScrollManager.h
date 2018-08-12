//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "StowSimilarityTabScrollViewDelegate-Protocol.h"
#import "sameStyleTabScrollTableViewDelegate-Protocol.h"
#import "similarityRecommendTabScrollCollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, StowSimilarityTabScrollView;
@protocol similarRecommendTabScrollManagerDelegate;

@interface similarRecommendTabScrollManager : NSObject <StowSimilarityTabScrollViewDelegate, similarityRecommendTabScrollCollectionViewDelegate, sameStyleTabScrollTableViewDelegate>
{
    _Bool _similarDoodsHasNextPage;
    _Bool _isLoadingData;
    _Bool _canScroll;
    _Bool _hasTitle;
    id <similarRecommendTabScrollManagerDelegate> _delegate;
    double _outterViewOffset;
    NSArray *_titleListArray;
    NSMutableDictionary *_tableViewCacheData;
    long long _geneTabIndex;
    NSArray *_tagsArray;
    NSString *_enterSource;
    StowSimilarityTabScrollView *_tabScrollView;
    NSMutableDictionary *_recommendViewCacheOffset;
}

@property(nonatomic) _Bool hasTitle; // @synthesize hasTitle=_hasTitle;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(retain, nonatomic) NSMutableDictionary *recommendViewCacheOffset; // @synthesize recommendViewCacheOffset=_recommendViewCacheOffset;
@property(retain, nonatomic) StowSimilarityTabScrollView *tabScrollView; // @synthesize tabScrollView=_tabScrollView;
@property(nonatomic) _Bool isLoadingData; // @synthesize isLoadingData=_isLoadingData;
@property(nonatomic) _Bool similarDoodsHasNextPage; // @synthesize similarDoodsHasNextPage=_similarDoodsHasNextPage;
@property(copy, nonatomic) NSString *enterSource; // @synthesize enterSource=_enterSource;
@property(retain, nonatomic) NSArray *tagsArray; // @synthesize tagsArray=_tagsArray;
@property(nonatomic) long long geneTabIndex; // @synthesize geneTabIndex=_geneTabIndex;
@property(retain, nonatomic) NSMutableDictionary *tableViewCacheData; // @synthesize tableViewCacheData=_tableViewCacheData;
@property(retain, nonatomic) NSArray *titleListArray; // @synthesize titleListArray=_titleListArray;
@property(nonatomic) double outterViewOffset; // @synthesize outterViewOffset=_outterViewOffset;
@property(nonatomic) __weak id <similarRecommendTabScrollManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleMemoryWarning;
- (void)sendGeneTabClickEvent:(long long)arg1 withType:(long long)arg2;
- (id)getRecommendView;
- (void)showReturnToTop:(_Bool)arg1;
- (void)fetchMoreData;
- (void)similarGoodsAddedToCartWithModel:(id)arg1 andImage:(id)arg2;
- (void)similarGoodsClickedWithModel:(id)arg1;
- (void)clickSimilarGoodsTagItemWithTagName:(id)arg1;
- (void)tabIndexChanged:(long long)arg1 withType:(long long)arg2;
- (void)cacheScrollOffset:(double)arg1 index:(long long)arg2;
- (void)subViewMovedToTop;
- (void)restoreTableViewOffset:(id)arg1 withIndex:(long long)arg2;
- (id)scrollView:(id)arg1 andIndex:(long long)arg2;
- (double)getCellHeightWithIndex:(long long)arg1;
- (void)setOutterCanScroll;
- (_Bool)hasRecommendData;
- (id)getCurrentRecommendView:(long long)arg1;
- (void)setupView:(struct CGRect)arg1;
- (void)setSubTabviewScrollable;
- (void)scrollViewDidScroll:(id)arg1 withFixY:(double)arg2;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

