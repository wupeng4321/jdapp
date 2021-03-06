//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WepaySecurityTool : NSObject
{
}

+ (id)getMD5FromString:(id)arg1;
+ (id)dataToString:(id)arg1;
+ (id)dataToHexString:(id)arg1;
+ (id)base64decode:(id)arg1;
+ (id)base64encode:(id)arg1;
+ (id)TripleDES:(id)arg1 encryptOrDecrypt:(unsigned int)arg2 encryptOrDecryptKey:(id)arg3;
+ (id)DES3EncryptWithUTF8String:(id)arg1;
+ (id)stripPublicKeyHeader:(id)arg1;
+ (struct __SecKey *)publicKeyWithKey:(id)arg1;
+ (id)RSAEncryptWithString:(id)arg1 withMD5:(_Bool)arg2;
+ (id)RSAEncrypt:(id)arg1 keyToRSAKey:(id)arg2;
+ (id)JDPQ_RSAEncryptSensitiveInfo:(id)arg1;
+ (id)RSAEncryptSensitiveInfo:(id)arg1;
+ (id)jdp_DAPRSAEncryptSensitiveInfo:(id)arg1;

@end

