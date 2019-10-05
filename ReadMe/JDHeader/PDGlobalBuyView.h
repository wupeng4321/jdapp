//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseView.h"

#import "PDViewProtocol-Protocol.h"

@class JDImageView, NSString, NewProductModel, UILabel;
@protocol PDFloorViewProtocol;

@interface PDGlobalBuyView : PDFloorBaseView <PDViewProtocol>
{
    id <PDFloorViewProtocol> _delegate;
    NewProductModel *_model;
    JDImageView *_titleImageView;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) JDImageView *titleImageView; // @synthesize titleImageView=_titleImageView;
@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <PDFloorViewProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)renderUIWithProductModel:(id)arg1;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
