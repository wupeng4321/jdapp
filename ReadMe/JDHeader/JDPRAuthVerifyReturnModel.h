//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPRBaseReturnModel.h"

@class JDPRCertInfoModel, JDPRH5UrlModel, NSString;

@interface JDPRAuthVerifyReturnModel : JDPRBaseReturnModel
{
    NSString *_title;
    NSString *_commonTip;
    NSString *_protocolName;
    NSString *_protocolUrl;
    NSString *_sendMsgType;
    JDPRH5UrlModel *_h5UrlModel;
    JDPRCertInfoModel *_certInfoModel;
}

@property(retain, nonatomic) JDPRCertInfoModel *certInfoModel; // @synthesize certInfoModel=_certInfoModel;
@property(retain, nonatomic) JDPRH5UrlModel *h5UrlModel; // @synthesize h5UrlModel=_h5UrlModel;
@property(copy, nonatomic) NSString *sendMsgType; // @synthesize sendMsgType=_sendMsgType;
@property(copy, nonatomic) NSString *protocolUrl; // @synthesize protocolUrl=_protocolUrl;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(copy, nonatomic) NSString *commonTip; // @synthesize commonTip=_commonTip;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;

@end

