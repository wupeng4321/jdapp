//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FSSearchResultCollectionCellProtocol-Protocol.h"

@class FSSRankViewModel, JDImageView, NSString, UIImageView, UILabel, UIView;
@protocol FSSearchListCellViewModelProtocol;

@interface FSSWaterFallRankCell : UICollectionViewCell <FSSearchResultCollectionCellProtocol>
{
    FSSRankViewModel<FSSearchListCellViewModelProtocol> *_viewModel;
    UILabel *_rankTitleLabel;
    UILabel *_rankSubTitleLabel;
    JDImageView *_rankImageView;
    UIView *_shadowBottomView;
    UIImageView *_bgImageView;
}

@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIView *shadowBottomView; // @synthesize shadowBottomView=_shadowBottomView;
@property(retain, nonatomic) JDImageView *rankImageView; // @synthesize rankImageView=_rankImageView;
@property(retain, nonatomic) UILabel *rankSubTitleLabel; // @synthesize rankSubTitleLabel=_rankSubTitleLabel;
@property(retain, nonatomic) UILabel *rankTitleLabel; // @synthesize rankTitleLabel=_rankTitleLabel;
@property(retain, nonatomic) FSSRankViewModel<FSSearchListCellViewModelProtocol> *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)createCell;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

