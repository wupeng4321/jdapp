//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class JDShopPromotionTabModel, NSDictionary, NSNumber, NSString;

@interface JDShopConfigModel : JDModel
{
    _Bool _isActivityExist;
    _Bool _isSkinPeelerExist;
    int _activityPageType;
    NSNumber *_shopHomeTest;
    NSNumber *_allWareTest;
    NSNumber *_mNewWareTest;
    NSNumber *_hotWareTest;
    NSNumber *_promotionTest;
    NSNumber *_activityTest;
    NSString *_shopHomeIcon;
    NSString *_allWareIcon;
    NSString *_mNewWareIcon;
    NSString *_hotWareIcon;
    NSString *_promotionIcon;
    NSString *_activityIcon;
    NSString *_shopHomeClickIcon;
    NSString *_allWareClickIcon;
    NSString *_mNewWareClickIcon;
    NSString *_hotWareClickIcon;
    NSString *_promotionClickIcon;
    NSString *_activityClickIcon;
    NSString *_promSwitch;
    NSString *_shopHomeText;
    NSString *_allWareText;
    NSString *_mNewWareText;
    NSString *_hotWareText;
    NSString *_promotionText;
    NSString *_activityText;
    NSString *_topUrl;
    NSString *_tabBgImgUrl;
    NSString *_tabActBlurIcon;
    NSString *_tabActClickIcon;
    NSString *_tabActBlurFontColor;
    NSString *_tabActClickFontColor;
    NSString *_activityPageId;
    NSString *_projectId;
    NSDictionary *_promotionTab;
    JDShopPromotionTabModel *_promotionTabModel;
}

@property(retain, nonatomic) JDShopPromotionTabModel *promotionTabModel; // @synthesize promotionTabModel=_promotionTabModel;
@property(retain, nonatomic) NSDictionary *promotionTab; // @synthesize promotionTab=_promotionTab;
@property(retain, nonatomic) NSString *projectId; // @synthesize projectId=_projectId;
@property(retain, nonatomic) NSString *activityPageId; // @synthesize activityPageId=_activityPageId;
@property(retain, nonatomic) NSString *tabActClickFontColor; // @synthesize tabActClickFontColor=_tabActClickFontColor;
@property(retain, nonatomic) NSString *tabActBlurFontColor; // @synthesize tabActBlurFontColor=_tabActBlurFontColor;
@property(retain, nonatomic) NSString *tabActClickIcon; // @synthesize tabActClickIcon=_tabActClickIcon;
@property(retain, nonatomic) NSString *tabActBlurIcon; // @synthesize tabActBlurIcon=_tabActBlurIcon;
@property(retain, nonatomic) NSString *tabBgImgUrl; // @synthesize tabBgImgUrl=_tabBgImgUrl;
@property(retain, nonatomic) NSString *topUrl; // @synthesize topUrl=_topUrl;
@property(nonatomic) int activityPageType; // @synthesize activityPageType=_activityPageType;
@property(nonatomic) _Bool isSkinPeelerExist; // @synthesize isSkinPeelerExist=_isSkinPeelerExist;
@property(nonatomic) _Bool isActivityExist; // @synthesize isActivityExist=_isActivityExist;
@property(retain, nonatomic) NSString *activityText; // @synthesize activityText=_activityText;
@property(retain, nonatomic) NSString *promotionText; // @synthesize promotionText=_promotionText;
@property(retain, nonatomic) NSString *hotWareText; // @synthesize hotWareText=_hotWareText;
@property(retain, nonatomic) NSString *mNewWareText; // @synthesize mNewWareText=_mNewWareText;
@property(retain, nonatomic) NSString *allWareText; // @synthesize allWareText=_allWareText;
@property(retain, nonatomic) NSString *shopHomeText; // @synthesize shopHomeText=_shopHomeText;
@property(retain, nonatomic) NSString *promSwitch; // @synthesize promSwitch=_promSwitch;
@property(retain, nonatomic) NSString *activityClickIcon; // @synthesize activityClickIcon=_activityClickIcon;
@property(retain, nonatomic) NSString *promotionClickIcon; // @synthesize promotionClickIcon=_promotionClickIcon;
@property(retain, nonatomic) NSString *hotWareClickIcon; // @synthesize hotWareClickIcon=_hotWareClickIcon;
@property(retain, nonatomic) NSString *mNewWareClickIcon; // @synthesize mNewWareClickIcon=_mNewWareClickIcon;
@property(retain, nonatomic) NSString *allWareClickIcon; // @synthesize allWareClickIcon=_allWareClickIcon;
@property(retain, nonatomic) NSString *shopHomeClickIcon; // @synthesize shopHomeClickIcon=_shopHomeClickIcon;
@property(retain, nonatomic) NSString *activityIcon; // @synthesize activityIcon=_activityIcon;
@property(retain, nonatomic) NSString *promotionIcon; // @synthesize promotionIcon=_promotionIcon;
@property(retain, nonatomic) NSString *hotWareIcon; // @synthesize hotWareIcon=_hotWareIcon;
@property(retain, nonatomic) NSString *mNewWareIcon; // @synthesize mNewWareIcon=_mNewWareIcon;
@property(retain, nonatomic) NSString *allWareIcon; // @synthesize allWareIcon=_allWareIcon;
@property(retain, nonatomic) NSString *shopHomeIcon; // @synthesize shopHomeIcon=_shopHomeIcon;
@property(retain, nonatomic) NSNumber *activityTest; // @synthesize activityTest=_activityTest;
@property(retain, nonatomic) NSNumber *promotionTest; // @synthesize promotionTest=_promotionTest;
@property(retain, nonatomic) NSNumber *hotWareTest; // @synthesize hotWareTest=_hotWareTest;
@property(retain, nonatomic) NSNumber *mNewWareTest; // @synthesize mNewWareTest=_mNewWareTest;
@property(retain, nonatomic) NSNumber *allWareTest; // @synthesize allWareTest=_allWareTest;
@property(retain, nonatomic) NSNumber *shopHomeTest; // @synthesize shopHomeTest=_shopHomeTest;
- (_Bool)praseDataWithDic:(id)arg1;
- (void)dealloc;

@end

