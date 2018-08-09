//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CommuneSearchProduct, UIButton, UIImageView;
@protocol CommuneSSPalletSingleViewDelegate;

@interface CommuneSearchPalletSingleView : UIView
{
    UIButton *_checkButton;
    CommuneSearchProduct *_product;
    id <CommuneSSPalletSingleViewDelegate> _delegate;
    UIImageView *_selImageView;
}

@property(retain, nonatomic) UIImageView *selImageView; // @synthesize selImageView=_selImageView;
@property(nonatomic) __weak id <CommuneSSPalletSingleViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CommuneSearchProduct *product; // @synthesize product=_product;
- (void).cxx_destruct;
- (void)dealloc;
- (void)selectImage;
- (void)configCell;
- (id)initWithProduct:(id)arg1;

@end

