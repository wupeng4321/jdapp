//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel;

@interface JDSHQRPzgScanTostView : UIView
{
    UIView *_viewBG;
    UILabel *_labOpenLink;
    UIButton *_btnOpen;
    UILabel *_labTitle;
    UILabel *_labPrice;
    UILabel *_labPriceIcon;
    UIImageView *_imgVProduct;
    UIView *_viewShadow;
    CDUnknownBlockType _completeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) UIView *viewShadow; // @synthesize viewShadow=_viewShadow;
@property(retain, nonatomic) UIImageView *imgVProduct; // @synthesize imgVProduct=_imgVProduct;
@property(retain, nonatomic) UILabel *labPriceIcon; // @synthesize labPriceIcon=_labPriceIcon;
@property(retain, nonatomic) UILabel *labPrice; // @synthesize labPrice=_labPrice;
@property(retain, nonatomic) UILabel *labTitle; // @synthesize labTitle=_labTitle;
@property(retain, nonatomic) UIButton *btnOpen; // @synthesize btnOpen=_btnOpen;
@property(retain, nonatomic) UILabel *labOpenLink; // @synthesize labOpenLink=_labOpenLink;
@property(retain, nonatomic) UIView *viewBG; // @synthesize viewBG=_viewBG;
- (void).cxx_destruct;
- (void)upGestureAction:(id)arg1;
- (void)buttonAction:(id)arg1;
- (void)defaultLayoutSubviewsForProduct;
- (void)defaultLayoutSubviews;
- (id)initWithTitle:(id)arg1 buttonTitle:(id)arg2 imageUrl:(id)arg3 price:(id)arg4 andCompleteBlock:(CDUnknownBlockType)arg5;
- (id)initWithTitle:(id)arg1 buttonTitle:(id)arg2 andCompleteBlock:(CDUnknownBlockType)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

