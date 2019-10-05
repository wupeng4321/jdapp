//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSMutableArray, NSString, PDMenuManager, UIScrollView;
@protocol WarePageViewDelegate;

@interface WarePageView : UIView <UIScrollViewDelegate>
{
    _Bool _canScroll;
    id <WarePageViewDelegate> _delegate;
    PDMenuManager *_menuManger;
    UIScrollView *_pageScrollView;
    long long _currentPageIndex;
    NSMutableArray *_pageMenuItemsArray;
}

@property(retain, nonatomic) NSMutableArray *pageMenuItemsArray; // @synthesize pageMenuItemsArray=_pageMenuItemsArray;
@property(nonatomic) long long currentPageIndex; // @synthesize currentPageIndex=_currentPageIndex;
@property(retain, nonatomic) UIScrollView *pageScrollView; // @synthesize pageScrollView=_pageScrollView;
@property(retain, nonatomic) PDMenuManager *menuManger; // @synthesize menuManger=_menuManger;
@property(nonatomic) _Bool canScroll; // @synthesize canScroll=_canScroll;
@property(nonatomic) __weak id <WarePageViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)getPageIndexMenuType;
- (void)setPageIndex:(long long)arg1 animate:(_Bool)arg2;
- (void)reloadData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
