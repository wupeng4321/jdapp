//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class JDButton, JDReactNativeViewController, NSDictionary, UIButton, UIView, UIViewController;

@interface JDShopSignRankViewController : JDViewController
{
    JDReactNativeViewController *signRankViewController;
    JDReactNativeViewController *mySignViewController;
    UIViewController *currentViewController;
    _Bool m_bTransferingView;
    long long lastIndex;
    long long _selectIndex;
    NSDictionary *_initialParams;
    JDButton *_segmentBtn;
    UIButton *_segment1;
    UIButton *_segment2;
    UIButton *_currentSegment;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) UIButton *currentSegment; // @synthesize currentSegment=_currentSegment;
@property(retain, nonatomic) UIButton *segment2; // @synthesize segment2=_segment2;
@property(retain, nonatomic) UIButton *segment1; // @synthesize segment1=_segment1;
@property(retain, nonatomic) JDButton *segmentBtn; // @synthesize segmentBtn=_segmentBtn;
@property(retain, nonatomic) NSDictionary *initialParams; // @synthesize initialParams=_initialParams;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)selectControllerByIndex:(id)arg1;
- (void)segmentButtonDidClick:(id)arg1;
- (void)setSegmentIndex:(long long)arg1;
- (void)toggleSegmentBtnWithIndex:(long long)arg1;
- (void)setNavgationView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

@end

