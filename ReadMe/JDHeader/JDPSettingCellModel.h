//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface JDPSettingCellModel : NSObject
{
    _Bool _switchShouldCheck;
    _Bool _isShow;
    _Bool _isOpen;
    _Bool _canUse;
    _Bool _canSwitch;
    NSString *_title;
    NSString *_subTitle;
    NSString *_rightTitle;
    NSString *_payWayType;
    NSString *_payWayDesc;
    NSString *_desc;
    NSString *_protocolUrl;
    NSString *_webUrl;
    NSString *_bizTokenKey;
    NSString *_remark;
    NSString *_checkType;
    double _headerHegiht;
}

@property(nonatomic) double headerHegiht; // @synthesize headerHegiht=_headerHegiht;
@property(copy, nonatomic) NSString *checkType; // @synthesize checkType=_checkType;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(nonatomic) _Bool canSwitch; // @synthesize canSwitch=_canSwitch;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(nonatomic) _Bool isOpen; // @synthesize isOpen=_isOpen;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
@property(nonatomic) _Bool switchShouldCheck; // @synthesize switchShouldCheck=_switchShouldCheck;
@property(copy, nonatomic) NSString *bizTokenKey; // @synthesize bizTokenKey=_bizTokenKey;
@property(copy, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;
@property(copy, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *payWayDesc; // @synthesize payWayDesc=_payWayDesc;
@property(copy, nonatomic) NSString *payWayType; // @synthesize payWayType=_payWayType;
@property(copy, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end
