//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderArticleDetailCaptchaInfo, NSString;

@interface FinderArticleDetailCaptchaSession : NSObject
{
    NSString *_code;
    FinderArticleDetailCaptchaInfo *_captchaInfo;
    NSString *_msg;
}

@property(copy, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(retain, nonatomic) FinderArticleDetailCaptchaInfo *captchaInfo; // @synthesize captchaInfo=_captchaInfo;
@property(copy, nonatomic) NSString *code; // @synthesize code=_code;
- (void).cxx_destruct;

@end
