//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ShareOrderCarServiceBaseCell.h"

#import "ShareOrderWareScoreViewDelegate-Protocol.h"

@class NSString, ShareOrderStoreNameView, ShareOrderWareScoreView;

@interface ShareOrderCarWareScoreCell : ShareOrderCarServiceBaseCell <ShareOrderWareScoreViewDelegate>
{
    ShareOrderWareScoreView *wareScoreView;
    ShareOrderStoreNameView *_storeNameView;
}

@property(retain, nonatomic) ShareOrderStoreNameView *storeNameView; // @synthesize storeNameView=_storeNameView;
- (void).cxx_destruct;
- (void)rateViewRatingDidChange:(float)arg1;
- (void)setBaseModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
