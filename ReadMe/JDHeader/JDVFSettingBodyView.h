//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "JDVFWaterSliderViewDelegate-Protocol.h"

@class JDVFWaterSliderView, NSString, UIButton;
@protocol JDVFSettingBodyDelegate;

@interface JDVFSettingBodyView : UIView <JDVFWaterSliderViewDelegate>
{
    UIButton *bodyButton;
    UIButton *bwhButton;
    UIView *buttonLine;
    UIView *bodyView;
    UIView *bwhView;
    JDVFWaterSliderView *heightWaterSliderView;
    JDVFWaterSliderView *statureWaterSliderView;
    UIButton *shapeXButton;
    UIButton *shapeHButton;
    UIButton *shapeTButton;
    UIButton *shapeAButton;
    UIButton *shapeActivitButton;
    JDVFWaterSliderView *bustWaterSliderView;
    JDVFWaterSliderView *waistWaterSliderView;
    JDVFWaterSliderView *hiplineWaterSliderView;
    UIButton *storeBodyButton;
    UIButton *storeBWHButton;
    int _genderType;
    id <JDVFSettingBodyDelegate> _delegate;
}

@property(nonatomic) int genderType; // @synthesize genderType=_genderType;
@property(nonatomic) __weak id <JDVFSettingBodyDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)waterSliderValue:(long long)arg1 andIndex:(long long)arg2;
- (void)onClickStoreBWHButton:(id)arg1;
- (void)onClickStoreBodyButton:(id)arg1;
- (void)setActivityShapeButton:(int)arg1;
- (void)changeShapeActivitButton:(id)arg1;
- (void)onClickShapeButton:(id)arg1;
- (void)onClickBWHButton:(id)arg1;
- (void)onClickBodyButton:(id)arg1;
- (void)setButtonImageWithButton:(id)arg1 andNormalImage:(id)arg2 andSelectedImage:(id)arg3;
- (id)createStatureButtonWithTag:(long long)arg1 andSelector:(SEL)arg2;
- (void)setBodyDataWithHeight:(float)arg1 andWeight:(float)arg2 andBust:(float)arg3 andWaist:(float)arg4 andShoulder:(float)arg5 andRealWeightValue:(float)arg6;
- (void)setBodyData:(float)arg1 andUpper:(float)arg2 andBust:(float)arg3 andWaist:(float)arg4 andHip:(float)arg5;
- (void)initViews;
- (id)initWithFrame:(struct CGRect)arg1 andGender:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
