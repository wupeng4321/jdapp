//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTTBookStepView, TTTBookingWareCommondView, TTTWareModel, UILabel;

@interface TTTBookingWarePriceView : UIView
{
    TTTWareModel *_bookModel;
    UILabel *_sloganLabel;
    UILabel *_priceLabel;
    UILabel *_numLabel;
    UILabel *_expandLabel;
    TTTBookStepView *_stepView;
    TTTBookingWareCommondView *_bookingButton;
}

@property(retain, nonatomic) TTTBookingWareCommondView *bookingButton; // @synthesize bookingButton=_bookingButton;
@property(retain, nonatomic) TTTBookStepView *stepView; // @synthesize stepView=_stepView;
@property(retain, nonatomic) UILabel *expandLabel; // @synthesize expandLabel=_expandLabel;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *sloganLabel; // @synthesize sloganLabel=_sloganLabel;
@property(retain, nonatomic) TTTWareModel *bookModel; // @synthesize bookModel=_bookModel;
- (void).cxx_destruct;
- (void)p_configExpandBackGround;
- (void)Book02_Step_OnRushBuy;
- (void)Book02_Step_OnPreSale;
- (void)Book02_Step_WillStart;
- (void)Book02_Expand_OnRushBuy;
- (void)Book02_Expand_OnPreSale;
- (void)Book02_Expand_WillStart;
- (void)Book02_Normal_OnPreSale;
- (void)Book02_Normal_WillStart;
- (void)Book01_Normal_OnBooking;
- (void)Book01_Normal_WillStart;
- (void)p_configBookStyle;
- (void)p_configBookingButton;
- (void)p_configLabel;
- (void)p_configColor;
- (void)setUp;
- (void)bindDataWithViewModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

