//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, NewRecommendModel, UIButton, UILabel;

@interface UniformPDRecommendItemView : UIView
{
    NewRecommendModel *itemModel;
    JDImageView *itemImageView;
    UILabel *nameLabel;
    UILabel *priceLabel;
    UIButton *bgButton;
}

- (void).cxx_destruct;
- (void)onClickBgButton:(id)arg1;
- (void)setModelInfo;
- (void)setItemInfo:(id)arg1;
- (void)initAllViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

