//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDView.h"

@class FSFFilterInterface, NSArray;
@protocol FSFilterExposedButtonViewDelegate;

@interface FSFilterExposedButtonView : JDView
{
    NSArray *_btnModels;
    long long _btnCount;
    double _btnSeparation;
    double _btnWidth;
    FSFFilterInterface *_filterInterface;
    id <FSFilterExposedButtonViewDelegate> _exposedFilterViewDelegate;
}

@property(nonatomic) __weak id <FSFilterExposedButtonViewDelegate> exposedFilterViewDelegate; // @synthesize exposedFilterViewDelegate=_exposedFilterViewDelegate;
@property(retain, nonatomic) FSFFilterInterface *filterInterface; // @synthesize filterInterface=_filterInterface;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (long long)getBtnIndexWithLogicType:(unsigned long long)arg1;
- (void)selectBtnWithLogicType:(unsigned long long)arg1 needMaidian:(_Bool)arg2;
- (id)getBtnWithLogicType:(unsigned long long)arg1;
- (void)selectBtnWithIndex:(long long)arg1 needMaidian:(_Bool)arg2;
- (void)closedAllBtn;
- (void)exposedButtonClicked:(id)arg1;
- (void)addButtons:(id)arg1;
- (void)removeBtns;
- (void)reloadFilterView:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
