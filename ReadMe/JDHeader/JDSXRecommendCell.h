//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "JDSXRecommendItemDelegate-Protocol.h"

@class JDSXRecommendItem, NSArray, NSString, UIView;

@interface JDSXRecommendCell : UITableViewCell <JDSXRecommendItemDelegate>
{
    NSArray *_itemModelsArr;
    CDUnknownBlockType _didLookSameGoodsAction;
    CDUnknownBlockType _didSelectedGoodsAction;
    JDSXRecommendItem *_leftItem;
    JDSXRecommendItem *_rightItem;
    UIView *_backgroundGrayView;
    UIView *_VlineView;
    UIView *_cellBackgroundView;
}

+ (double)getCellHeight:(id)arg1;
@property(retain, nonatomic) UIView *cellBackgroundView; // @synthesize cellBackgroundView=_cellBackgroundView;
@property(retain, nonatomic) UIView *VlineView; // @synthesize VlineView=_VlineView;
@property(retain, nonatomic) UIView *backgroundGrayView; // @synthesize backgroundGrayView=_backgroundGrayView;
@property(retain, nonatomic) JDSXRecommendItem *rightItem; // @synthesize rightItem=_rightItem;
@property(retain, nonatomic) JDSXRecommendItem *leftItem; // @synthesize leftItem=_leftItem;
@property(copy, nonatomic) CDUnknownBlockType didSelectedGoodsAction; // @synthesize didSelectedGoodsAction=_didSelectedGoodsAction;
@property(copy, nonatomic) CDUnknownBlockType didLookSameGoodsAction; // @synthesize didLookSameGoodsAction=_didLookSameGoodsAction;
@property(retain, nonatomic) NSArray *itemModelsArr; // @synthesize itemModelsArr=_itemModelsArr;
- (void).cxx_destruct;
- (void)JDSXRecommendItem:(id)arg1 didLookSameGoodsWithModel:(id)arg2;
- (void)JDSXRecommendItem:(id)arg1 didSelectedWithModel:(id)arg2;
- (void)setBackgroundViewHeight:(double)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

