//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NewRecommendInfoReasonItem;
@protocol NewRecommendReasonCellDelegate;

@interface NewRecommendInfoReasonCell : UITableViewCell
{
    NewRecommendInfoReasonItem *leftItem;
    NewRecommendInfoReasonItem *middleItem;
    NewRecommendInfoReasonItem *rightItem;
    id <NewRecommendReasonCellDelegate> delegate;
}

@property(nonatomic) __weak id <NewRecommendReasonCellDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didOnClickReasonItemButton:(id)arg1;
- (void)setLeftMode:(id)arg1 andMiddleModle:(id)arg2 andRightModle:(id)arg3;
- (void)initViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

