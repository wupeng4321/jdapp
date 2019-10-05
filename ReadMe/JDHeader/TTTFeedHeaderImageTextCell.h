//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class JDImageView, TTTTabModel, UILabel;

@interface TTTFeedHeaderImageTextCell : UICollectionViewCell
{
    JDImageView *_tabImageView;
    UILabel *_tabTextLabel;
    TTTTabModel *_tabModel;
}

@property(retain, nonatomic) TTTTabModel *tabModel; // @synthesize tabModel=_tabModel;
@property(retain, nonatomic) UILabel *tabTextLabel; // @synthesize tabTextLabel=_tabTextLabel;
@property(retain, nonatomic) JDImageView *tabImageView; // @synthesize tabImageView=_tabImageView;
- (void).cxx_destruct;
- (void)updateStatus;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)bindDataWithViewModel:(id)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
