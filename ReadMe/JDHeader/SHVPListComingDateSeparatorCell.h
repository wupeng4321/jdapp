//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class SHVPBaseListItem, UILabel;

@interface SHVPListComingDateSeparatorCell : UITableViewCell
{
    UILabel *_dateLabel;
    SHVPBaseListItem *_cellModel;
}

@property(retain, nonatomic) SHVPBaseListItem *cellModel; // @synthesize cellModel=_cellModel;
@property(retain, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
- (void).cxx_destruct;
- (void)updateCellContent;
- (void)bindCellModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
