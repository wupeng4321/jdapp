//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

#import "AMArMakeupModelAttributeData-Protocol.h"

@class NSArray, NSString;

@interface AMRenderModel : JDModel <AMArMakeupModelAttributeData>
{
    NSString *_brand_name;
    NSString *_brand_ename;
    NSString *_colorNum;
    NSArray *_colorGroup;
}

@property(copy, nonatomic) NSArray *colorGroup; // @synthesize colorGroup=_colorGroup;
@property(copy, nonatomic) NSString *colorNum; // @synthesize colorNum=_colorNum;
@property(copy, nonatomic) NSString *brand_ename; // @synthesize brand_ename=_brand_ename;
@property(copy, nonatomic) NSString *brand_name; // @synthesize brand_name=_brand_name;
- (void).cxx_destruct;
- (id)amGetProductName;
- (void)setDataWithDic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

