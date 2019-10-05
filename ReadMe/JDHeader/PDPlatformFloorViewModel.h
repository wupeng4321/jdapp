//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PDFloorBaseViewModel.h"

#import "JDBPCommonComponentInteractor-Protocol.h"

@class NSObject, NSString;
@protocol JDBPCommonComponentInterface;

@interface PDPlatformFloorViewModel : PDFloorBaseViewModel <JDBPCommonComponentInteractor>
{
    NSObject<JDBPCommonComponentInterface> *_module;
}

@property(retain, nonatomic) NSObject<JDBPCommonComponentInterface> *module; // @synthesize module=_module;
- (void).cxx_destruct;
- (void)pageTrackMTA:(id)arg1;
- (void)clickEventMTA:(id)arg1;
- (void)businessHandle:(id)arg1;
- (void)expoSpecial;
- (void)renderUIWithProductModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
