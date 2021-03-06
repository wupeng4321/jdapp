//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderDetailFloorBaseView.h"

@class JDButton, JDIconLabel, JDImageView, NSMutableArray, UIImageView, UILabel, UIView;

@interface OrderDetailFloorView_Ware : OrderDetailFloorBaseView
{
    int _separateLineType;
    JDImageView *_loc1_ImgView;
    UIImageView *_loc1_BgImgView;
    UILabel *_loc1_TipLabel;
    JDIconLabel *_loc2_Label;
    UILabel *_loc3_Label;
    UILabel *_loc4_Label;
    JDButton *_loc5_Button;
    JDButton *_loc6_Button;
    JDButton *_loc8_Button;
    UIView *_loc7_View;
    NSMutableArray *_wareItem_Array;
}

@property(nonatomic) int separateLineType; // @synthesize separateLineType=_separateLineType;
@property(retain, nonatomic) NSMutableArray *wareItem_Array; // @synthesize wareItem_Array=_wareItem_Array;
@property(retain, nonatomic) UIView *loc7_View; // @synthesize loc7_View=_loc7_View;
@property(retain, nonatomic) JDButton *loc8_Button; // @synthesize loc8_Button=_loc8_Button;
@property(retain, nonatomic) JDButton *loc6_Button; // @synthesize loc6_Button=_loc6_Button;
@property(retain, nonatomic) JDButton *loc5_Button; // @synthesize loc5_Button=_loc5_Button;
@property(retain, nonatomic) UILabel *loc4_Label; // @synthesize loc4_Label=_loc4_Label;
@property(retain, nonatomic) UILabel *loc3_Label; // @synthesize loc3_Label=_loc3_Label;
@property(retain, nonatomic) JDIconLabel *loc2_Label; // @synthesize loc2_Label=_loc2_Label;
@property(retain, nonatomic) UILabel *loc1_TipLabel; // @synthesize loc1_TipLabel=_loc1_TipLabel;
@property(retain, nonatomic) UIImageView *loc1_BgImgView; // @synthesize loc1_BgImgView=_loc1_BgImgView;
@property(retain, nonatomic) JDImageView *loc1_ImgView; // @synthesize loc1_ImgView=_loc1_ImgView;
- (void).cxx_destruct;
- (void)itemViewTap:(id)arg1;
- (void)tapOnView:(id)arg1;
- (void)loc8Clicked;
- (void)loc6Clicked;
- (void)loc5Clicked;
- (double)getViewHeight;
- (void)setViewWithModel:(id)arg1;
- (void)dealloc;

@end

