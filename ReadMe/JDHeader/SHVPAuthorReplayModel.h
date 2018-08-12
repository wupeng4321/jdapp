//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SHVPBaseModel.h"

#import "SHVPCellModelProtocol-Protocol.h"
#import "SHVPJumpProtocol-Protocol.h"

@class NSString, SHVPJumpModel;

@interface SHVPAuthorReplayModel : SHVPBaseModel <SHVPCellModelProtocol, SHVPJumpProtocol>
{
    NSString *_liveId;
    NSString *_title;
    NSString *_indexImage;
    NSString *_publishTime;
    long long _status;
    long long _skuNum;
    long long _pV;
    NSString *_pageNum;
    NSString *_dataString;
    SHVPJumpModel *_jump;
}

+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) SHVPJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *dataString; // @synthesize dataString=_dataString;
@property(copy, nonatomic) NSString *pageNum; // @synthesize pageNum=_pageNum;
@property(nonatomic) long long pV; // @synthesize pV=_pV;
@property(nonatomic) long long skuNum; // @synthesize skuNum=_skuNum;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *publishTime; // @synthesize publishTime=_publishTime;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *liveId; // @synthesize liveId=_liveId;
- (void).cxx_destruct;
- (id)firstJumpObject;
@property(readonly, nonatomic) double horizontalCellHeight;
@property(readonly, nonatomic) double cellHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

