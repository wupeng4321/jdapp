//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NewRecommendModel, UILabel;
@protocol NewRecommendReasonItemDelegate;

@interface NewRecommendInfoReasonItem : UIView
{
    JDImageView *productImageView;
    UILabel *titleLabel;
    UILabel *priceLabel;
    NewRecommendModel *itemmodel;
    id <NewRecommendReasonItemDelegate> delegate;
}

@property(nonatomic) __weak id <NewRecommendReasonItemDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)onClickBGButton:(id)arg1;
- (void)setItemMode:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

