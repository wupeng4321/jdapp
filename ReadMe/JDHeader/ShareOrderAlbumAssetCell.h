//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class ShareOrderAssetProduct, ShareOrderCheckboxView;
@protocol ShareOrderAlbumAssetCellDelegate;

@interface ShareOrderAlbumAssetCell : UICollectionViewCell
{
    _Bool _showVideo;
    long long _minSecond;
    long long _maxSecond;
    long long _index;
    ShareOrderAssetProduct *_product;
    id <ShareOrderAlbumAssetCellDelegate> _delegate;
    ShareOrderCheckboxView *_assetImageView;
}

@property(retain, nonatomic) ShareOrderCheckboxView *assetImageView; // @synthesize assetImageView=_assetImageView;
@property(nonatomic) __weak id <ShareOrderAlbumAssetCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShareOrderAssetProduct *product; // @synthesize product=_product;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) _Bool showVideo; // @synthesize showVideo=_showVideo;
@property(nonatomic) long long maxSecond; // @synthesize maxSecond=_maxSecond;
@property(nonatomic) long long minSecond; // @synthesize minSecond=_minSecond;
- (void).cxx_destruct;
- (id)getShowImageView;
- (void)takePhotos;
- (void)prepareForReuse;
- (void)imageViewDidSelected:(id)arg1;
- (void)updateVideoStateWithSecondsLength:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

