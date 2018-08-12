//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class CLGeocoder, CLLocation, CLLocationManager, NSString;

@interface JDTDLocationManager : NSObject <CLLocationManagerDelegate, UIAlertViewDelegate>
{
    NSString *_strLongitude;
    NSString *_strLatitude;
    CLLocationManager *_locationManager;
    CLLocation *_location;
    CLGeocoder *_geocoder;
    CDUnknownBlockType _locationUpdateHandle;
}

+ (id)sharedInstance;
+ (void)locationUpdateWithHandler:(CDUnknownBlockType)arg1;
@property(copy, nonatomic) CDUnknownBlockType locationUpdateHandle; // @synthesize locationUpdateHandle=_locationUpdateHandle;
@property(retain, nonatomic) CLGeocoder *geocoder; // @synthesize geocoder=_geocoder;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy, nonatomic) NSString *strLatitude; // @synthesize strLatitude=_strLatitude;
@property(copy, nonatomic) NSString *strLongitude; // @synthesize strLongitude=_strLongitude;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)reverseGeocodeLocation;
- (void)stopLocationPositioning;
- (void)startLocationPositioning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

