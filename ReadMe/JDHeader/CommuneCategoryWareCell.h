//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CommuneSearchWareProduct, JDImageView, UIButton, UILabel;

@interface CommuneCategoryWareCell : UITableViewCell
{
    JDImageView *_wareImage;
    UILabel *_wareNameLable;
    CommuneSearchWareProduct *_wareProduct;
    UIButton *_deleteButton;
    CDUnknownBlockType _deleteCell;
}

@property(copy, nonatomic) CDUnknownBlockType deleteCell; // @synthesize deleteCell=_deleteCell;
- (void).cxx_destruct;
- (void)setData:(id)arg1;
- (void)delete;
- (void)setUI:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

