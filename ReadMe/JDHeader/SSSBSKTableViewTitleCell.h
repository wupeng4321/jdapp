//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SSSBSKBaseTableViewCell.h"

@class SSSBSKTableViewTitleCellModel, UILabel;

@interface SSSBSKTableViewTitleCell : SSSBSKBaseTableViewCell
{
    UILabel *_operateWord;
    UILabel *_selectedBrand;
    SSSBSKTableViewTitleCellModel *_data;
}

@property(retain, nonatomic) SSSBSKTableViewTitleCellModel *data; // @synthesize data=_data;
@property(retain, nonatomic) UILabel *selectedBrand; // @synthesize selectedBrand=_selectedBrand;
@property(retain, nonatomic) UILabel *operateWord; // @synthesize operateWord=_operateWord;
- (void).cxx_destruct;
- (void)alignBottom:(id)arg1;
- (void)configModel:(id)arg1;
- (void)initUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

