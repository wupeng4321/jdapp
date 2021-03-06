//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"

@class JDImageView, NSString, TTTAdsWareContainerModel, TTTFloorModel, UIButton;

@interface TTTAdsWareS3AdsView : TTTBaseView <TTTBaseViewProtocol>
{
    JDImageView *_imageView;
    UIButton *_aKeyCartButton;
    TTTFloorModel *_floorModel;
    TTTAdsWareContainerModel *_containerModel;
}

@property(nonatomic) __weak TTTAdsWareContainerModel *containerModel; // @synthesize containerModel=_containerModel;
@property(nonatomic) __weak TTTFloorModel *floorModel; // @synthesize floorModel=_floorModel;
@property(retain, nonatomic) UIButton *aKeyCartButton; // @synthesize aKeyCartButton=_aKeyCartButton;
@property(retain, nonatomic) JDImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (struct CGRect)aKeyCartButtonFrame;
- (struct CGRect)imageViewFrame;
- (id)fetchArray:(id)arg1 index:(long long)arg2;
- (id)fetchAKeyAddCartSrv:(id)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)aKeyCartClick;
- (void)clickAds;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

