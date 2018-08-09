//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "JDCheckBoxDelegate-Protocol.h"

@class CommuneProductModel, JDBoldFontLabel, JDCheckBox, JDImageView, JDPriceLabel, JDWareTitleLabel, NSString, RateView;
@protocol CommuneSearchCellDelagate;

@interface CommuneSearchCell : UITableViewCell <JDCheckBoxDelegate>
{
    JDWareTitleLabel *titleLabel_;
    JDPriceLabel *priceLabel_;
    RateView *rateView_;
    JDBoldFontLabel *goodLabel_;
    JDCheckBox *selectBox_;
    _Bool _productImageViewIsSupportClick;
    CommuneProductModel *_model;
    id <CommuneSearchCellDelagate> _delegate;
    JDImageView *_productImageView;
}

@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(nonatomic) __weak id <CommuneSearchCellDelagate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool productImageViewIsSupportClick; // @synthesize productImageViewIsSupportClick=_productImageViewIsSupportClick;
@property(retain, nonatomic) CommuneProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)checkView:(id)arg1 checked:(_Bool)arg2;
- (void)selectCell:(_Bool)arg1;
- (void)clickProductImageView:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

