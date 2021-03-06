//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class WanderShopTopicModel;
@protocol WanderShopActivityDetailDelegate;

@interface WanderShopActivityDetailBaseTableViewCell : UITableViewCell
{
    WanderShopTopicModel *_model;
    id <WanderShopActivityDetailDelegate> _delegate;
}

@property(nonatomic) __weak id <WanderShopActivityDetailDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doAnimation;
- (void)refreshUI;
- (void)setupSubViews;
@property(nonatomic) __weak WanderShopTopicModel *model; // @dynamic model;
- (id)init;

@end

