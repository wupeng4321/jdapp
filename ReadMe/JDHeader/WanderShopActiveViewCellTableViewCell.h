//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, WanderShopTopicModel;

@interface WanderShopActiveViewCellTableViewCell : UITableViewCell
{
    JDImageView *_bkImage;
    WanderShopTopicModel *_topicModel;
}

@property(nonatomic) __weak WanderShopTopicModel *topicModel; // @synthesize topicModel=_topicModel;
- (void).cxx_destruct;
- (void)refreshNowView:(id)arg1;
- (void)refreshUI;
- (void)configCornerWithView:(id)arg1 needBorder:(_Bool)arg2;
- (void)beforeDrawLineWithView:(id)arg1 PointOne:(struct CGPoint)arg2;
- (void)configBeforeView:(id)arg1;
- (void)configNowView:(id)arg1;
- (void)setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

