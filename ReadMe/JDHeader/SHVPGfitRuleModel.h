//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableAttributedString;

@interface SHVPGfitRuleModel : NSObject
{
    long long _type;
    long long _cost;
    long long _interval;
    long long _allowed;
    long long _max;
    long long _reward;
    NSMutableAttributedString *_tipsStr;
    NSMutableAttributedString *_rulTipsStr;
}

@property(retain, nonatomic) NSMutableAttributedString *rulTipsStr; // @synthesize rulTipsStr=_rulTipsStr;
@property(retain, nonatomic) NSMutableAttributedString *tipsStr; // @synthesize tipsStr=_tipsStr;
@property(nonatomic) long long reward; // @synthesize reward=_reward;
@property(nonatomic) long long max; // @synthesize max=_max;
@property(nonatomic) long long allowed; // @synthesize allowed=_allowed;
@property(nonatomic) long long interval; // @synthesize interval=_interval;
@property(nonatomic) long long cost; // @synthesize cost=_cost;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)style;
- (id)paraStyle;
- (id)createRuleAttributed:(id)arg1;
- (id)creatAstr:(id)arg1;
- (id)createAnswerAttributed:(id)arg1;

@end

