//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface COCheckoutsecurityPasswordBlockResourceModel : NSObject
{
    NSString *_url;
    NSString *_message;
    NSString *_functionId;
    NSString *_title;
    NSString *_submitKey;
    NSString *_openPasswordTip;
}

@property(readonly, copy, nonatomic) NSString *openPasswordTip; // @synthesize openPasswordTip=_openPasswordTip;
@property(readonly, copy, nonatomic) NSString *submitKey; // @synthesize submitKey=_submitKey;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, copy, nonatomic) NSString *functionId; // @synthesize functionId=_functionId;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *url; // @synthesize url=_url;
- (void).cxx_destruct;

@end
