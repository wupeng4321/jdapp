//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class PromotionWareView;
@protocol PromotionWareCellDelegate;

@interface PromotionWareCell : UITableViewCell
{
    PromotionWareView *_firstView;
    PromotionWareView *_secondView;
    id <PromotionWareCellDelegate> _delegate;
}

@property(nonatomic) id <PromotionWareCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)tapAction:(id)arg1;
- (void)didTouchEndView:(id)arg1;
- (void)setWithFirstModel:(id)arg1 secondModel:(id)arg2;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
