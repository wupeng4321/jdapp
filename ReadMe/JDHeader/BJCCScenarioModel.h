//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface BJCCScenarioModel : JDModel
{
    long long _page;
    NSString *_scenarioId;
    NSArray *_tags;
    NSString *_title;
}

@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(copy, nonatomic) NSString *scenarioId; // @synthesize scenarioId=_scenarioId;
@property(nonatomic) long long page; // @synthesize page=_page;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

