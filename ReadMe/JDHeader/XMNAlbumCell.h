//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel;

@interface XMNAlbumCell : UITableViewCell
{
    UIImageView *_albumCoverImageView;
    UILabel *_titleLabel;
}

@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIImageView *albumCoverImageView; // @synthesize albumCoverImageView=_albumCoverImageView;
- (void).cxx_destruct;
- (void)configCellWithItem:(id)arg1;
- (void)awakeFromNib;

@end

