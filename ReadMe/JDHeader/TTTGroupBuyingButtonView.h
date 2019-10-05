//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

@class CALayer, UILabel;

@interface TTTGroupBuyingButtonView : TTTBaseView
{
    UILabel *_countLabel;
    UILabel *_statusLabel;
    CALayer *_lineLayer;
    long long _status;
}

@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) CALayer *lineLayer; // @synthesize lineLayer=_lineLayer;
@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void).cxx_destruct;
- (void)p_statusLabelConfig:(long long)arg1;
- (void)updateColorGroupCount:(id)arg1 buttonColor:(id)arg2;
- (void)updateButtonStatus:(long long)arg1 groupCount:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end
