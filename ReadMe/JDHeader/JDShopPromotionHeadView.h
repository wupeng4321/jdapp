//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class JDImageView, JDShopStyledPageControl, NSArray, NSString, UILabel;

@interface JDShopPromotionHeadView : UIView <UIScrollViewDelegate>
{
    JDImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    JDShopStyledPageControl *_pageControl;
    UIView *bottomLineView;
    CDUnknownBlockType _tapBlock;
    CDUnknownBlockType _swipBlock;
    NSArray *_wareList;
}

@property(retain, nonatomic) NSArray *wareList; // @synthesize wareList=_wareList;
@property(copy, nonatomic) CDUnknownBlockType swipBlock; // @synthesize swipBlock=_swipBlock;
@property(copy, nonatomic) CDUnknownBlockType tapBlock; // @synthesize tapBlock=_tapBlock;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)dealloc;
- (void)setViewWithArr:(id)arg1 title:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)pageControlDidTap:(id)arg1;
- (void)didSwipUpWareView;
- (void)didTapWareView;
- (void)didTapExtendView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
