//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "JDiCarouselDataSource-Protocol.h"
#import "JDiCarouselDelegate-Protocol.h"
#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, JDSHPageControl, JDiCarousel, NSDictionary, NSString, TTTFloorModel;

@interface TTTFocusView1B2SView : TTTBaseView <JDiCarouselDelegate, JDiCarouselDataSource, TTTBaseViewProtocol>
{
    JDImageView *_bgView;
    JDiCarousel *_cycleView;
    JDSHPageControl *_pageControl;
    TTTFloorModel *_viewData;
    long long _numOfPages;
    NSDictionary *_spaceDict;
    NSDictionary *_radiusDict;
    NSDictionary *_arcDict;
}

@property(retain, nonatomic) NSDictionary *arcDict; // @synthesize arcDict=_arcDict;
@property(retain, nonatomic) NSDictionary *radiusDict; // @synthesize radiusDict=_radiusDict;
@property(retain, nonatomic) NSDictionary *spaceDict; // @synthesize spaceDict=_spaceDict;
@property(nonatomic) long long numOfPages; // @synthesize numOfPages=_numOfPages;
@property(retain, nonatomic) TTTFloorModel *viewData; // @synthesize viewData=_viewData;
@property(retain, nonatomic) JDSHPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) JDiCarousel *cycleView; // @synthesize cycleView=_cycleView;
@property(retain, nonatomic) JDImageView *bgView; // @synthesize bgView=_bgView;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getPartOfImageForView:(id)arg1;
- (void)initArgumentsDict;
- (double)valueForOption:(long long)arg1 withDefault:(double)arg2;
- (void)valueChanged;
- (void)JDiCarousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)JDiCarouselCurrentItemIndexDidChange:(id)arg1;
- (double)JDiCarousel:(id)arg1 valueForOption:(long long)arg2 withDefault:(double)arg3;
- (id)JDiCarousel:(id)arg1 viewForItemAtIndex:(long long)arg2 reusingView:(id)arg3;
- (long long)JDiCarouselNumberOfItemsInCarousel:(id)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
