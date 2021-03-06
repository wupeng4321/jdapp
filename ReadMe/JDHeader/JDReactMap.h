//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QMapView.h"

#import "SMCalloutViewDelegate-Protocol.h"

@class CLLocationManager, NSMutableArray, NSNumber, NSString, NSTimer, SMCalloutView, UIActivityIndicatorView, UIColor, UIImageView, UIView;

@interface JDReactMap : QMapView <SMCalloutViewDelegate>
{
    UIView *_legalLabel;
    CLLocationManager *_locationManager;
    _Bool _initialRegionSet;
    NSMutableArray *_reactSubviews;
    _Bool _cacheEnabled;
    _Bool _loadingEnabled;
    _Bool _hasShownInitialLoading;
    _Bool _ignoreRegionChanges;
    SMCalloutView *_calloutView;
    UIImageView *_cacheImageView;
    UIView *_loadingView;
    NSString *_userLocationAnnotationTitle;
    double _minDelta;
    double _maxDelta;
    double _legalLabelInsets;
    NSTimer *_regionChangeObserveTimer;
    CDUnknownBlockType _onLocationChange;
    CDUnknownBlockType _onMapReady;
    CDUnknownBlockType _onChange;
    CDUnknownBlockType _onPress;
    CDUnknownBlockType _onPanDrag;
    CDUnknownBlockType _onLongPress;
    CDUnknownBlockType _onMarkerPress;
    CDUnknownBlockType _onMarkerSelect;
    CDUnknownBlockType _onMarkerDeselect;
    CDUnknownBlockType _onMarkerDragStart;
    CDUnknownBlockType _onMarkerDrag;
    CDUnknownBlockType _onMarkerDragEnd;
    CDUnknownBlockType _onCalloutPress;
    UIActivityIndicatorView *_activityIndicatorView;
    NSNumber *_shouldZoomEnabled;
    NSNumber *_shouldScrollEnabled;
    struct CLLocationCoordinate2D _pendingCenter;
    CDStruct_951efa70 _pendingSpan;
    CDStruct_b7cb895d _initialRegion;
}

@property(nonatomic) NSNumber *shouldScrollEnabled; // @synthesize shouldScrollEnabled=_shouldScrollEnabled;
@property(nonatomic) NSNumber *shouldZoomEnabled; // @synthesize shouldZoomEnabled=_shouldZoomEnabled;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property(copy, nonatomic) CDUnknownBlockType onCalloutPress; // @synthesize onCalloutPress=_onCalloutPress;
@property(copy, nonatomic) CDUnknownBlockType onMarkerDragEnd; // @synthesize onMarkerDragEnd=_onMarkerDragEnd;
@property(copy, nonatomic) CDUnknownBlockType onMarkerDrag; // @synthesize onMarkerDrag=_onMarkerDrag;
@property(copy, nonatomic) CDUnknownBlockType onMarkerDragStart; // @synthesize onMarkerDragStart=_onMarkerDragStart;
@property(copy, nonatomic) CDUnknownBlockType onMarkerDeselect; // @synthesize onMarkerDeselect=_onMarkerDeselect;
@property(copy, nonatomic) CDUnknownBlockType onMarkerSelect; // @synthesize onMarkerSelect=_onMarkerSelect;
@property(copy, nonatomic) CDUnknownBlockType onMarkerPress; // @synthesize onMarkerPress=_onMarkerPress;
@property(copy, nonatomic) CDUnknownBlockType onLongPress; // @synthesize onLongPress=_onLongPress;
@property(copy, nonatomic) CDUnknownBlockType onPanDrag; // @synthesize onPanDrag=_onPanDrag;
@property(copy, nonatomic) CDUnknownBlockType onPress; // @synthesize onPress=_onPress;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(copy, nonatomic) CDUnknownBlockType onMapReady; // @synthesize onMapReady=_onMapReady;
@property(copy, nonatomic) CDUnknownBlockType onLocationChange; // @synthesize onLocationChange=_onLocationChange;
@property(nonatomic) _Bool ignoreRegionChanges; // @synthesize ignoreRegionChanges=_ignoreRegionChanges;
@property(nonatomic) CDStruct_c3b9c2ee pendingSpan; // @synthesize pendingSpan=_pendingSpan;
@property(nonatomic) struct CLLocationCoordinate2D pendingCenter; // @synthesize pendingCenter=_pendingCenter;
@property(nonatomic) CDStruct_b7cb895d initialRegion; // @synthesize initialRegion=_initialRegion;
@property(retain, nonatomic) NSTimer *regionChangeObserveTimer; // @synthesize regionChangeObserveTimer=_regionChangeObserveTimer;
@property(nonatomic) double legalLabelInsets; // @synthesize legalLabelInsets=_legalLabelInsets;
@property(nonatomic) double maxDelta; // @synthesize maxDelta=_maxDelta;
@property(nonatomic) double minDelta; // @synthesize minDelta=_minDelta;
@property(nonatomic) _Bool hasShownInitialLoading; // @synthesize hasShownInitialLoading=_hasShownInitialLoading;
@property(nonatomic) _Bool loadingEnabled; // @synthesize loadingEnabled=_loadingEnabled;
@property(nonatomic) _Bool cacheEnabled; // @synthesize cacheEnabled=_cacheEnabled;
@property(copy, nonatomic) NSString *userLocationAnnotationTitle; // @synthesize userLocationAnnotationTitle=_userLocationAnnotationTitle;
@property(retain, nonatomic) UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIImageView *cacheImageView; // @synthesize cacheImageView=_cacheImageView;
@property(retain, nonatomic) SMCalloutView *calloutView; // @synthesize calloutView=_calloutView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)finishLoading;
- (void)beginLoading;
- (void)updateLegalLabelInsets;
- (void)cacheViewIfNeeded;
- (void)updateZoomEnabled;
- (void)setZoomEnabled:(_Bool)arg1;
- (void)updateScrollEnabled;
- (void)setScrollEnabled:(_Bool)arg1;
- (_Bool)showsTraffic;
- (void)setShowsTraffic:(_Bool)arg1;
- (_Bool)showsScale;
- (void)setShowsScale:(_Bool)arg1;
@property(retain, nonatomic) UIColor *loadingIndicatorColor;
@property(retain, nonatomic) UIColor *loadingBackgroundColor;
- (void)setRegion:(CDStruct_b7cb895d)arg1 animated:(_Bool)arg2;
- (void)setHandlePanDrag:(_Bool)arg1;
- (void)setShowsUserLocation:(_Bool)arg1;
- (void)setZoomLevel:(double)arg1;
- (double)calloutView:(id)arg1 delayForRepositionWithSize:(struct CGSize)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)reactSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)addSubview:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

