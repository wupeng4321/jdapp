//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDButton, UIImageView, UILabel;

@interface ShareOrderGiftBannarView : UIView
{
    CDUnknownBlockType _clickGiftBannarBlock;
    UIImageView *_backView;
    JDButton *_giftButton;
    UILabel *_contentLable;
}

@property(retain, nonatomic) UILabel *contentLable; // @synthesize contentLable=_contentLable;
@property(retain, nonatomic) JDButton *giftButton; // @synthesize giftButton=_giftButton;
@property(retain, nonatomic) UIImageView *backView; // @synthesize backView=_backView;
@property(copy, nonatomic) CDUnknownBlockType clickGiftBannarBlock; // @synthesize clickGiftBannarBlock=_clickGiftBannarBlock;
- (void).cxx_destruct;
- (void)tapBackView;
- (void)setContentbanInfo:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

