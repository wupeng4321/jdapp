//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCShopCartBaseCell.h"

@class SCShopCartBeanScoreModel;

@interface SCShopCartCardBeanScoreCell : SCShopCartBaseCell
{
    struct CGRect _titleRect;
    struct CGRect _tipRect;
    float _originY;
    SCShopCartBeanScoreModel *_beanScoreModel;
}

@property(retain, nonatomic) SCShopCartBeanScoreModel *beanScoreModel; // @synthesize beanScoreModel=_beanScoreModel;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

