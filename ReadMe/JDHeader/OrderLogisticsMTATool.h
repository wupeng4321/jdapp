//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface OrderLogisticsMTATool : NSObject
{
    long long _slideCount;
    NSMutableArray *_keyStoreArr;
}

@property(retain, nonatomic) NSMutableArray *keyStoreArr; // @synthesize keyStoreArr=_keyStoreArr;
@property(nonatomic) long long slideCount; // @synthesize slideCount=_slideCount;
- (void).cxx_destruct;
- (void)orderLogMTAWithEventID:(id)arg1 ParamValue:(id)arg2 EventName:(id)arg3 isNeedStore:(_Bool)arg4;
- (id)init;

@end
