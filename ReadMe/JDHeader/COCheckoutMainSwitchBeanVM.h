//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COCheckoutMainAbstractVM.h"

@class NSNumber, NSString;

@interface COCheckoutMainSwitchBeanVM : COCheckoutMainAbstractVM
{
    _Bool _switchOnFlag;
    _Bool _isShowSwitchFlag;
    _Bool _isShowShadow;
    _Bool _isJdBeanShowPwd;
    _Bool _isBalanceShowPwd;
    _Bool _needJdBeanRealName;
    _Bool _isRealName;
    NSString *_contentText;
    NSString *_titleText;
    NSNumber *_isOpenPaymentPassword;
    NSNumber *_canUseJdBeanCount;
    NSString *_securityUrl;
    NSString *_securityOpenPasswordTip;
    NSString *_securityFunctionId;
    NSString *_realNameTip;
    NSString *_realNameUrl;
    unsigned long long _switchType;
    CDUnknownBlockType _changeUseJdBean;
    CDUnknownBlockType _changeUseJdBeanCount;
    CDUnknownBlockType _changeUseBalance;
}

@property(copy, nonatomic) CDUnknownBlockType changeUseBalance; // @synthesize changeUseBalance=_changeUseBalance;
@property(copy, nonatomic) CDUnknownBlockType changeUseJdBeanCount; // @synthesize changeUseJdBeanCount=_changeUseJdBeanCount;
@property(copy, nonatomic) CDUnknownBlockType changeUseJdBean; // @synthesize changeUseJdBean=_changeUseJdBean;
@property(nonatomic) unsigned long long switchType; // @synthesize switchType=_switchType;
@property(copy, nonatomic) NSString *realNameUrl; // @synthesize realNameUrl=_realNameUrl;
@property(copy, nonatomic) NSString *realNameTip; // @synthesize realNameTip=_realNameTip;
@property(nonatomic) _Bool isRealName; // @synthesize isRealName=_isRealName;
@property(nonatomic) _Bool needJdBeanRealName; // @synthesize needJdBeanRealName=_needJdBeanRealName;
@property(copy, nonatomic) NSString *securityFunctionId; // @synthesize securityFunctionId=_securityFunctionId;
@property(copy, nonatomic) NSString *securityOpenPasswordTip; // @synthesize securityOpenPasswordTip=_securityOpenPasswordTip;
@property(copy, nonatomic) NSString *securityUrl; // @synthesize securityUrl=_securityUrl;
@property(retain, nonatomic) NSNumber *canUseJdBeanCount; // @synthesize canUseJdBeanCount=_canUseJdBeanCount;
@property(retain, nonatomic) NSNumber *isOpenPaymentPassword; // @synthesize isOpenPaymentPassword=_isOpenPaymentPassword;
@property(nonatomic) _Bool isBalanceShowPwd; // @synthesize isBalanceShowPwd=_isBalanceShowPwd;
@property(nonatomic) _Bool isJdBeanShowPwd; // @synthesize isJdBeanShowPwd=_isJdBeanShowPwd;
@property(nonatomic) _Bool isShowShadow; // @synthesize isShowShadow=_isShowShadow;
@property(nonatomic) _Bool isShowSwitchFlag; // @synthesize isShowSwitchFlag=_isShowSwitchFlag;
@property(nonatomic) _Bool switchOnFlag; // @synthesize switchOnFlag=_switchOnFlag;
@property(copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(copy, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
- (void).cxx_destruct;
- (unsigned long long)type;

@end

