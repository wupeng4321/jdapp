//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDPayModel.h"

@class NSString;

@interface JDPChannelPlanModel : JDPayModel
{
    _Bool _canUse;
    NSString *_pid;
    NSString *_info;
    NSString *_remark;
    NSString *_logo;
    NSString *_selectInfo;
    NSString *_planPayInfo;
}

@property(copy, nonatomic) NSString *planPayInfo; // @synthesize planPayInfo=_planPayInfo;
@property(copy, nonatomic) NSString *selectInfo; // @synthesize selectInfo=_selectInfo;
@property(nonatomic) _Bool canUse; // @synthesize canUse=_canUse;
@property(copy, nonatomic) NSString *logo; // @synthesize logo=_logo;
@property(copy, nonatomic) NSString *remark; // @synthesize remark=_remark;
@property(copy, nonatomic) NSString *info; // @synthesize info=_info;
@property(copy, nonatomic) NSString *pid; // @synthesize pid=_pid;
- (void).cxx_destruct;

@end

