//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSNumber, NSString;

@interface JDShopFollowActivityModel : JDModel
{
    _Bool _canShow;
    _Bool _cardCollectShown;
    _Bool _ISVRedShown;
    _Bool _followed;
    NSString *_activityId;
    NSArray *_shopGiftsList;
    NSNumber *_isSign;
    NSNumber *_activityRuleType;
    NSString *_isvUrl;
    NSString *_isvImgUrl;
    NSString *_secondFloor;
    NSString *_secFloorImageUrl;
    NSString *_cardCollectUrl;
    NSString *_IsvRedUrl;
    NSNumber *_followAward;
    NSNumber *_isShareActivity;
    NSNumber *_popType;
}

@property(nonatomic) _Bool followed; // @synthesize followed=_followed;
@property(retain, nonatomic) NSNumber *popType; // @synthesize popType=_popType;
@property(retain, nonatomic) NSNumber *isShareActivity; // @synthesize isShareActivity=_isShareActivity;
@property(retain, nonatomic) NSNumber *followAward; // @synthesize followAward=_followAward;
@property(nonatomic) _Bool ISVRedShown; // @synthesize ISVRedShown=_ISVRedShown;
@property(nonatomic) _Bool cardCollectShown; // @synthesize cardCollectShown=_cardCollectShown;
@property(retain, nonatomic) NSString *IsvRedUrl; // @synthesize IsvRedUrl=_IsvRedUrl;
@property(retain, nonatomic) NSString *cardCollectUrl; // @synthesize cardCollectUrl=_cardCollectUrl;
@property(retain, nonatomic) NSString *secFloorImageUrl; // @synthesize secFloorImageUrl=_secFloorImageUrl;
@property(retain, nonatomic) NSString *secondFloor; // @synthesize secondFloor=_secondFloor;
@property(retain, nonatomic) NSString *isvImgUrl; // @synthesize isvImgUrl=_isvImgUrl;
@property(retain, nonatomic) NSString *isvUrl; // @synthesize isvUrl=_isvUrl;
@property(retain, nonatomic) NSNumber *activityRuleType; // @synthesize activityRuleType=_activityRuleType;
@property(retain, nonatomic) NSNumber *isSign; // @synthesize isSign=_isSign;
@property(nonatomic) _Bool canShow; // @synthesize canShow=_canShow;
@property(retain, nonatomic) NSArray *shopGiftsList; // @synthesize shopGiftsList=_shopGiftsList;
@property(retain, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
- (void).cxx_destruct;
- (id)shopGiftEventParam;
- (void)encodeWithDic:(id)arg1;

@end

