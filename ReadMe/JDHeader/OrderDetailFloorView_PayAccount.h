//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderDetailFloorBaseView.h"

@class UILabel, UIView;

@interface OrderDetailFloorView_PayAccount : OrderDetailFloorBaseView
{
    UIView *_loc1_View;
    UIView *_insideLine;
    UILabel *_loc2_Label;
    UILabel *_loc3_Label;
}

@property(retain, nonatomic) UILabel *loc3_Label; // @synthesize loc3_Label=_loc3_Label;
@property(retain, nonatomic) UILabel *loc2_Label; // @synthesize loc2_Label=_loc2_Label;
@property(retain, nonatomic) UIView *insideLine; // @synthesize insideLine=_insideLine;
@property(retain, nonatomic) UIView *loc1_View; // @synthesize loc1_View=_loc1_View;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (double)getViewHeight;
- (void)setViewWithModel:(id)arg1;

@end
