//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class CarServiceModel, JShowInfoModel, NSString;

@interface CommentWareInfoModel : JDModel
{
    _Bool _hasCommentGift;
    NSString *_wareId;
    NSString *_wname;
    NSString *_imageurl;
    long long _voucherStatus;
    NSString *_voucherStatusName;
    NSString *_commentGuid;
    NSString *_jingBeanOrAuditStatus;
    NSString *_orderId;
    NSString *_categoryList;
    NSString *_afterCommentStatus;
    NSString *_afterCommentMessage;
    NSString *_afterCommentDiscussionStatus;
    JShowInfoModel *_jShowInfo;
    NSString *_commentRewardStatus;
    NSString *_carServiceStatus;
    CarServiceModel *_carServiceModel;
}

@property(retain, nonatomic) CarServiceModel *carServiceModel; // @synthesize carServiceModel=_carServiceModel;
@property(copy, nonatomic) NSString *carServiceStatus; // @synthesize carServiceStatus=_carServiceStatus;
@property(copy, nonatomic) NSString *commentRewardStatus; // @synthesize commentRewardStatus=_commentRewardStatus;
@property(retain, nonatomic) JShowInfoModel *jShowInfo; // @synthesize jShowInfo=_jShowInfo;
@property(copy, nonatomic) NSString *afterCommentDiscussionStatus; // @synthesize afterCommentDiscussionStatus=_afterCommentDiscussionStatus;
@property(copy, nonatomic) NSString *afterCommentMessage; // @synthesize afterCommentMessage=_afterCommentMessage;
@property(copy, nonatomic) NSString *afterCommentStatus; // @synthesize afterCommentStatus=_afterCommentStatus;
@property(copy, nonatomic) NSString *categoryList; // @synthesize categoryList=_categoryList;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
@property(copy, nonatomic) NSString *jingBeanOrAuditStatus; // @synthesize jingBeanOrAuditStatus=_jingBeanOrAuditStatus;
@property(nonatomic) _Bool hasCommentGift; // @synthesize hasCommentGift=_hasCommentGift;
@property(copy, nonatomic) NSString *commentGuid; // @synthesize commentGuid=_commentGuid;
@property(copy, nonatomic) NSString *voucherStatusName; // @synthesize voucherStatusName=_voucherStatusName;
@property(nonatomic) long long voucherStatus; // @synthesize voucherStatus=_voucherStatus;
@property(copy, nonatomic) NSString *imageurl; // @synthesize imageurl=_imageurl;
@property(copy, nonatomic) NSString *wname; // @synthesize wname=_wname;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=_wareId;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

