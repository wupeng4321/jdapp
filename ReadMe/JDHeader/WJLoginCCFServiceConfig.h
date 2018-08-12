//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSMutableDictionary, NSNumber, NSString;

@interface WJLoginCCFServiceConfig : NSObject <NSCoding>
{
    _Bool _wxswitch;
    _Bool _qqswitch;
    _Bool _eggswitch;
    _Bool _httpSwitch;
    _Bool _phoneLoginSwitch;
    _Bool _faceloginswitch;
    _Bool _registerswitch;
    _Bool _findpwdswitch;
    _Bool _implictLoginSwitch;
    _Bool _chinaTelecomLoginSwitch;
    NSString *_commonProblemUrl;
    NSString *_newfindpwd;
    NSString *_registerPolicyUrl;
    NSString *_registerAgreementUrl;
    NSString *_customerServiceLine;
    NSString *_configVer;
    NSNumber *_syncIntvl;
    NSMutableDictionary *_confDict;
}

+ (id)newFromeDcitionary:(id)arg1 map:(id)arg2;
+ (id)newFromeArchiver;
@property(retain, nonatomic) NSMutableDictionary *confDict; // @synthesize confDict=_confDict;
@property(retain, nonatomic) NSNumber *syncIntvl; // @synthesize syncIntvl=_syncIntvl;
@property(retain, nonatomic) NSString *configVer; // @synthesize configVer=_configVer;
@property(retain, nonatomic) NSString *customerServiceLine; // @synthesize customerServiceLine=_customerServiceLine;
@property(nonatomic) _Bool chinaTelecomLoginSwitch; // @synthesize chinaTelecomLoginSwitch=_chinaTelecomLoginSwitch;
@property(retain, nonatomic) NSString *registerAgreementUrl; // @synthesize registerAgreementUrl=_registerAgreementUrl;
@property(retain, nonatomic) NSString *registerPolicyUrl; // @synthesize registerPolicyUrl=_registerPolicyUrl;
@property(retain, nonatomic) NSString *newfindpwd; // @synthesize newfindpwd=_newfindpwd;
@property(nonatomic) _Bool implictLoginSwitch; // @synthesize implictLoginSwitch=_implictLoginSwitch;
@property(retain, nonatomic) NSString *commonProblemUrl; // @synthesize commonProblemUrl=_commonProblemUrl;
@property(nonatomic) _Bool findpwdswitch; // @synthesize findpwdswitch=_findpwdswitch;
@property(nonatomic) _Bool registerswitch; // @synthesize registerswitch=_registerswitch;
@property(nonatomic) _Bool faceloginswitch; // @synthesize faceloginswitch=_faceloginswitch;
@property(nonatomic) _Bool phoneLoginSwitch; // @synthesize phoneLoginSwitch=_phoneLoginSwitch;
@property(nonatomic) _Bool httpSwitch; // @synthesize httpSwitch=_httpSwitch;
@property(nonatomic) _Bool eggswitch; // @synthesize eggswitch=_eggswitch;
@property(nonatomic) _Bool qqswitch; // @synthesize qqswitch=_qqswitch;
@property(nonatomic) _Bool wxswitch; // @synthesize wxswitch=_wxswitch;
- (void).cxx_destruct;
- (void)registerBoolConfWithKey:(id)arg1 defaultValue:(_Bool)arg2 setParamBlock:(CDUnknownBlockType)arg3 getParamBlock:(CDUnknownBlockType)arg4;
- (void)registerObjConfWithKey:(id)arg1 defaultValue:(id)arg2 setParamBlock:(CDUnknownBlockType)arg3 getParamBlock:(CDUnknownBlockType)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1;
- (void)loadSetting;
- (void)refrestLocalCache;

@end

