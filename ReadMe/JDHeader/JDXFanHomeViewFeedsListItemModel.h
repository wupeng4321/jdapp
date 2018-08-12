//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class JDXFANFeedsListItemVideoInfoModel, JDXFanJumpModel, NSArray, NSString;

@interface JDXFanHomeViewFeedsListItemModel : NSObject
{
    NSString *_listId;
    NSString *_appearance;
    NSString *_contentType;
    NSString *_indexImage;
    NSString *_title;
    NSString *_subTitle;
    JDXFanJumpModel *_jump;
    JDXFanJumpModel *_skuJump;
    JDXFanJumpModel *_authorPageJump;
    JDXFanJumpModel *_similarJump;
    NSString *_skus;
    NSString *_authorId;
    NSString *_authorName;
    NSString *_authorPic;
    NSArray *_imgList;
    NSArray *_indexImageList;
    NSString *_skuNum;
    NSString *_clk;
    NSString *_impr;
    NSString *_style;
    NSString *_subPosition;
    JDXFANFeedsListItemVideoInfoModel *_videoInfo;
    NSArray *_subContents;
    NSString *_followCount;
    NSString *_shopLogo;
    NSString *_price;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *shopLogo; // @synthesize shopLogo=_shopLogo;
@property(copy, nonatomic) NSString *followCount; // @synthesize followCount=_followCount;
@property(retain, nonatomic) NSArray *subContents; // @synthesize subContents=_subContents;
@property(retain, nonatomic) JDXFANFeedsListItemVideoInfoModel *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(copy, nonatomic) NSString *subPosition; // @synthesize subPosition=_subPosition;
@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(copy, nonatomic) NSString *impr; // @synthesize impr=_impr;
@property(copy, nonatomic) NSString *clk; // @synthesize clk=_clk;
@property(copy, nonatomic) NSString *skuNum; // @synthesize skuNum=_skuNum;
@property(copy, nonatomic) NSArray *indexImageList; // @synthesize indexImageList=_indexImageList;
@property(copy, nonatomic) NSArray *imgList; // @synthesize imgList=_imgList;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
@property(copy, nonatomic) NSString *skus; // @synthesize skus=_skus;
@property(retain, nonatomic) JDXFanJumpModel *similarJump; // @synthesize similarJump=_similarJump;
@property(retain, nonatomic) JDXFanJumpModel *authorPageJump; // @synthesize authorPageJump=_authorPageJump;
@property(retain, nonatomic) JDXFanJumpModel *skuJump; // @synthesize skuJump=_skuJump;
@property(retain, nonatomic) JDXFanJumpModel *jump; // @synthesize jump=_jump;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(copy, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(copy, nonatomic) NSString *appearance; // @synthesize appearance=_appearance;
@property(copy, nonatomic) NSString *listId; // @synthesize listId=_listId;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *followCountDisplayStr;
@property(readonly, nonatomic) NSString *priceDisplayStr;
@property(readonly, nonatomic) NSString *skuNumDisplayStr;

@end

