//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIScrollView, UIView;

@interface ZDMProductRecommendationListADetailAuthorPostCell : UICollectionViewCell <UIScrollViewDelegate>
{
    _Bool _viewed;
    NSString *_articleChannel;
    UIView *_cellHeaderView;
    UIScrollView *_productsView;
    NSArray *_productViews;
    double _viewMaxX;
}

@property(nonatomic) double viewMaxX; // @synthesize viewMaxX=_viewMaxX;
@property(nonatomic) _Bool viewed; // @synthesize viewed=_viewed;
@property(retain, nonatomic) NSArray *productViews; // @synthesize productViews=_productViews;
@property(retain, nonatomic) UIScrollView *productsView; // @synthesize productsView=_productsView;
@property(retain, nonatomic) UIView *cellHeaderView; // @synthesize cellHeaderView=_cellHeaderView;
@property(retain, nonatomic) NSString *articleChannel; // @synthesize articleChannel=_articleChannel;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)render:(id)arg1;
- (void)setupUI;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

