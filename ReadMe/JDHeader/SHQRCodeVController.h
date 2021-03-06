//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "JDBaseToastViewDelegate-Protocol.h"

@class NSString, UINavigationController;

@interface SHQRCodeVController : UIViewController <JDBaseToastViewDelegate>
{
    UINavigationController *_navigationC;
    NSString *_qrStr;
}

@property(retain, nonatomic) NSString *qrStr; // @synthesize qrStr=_qrStr;
@property(retain, nonatomic) UINavigationController *navigationC; // @synthesize navigationC=_navigationC;
- (void).cxx_destruct;
- (void)initView;
- (void)ShowToastViewWithTitle:(id)arg1 subTitle:(id)arg2 andDoneButtonTitle:(id)arg3;
- (void)didFinishInToastView:(id)arg1;
- (void)didCancelInToastView:(id)arg1;
- (void)initData;
- (void)dealloc;
- (void)closeVC;
- (void)backBtnClick;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

