//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ZDMListSectionController.h"

#import "ZDMListSectionType-Protocol.h"

@class ZDMBannerMixTabList;

@interface ZDMAlbumMixTabSectionController : ZDMListSectionController <ZDMListSectionType>
{
    ZDMBannerMixTabList *_mixTabArray;
}

@property(retain, nonatomic) ZDMBannerMixTabList *mixTabArray; // @synthesize mixTabArray=_mixTabArray;
- (void).cxx_destruct;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)collectionViewCellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;

@end

