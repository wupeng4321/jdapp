//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class IAMainSessionNavBar, IAMainSessionParamsModel, UIView;

@interface IAGuideTempVC : JDViewController
{
    IAMainSessionParamsModel *_paramModel;
    IAMainSessionNavBar *_navBarView;
    UIView *_maskView;
}

+ (_Bool)isShowed;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) IAMainSessionNavBar *navBarView; // @synthesize navBarView=_navBarView;
@property(retain, nonatomic) IAMainSessionParamsModel *paramModel; // @synthesize paramModel=_paramModel;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)_removeCurrentVCWhenPushed;
- (void)knownBtnClick;
- (void)setupUI;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
