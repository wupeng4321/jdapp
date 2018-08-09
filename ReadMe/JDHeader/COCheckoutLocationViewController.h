//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutAbstractViewController.h"

#import "COCheckoutMTAHelperProtocol-Protocol.h"
#import "QMapViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class COCheckoutCoordinateToAddressApi, COCheckoutCoordinateToAddressResult, COCheckoutCoordinateToRegionApi, COCheckoutCoordinateToRegionResult, JDButton, NSIndexPath, NSMutableArray, NSString, QMapView, QUserLocation, UIButton, UIImageView, UITableView, UIView;

@interface COCheckoutLocationViewController : COCheckoutAbstractViewController <UITableViewDataSource, UITableViewDelegate, COCheckoutMTAHelperProtocol, QMapViewDelegate>
{
    _Bool _isShowUserLocation;
    _Bool _isMapDisplayNormal;
    _Bool _isLayoutInChange;
    _Bool _isScrollViewRolling;
    _Bool _isMapMovedBySelectedRow;
    _Bool _fromSettlement;
    CDUnknownBlockType _backResponse;
    UIImageView *_centerPinView;
    UIButton *_userLocationButton;
    QMapView *_mapView;
    QUserLocation *_userLocation;
    COCheckoutCoordinateToAddressApi *_coordinate2AddressAPI;
    COCheckoutCoordinateToAddressResult *_coordinate2AddressResult;
    UIView *_toolBar;
    JDButton *_saveButton;
    COCheckoutCoordinateToRegionApi *_coordinate2RegionAPI;
    COCheckoutCoordinateToRegionResult *_coordinate2RegionResult;
    UIView *_refreshView;
    UITableView *_tableView;
    NSMutableArray *_dataSource;
    NSIndexPath *_selectedIndexPath;
    struct CLLocationCoordinate2D _centerCoordinate;
}

@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *refreshView; // @synthesize refreshView=_refreshView;
@property(retain, nonatomic) COCheckoutCoordinateToRegionResult *coordinate2RegionResult; // @synthesize coordinate2RegionResult=_coordinate2RegionResult;
@property(retain, nonatomic) COCheckoutCoordinateToRegionApi *coordinate2RegionAPI; // @synthesize coordinate2RegionAPI=_coordinate2RegionAPI;
@property(retain, nonatomic) JDButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) UIView *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) COCheckoutCoordinateToAddressResult *coordinate2AddressResult; // @synthesize coordinate2AddressResult=_coordinate2AddressResult;
@property(retain, nonatomic) COCheckoutCoordinateToAddressApi *coordinate2AddressAPI; // @synthesize coordinate2AddressAPI=_coordinate2AddressAPI;
@property(nonatomic) struct CLLocationCoordinate2D centerCoordinate; // @synthesize centerCoordinate=_centerCoordinate;
@property(retain, nonatomic) QUserLocation *userLocation; // @synthesize userLocation=_userLocation;
@property(retain, nonatomic) QMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) UIButton *userLocationButton; // @synthesize userLocationButton=_userLocationButton;
@property(retain, nonatomic) UIImageView *centerPinView; // @synthesize centerPinView=_centerPinView;
@property(nonatomic, getter=isFromSettlement) _Bool fromSettlement; // @synthesize fromSettlement=_fromSettlement;
@property(copy, nonatomic) CDUnknownBlockType backResponse; // @synthesize backResponse=_backResponse;
- (void).cxx_destruct;
- (void)dealloc;
- (void)mta_saveSelectedLocationEvent;
- (void)mta_eventID:(id)arg1 eventName:(id)arg2 paramValue:(id)arg3 pageParam:(id)arg4;
- (void)mta_eventID:(id)arg1 eventName:(id)arg2 paramValue:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)pressRefreshButton:(id)arg1;
- (void)showRefreshView:(_Bool)arg1;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3;
- (void)showInstantToastWithMessage:(id)arg1;
- (void)pressToolBarSaveButton:(id)arg1;
- (void)moveMapCenterToUserSelectedCoordinate;
- (void)getSugesstionAddressWithPage:(long long)arg1;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 updatingLocation:(_Bool)arg3;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(_Bool)arg2;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)pressUsrLocationButton:(id)arg1;
- (void)layoutSubViewsToMiniWithAnimation:(_Bool)arg1;
- (void)layoutSubViewsToNormalWithAnimation:(_Bool)arg1;
- (id)getPageId;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

