//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UIButton, UILabel;

@interface JZNavView : UIView
{
    UIButton *_backButton;
    UIButton *_shareButton;
    UILabel *_title;
    JDImageView *_logo;
}

@property(retain, nonatomic) JDImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
- (void).cxx_destruct;
- (void)fillTitleWithText:(id)arg1;
- (void)fillTitleImageWithUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

