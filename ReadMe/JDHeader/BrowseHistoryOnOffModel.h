//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@interface BrowseHistoryOnOffModel : JDModel
{
    _Bool _showSelectAllButton;
    _Bool _showCartFloatIcon;
    _Bool _showSimilarProductIcon;
    long long _browseHistorySource;
}

@property(nonatomic) long long browseHistorySource; // @synthesize browseHistorySource=_browseHistorySource;
@property(nonatomic) _Bool showSimilarProductIcon; // @synthesize showSimilarProductIcon=_showSimilarProductIcon;
@property(nonatomic) _Bool showCartFloatIcon; // @synthesize showCartFloatIcon=_showCartFloatIcon;
@property(nonatomic) _Bool showSelectAllButton; // @synthesize showSelectAllButton=_showSelectAllButton;
- (id)initWithDic:(id)arg1;

@end

