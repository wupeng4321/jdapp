//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDSHWebViewURLFilterTTTNativeModel : NSObject
{
    NSString *_code;
    NSString *_subCode;
    NSString *_returnMsg;
    NSString *_isNative;
}

@property(copy, nonatomic) NSString *isNative; // @synthesize isNative=_isNative;
@property(copy, nonatomic) NSString *returnMsg; // @synthesize returnMsg=_returnMsg;
@property(copy, nonatomic) NSString *subCode; // @synthesize subCode=_subCode;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;
- (id)initWithDict:(id)arg1;

@end

