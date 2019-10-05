//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPTypeSettingPayWayInfoModel : JDPayModel
{
    _Bool _switchShouldCheck;
    _Bool _isShow;
    _Bool _isOpen;
    _Bool _canUse;
    _Bool _canSwitch;
    NSString *_payWayType;
    NSString *_payWayDesc;
    NSString *_desc;
    NSString *_remark;
    NSString *_protocolUrl;
    NSString *_checkType;
    NSString *_bizTokenKey;
    NSString *_webUrl;
}

@property(nonatomic) _Bool canSwitch; // @synthesize canSwitch=_canSwitch;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool switchShouldCheck; // @synthesize switchShouldCheck=_switchShouldCheck;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *bizTokenKey; // @synthesize bizTokenKey=_bizTokenKey;
@property(copy, nonatomic) NSString *checkType; // @synthesize checkType=_checkType;
@property(copy, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *payWayDesc; // @synthesize payWayDesc=_payWayDesc;
@property(copy, nonatomic) NSString *payWayType; // @synthesize payWayType=_payWayType;
- (void).cxx_destruct;

@end
