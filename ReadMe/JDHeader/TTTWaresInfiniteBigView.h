//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTTBaseView.h"

#import "TTTBaseViewProtocol-Protocol.h"
#import "TTTPageWareAdsViewProtocol-Protocol.h"
#import "TTTWaresListDelegate-Protocol.h"

@class NSString, TTTWaresRowModel;

@interface TTTWaresInfiniteBigView : TTTBaseView <TTTWaresListDelegate, TTTPageWareAdsViewProtocol, TTTBaseViewProtocol>
{
    TTTWaresRowModel *_rowModel;
}

@property(retain, nonatomic) TTTWaresRowModel *rowModel; // @synthesize rowModel=_rowModel;
- (void).cxx_destruct;
- (struct CGRect)viewFrame:(long long)arg1;
- (void)updateBackcolor;
- (void)bindDataWithViewModel:(id)arg1;
- (void)pageWareAdsViewClick:(id)arg1 clickIndex:(long long)arg2;
- (void)wareListViewClick:(id)arg1 clickType:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1 withStyle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
