//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderDetailFloorBaseView.h"

@class JDButton, UIImageView, UILabel, UIView;

@interface OrderDetailFloorView_DeliveryMsg : OrderDetailFloorBaseView
{
    double textHeight;
    UILabel *_loc1_Label;
    JDButton *_loc2_Btn;
    UIView *_loc3_View;
    UIImageView *_loc4_ImageView;
    UILabel *_loc4_Label;
}

@property(retain, nonatomic) UILabel *loc4_Label; // @synthesize loc4_Label=_loc4_Label;
@property(retain, nonatomic) UIImageView *loc4_ImageView; // @synthesize loc4_ImageView=_loc4_ImageView;
@property(retain, nonatomic) UIView *loc3_View; // @synthesize loc3_View=_loc3_View;
@property(retain, nonatomic) JDButton *loc2_Btn; // @synthesize loc2_Btn=_loc2_Btn;
@property(retain, nonatomic) UILabel *loc1_Label; // @synthesize loc1_Label=_loc1_Label;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (id)creatLabel;
- (double)getViewHeight;
- (id)getAttributedText:(id)arg1;
- (void)setViewWithModel:(id)arg1;
- (void)dealloc;

@end

