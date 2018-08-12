//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

#import "JDReloadViewDelegate-Protocol.h"
#import "JDUGCPublishViewDelegate-Protocol.h"

@class JDStoreNetwork, JDUGCMainPageHeaderModel, JDUGCMainPageNavView, JDUGCMainPageTopView, NSArray, NSDictionary, NSString, UIImageView, UIScrollView, UIView;

@interface JDUGCMainPageViewController : JDViewController <JDReloadViewDelegate, JDUGCPublishViewDelegate>
{
    UIScrollView *_scrollView;
    JDUGCMainPageTopView *_customTopView;
    JDUGCMainPageNavView *_navView;
    JDStoreNetwork *_network;
    NSDictionary *_para;
    JDUGCMainPageHeaderModel *_headerModel;
    NSArray *_indexBannerArray;
    long long _index;
    NSArray *_viewControllers;
    UIImageView *_topBackgroundImgView;
    UIView *_clearBackgroundView;
}

@property(retain, nonatomic) UIView *clearBackgroundView; // @synthesize clearBackgroundView=_clearBackgroundView;
@property(retain, nonatomic) UIImageView *topBackgroundImgView; // @synthesize topBackgroundImgView=_topBackgroundImgView;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSArray *indexBannerArray; // @synthesize indexBannerArray=_indexBannerArray;
@property(retain, nonatomic) JDUGCMainPageHeaderModel *headerModel; // @synthesize headerModel=_headerModel;
@property(retain, nonatomic) NSDictionary *para; // @synthesize para=_para;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)publishButtonOnClick;
- (void)didReceiveMemoryWarning;
- (void)buildComponents:(id)arg1;
- (void)changeIndexBuryData:(long long)arg1;
- (void)updatePage:(long long)arg1;
- (void)tabIndexSelected:(long long)arg1;
- (void)clickBackButtonAction;
- (void)installNavView;
- (void)installTopView;
- (void)processHeaderData:(id)arg1;
- (void)reconnect;
- (void)fetchConfigData;
- (void)removeReloadView;
- (void)showReloadView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithPara:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

