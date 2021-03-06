//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WJLoginFaceRecognitionShowOrNotProtocol-Protocol.h"

@class CheckViewController, NSString;

@interface FaceRecognitionHelper : NSObject <WJLoginFaceRecognitionShowOrNotProtocol>
{
    _Bool _livenessFunctionSpecialEffectsStatus;
    _Bool _haveExperiencedBounsStatus;
    unsigned long long _enterType;
    NSString *_lastAccountBonus;
    CheckViewController *_detectionVC;
    long long _faceLoginClientType;
}

@property(nonatomic) long long faceLoginClientType; // @synthesize faceLoginClientType=_faceLoginClientType;
@property(retain, nonatomic) CheckViewController *detectionVC; // @synthesize detectionVC=_detectionVC;
@property(copy, nonatomic) NSString *lastAccountBonus; // @synthesize lastAccountBonus=_lastAccountBonus;
@property(nonatomic) _Bool haveExperiencedBounsStatus; // @synthesize haveExperiencedBounsStatus=_haveExperiencedBounsStatus;
@property(nonatomic) _Bool livenessFunctionSpecialEffectsStatus; // @synthesize livenessFunctionSpecialEffectsStatus=_livenessFunctionSpecialEffectsStatus;
@property(nonatomic) unsigned long long enterType; // @synthesize enterType=_enterType;
- (void).cxx_destruct;
- (id)topViewController:(id)arg1;
- (id)currentNavigationController;
- (void)startLivenessDetectionWithSource:(long long)arg1;
- (void)updateLastAccountBouns:(id)arg1;
- (void)updateHaveExperiencedBounsStatus:(_Bool)arg1;
- (void)onFRShowOrNotError:(id)arg1;
- (void)onFRShowOrNotFailed:(int)arg1 errorMessage:(id)arg2;
- (void)onFRShowOrNotSuccess:(_Bool)arg1 specialSwitch:(short)arg2 eggsSwitch:(short)arg3 headImageURL:(id)arg4;
- (void)checkFaceLoginConfigWithAccount:(id)arg1;
- (_Bool)isBelowiPhone5s;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

