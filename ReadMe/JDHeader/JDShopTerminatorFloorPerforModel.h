//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDShopTerminatorFloorPerforModel : NSObject
{
    NSString *_moduleId;
    NSString *_uid;
    NSString *_sendDataBeginTime;
    double _sendDataTime;
    double _renderTime;
    double _endloadingTime;
    double _heightTime;
}

@property(nonatomic) double heightTime; // @synthesize heightTime=_heightTime;
@property(nonatomic) double endloadingTime; // @synthesize endloadingTime=_endloadingTime;
@property(nonatomic) double renderTime; // @synthesize renderTime=_renderTime;
@property(nonatomic) double sendDataTime; // @synthesize sendDataTime=_sendDataTime;
@property(retain, nonatomic) NSString *sendDataBeginTime; // @synthesize sendDataBeginTime=_sendDataBeginTime;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(retain, nonatomic) NSString *moduleId; // @synthesize moduleId=_moduleId;
- (void).cxx_destruct;

@end
