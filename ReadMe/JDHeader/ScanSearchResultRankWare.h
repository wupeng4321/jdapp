//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HomePageChannelAction, NSString;

@interface ScanSearchResultRankWare : NSObject
{
    NSString *_wareId;
    NSString *_imgPath;
    NSString *_wareName;
    NSString *_jdPrice;
    NSString *_currentRank;
    long long _index;
}

@property(nonatomic) long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *currentRank; // @synthesize currentRank=_currentRank;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=_jdPrice;
@property(copy, nonatomic) NSString *wareName; // @synthesize wareName=_wareName;
@property(copy, nonatomic) NSString *imgPath; // @synthesize imgPath=_imgPath;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void).cxx_destruct;
@property(readonly, nonatomic) HomePageChannelAction *rankWareAction;

@end
