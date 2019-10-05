//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "JDiCarouselDataSource-Protocol.h"
#import "JDiCarouselDelegate-Protocol.h"
#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, JDiCarousel, NSString, NSTimer, TTTFloorModel, UILabel;

@interface TTTFocusViewWideCard : TTTBaseView <JDiCarouselDelegate, JDiCarouselDataSource, TTTBaseViewProtocol>
{
    JDImageView *_backgroundView;
    JDiCarousel *_carouselView;
    TTTFloorModel *_floorModel;
    UILabel *_nowPageLabel;
    UILabel *_totalPageLabel;
    NSTimer *_timer;
}

@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *totalPageLabel; // @synthesize totalPageLabel=_totalPageLabel;
@property(retain, nonatomic) UILabel *nowPageLabel; // @synthesize nowPageLabel=_nowPageLabel;
@property(retain, nonatomic) TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) JDiCarousel *carouselView; // @synthesize carouselView=_carouselView;
@property(retain, nonatomic) JDImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (id)createVideoImageViewWithTag:(long long)arg1;
- (id)createTitleLabelWithTag:(long long)arg1;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (struct CATransform3D)JDiCarousel:(id)arg1 itemTransformForOffset:(double)arg2 baseTransform:(struct CATransform3D)arg3;
- (void)JDiCarouselCurrentItemIndexDidChange:(id)arg1;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (void)autoScollToNextView;
- (void)setPageLabelConfig;
- (void)setBackgoundImageAndColor;
- (void)setCarouselContentOffset;
- (void)dealloc;
- (void)willMoveToSuperview:(id)arg1;
- (void)viewDidEndDisplaying;
- (void)viewWillDisplay;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
