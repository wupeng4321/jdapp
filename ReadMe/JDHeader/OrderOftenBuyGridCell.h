//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class OrderOftenBuyGridView;
@protocol OrderOftenBuyCellDelegate;

@interface OrderOftenBuyGridCell : UITableViewCell
{
    OrderOftenBuyGridView *leftView;
    OrderOftenBuyGridView *centerView;
    OrderOftenBuyGridView *rightView;
    id <OrderOftenBuyCellDelegate> _ofenBuydelegate;
}

@property(nonatomic) __weak id <OrderOftenBuyCellDelegate> ofenBuydelegate; // @synthesize ofenBuydelegate=_ofenBuydelegate;
- (void).cxx_destruct;
- (void)fillGridCellData:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end

