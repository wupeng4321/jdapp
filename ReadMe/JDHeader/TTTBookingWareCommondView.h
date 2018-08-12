//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

@interface TTTBookingWareCommondView : UIView
{
    double _fontSize;
    UILabel *_titleLabel;
    NSString *_textColor;
}

@property(copy, nonatomic) NSString *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (void)configBookingType:(long long)arg1;
- (void)updateCommondWithTitle:(id)arg1;
- (void)updateCommondWithTitle:(id)arg1 bookingType:(long long)arg2;
- (void)updateColor:(id)arg1 bookingType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

