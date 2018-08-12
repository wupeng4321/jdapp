//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SSSLiveListDetailFloatViewCellDelegate-Protocol.h"

@class NSMutableArray, NSString, SSSLiveListBrandModel, SSSLiveListModel, UITableView;

@interface SSSLiveListFloatViewModel : NSObject <SSSLiveListDetailFloatViewCellDelegate>
{
    SSSLiveListBrandModel *_floatViewGoodsModel;
    SSSLiveListModel *_liveListModel;
    UITableView *_tableView;
    NSMutableArray *_arrList;
}

@property(retain, nonatomic) NSMutableArray *arrList; // @synthesize arrList=_arrList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) SSSLiveListModel *liveListModel; // @synthesize liveListModel=_liveListModel;
@property(retain, nonatomic) SSSLiveListBrandModel *floatViewGoodsModel; // @synthesize floatViewGoodsModel=_floatViewGoodsModel;
- (void).cxx_destruct;
- (void)detailFloatViewCell:(id)arg1 didSelectRemindButton:(id)arg2;
- (_Bool)isLiveItemBeenRemind:(id)arg1;
- (void)validateDataList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

