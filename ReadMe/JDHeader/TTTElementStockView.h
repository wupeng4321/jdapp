//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTElementBaseView.h"

@class TTTElementStockUnit, UILabel;

@interface TTTElementStockView : TTTElementBaseView
{
    UILabel *_textLabel;
    TTTElementStockUnit *_stockUnit;
}

@property(retain, nonatomic) TTTElementStockUnit *stockUnit; // @synthesize stockUnit=_stockUnit;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (struct CGRect)textLabelFrameWithText:(id)arg1 font:(id)arg2;
- (void)p_hideAllLabel;
- (void)setFrame:(struct CGRect)arg1 data:(id)arg2 value:(id)arg3 ratio:(double)arg4;
- (id)initWithFrame:(struct CGRect)arg1;

@end

