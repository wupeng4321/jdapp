//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "JumpToNativeModelProtocol-Protocol.h"

@class NSDictionary, NSString, ShareModel;

@interface JDSHURLFilterJumpModel : NSObject <JumpToNativeModelProtocol>
{
    _Bool _noAnimate;
    _Bool _canJump;
    _Bool _hasCheckedTTT;
    NSString *_des;
    NSDictionary *_params;
    ShareModel *_shareModel;
    long long _desType;
    NSString *_idString;
    NSString *_hasNativeValueString;
    NSString *_currentURL;
    NSDictionary *_rnParams;
}

@property(copy, nonatomic) NSDictionary *rnParams; // @synthesize rnParams=_rnParams;
@property(nonatomic) _Bool hasCheckedTTT; // @synthesize hasCheckedTTT=_hasCheckedTTT;
@property(nonatomic) _Bool canJump; // @synthesize canJump=_canJump;
@property(copy, nonatomic) NSString *currentURL; // @synthesize currentURL=_currentURL;
@property(copy, nonatomic) NSString *hasNativeValueString; // @synthesize hasNativeValueString=_hasNativeValueString;
@property(copy, nonatomic) NSString *idString; // @synthesize idString=_idString;
@property(nonatomic) long long desType; // @synthesize desType=_desType;
@property(nonatomic) _Bool noAnimate; // @synthesize noAnimate=_noAnimate;
@property(retain, nonatomic) ShareModel *shareModel; // @synthesize shareModel=_shareModel;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) NSString *des; // @synthesize des=_des;
- (void).cxx_destruct;
- (id)getValueFromURL:(id)arg1 ForKey:(id)arg2;
- (void)updateOtherPropertyState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

