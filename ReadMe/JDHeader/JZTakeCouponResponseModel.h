//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JZTakeCouponResult, NSString;

@interface JZTakeCouponResponseModel : NSObject
{
    NSString *_code;
    NSString *_msg;
    JZTakeCouponResult *_result;
}

@property(retain, nonatomic) JZTakeCouponResult *result; // @synthesize result=_result;
@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end
