//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FSSHistoryTagCellModelProtocol-Protocol.h"

@class NSString;

@interface FSSearchHotWordModel : NSObject <FSSHistoryTagCellModelProtocol>
{
    _Bool _isFromIndividuation;
    NSString *_hotWords;
    long long _num;
    NSString *_hotWordABVesion;
    NSString *_hotWordsSite;
}

@property(copy, nonatomic) NSString *hotWordsSite; // @synthesize hotWordsSite=_hotWordsSite;
@property(copy, nonatomic) NSString *hotWordABVesion; // @synthesize hotWordABVesion=_hotWordABVesion;
@property(nonatomic) _Bool isFromIndividuation; // @synthesize isFromIndividuation=_isFromIndividuation;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(copy, nonatomic) NSString *hotWords; // @synthesize hotWords=_hotWords;
- (void).cxx_destruct;
- (id)tagTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

