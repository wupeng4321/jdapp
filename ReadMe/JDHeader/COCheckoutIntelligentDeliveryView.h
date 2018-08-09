//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel;

@interface COCheckoutIntelligentDeliveryView : UIView
{
    CDUnknownBlockType _updateCheckoutBlock;
    NSString *_deliveryMessage;
    NSString *_deliveryBtnMessage;
    long long _viewType;
    UILabel *_deliveryMessageLabel;
    UIButton *_toUsebtn;
}

@property(retain, nonatomic) UIButton *toUsebtn; // @synthesize toUsebtn=_toUsebtn;
@property(retain, nonatomic) UILabel *deliveryMessageLabel; // @synthesize deliveryMessageLabel=_deliveryMessageLabel;
@property(nonatomic) long long viewType; // @synthesize viewType=_viewType;
@property(copy, nonatomic) NSString *deliveryBtnMessage; // @synthesize deliveryBtnMessage=_deliveryBtnMessage;
@property(copy, nonatomic) NSString *deliveryMessage; // @synthesize deliveryMessage=_deliveryMessage;
@property(copy, nonatomic) CDUnknownBlockType updateCheckoutBlock; // @synthesize updateCheckoutBlock=_updateCheckoutBlock;
- (void).cxx_destruct;
- (void)updateCheckout;
- (void)setupContentViews;
- (id)initWithViewType:(long long)arg1;
- (id)init;

@end

