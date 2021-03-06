//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "FSSearchResultCollectionCellProtocol-Protocol.h"

@class FSSCoreLabel, FSSearchProductViewModel, JDImageView, JDLabel, NSString;

@interface FSSWaterFallContentViewCell : UICollectionViewCell <FSSearchResultCollectionCellProtocol>
{
    JDImageView *_contentImageView;
    JDImageView *_contentFlagBg1;
    JDImageView *_contentFlagBg2;
    JDImageView *_contentFlagImageView;
    FSSCoreLabel *_contentNameLabel;
    JDLabel *_viewedNumLabel;
    FSSearchProductViewModel *_viewModel;
}

@property(readonly, nonatomic) FSSearchProductViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)setContentViewHighLight:(_Bool)arg1;
- (void)relayoutFlagImage;
- (void)setViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

