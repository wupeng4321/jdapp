//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommentADView.h"

@interface CommentCenterAdBanner : CommentADView
{
    CDUnknownBlockType _adBannerDidSelected;
}

@property(copy, nonatomic) CDUnknownBlockType adBannerDidSelected; // @synthesize adBannerDidSelected=_adBannerDidSelected;
- (void).cxx_destruct;
- (void)resetFrame:(struct CGRect)arg1;
- (void)carouselDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)carouselWillBeginDragging:(id)arg1;
- (void)carousel:(id)arg1 didSelectItemAtIndex:(long long)arg2;
- (id)getSubImage:(struct CGRect)arg1 withImage:(id)arg2;
- (id)carousel:(id)arg1 viewForItemAtIndex:(unsigned long long)arg2 reusingView:(id)arg3;

@end
