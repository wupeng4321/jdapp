//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class BJCCActivityItemModel, JDImageView;

@interface CCCouponResPosCell : UITableViewCell
{
    BJCCActivityItemModel *_marketResPosModel;
    CDUnknownBlockType _resetHightBlock;
    JDImageView *_aimageView;
}

@property(retain, nonatomic) JDImageView *aimageView; // @synthesize aimageView=_aimageView;
@property(copy, nonatomic) CDUnknownBlockType resetHightBlock; // @synthesize resetHightBlock=_resetHightBlock;
@property(retain, nonatomic) BJCCActivityItemModel *marketResPosModel; // @synthesize marketResPosModel=_marketResPosModel;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

