//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class COCheckoutPostalAddressModel, NSString;

@interface COCheckoutCoordinateToRegionResult : NSObject
{
    _Bool _isCloseLocateCity;
    NSString *_message;
    COCheckoutPostalAddressModel *_address;
}

@property(readonly, nonatomic) COCheckoutPostalAddressModel *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, nonatomic) _Bool isCloseLocateCity; // @synthesize isCloseLocateCity=_isCloseLocateCity;
- (void).cxx_destruct;

@end

