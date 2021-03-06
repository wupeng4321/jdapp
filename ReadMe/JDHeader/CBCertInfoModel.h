//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSArray, NSString;

@interface CBCertInfoModel : JDPayModel
{
    _Bool _isShowCertType;
    _Bool _isEditCertType;
    _Bool _isShowNameMask;
    _Bool _isShowCertNumMask;
    _Bool _isEditNameMask;
    _Bool _isEditCertNumMask;
    _Bool _isShowCertInfo;
    _Bool _isEditFullName;
    _Bool _isShowCardNo;
    _Bool _isNameMask;
    _Bool _isBankCardMask;
    _Bool _isCertNumMask;
    _Bool _isEditCardNo;
    _Bool _isEditIndexCardNo;
    _Bool _crossBorderNeedRealName;
    NSArray *_certTypeListArr;
    NSString *_defaultCertType;
    NSString *_certNum;
    NSString *_certNumMask;
    NSString *_fullName;
    NSString *_nameMask;
    NSString *_encryptCardNo;
    NSString *_cardNoMask;
    long long _certlevel;
    NSString *_crossBorderRealNameDesc;
}

@property(copy, nonatomic) NSString *crossBorderRealNameDesc; // @synthesize crossBorderRealNameDesc=_crossBorderRealNameDesc;
@property(nonatomic) _Bool crossBorderNeedRealName; // @synthesize crossBorderNeedRealName=_crossBorderNeedRealName;
@property(nonatomic) _Bool isEditIndexCardNo; // @synthesize isEditIndexCardNo=_isEditIndexCardNo;
@property(nonatomic) _Bool isEditCardNo; // @synthesize isEditCardNo=_isEditCardNo;
@property(nonatomic) _Bool isCertNumMask; // @synthesize isCertNumMask=_isCertNumMask;
@property(nonatomic) _Bool isBankCardMask; // @synthesize isBankCardMask=_isBankCardMask;
@property(nonatomic) _Bool isNameMask; // @synthesize isNameMask=_isNameMask;
@property(nonatomic) long long certlevel; // @synthesize certlevel=_certlevel;
@property(nonatomic) _Bool isShowCardNo; // @synthesize isShowCardNo=_isShowCardNo;
@property(nonatomic) _Bool isEditFullName; // @synthesize isEditFullName=_isEditFullName;
@property(nonatomic) _Bool isShowCertInfo; // @synthesize isShowCertInfo=_isShowCertInfo;
@property(nonatomic) _Bool isEditCertNumMask; // @synthesize isEditCertNumMask=_isEditCertNumMask;
@property(nonatomic) _Bool isEditNameMask; // @synthesize isEditNameMask=_isEditNameMask;
@property(nonatomic) _Bool isShowCertNumMask; // @synthesize isShowCertNumMask=_isShowCertNumMask;
@property(nonatomic) _Bool isShowNameMask; // @synthesize isShowNameMask=_isShowNameMask;
@property(copy, nonatomic) NSString *cardNoMask; // @synthesize cardNoMask=_cardNoMask;
@property(copy, nonatomic) NSString *encryptCardNo; // @synthesize encryptCardNo=_encryptCardNo;
@property(copy, nonatomic) NSString *nameMask; // @synthesize nameMask=_nameMask;
@property(copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property(copy, nonatomic) NSString *certNumMask; // @synthesize certNumMask=_certNumMask;
@property(copy, nonatomic) NSString *certNum; // @synthesize certNum=_certNum;
@property(copy, nonatomic) NSString *defaultCertType; // @synthesize defaultCertType=_defaultCertType;
@property(nonatomic) _Bool isEditCertType; // @synthesize isEditCertType=_isEditCertType;
@property(nonatomic) _Bool isShowCertType; // @synthesize isShowCertType=_isShowCertType;
@property(copy, nonatomic) NSArray *certTypeListArr; // @synthesize certTypeListArr=_certTypeListArr;
- (void).cxx_destruct;
- (id)defaultCertTypeModel;

@end

