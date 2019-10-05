//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class ShareOrderProduct, UIImageView;
@protocol ShareOrderPalletViewDelegate;

@interface ShareOrderPalletViewTableViewCell : UITableViewCell
{
    UIImageView *imageview;
    UIImageView *playicon;
    UIImageView *deleteImageView;
    ShareOrderProduct *_product;
    id <ShareOrderPalletViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ShareOrderPalletViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) ShareOrderProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)deleteAlbumImage:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
