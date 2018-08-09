//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface COCheckoutGetGiftCardRM : JDModel
{
    _Bool _Flag;
    long long _availableCount;
    NSString *_HelpMsg;
    NSString *_HelpMsgECard;
    NSArray *_cards;
    NSArray *_eCards;
    NSString *_Message;
    NSArray *_AllCanUseGiftCards;
    NSArray *_AllNoCanUseGiftCards;
    NSString *_cantUseMessage;
    NSString *_preparedMessage;
    long long _resultCode;
    NSString *_exceptionMsg1;
    NSString *_exceptionMsg2;
    long long _exceptionType;
    long long _isScanGiftGardNew;
    NSString *_isScanMessageNew;
}

@property(copy, nonatomic) NSString *isScanMessageNew; // @synthesize isScanMessageNew=_isScanMessageNew;
@property(nonatomic) long long isScanGiftGardNew; // @synthesize isScanGiftGardNew=_isScanGiftGardNew;
@property(nonatomic) long long exceptionType; // @synthesize exceptionType=_exceptionType;
@property(copy, nonatomic) NSString *exceptionMsg2; // @synthesize exceptionMsg2=_exceptionMsg2;
@property(copy, nonatomic) NSString *exceptionMsg1; // @synthesize exceptionMsg1=_exceptionMsg1;
@property(nonatomic) long long resultCode; // @synthesize resultCode=_resultCode;
@property(copy, nonatomic) NSString *preparedMessage; // @synthesize preparedMessage=_preparedMessage;
@property(copy, nonatomic) NSString *cantUseMessage; // @synthesize cantUseMessage=_cantUseMessage;
@property(copy, nonatomic) NSArray *AllNoCanUseGiftCards; // @synthesize AllNoCanUseGiftCards=_AllNoCanUseGiftCards;
@property(copy, nonatomic) NSArray *AllCanUseGiftCards; // @synthesize AllCanUseGiftCards=_AllCanUseGiftCards;
@property(copy, nonatomic) NSString *Message; // @synthesize Message=_Message;
@property(retain, nonatomic) NSArray *eCards; // @synthesize eCards=_eCards;
@property(retain, nonatomic) NSArray *cards; // @synthesize cards=_cards;
@property(copy, nonatomic) NSString *HelpMsgECard; // @synthesize HelpMsgECard=_HelpMsgECard;
@property(copy, nonatomic) NSString *HelpMsg; // @synthesize HelpMsg=_HelpMsg;
@property(nonatomic) long long availableCount; // @synthesize availableCount=_availableCount;
@property(nonatomic) _Bool Flag; // @synthesize Flag=_Flag;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

