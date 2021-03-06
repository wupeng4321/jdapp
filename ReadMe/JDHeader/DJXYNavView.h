//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class JDImageView, UIButton, UILabel;
@protocol DJXYNavViewDelegate;

@interface DJXYNavView : UIView
{
    id <DJXYNavViewDelegate> _delegate;
    UIButton *_backButton;
    UIButton *_shopCardButton;
    UIButton *_moreButton;
    UILabel *_title;
    JDImageView *_logo;
}

@property(retain, nonatomic) JDImageView *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UIButton *shopCardButton; // @synthesize shopCardButton=_shopCardButton;
@property(retain, nonatomic) UIButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic) __weak id <DJXYNavViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)btnTapped:(id)arg1;
- (void)hideRightButtons:(_Bool)arg1;
- (void)fillTitleWithText:(id)arg1;
- (void)fillTitleImageWithUrl:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

