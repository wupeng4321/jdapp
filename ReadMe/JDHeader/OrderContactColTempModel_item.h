//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderTemplateBaseModel.h"

@class NSString;

@interface OrderContactColTempModel_item : OrderTemplateBaseModel
{
    NSString *_icon;
    NSString *_title;
    NSString *_jumpUrl;
    NSString *_optType;
    NSString *_telToastText;
    NSString *_telNumber;
    NSString *_type;
    NSString *_email;
    NSString *_emailTitle;
}

@property(copy, nonatomic) NSString *emailTitle; // @synthesize emailTitle=_emailTitle;
@property(copy, nonatomic) NSString *email; // @synthesize email=_email;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *telNumber; // @synthesize telNumber=_telNumber;
@property(copy, nonatomic) NSString *telToastText; // @synthesize telToastText=_telToastText;
@property(copy, nonatomic) NSString *optType; // @synthesize optType=_optType;
@property(copy, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

