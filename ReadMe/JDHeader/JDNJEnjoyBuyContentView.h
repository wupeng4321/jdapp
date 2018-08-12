//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class JDEnjoySingleView, NSArray, NSMutableArray, NSString, UIScrollView;
@protocol JDNJEnjoyBuyContentViewDelegate;

@interface JDNJEnjoyBuyContentView : JDView <UIScrollViewDelegate>
{
    id <JDNJEnjoyBuyContentViewDelegate> _contentViewDelegate;
    long long _selectIndex;
    NSArray *_bannerArray;
    UIScrollView *_rootScrollView;
    NSMutableArray *_viewArray;
    JDEnjoySingleView *_currentScrollView;
}

@property(retain, nonatomic) JDEnjoySingleView *currentScrollView; // @synthesize currentScrollView=_currentScrollView;
@property(retain, nonatomic) NSMutableArray *viewArray; // @synthesize viewArray=_viewArray;
@property(retain, nonatomic) UIScrollView *rootScrollView; // @synthesize rootScrollView=_rootScrollView;
@property(retain, nonatomic) NSArray *bannerArray; // @synthesize bannerArray=_bannerArray;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
@property(nonatomic) id <JDNJEnjoyBuyContentViewDelegate> contentViewDelegate; // @synthesize contentViewDelegate=_contentViewDelegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)reloadDataByTag:(id)arg1 chosenList:(id)arg2 feedInfoList:(id)arg3 brandCategoryList:(id)arg4 productList:(id)arg5 preFeedInfoList:(id)arg6 isLastPage:(_Bool)arg7 errorStatus:(id)arg8 tabPageSize:(unsigned long long)arg9;
- (void)setContentViewData:(id)arg1;
- (void)setupUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

