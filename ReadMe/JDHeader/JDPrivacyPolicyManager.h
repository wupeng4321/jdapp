//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JDPrivacyPolicyManager : NSObject
{
    _Bool _JMAFireEyeTag;
}

+ (void)dismissAuthorizationPage;
+ (void)showAuthorizationPage;
+ (_Bool)isNeedAuthorization;
+ (id)authorizationInfo;
+ (void)persistentAuthorizationInfoWithState:(id)arg1;
+ (id)sharedManager;
+ (void)load;
@property(nonatomic) _Bool JMAFireEyeTag; // @synthesize JMAFireEyeTag=_JMAFireEyeTag;

@end
