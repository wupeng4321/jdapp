//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPQBaseParamModel.h"

@class NSString;

@interface JDPQApplyVerityParamModel : JDPQBaseParamModel
{
    NSString *_userInfo;
    NSString *_cardInfo;
    NSString *_verifyCode;
    NSString *_signResult;
    NSString *_password;
}

@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(copy, nonatomic) NSString *signResult; // @synthesize signResult=_signResult;
@property(copy, nonatomic) NSString *verifyCode; // @synthesize verifyCode=_verifyCode;
@property(copy, nonatomic) NSString *cardInfo; // @synthesize cardInfo=_cardInfo;
@property(copy, nonatomic) NSString *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;

@end

