//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BJGiftWealCouponModel;

@interface CCCouponWelfareEnterCell : UITableViewCell
{
    BJGiftWealCouponModel *_welfareItem;
    CDUnknownBlockType _welfareClickBlock;
}

@property(copy, nonatomic) CDUnknownBlockType welfareClickBlock; // @synthesize welfareClickBlock=_welfareClickBlock;
@property(retain, nonatomic) BJGiftWealCouponModel *welfareItem; // @synthesize welfareItem=_welfareItem;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

