//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MiaoshaInfoModel : NSObject
{
    _Bool _miaosha;
    _Bool _plusMiaoSha;
    long long _miaoshaRemainTime;
    NSString *_title;
    long long _state;
    NSString *_plusMiaoshaIcon;
    NSString *_miaoshaIcon;
    NSString *_icon;
}

@property(copy, nonatomic) NSString *icon; // @synthesize icon=_icon;
@property(nonatomic) _Bool plusMiaoSha; // @synthesize plusMiaoSha=_plusMiaoSha;
@property(copy, nonatomic) NSString *miaoshaIcon; // @synthesize miaoshaIcon=_miaoshaIcon;
@property(copy, nonatomic) NSString *plusMiaoshaIcon; // @synthesize plusMiaoshaIcon=_plusMiaoshaIcon;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool miaosha; // @synthesize miaosha=_miaosha;
@property(nonatomic) long long miaoshaRemainTime; // @synthesize miaoshaRemainTime=_miaoshaRemainTime;
- (void).cxx_destruct;

@end

