//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CBPaymentPayBaseViewController.h"

@class NSString, UIButton, UIImageView, UILabel;

@interface JDPPaymentFullSuccessViewController : CBPaymentPayBaseViewController
{
    long long _successType;
    NSString *_smallFreeLimit;
    UIImageView *_successImageView;
    UILabel *_successLabel;
    UILabel *_smallFreeLabel;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UILabel *smallFreeLabel; // @synthesize smallFreeLabel=_smallFreeLabel;
@property(retain, nonatomic) UILabel *successLabel; // @synthesize successLabel=_successLabel;
@property(retain, nonatomic) UIImageView *successImageView; // @synthesize successImageView=_successImageView;
@property(copy, nonatomic) NSString *smallFreeLimit; // @synthesize smallFreeLimit=_smallFreeLimit;
@property(nonatomic) long long successType; // @synthesize successType=_successType;
- (void).cxx_destruct;
- (void)private_cofirmAction:(id)arg1;
- (void)closeButtonAction:(id)arg1;
- (void)private_createConfirmButton;
- (void)private_createSmallFreeLabel;
- (void)private_createSuccessLabel;
- (void)private_createSuccessImageView;
- (void)cb_createCloseButton;
- (void)private_setupSelf;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)cb_rightButtonAction:(id)arg1;

@end

