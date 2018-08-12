//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSNumber, NSString;

@interface WareInfoParamModel : JDModel
{
    _Bool _noAnimate;
    NSString *_wareId;
    NSString *_imageUrl;
    NSString *_name;
    NSString *_adWords;
    NSString *_logid;
    NSString *_cskuId;
    NSString *_expid;
    NSString *_index;
    NSString *_rid;
    NSString *_clickUrl;
    long long _fromType;
    NSString *_fromSource;
    NSString *_flt;
    NSString *_dist;
    NSString *_personas;
    NSNumber *_tab;
    NSString *_isShadowSku;
    NSString *_category;
    NSString *_modeId;
}

@property(copy, nonatomic) NSString *modeId; // @synthesize modeId=_modeId;
@property(copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(copy, nonatomic) NSString *isShadowSku; // @synthesize isShadowSku=_isShadowSku;
@property(copy, nonatomic) NSNumber *tab; // @synthesize tab=_tab;
@property(copy, nonatomic) NSString *personas; // @synthesize personas=_personas;
@property(copy, nonatomic) NSString *dist; // @synthesize dist=_dist;
@property(copy, nonatomic) NSString *flt; // @synthesize flt=_flt;
@property(nonatomic) _Bool noAnimate; // @synthesize noAnimate=_noAnimate;
@property(copy, nonatomic) NSString *fromSource; // @synthesize fromSource=_fromSource;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(copy, nonatomic) NSString *clickUrl; // @synthesize clickUrl=_clickUrl;
@property(copy, nonatomic) NSString *rid; // @synthesize rid=_rid;
@property(copy, nonatomic) NSString *index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *expid; // @synthesize expid=_expid;
@property(copy, nonatomic) NSString *cskuId; // @synthesize cskuId=_cskuId;
@property(copy, nonatomic) NSString *logid; // @synthesize logid=_logid;
@property(copy, nonatomic) NSString *adWords; // @synthesize adWords=_adWords;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void).cxx_destruct;
- (void)dealloc;

@end

