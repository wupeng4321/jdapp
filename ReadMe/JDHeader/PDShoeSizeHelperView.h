//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "PDViewProtocol-Protocol.h"

@class NSString, NewProductModel, UIImageView, UILabel;

@interface PDShoeSizeHelperView : UIView <PDViewProtocol>
{
    NewProductModel *_model;
    unsigned long long _state;
    UILabel *_mainContentLabel;
    UILabel *_sizeLabel;
    UILabel *_jumpTipLabel;
    UIImageView *_accessoryView;
}

@property(retain, nonatomic) UIImageView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property(retain, nonatomic) UILabel *jumpTipLabel; // @synthesize jumpTipLabel=_jumpTipLabel;
@property(retain, nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(retain, nonatomic) UILabel *mainContentLabel; // @synthesize mainContentLabel=_mainContentLabel;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)resetState;
- (void)renderUIWithProductModel:(id)arg1;
- (void)goToSizeHelperMPage:(id)arg1;
- (void)perpareGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

