//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, NSMutableString, RecommendTitleLabel, UIButton, UILabel, UIView;
@protocol PersonalRecWareDelegate;

@interface PersonalRecWareListCell : UITableViewCell
{
    UIView *leftView;
    UIView *rightView;
    UIButton *leftButton;
    UIButton *rightButton;
    JDImageView *leftImageView;
    JDImageView *rightImageView;
    RecommendTitleLabel *leftNameLabel;
    RecommendTitleLabel *rightNameLabel;
    UILabel *leftPriceLabel;
    UILabel *rightPriceLabel;
    UILabel *leftCommentLabel;
    UILabel *rightCommentLabel;
    NSMutableString *leftSkuString;
    NSMutableString *rightSkuString;
    id <PersonalRecWareDelegate> delegate;
}

@property(nonatomic) __weak id <PersonalRecWareDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)jumpWithSKU:(id)arg1;
- (void)onClickRightCell:(id)arg1;
- (void)onClickLeftCell:(id)arg1;
- (void)setLeftModel:(id)arg1 andRightModel:(id)arg2;
- (void)setupSubViews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

