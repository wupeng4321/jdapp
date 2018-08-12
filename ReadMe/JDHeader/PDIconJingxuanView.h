//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDViewProtocol-Protocol.h"

@class JDIconLabel, NSString, NewProductModel, UIView;
@protocol PDIconFloorViewDelegate;

@interface PDIconJingxuanView : PDFloorBaseView <PDViewProtocol>
{
    id <PDIconFloorViewDelegate> _floor_delegate;
    NewProductModel *_model;
    JDIconLabel *_ziyin_icon_view;
    UIView *_ver_sep_line;
}

@property(retain, nonatomic) UIView *ver_sep_line; // @synthesize ver_sep_line=_ver_sep_line;
@property(retain, nonatomic) JDIconLabel *ziyin_icon_view; // @synthesize ziyin_icon_view=_ziyin_icon_view;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <PDIconFloorViewDelegate> floor_delegate; // @synthesize floor_delegate=_floor_delegate;
- (void).cxx_destruct;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (void)floorTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

