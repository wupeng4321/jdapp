//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CycleScrollViewDataSource-Protocol.h"
#import "CycleScrollViewDelegate-Protocol.h"

@class JDCycleScrollView, NSArray, NSString, StyledPageControl;

@interface DPGDetailTableHeaderView : UIView <CycleScrollViewDelegate, CycleScrollViewDataSource>
{
    CDUnknownBlockType _articleSkuClickBlock;
    NSString *_anchorImg;
    CDUnknownBlockType _articleSkuIndexBlock;
    NSString *_anchorDocument;
    JDCycleScrollView *_mCycelScrollView;
    StyledPageControl *_mPageControl;
    NSArray *_articleList;
}

@property(copy, nonatomic) NSArray *articleList; // @synthesize articleList=_articleList;
@property(retain, nonatomic) StyledPageControl *mPageControl; // @synthesize mPageControl=_mPageControl;
@property(retain, nonatomic) JDCycleScrollView *mCycelScrollView; // @synthesize mCycelScrollView=_mCycelScrollView;
@property(copy, nonatomic) NSString *anchorDocument; // @synthesize anchorDocument=_anchorDocument;
@property(copy, nonatomic) CDUnknownBlockType articleSkuIndexBlock; // @synthesize articleSkuIndexBlock=_articleSkuIndexBlock;
@property(copy, nonatomic) NSString *anchorImg; // @synthesize anchorImg=_anchorImg;
@property(copy, nonatomic) CDUnknownBlockType articleSkuClickBlock; // @synthesize articleSkuClickBlock=_articleSkuClickBlock;
- (void).cxx_destruct;
- (void)currentPageIndexUpdated:(long long)arg1;
- (id)viewForPageAtIndex:(unsigned long long)arg1 reusingView:(id)arg2;
- (unsigned long long)numberOfPages;
- (void)bindData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

