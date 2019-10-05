//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UIImageView, UIScrollView;
@protocol JDShopDynamicSegmentViewDelegate;

@interface JDShopDynamicSegmentView : JDView <UIScrollViewDelegate>
{
    UIScrollView *tabScrollView;
    NSMutableArray *tabBtnLists;
    UIImageView *bottomLine;
    _Bool isFollowBtnInScreen;
    struct CGRect followBtnFrame;
    long long followIndex;
    NSMutableArray *_tabDataLists;
    long long _currentSelectIndex;
    id <JDShopDynamicSegmentViewDelegate> _segementDelegate;
}

@property(nonatomic) id <JDShopDynamicSegmentViewDelegate> segementDelegate; // @synthesize segementDelegate=_segementDelegate;
@property(nonatomic) long long currentSelectIndex; // @synthesize currentSelectIndex=_currentSelectIndex;
@property(retain, nonatomic) NSMutableArray *tabDataLists; // @synthesize tabDataLists=_tabDataLists;
- (void).cxx_destruct;
- (void)followBtnOriginX:(double)arg1 isShowInScreen:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)adjustScrollViewAndBottomLine;
- (void)tabBtnClick:(id)arg1;
- (void)setSegmentSelectIndex:(long long)arg1;
- (void)setUpUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
