//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class JDImageView, SHVPList3DBanner;

@interface SHVPListBannerCell : UITableViewCell
{
    SHVPList3DBanner *_banner;
    JDImageView *_moodImageView;
}

@property(retain, nonatomic) JDImageView *moodImageView; // @synthesize moodImageView=_moodImageView;
@property(retain, nonatomic) SHVPList3DBanner *banner; // @synthesize banner=_banner;
- (void).cxx_destruct;
- (void)bindCellModel:(id)arg1;
- (id)modeImg;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

