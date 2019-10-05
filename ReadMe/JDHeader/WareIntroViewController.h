//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDViewController.h"

@class NSString, NewProductModel, PDNetworkAccessManager, WareIntroDetailView;

@interface WareIntroViewController : JDViewController
{
    _Bool _isInfoLatest;
    WareIntroDetailView *_detailView;
    long long _BottomBarHeight;
    NSString *_wareId;
    PDNetworkAccessManager *_networkManager;
    NewProductModel *_model;
}

@property(retain, nonatomic) NewProductModel *model; // @synthesize model=_model;
@property(nonatomic) _Bool isInfoLatest; // @synthesize isInfoLatest=_isInfoLatest;
@property(retain, nonatomic) PDNetworkAccessManager *networkManager; // @synthesize networkManager=_networkManager;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
@property(nonatomic) long long BottomBarHeight; // @synthesize BottomBarHeight=_BottomBarHeight;
@property(retain, nonatomic) WareIntroDetailView *detailView; // @synthesize detailView=_detailView;
- (void).cxx_destruct;
- (void)tuwenOrderMTA;
- (void)fetchDataWithWareId:(id)arg1;
- (void)fetchDataWithWareModel:(id)arg1;
- (void)setupUI;
- (void)viewDidLoad;
- (id)initWithWareId:(id)arg1;
- (void)dealloc;

@end
