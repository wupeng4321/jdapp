//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface BJMarketAggregatModel : JDModel
{
    _Bool _haveMore;
    NSString *_catalogId;
    NSArray *_couponesList;
    NSString *_mianTitle;
    long long _page;
    long long _position;
    NSString *_sourceId;
    NSString *_subTitle;
    NSString *_backImageStr;
    long long _jumpFlag;
    NSString *_jumpUrl;
    NSString *_preColor;
    NSString *_rearColor;
}

@property(retain, nonatomic) NSString *rearColor; // @synthesize rearColor=_rearColor;
@property(retain, nonatomic) NSString *preColor; // @synthesize preColor=_preColor;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) long long jumpFlag; // @synthesize jumpFlag=_jumpFlag;
@property(retain, nonatomic) NSString *backImageStr; // @synthesize backImageStr=_backImageStr;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) long long position; // @synthesize position=_position;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSString *mianTitle; // @synthesize mianTitle=_mianTitle;
@property(retain, nonatomic) NSArray *couponesList; // @synthesize couponesList=_couponesList;
@property(nonatomic) _Bool haveMore; // @synthesize haveMore=_haveMore;
@property(retain, nonatomic) NSString *catalogId; // @synthesize catalogId=_catalogId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
