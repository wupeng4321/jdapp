//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPaymentCodeAuthParmModel : JDPayModel
{
    NSString *_cardId;
    NSString *_validYear;
    NSString *_validMonth;
    NSString *_cvv2;
    NSString *_userInfoId;
    NSString *_bizSource;
    NSString *_needRealNameAuth;
    NSString *_signData;
}

@property(copy, nonatomic) NSString *signData; // @synthesize signData=_signData;
@property(copy, nonatomic) NSString *needRealNameAuth; // @synthesize needRealNameAuth=_needRealNameAuth;
@property(copy, nonatomic) NSString *bizSource; // @synthesize bizSource=_bizSource;
@property(copy, nonatomic) NSString *userInfoId; // @synthesize userInfoId=_userInfoId;
@property(copy, nonatomic) NSString *cvv2; // @synthesize cvv2=_cvv2;
@property(copy, nonatomic) NSString *validMonth; // @synthesize validMonth=_validMonth;
@property(copy, nonatomic) NSString *validYear; // @synthesize validYear=_validYear;
@property(copy, nonatomic) NSString *cardId; // @synthesize cardId=_cardId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

