//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface MyCardModel : JDModel
{
    _Bool _showPoints;
    NSString *_brandId;
    NSString *_brandName;
    NSString *_brandLogo;
    NSString *_cardBackgroundColor;
    NSString *_cardTitle;
    NSString *_cardMessage;
    long long _cardLevel;
    NSString *_cardLevelName;
    long long _cardPoints;
    NSString *_cardDetailUrl;
    NSArray *_cardRights;
    NSString *_cardBindUrl;
    NSString *_openGiftLabel;
    NSArray *_extendInfo;
}

@property(retain, nonatomic) NSArray *extendInfo; // @synthesize extendInfo=_extendInfo;
@property(retain, nonatomic) NSString *openGiftLabel; // @synthesize openGiftLabel=_openGiftLabel;
@property(retain, nonatomic) NSString *cardBindUrl; // @synthesize cardBindUrl=_cardBindUrl;
@property(nonatomic) _Bool showPoints; // @synthesize showPoints=_showPoints;
@property(retain, nonatomic) NSArray *cardRights; // @synthesize cardRights=_cardRights;
@property(retain, nonatomic) NSString *cardDetailUrl; // @synthesize cardDetailUrl=_cardDetailUrl;
@property(nonatomic) long long cardPoints; // @synthesize cardPoints=_cardPoints;
@property(retain, nonatomic) NSString *cardLevelName; // @synthesize cardLevelName=_cardLevelName;
@property(nonatomic) long long cardLevel; // @synthesize cardLevel=_cardLevel;
@property(retain, nonatomic) NSString *cardMessage; // @synthesize cardMessage=_cardMessage;
@property(retain, nonatomic) NSString *cardTitle; // @synthesize cardTitle=_cardTitle;
@property(retain, nonatomic) NSString *cardBackgroundColor; // @synthesize cardBackgroundColor=_cardBackgroundColor;
@property(retain, nonatomic) NSString *brandLogo; // @synthesize brandLogo=_brandLogo;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(retain, nonatomic) NSString *brandId; // @synthesize brandId=_brandId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
