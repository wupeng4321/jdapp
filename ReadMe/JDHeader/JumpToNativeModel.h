//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JumpToNativeModelProtocol-Protocol.h"

@class NSDictionary, NSString, ShareModel;

@interface JumpToNativeModel : NSObject <JumpToNativeModelProtocol>
{
    _Bool _noAnimate;
    NSString *_origDes;
    NSString *_des;
    NSDictionary *_params;
    ShareModel *_shareModel;
    NSDictionary *_configurationDic;
    CDUnknownBlockType _block;
}

@property(nonatomic) _Bool noAnimate; // @synthesize noAnimate=_noAnimate;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) NSDictionary *configurationDic; // @synthesize configurationDic=_configurationDic;
@property(retain, nonatomic) ShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
@property(copy, nonatomic) NSString *origDes; // @synthesize origDes=_origDes;
- (void).cxx_destruct;
- (id)initWith:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

