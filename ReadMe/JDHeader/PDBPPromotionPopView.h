//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDCoreSemiPopupView.h"

#import "JDContentItemDelegate-Protocol.h"

@class NSString, PDBPPromotionModel, UIScrollView;

@interface PDBPPromotionPopView : JDCoreSemiPopupView <JDContentItemDelegate>
{
    UIScrollView *_contentScrollView;
    PDBPPromotionModel *_model;
}

@property(retain, nonatomic) PDBPPromotionModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIScrollView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
- (void).cxx_destruct;
- (void)didTapAtItemView:(id)arg1;
- (void)handler3CGiftPoolViewTapped;
- (void)packViewTapped:(id)arg1;
- (void)handlerTapped:(id)arg1;
- (id)serviceIconWithTitle:(id)arg1;
- (id)cretePackView:(id)arg1 index:(long long)arg2 model:(id)arg3;
- (void)renderWithData:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

