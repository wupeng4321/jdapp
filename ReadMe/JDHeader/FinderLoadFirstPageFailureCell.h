//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JDFinderTableViewCell.h"

#import "JDReloadViewDelegate-Protocol.h"

@class JDReloadView, NSString;

@interface FinderLoadFirstPageFailureCell : JDFinderTableViewCell <JDReloadViewDelegate>
{
    JDReloadView *_reloadView;
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) JDReloadView *reloadView; // @synthesize reloadView=_reloadView;
- (void).cxx_destruct;
- (void)tapOnePlace:(CDUnknownBlockType)arg1;
- (void)assignValue:(id)arg1;
- (void)reconnect;
- (void)layoutSubviews;
- (void)setupViews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
