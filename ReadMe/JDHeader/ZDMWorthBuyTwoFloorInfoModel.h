//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface ZDMWorthBuyTwoFloorInfoModel : JDModel
{
    _Bool _isValid;
    NSString *_backgroundImageUrl;
    NSString *_jumpUrl;
}

@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(retain, nonatomic) NSString *backgroundImageUrl; // @synthesize backgroundImageUrl=_backgroundImageUrl;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
