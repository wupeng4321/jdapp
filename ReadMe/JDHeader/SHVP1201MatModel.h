//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPAbnormalMatBaseModel.h"

@class NSString;

@interface SHVP1201MatModel : SHVPAbnormalMatBaseModel
{
    NSString *_ad;
    NSString *_vd;
    NSString *_disad;
    NSString *_disvd;
    NSString *_as;
}

@property(copy, nonatomic) NSString *as; // @synthesize as=_as;
@property(copy, nonatomic) NSString *disvd; // @synthesize disvd=_disvd;
@property(copy, nonatomic) NSString *disad; // @synthesize disad=_disad;
@property(copy, nonatomic) NSString *vd; // @synthesize vd=_vd;
@property(copy, nonatomic) NSString *ad; // @synthesize ad=_ad;
- (void).cxx_destruct;
- (id)abnormalErrorInfo;
- (id)initWithErrorCode:(long long)arg1 roomId:(id)arg2;

@end

