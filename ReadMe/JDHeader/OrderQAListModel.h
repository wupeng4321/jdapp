//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "OrderTemplateBaseModel.h"

@class NSString;

@interface OrderQAListModel : OrderTemplateBaseModel
{
    int _loc_answerJumpType;
    int _loc_questionJumpType;
    NSString *_qaId;
    NSString *_loc4_Str;
    NSString *_loc5_ImageStr;
    NSString *_loc_answerJumpUrl;
    NSString *_loc_questionJumpUrl;
    NSString *_loc_eventParam;
}

@property(retain, nonatomic) NSString *loc_eventParam; // @synthesize loc_eventParam=_loc_eventParam;
@property(nonatomic) int loc_questionJumpType; // @synthesize loc_questionJumpType=_loc_questionJumpType;
@property(retain, nonatomic) NSString *loc_questionJumpUrl; // @synthesize loc_questionJumpUrl=_loc_questionJumpUrl;
@property(nonatomic) int loc_answerJumpType; // @synthesize loc_answerJumpType=_loc_answerJumpType;
@property(retain, nonatomic) NSString *loc_answerJumpUrl; // @synthesize loc_answerJumpUrl=_loc_answerJumpUrl;
@property(retain, nonatomic) NSString *loc5_ImageStr; // @synthesize loc5_ImageStr=_loc5_ImageStr;
@property(retain, nonatomic) NSString *loc4_Str; // @synthesize loc4_Str=_loc4_Str;
@property(retain, nonatomic) NSString *qaId; // @synthesize qaId=_qaId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithSelfDic:(id)arg1;

@end
