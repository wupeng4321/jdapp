//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface JMAJDCPASSKeychain : NSObject
{
}

+ (void)setAccessibilityType:(void *)arg1;
+ (void *)accessibilityType;
+ (id)accountsForService:(id)arg1 error:(id *)arg2;
+ (id)accountsForService:(id)arg1;
+ (id)allAccounts:(id *)arg1;
+ (id)allAccounts;
+ (_Bool)setPasswordData:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id *)arg4;
+ (_Bool)setPasswordData:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (_Bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3 error:(id *)arg4;
+ (_Bool)setPassword:(id)arg1 forService:(id)arg2 account:(id)arg3;
+ (_Bool)deletePasswordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (_Bool)deletePasswordForService:(id)arg1 account:(id)arg2;
+ (id)passwordDataForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)passwordDataForService:(id)arg1 account:(id)arg2;
+ (id)passwordForService:(id)arg1 account:(id)arg2 error:(id *)arg3;
+ (id)passwordForService:(id)arg1 account:(id)arg2;

@end

