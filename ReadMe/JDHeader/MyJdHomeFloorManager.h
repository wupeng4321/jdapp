//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MyJdFloorManager.h"

@class MyJdBaseFloor;

@interface MyJdHomeFloorManager : MyJdFloorManager
{
    _Bool _hasChannelData;
    _Bool _hasActivityFloor;
    _Bool _ccFloorIsEmpty;
    MyJdBaseFloor *_activityFloor;
    MyJdBaseFloor *_plusFloor;
    MyJdBaseFloor *_firstBuyFloor;
    MyJdBaseFloor *_platformBannerFloor;
}

@property(nonatomic) _Bool ccFloorIsEmpty; // @synthesize ccFloorIsEmpty=_ccFloorIsEmpty;
@property(retain, nonatomic) MyJdBaseFloor *platformBannerFloor; // @synthesize platformBannerFloor=_platformBannerFloor;
@property(retain, nonatomic) MyJdBaseFloor *firstBuyFloor; // @synthesize firstBuyFloor=_firstBuyFloor;
@property(retain, nonatomic) MyJdBaseFloor *plusFloor; // @synthesize plusFloor=_plusFloor;
@property(nonatomic) _Bool hasActivityFloor; // @synthesize hasActivityFloor=_hasActivityFloor;
@property(retain, nonatomic) MyJdBaseFloor *activityFloor; // @synthesize activityFloor=_activityFloor;
@property(nonatomic) _Bool hasChannelData; // @synthesize hasChannelData=_hasChannelData;
- (void).cxx_destruct;
- (id)updateMtaInfo:(id)arg1 functionId:(id)arg2 cardId:(id)arg3;
- (id)cardFloorVirtualMtaParam;
- (id)cardFloorOrderMtaParamWithMid:(id)arg1;
- (void)updateCardFloorsOrder;
- (void)didUpdateHomeFloors;
- (void)willUpdateHomeFloors;
- (id)threeDimensionTouchView;
- (void)updateCCFloorData;
- (void)createPlatformFloorsWithData:(id)arg1;
- (void)createAdminFloors;
- (id)init;

@end

