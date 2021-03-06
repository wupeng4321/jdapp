//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "PDIconFloorViewDelegate-Protocol.h"

@class NSMutableString, NSString, NewProductModel, PDIconDisplay, PDIconJingxuanView, PDIconView;

@interface PDIconFloorViewModel : PDFloorBaseViewModel <PDIconFloorViewDelegate>
{
    PDIconView *_iconView;
    PDIconJingxuanView *_iconJingxuanView;
    NewProductModel *_model;
    PDIconDisplay *_iconDisplayView;
    NSMutableString *_iconListString;
}

+ (void)load;
@property(retain, nonatomic) NSMutableString *iconListString; // @synthesize iconListString=_iconListString;
@property(retain, nonatomic) PDIconDisplay *iconDisplayView; // @synthesize iconDisplayView=_iconDisplayView;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(retain, nonatomic) PDIconJingxuanView *iconJingxuanView; // @synthesize iconJingxuanView=_iconJingxuanView;
@property(retain, nonatomic) PDIconView *iconView; // @synthesize iconView=_iconView;
- (void).cxx_destruct;
- (void)iconDetailAction;
- (void)refreshViewForFloorTemplate;
- (void)resetState;
- (void)getIconListString;
- (void)renderUIWithProductModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

