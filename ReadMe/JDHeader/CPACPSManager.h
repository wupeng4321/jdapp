//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, NSMutableDictionary, NSString;

@interface CPACPSManager : NSObject
{
    double handleOpenURLStartTimer;
    NSMutableDictionary *handleOpenURLContext;
    NSString *usid;
    JDStoreNetwork *handleOpenURLDao_;
    id cpsVerifyTarget_;
    SEL cpsVerifyAction_;
    JDStoreNetwork *cpaDao_;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedCPACPSManager;
@property(copy, nonatomic) NSString *usid; // @synthesize usid;
@property(retain, nonatomic) NSMutableDictionary *handleOpenURLContext; // @synthesize handleOpenURLContext;
@property(nonatomic) double handleOpenURLStartTimer; // @synthesize handleOpenURLStartTimer;
- (void)cpaRequestFinishedWithSetup:(id)arg1 components:(id)arg2;
- (void)cancelOpenURLVerify;
- (void)cpsRequestFinished:(id)arg1;
- (void)getHandleOpenURLVerifyWithTarget:(id)arg1 action:(SEL)arg2;
- (void)getHandleOpenURLVerify;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)registerCPADeviceWithToken:(id)arg1;
- (void)registerCPA;
- (void)exitProgram;
- (void)registerCPAFailed;
- (id)init;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
