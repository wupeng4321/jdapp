//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SHVPSmallVideoLiveBaseModel : NSObject
{
    int _lineStyle;
    NSString *_srv;
    NSString *_eventId;
    CDUnknownBlockType _tapblock;
}

@property(copy, nonatomic) CDUnknownBlockType tapblock; // @synthesize tapblock=_tapblock;
@property(nonatomic) int lineStyle; // @synthesize lineStyle=_lineStyle;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *srv; // @synthesize srv=_srv;
- (void).cxx_destruct;
- (void)viewDataWithTapBlock:(CDUnknownBlockType)arg1;
- (int)cellBottomLine;

@end

