//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface FSSearchIconModel : NSObject
{
    NSArray *_resCodes;
    NSArray *_showNames;
    NSDictionary *_trackDic;
}

@property(readonly, nonatomic) NSDictionary *trackDic; // @synthesize trackDic=_trackDic;
@property(readonly, nonatomic) NSArray *showNames; // @synthesize showNames=_showNames;
@property(readonly, nonatomic) NSArray *resCodes; // @synthesize resCodes=_resCodes;
- (void).cxx_destruct;
- (void)setIconDic:(id)arg1;
- (id)initWithResCodeList:(id)arg1;
- (id)initWithIconList:(id)arg1 type:(unsigned long long)arg2;

@end

