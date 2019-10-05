//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class CarServiceModel, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, ShareOrderFilterImgModel, ShareOrderGiftBannerInfoModel, ShareOrderJShowInfoModel, ShareOrderVTagInfoModel;

@interface ShareOrderCommentWareInfoModel : JDModel
{
    _Bool _hasCommentGift;
    _Bool _anonymousFlag;
    _Bool _synTostoryFlag;
    _Bool _showVideo;
    _Bool _videoClippingSwitch;
    _Bool _videoFilterSwitch;
    _Bool _isShowVTags;
    _Bool _editTextInfoAbTest;
    NSString *_wareId;
    NSString *_wname;
    NSString *_imageurl;
    NSString *_voucherStatusName;
    NSString *_commentGuid;
    NSString *_jingBeanOrAuditStatus;
    NSString *_orderId;
    NSString *_commentGiftContent;
    NSString *_categoryList;
    NSString *_auditStatus;
    NSString *_afterCommentStatus;
    NSString *_afterCommentMessage;
    NSString *_addCommentMessage;
    NSString *_commentRewardStatus;
    ShareOrderGiftBannerInfoModel *_bannerInfo;
    NSDictionary *_commentRewardInfo;
    NSString *_noCommentMessage;
    NSString *_addCommentTitle;
    NSString *_afterCommentDiscussionStatus;
    NSString *_afterCommentNoPicMessage;
    NSString *_voiceSwitch;
    long long _voucherStatus;
    NSString *_score;
    NSString *_shareContent;
    NSMutableArray *_photos;
    NSString *_questionText;
    NSString *_questionImg;
    long long _videoMaxDuration;
    long long _videoMinDuration;
    NSMutableArray *_videoInfoList;
    NSMutableDictionary *_starsTextList;
    ShareOrderJShowInfoModel *_jShowInfoModel;
    ShareOrderVTagInfoModel *_verticalTagInfo;
    NSMutableArray *_verticalArray;
    long long _minContentLength;
    long long _maxContentLength;
    ShareOrderFilterImgModel *_filterImgModel;
    NSString *_carServiceStatus;
    CarServiceModel *_carServiceModel;
    NSDictionary *_editTextInfo;
}

@property(nonatomic) _Bool editTextInfoAbTest; // @synthesize editTextInfoAbTest=_editTextInfoAbTest;
@property(retain, nonatomic) NSDictionary *editTextInfo; // @synthesize editTextInfo=_editTextInfo;
@property(retain, nonatomic) CarServiceModel *carServiceModel; // @synthesize carServiceModel=_carServiceModel;
@property(copy, nonatomic) NSString *carServiceStatus; // @synthesize carServiceStatus=_carServiceStatus;
@property(retain, nonatomic) ShareOrderFilterImgModel *filterImgModel; // @synthesize filterImgModel=_filterImgModel;
@property(nonatomic) long long maxContentLength; // @synthesize maxContentLength=_maxContentLength;
@property(nonatomic) long long minContentLength; // @synthesize minContentLength=_minContentLength;
@property(retain, nonatomic) NSMutableArray *verticalArray; // @synthesize verticalArray=_verticalArray;
@property(nonatomic) _Bool isShowVTags; // @synthesize isShowVTags=_isShowVTags;
@property(retain, nonatomic) ShareOrderVTagInfoModel *verticalTagInfo; // @synthesize verticalTagInfo=_verticalTagInfo;
@property(retain, nonatomic) ShareOrderJShowInfoModel *jShowInfoModel; // @synthesize jShowInfoModel=_jShowInfoModel;
@property(retain, nonatomic) NSMutableDictionary *starsTextList; // @synthesize starsTextList=_starsTextList;
@property(retain, nonatomic) NSMutableArray *videoInfoList; // @synthesize videoInfoList=_videoInfoList;
@property(nonatomic) _Bool videoFilterSwitch; // @synthesize videoFilterSwitch=_videoFilterSwitch;
@property(nonatomic) _Bool videoClippingSwitch; // @synthesize videoClippingSwitch=_videoClippingSwitch;
@property(nonatomic) long long videoMinDuration; // @synthesize videoMinDuration=_videoMinDuration;
@property(nonatomic) long long videoMaxDuration; // @synthesize videoMaxDuration=_videoMaxDuration;
@property(nonatomic) _Bool showVideo; // @synthesize showVideo=_showVideo;
@property(copy, nonatomic) NSString *questionImg; // @synthesize questionImg=_questionImg;
@property(copy, nonatomic) NSString *questionText; // @synthesize questionText=_questionText;
@property(nonatomic) _Bool synTostoryFlag; // @synthesize synTostoryFlag=_synTostoryFlag;
@property(nonatomic) _Bool anonymousFlag; // @synthesize anonymousFlag=_anonymousFlag;
@property(retain, nonatomic) NSMutableArray *photos; // @synthesize photos=_photos;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(copy, nonatomic) NSString *score; // @synthesize score=_score;
@property(nonatomic) long long voucherStatus; // @synthesize voucherStatus=_voucherStatus;
@property(copy, nonatomic) NSString *voiceSwitch; // @synthesize voiceSwitch=_voiceSwitch;
@property(copy, nonatomic) NSString *afterCommentNoPicMessage; // @synthesize afterCommentNoPicMessage=_afterCommentNoPicMessage;
@property(copy, nonatomic) NSString *afterCommentDiscussionStatus; // @synthesize afterCommentDiscussionStatus=_afterCommentDiscussionStatus;
@property(copy, nonatomic) NSString *addCommentTitle; // @synthesize addCommentTitle=_addCommentTitle;
@property(copy, nonatomic) NSString *noCommentMessage; // @synthesize noCommentMessage=_noCommentMessage;
@property(retain, nonatomic) NSDictionary *commentRewardInfo; // @synthesize commentRewardInfo=_commentRewardInfo;
@property(retain, nonatomic) ShareOrderGiftBannerInfoModel *bannerInfo; // @synthesize bannerInfo=_bannerInfo;
@property(copy, nonatomic) NSString *commentRewardStatus; // @synthesize commentRewardStatus=_commentRewardStatus;
@property(copy, nonatomic) NSString *addCommentMessage; // @synthesize addCommentMessage=_addCommentMessage;
@property(copy, nonatomic) NSString *afterCommentMessage; // @synthesize afterCommentMessage=_afterCommentMessage;
@property(copy, nonatomic) NSString *afterCommentStatus; // @synthesize afterCommentStatus=_afterCommentStatus;
@property(copy, nonatomic) NSString *auditStatus; // @synthesize auditStatus=_auditStatus;
@property(copy, nonatomic) NSString *categoryList; // @synthesize categoryList=_categoryList;
@property(copy, nonatomic) NSString *commentGiftContent; // @synthesize commentGiftContent=_commentGiftContent;
@property(nonatomic) _Bool hasCommentGift; // @synthesize hasCommentGift=_hasCommentGift;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *jingBeanOrAuditStatus; // @synthesize jingBeanOrAuditStatus=_jingBeanOrAuditStatus;
@property(copy, nonatomic) NSString *commentGuid; // @synthesize commentGuid=_commentGuid;
@property(copy, nonatomic) NSString *voucherStatusName; // @synthesize voucherStatusName=_voucherStatusName;
@property(copy, nonatomic) NSString *imageurl; // @synthesize imageurl=_imageurl;
@property(copy, nonatomic) NSString *wname; // @synthesize wname=_wname;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void).cxx_destruct;
- (long long)getDynampicJingBean;
- (long long)getDynampicEditTextInfoAbTestTextNum;
- (void)setDataWithDic:(id)arg1;

@end
