//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, JDShopMemberUnitView, UIImageView;

@interface JDShopMemberUnitViewCell : UITableViewCell
{
    UIImageView *m_memberTipView;
    JDImageView *headView;
    JDImageView *headTitleView;
    long long _saleType;
    JDShopMemberUnitView *_unitView1;
    JDShopMemberUnitView *_unitView2;
}

@property(retain, nonatomic) JDShopMemberUnitView *unitView2; // @synthesize unitView2=_unitView2;
@property(retain, nonatomic) JDShopMemberUnitView *unitView1; // @synthesize unitView1=_unitView1;
@property(nonatomic) long long saleType; // @synthesize saleType=_saleType;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setFloatTip:(_Bool)arg1;
- (void)setHeadView:(_Bool)arg1;
- (void)initCellWithStyle;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
