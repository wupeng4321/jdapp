//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "TTThemeCorverFlowViewDataSource-Protocol.h"
#import "TTThemeCorverFlowViewDelegate-Protocol.h"

@class JDImageView, NSString, TTTFloorModel, TTThemeCorverFlowView;

@interface TTTAdsScroll1LView : TTTBaseView <TTThemeCorverFlowViewDataSource, TTThemeCorverFlowViewDelegate, TTTBaseViewProtocol>
{
    TTTFloorModel *_viewData;
    TTThemeCorverFlowView *_scrollerView;
    JDImageView *_backgroundImageView;
}

@property(retain, nonatomic) JDImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) TTThemeCorverFlowView *scrollerView; // @synthesize scrollerView=_scrollerView;
@property(retain, nonatomic) TTTFloorModel *viewData; // @synthesize viewData=_viewData;
- (void).cxx_destruct;
- (void)dealloc;
- (id)themeCorverFlow:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;
- (unsigned long long)numberOfItemsInCoverFlow:(id)arg1;
- (void)themeCorverFlowExpoCurrentItemIndex:(long long)arg1;
- (void)themeCorverFlow:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (void)layoutSubviews;
- (void)updateBackgroundStyle;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

