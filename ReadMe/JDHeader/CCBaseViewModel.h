//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CCCouponCenterDataAccess;

@interface CCBaseViewModel : NSObject
{
    _Bool _hasMore;
    long long _currentIndex;
    long long _refreshState;
    CCCouponCenterDataAccess *_dataAccess;
}

@property(retain, nonatomic) CCCouponCenterDataAccess *dataAccess; // @synthesize dataAccess=_dataAccess;
@property(nonatomic) long long refreshState; // @synthesize refreshState=_refreshState;
@property(readonly, nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
- (void).cxx_destruct;
- (void)fetchDataWithParams:(id)arg1 updateUI:(CDUnknownBlockType)arg2;
- (id)init;

@end

