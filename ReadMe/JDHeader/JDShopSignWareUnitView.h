//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, JDImageView, UILabel;

@interface JDShopSignWareUnitView : UIView
{
    JDImageView *wareView;
    UILabel *wareInfoLabel;
    UILabel *warePriceLabel;
    CALayer *_stockLayer;
}

@property(retain, nonatomic) CALayer *stockLayer; // @synthesize stockLayer=_stockLayer;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)handleStock:(_Bool)arg1 withUnderCarriage:(_Bool)arg2;
- (void)loadViewWithModel:(id)arg1;
- (void)didTapWareView;

@end

