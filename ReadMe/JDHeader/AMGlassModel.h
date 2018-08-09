//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

#import "AMArMakeupModelAttributeData-Protocol.h"

@class NSString;

@interface AMGlassModel : JDModel <AMArMakeupModelAttributeData>
{
    NSString *_sku;
    NSString *_text;
    NSString *_preview;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *preview; // @synthesize preview=_preview;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *sku; // @synthesize sku=_sku;
- (void).cxx_destruct;
- (id)amGetProductName;
- (void)setDataWithDic:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *brand_ename;
@property(copy, nonatomic) NSString *brand_name;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

