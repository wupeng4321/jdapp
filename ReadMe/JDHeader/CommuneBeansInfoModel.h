//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface CommuneBeansInfoModel : JDModel
{
    _Bool _isJingDouEnough;
    NSString *_jingDouBalance;
    NSString *_jingDouNotEnoughText;
}

@property(copy, nonatomic) NSString *jingDouNotEnoughText; // @synthesize jingDouNotEnoughText=_jingDouNotEnoughText;
@property(copy, nonatomic) NSString *jingDouBalance; // @synthesize jingDouBalance=_jingDouBalance;
@property(nonatomic) _Bool isJingDouEnough; // @synthesize isJingDouEnough=_isJingDouEnough;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
