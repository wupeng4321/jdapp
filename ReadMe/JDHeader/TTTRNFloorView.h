//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDReactNativeView, NSString, TTTFloorModel;

@interface TTTRNFloorView : TTTBaseView <TTTBaseViewProtocol>
{
    long long _randomNumber;
    JDReactNativeView *_rootView;
    TTTFloorModel *_rnFloorModel;
}

@property(retain, nonatomic) TTTFloorModel *rnFloorModel; // @synthesize rnFloorModel=_rnFloorModel;
@property(retain, nonatomic) JDReactNativeView *rootView; // @synthesize rootView=_rootView;
- (void).cxx_destruct;
- (void)reactDidInitializeModule:(id)arg1 moduleName:(id)arg2;
- (void)reactDidFailToLoad:(id)arg1 error:(id)arg2;
- (void)reactDidLoad:(id)arg1 moduleName:(id)arg2;
- (void)reactWillStartLoading:(id)arg1 moduleName:(id)arg2;
- (void)viewDidEndDisplaying;
- (void)viewWillDisplay;
- (void)bindDataWithViewModel:(id)arg1;
- (void)loadRnRootView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

