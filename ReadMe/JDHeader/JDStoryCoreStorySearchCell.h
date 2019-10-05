//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "JDCheckBoxDelegate-Protocol.h"

@class JDBoldFontLabel, JDCheckBox, JDImageView, JDPriceLabel, JDStoryCoreStoryProductModel, JDWareTitleLabel, NSString;

@interface JDStoryCoreStorySearchCell : UITableViewCell <JDCheckBoxDelegate>
{
    JDWareTitleLabel *titleLabel_;
    JDPriceLabel *priceLabel_;
    JDBoldFontLabel *goodLabel_;
    JDCheckBox *selectBox_;
    JDStoryCoreStoryProductModel *_model;
    JDImageView *_productImageView;
}

@property(retain, nonatomic) JDImageView *productImageView; // @synthesize productImageView=_productImageView;
@property(retain, nonatomic) JDStoryCoreStoryProductModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)checkView:(id)arg1 checked:(_Bool)arg2;
- (void)selectCell:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
