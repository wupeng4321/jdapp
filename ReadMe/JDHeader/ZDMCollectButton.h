//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class JDImageView, UIImage, UILabel;

@interface ZDMCollectButton : UIControl
{
    JDImageView *_btnImageView;
    UILabel *_titleLB;
    UIImage *_selectedImage;
    UIImage *_normalImage;
}

@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage=_normalImage;
@property(retain, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property(retain, nonatomic) UILabel *titleLB; // @synthesize titleLB=_titleLB;
@property(retain, nonatomic) JDImageView *btnImageView; // @synthesize btnImageView=_btnImageView;
- (void).cxx_destruct;
- (void)select:(id)arg1;
- (void)renderTitleWith:(id)arg1 normalImage:(id)arg2 selectedImage:(id)arg3;
- (void)layoutSubviews;
- (void)switchCollectImageView:(_Bool)arg1;
- (id)init;

@end

