//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DES_Voice : NSObject
{
}

+ (id)doCipher:(id)arg1 key:(id)arg2 action:(unsigned int)arg3;
+ (id)doCipher:(id)arg1 key:(id)arg2 context:(unsigned int)arg3 padding:(unsigned int *)arg4;
+ (id)doDecryptWithData:(id)arg1 keyStr:(id)arg2;
+ (id)doDecryptWithString:(id)arg1 key:(id)arg2;
+ (id)doDecryptWithData:(id)arg1 key:(id)arg2;
+ (id)doDecryptWithStringAndData:(id)arg1 key:(id)arg2;
+ (id)doEncryptWithStringAndData:(id)arg1 key:(id)arg2;
+ (id)doEncryptWithString:(id)arg1 key:(id)arg2;
+ (id)doEncryptWithData:(id)arg1 key:(id)arg2;

@end

