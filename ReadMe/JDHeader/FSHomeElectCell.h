//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FSHomeElectLayoutCellProtocol-Protocol.h"

@class CALayer, FSHomeElectViewModel, FinalSearchListProductTitleLabel, JDImageView, JDLabel, NSString, UILabel;

@interface FSHomeElectCell : UITableViewCell <FSHomeElectLayoutCellProtocol>
{
    JDImageView *_imageView;
    FinalSearchListProductTitleLabel *_titleLabel;
    JDLabel *_viewNumberLabel;
    UILabel *_skuNumLabel;
    double titleWidth;
    FSHomeElectViewModel *_viewModel;
    CALayer *_separatorLayer;
}

@property(retain, nonatomic) CALayer *separatorLayer; // @synthesize separatorLayer=_separatorLayer;
@property(retain, nonatomic) FSHomeElectViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)dealloc;
- (void)removeKVO;
- (void)addKVO;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateWithIsViewed:(_Bool)arg1;
- (void)layoutWithHomeElectViewModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

