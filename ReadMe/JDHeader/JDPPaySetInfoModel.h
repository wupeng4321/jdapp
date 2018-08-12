//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPPaySetInfoModel : JDPayModel
{
    _Bool _needGuide;
    NSString *_title;
    NSString *_logo;
    NSString *_desc;
    NSString *_remark;
    NSString *_buttonText;
    NSString *_notSetInfo;
    NSString *_protocalUrl;
    NSString *_mainDesc;
    NSString *_subDesc;
    NSString *_bizTokenKey;
    NSString *_modifyPcPwdUrl;
    NSString *_modifyPwdUrl;
    NSString *_needCheckType;
    NSString *_setType;
    NSString *_accountParam;
    NSString *_showDesc;
}

@property(copy, nonatomic) NSString *showDesc; // @synthesize showDesc=_showDesc;
@property(copy, nonatomic) NSString *accountParam; // @synthesize accountParam=_accountParam;
@property(nonatomic) _Bool needGuide; // @synthesize needGuide=_needGuide;
@property(copy, nonatomic) NSString *setType; // @synthesize setType=_setType;
@property(copy, nonatomic) NSString *needCheckType; // @synthesize needCheckType=_needCheckType;
@property(copy, nonatomic) NSString *modifyPwdUrl; // @synthesize modifyPwdUrl=_modifyPwdUrl;
@property(copy, nonatomic) NSString *modifyPcPwdUrl; // @synthesize modifyPcPwdUrl=_modifyPcPwdUrl;
@property(copy, nonatomic) NSString *bizTokenKey; // @synthesize bizTokenKey=_bizTokenKey;
@property(copy, nonatomic) NSString *subDesc; // @synthesize subDesc=_subDesc;
@property(copy, nonatomic) NSString *mainDesc; // @synthesize mainDesc=_mainDesc;
@property(copy, nonatomic) NSString *protocalUrl; // @synthesize protocalUrl=_protocalUrl;
@property(copy, nonatomic) NSString *notSetInfo; // @synthesize notSetInfo=_notSetInfo;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

