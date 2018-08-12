//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class TTTBookRow1_2Model, TTTBookStepView, TTTBookingWareCommondView, TTTWareImageView, TTTWareModel, UILabel, UITapGestureRecognizer;

@interface TTTBookingWaresList_1Row2_Item : UIView
{
    TTTBookRow1_2Model *_bookRowModel;
    TTTWareModel *_bookModel;
    TTTWareImageView *_imageView;
    UILabel *_nameLabel;
    UILabel *_priceLabel;
    UILabel *_numLabel;
    TTTBookingWareCommondView *_bookingButton;
    TTTBookStepView *_stepView;
    UITapGestureRecognizer *_tap;
}

@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) TTTBookStepView *stepView; // @synthesize stepView=_stepView;
@property(retain, nonatomic) TTTBookingWareCommondView *bookingButton; // @synthesize bookingButton=_bookingButton;
@property(retain, nonatomic) UILabel *numLabel; // @synthesize numLabel=_numLabel;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) TTTWareImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) TTTWareModel *bookModel; // @synthesize bookModel=_bookModel;
@property(retain, nonatomic) TTTBookRow1_2Model *bookRowModel; // @synthesize bookRowModel=_bookRowModel;
- (void).cxx_destruct;
- (void)BookingStepRushBuy;
- (void)BookingStepBooking;
- (void)BookingOnBooking;
- (void)BookingWillStart;
- (void)p_configBookStyle;
- (void)p_configStock;
- (void)p_configBookingButton;
- (void)p_configLabel;
- (void)p_configColor;
- (void)p_configImageView;
- (void)setUp;
- (void)bindDataWithViewModel:(id)arg1;
- (void)wareViewClick:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

