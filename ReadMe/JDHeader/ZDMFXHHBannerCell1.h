//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "JDiCarouselDataSource-Protocol.h"
#import "JDiCarouselDelegate-Protocol.h"

@class JDImageView, JDiCarousel, NSMutableArray, NSString, NSTimer, UILabel, UIView, ZDMBanner;

@interface ZDMFXHHBannerCell1 : UICollectionViewCell <JDiCarouselDelegate, JDiCarouselDataSource>
{
    CDUnknownBlockType _onPressBannerItem;
    UIView *_containerView;
    ZDMBanner *_banner;
    JDImageView *_themeBackgroundImageView;
    JDImageView *_bannerImageView;
    JDiCarousel *_bannerCarousel;
    UILabel *_counterLabel;
    NSMutableArray *_bannerItems;
    NSTimer *_scrollTimer;
}

@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(retain, nonatomic) NSMutableArray *bannerItems; // @synthesize bannerItems=_bannerItems;
@property(retain, nonatomic) UILabel *counterLabel; // @synthesize counterLabel=_counterLabel;
@property(retain, nonatomic) JDiCarousel *bannerCarousel; // @synthesize bannerCarousel=_bannerCarousel;
@property(retain, nonatomic) JDImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(retain, nonatomic) JDImageView *themeBackgroundImageView; // @synthesize themeBackgroundImageView=_themeBackgroundImageView;
@property(retain, nonatomic) ZDMBanner *banner; // @synthesize banner=_banner;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType onPressBannerItem; // @synthesize onPressBannerItem=_onPressBannerItem;
- (void).cxx_destruct;
- (void)carouselAutoScroll;
- (void)setupDefaultUI;
- (void)render:(id)arg1;
- (double)translationByOffset:(double)arg1;
- (double)scaleByOffset:(double)arg1;
- (void)JDiCarouselDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)JDiCarouselWillBeginDragging:(id)arg1;
- (void)JDiCarouselDidScroll:(id)arg1;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (struct CATransform3D)JDiCarousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)clickBannerItem1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

