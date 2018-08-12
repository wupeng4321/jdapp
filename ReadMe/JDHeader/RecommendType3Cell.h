//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableDictionary, RecommendInfoViewController, UIImageView, UILabel, UIView;

@interface RecommendType3Cell : UITableViewCell
{
    UIImageView *dateLineView;
    UIImageView *timeBG;
    UILabel *timeLabel;
    UIImageView *timeImageView;
    UIImageView *cellBGView;
    UIView *headView;
    UIView *middleView;
    UIView *downView;
    RecommendInfoViewController *viewInController;
    int typeIndexInt;
    NSMutableDictionary *skuModuleDic;
    NSMutableDictionary *shopDic;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)onClickEnterButton:(id)arg1;
- (void)onClickProductItem:(id)arg1;
- (void)onClickMoreInfo:(id)arg1;
- (void)setWithModel:(id)arg1 andIndex:(int)arg2 andController:(id)arg3 andCellIndex:(int)arg4;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

