//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSNumber, NSString;

@interface OrderWareModel : JDModel
{
    NSString *fid;
    NSString *orderId;
    NSString *wareId;
    NSString *wareName;
    NSString *adword;
    NSString *jdPrice;
    NSString *martPrice;
    NSString *imageUrl;
    NSString *book;
    NSString *comment;
    NSString *discuss;
    int buyAgain;
    int num;
    _Bool _hasCommentGift;
    _Bool _isAfterComment;
    _Bool _isAfterDiscussion;
    _Bool _anonymousFlag;
    _Bool _synTostoryFlag;
    int num_;
    int _buyAgain;
    NSString *fid_;
    NSString *orderId_;
    NSString *wareId_;
    NSString *wareName_;
    NSString *adword_;
    NSString *jdPrice_;
    NSString *martPrice_;
    NSString *imageUrl_;
    NSString *book_;
    NSString *comment_;
    NSString *discuss_;
    NSNumber *commentFlag_;
    NSNumber *shareFlag_;
    NSString *score_;
    NSString *title_;
    NSString *commentContent_;
    NSString *shareContent_;
    NSArray *photos_;
    NSString *_wareUrl;
    NSString *_wareUrlType;
    NSString *_applyAfterSaleType;
    NSString *_applyAfterSaleUrl;
    NSString *_repairRefundEventID;
    NSString *_repairRefundParam;
    NSString *_voucherStatusName;
    long long _voucherStatus;
    NSString *_commentId;
    NSString *_jingBeanOrAuditStatus;
    NSString *_commentGiftContent;
    NSString *_categoryList;
    NSString *_afterCommentText;
    NSString *_auditStatus;
    NSString *_color;
    NSString *_size;
    NSString *_propertyExt;
    NSArray *_extTagList;
    NSString *_jdPriceNew;
    NSArray *_dynamicIcons;
    NSString *_cid;
}

@property(copy, nonatomic) NSString *cid; // @synthesize cid=_cid;
@property(retain, nonatomic) NSArray *dynamicIcons; // @synthesize dynamicIcons=_dynamicIcons;
@property(copy, nonatomic) NSString *jdPriceNew; // @synthesize jdPriceNew=_jdPriceNew;
@property(copy, nonatomic) NSArray *extTagList; // @synthesize extTagList=_extTagList;
@property(copy, nonatomic) NSString *propertyExt; // @synthesize propertyExt=_propertyExt;
@property(copy, nonatomic) NSString *size; // @synthesize size=_size;
@property(copy, nonatomic) NSString *color; // @synthesize color=_color;
@property(copy, nonatomic) NSString *auditStatus; // @synthesize auditStatus=_auditStatus;
@property(nonatomic) _Bool synTostoryFlag; // @synthesize synTostoryFlag=_synTostoryFlag;
@property(nonatomic) _Bool anonymousFlag; // @synthesize anonymousFlag=_anonymousFlag;
@property(copy, nonatomic) NSString *afterCommentText; // @synthesize afterCommentText=_afterCommentText;
@property(nonatomic) _Bool isAfterDiscussion; // @synthesize isAfterDiscussion=_isAfterDiscussion;
@property(nonatomic) _Bool isAfterComment; // @synthesize isAfterComment=_isAfterComment;
@property(copy, nonatomic) NSString *categoryList; // @synthesize categoryList=_categoryList;
@property(copy, nonatomic) NSString *commentGiftContent; // @synthesize commentGiftContent=_commentGiftContent;
@property(nonatomic) _Bool hasCommentGift; // @synthesize hasCommentGift=_hasCommentGift;
@property(copy, nonatomic) NSString *jingBeanOrAuditStatus; // @synthesize jingBeanOrAuditStatus=_jingBeanOrAuditStatus;
@property(copy, nonatomic) NSString *commentId; // @synthesize commentId=_commentId;
@property(nonatomic) long long voucherStatus; // @synthesize voucherStatus=_voucherStatus;
@property(copy, nonatomic) NSString *voucherStatusName; // @synthesize voucherStatusName=_voucherStatusName;
@property(copy, nonatomic) NSString *repairRefundParam; // @synthesize repairRefundParam=_repairRefundParam;
@property(copy, nonatomic) NSString *repairRefundEventID; // @synthesize repairRefundEventID=_repairRefundEventID;
@property(copy, nonatomic) NSString *applyAfterSaleUrl; // @synthesize applyAfterSaleUrl=_applyAfterSaleUrl;
@property(copy, nonatomic) NSString *applyAfterSaleType; // @synthesize applyAfterSaleType=_applyAfterSaleType;
@property(copy, nonatomic) NSString *wareUrlType; // @synthesize wareUrlType=_wareUrlType;
@property(copy, nonatomic) NSString *wareUrl; // @synthesize wareUrl=_wareUrl;
@property(retain, nonatomic) NSArray *photos; // @synthesize photos=photos_;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=shareContent_;
@property(copy, nonatomic) NSString *commentContent; // @synthesize commentContent=commentContent_;
@property(copy, nonatomic) NSString *title; // @synthesize title=title_;
@property(copy, nonatomic) NSString *score; // @synthesize score=score_;
@property(retain, nonatomic) NSNumber *shareFlag; // @synthesize shareFlag=shareFlag_;
@property(retain, nonatomic) NSNumber *commentFlag; // @synthesize commentFlag=commentFlag_;
@property(nonatomic) int buyAgain; // @synthesize buyAgain=_buyAgain;
@property(nonatomic) int num; // @synthesize num=num_;
@property(copy, nonatomic) NSString *discuss; // @synthesize discuss=discuss_;
@property(copy, nonatomic) NSString *comment; // @synthesize comment=comment_;
@property(copy, nonatomic) NSString *book; // @synthesize book=book_;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=imageUrl_;
@property(copy, nonatomic) NSString *martPrice; // @synthesize martPrice=martPrice_;
@property(copy, nonatomic) NSString *jdPrice; // @synthesize jdPrice=jdPrice_;
@property(copy, nonatomic) NSString *adword; // @synthesize adword=adword_;
@property(copy, nonatomic) NSString *wareName; // @synthesize wareName=wareName_;
@property(copy, nonatomic) NSString *wareId; // @synthesize wareId=wareId_;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=orderId_;
@property(copy, nonatomic) NSString *fid; // @synthesize fid=fid_;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setDataWithDic:(id)arg1;

@end

