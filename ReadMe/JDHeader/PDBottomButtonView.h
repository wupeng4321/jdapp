//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface PDBottomButtonView : UIView
{
    UILabel *_priceLabel;
    UIView *_detailView;
    UILabel *_mainLabel;
    UILabel *_secondLabel;
}

@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIView *detailView; // @synthesize detailView=_detailView;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
- (void).cxx_destruct;
- (void)renderViewWithPrice:(id)arg1 firstTitle:(id)arg2 secondTitle:(id)arg3;
- (void)resetState;
- (id)initWithFrame:(struct CGRect)arg1;

@end

