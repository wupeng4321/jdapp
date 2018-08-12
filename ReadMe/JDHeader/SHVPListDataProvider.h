//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDStoreNetwork, SHVPAnchorListTotalModel, SHVPListTabTotalModel, SHVPListTotalModel;

@interface SHVPListDataProvider : NSObject
{
    SHVPListTotalModel *_totalModel;
    SHVPListTabTotalModel *_tabTotalModel;
    SHVPAnchorListTotalModel *_anchorListTotalModel;
    JDStoreNetwork *_listRequest;
    JDStoreNetwork *_tabRequest;
}

@property(retain, nonatomic) JDStoreNetwork *tabRequest; // @synthesize tabRequest=_tabRequest;
@property(retain, nonatomic) JDStoreNetwork *listRequest; // @synthesize listRequest=_listRequest;
@property(retain, nonatomic) SHVPAnchorListTotalModel *anchorListTotalModel; // @synthesize anchorListTotalModel=_anchorListTotalModel;
@property(retain, nonatomic) SHVPListTabTotalModel *tabTotalModel; // @synthesize tabTotalModel=_tabTotalModel;
@property(retain, nonatomic) SHVPListTotalModel *totalModel; // @synthesize totalModel=_totalModel;
- (void).cxx_destruct;
- (void)requestFollowListOffset:(id)arg1 tabID:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (void)requestCommingList:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)requestListTabLastTime:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)requestFindListWithTab:(long long)arg1 status:(long long)arg2 offset:(id)arg3 tabID:(id)arg4 tabOrder:(id)arg5 tabType:(long long)arg6 innerAnchor:(id)arg7 callback:(CDUnknownBlockType)arg8;
- (void)requestLiveList:(long long)arg1 status:(long long)arg2 offset:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (id)init;

@end

