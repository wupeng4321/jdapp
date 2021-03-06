//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, UILabel, UIView;
@protocol JDRankDresserBannerDelegate;

@interface JDRankDresserNewCell : UITableViewCell
{
    UILabel *mainTitleLabel;
    UILabel *descLabel;
    UILabel *readingCountLabel;
    JDImageView *image;
    JDImageView *imageMid;
    JDImageView *imageRight;
    UIView *separatorBlock;
    UIView *line;
    JDImageView *bagIcon;
    JDImageView *viewNumIcon;
    UILabel *itemsNumLabel;
    JDImageView *headImageView;
    UIView *bottomView;
    id <JDRankDresserBannerDelegate> _bannerDelegate;
}

@property(nonatomic) id <JDRankDresserBannerDelegate> bannerDelegate; // @synthesize bannerDelegate=_bannerDelegate;
- (void)didClickBottomMore;
- (void)didClickBanner;
- (void)setCellModel:(id)arg1 isLast:(_Bool)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

