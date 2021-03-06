//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderTabBarPraiseItemModel, FinderTabBarStoreItemModel, NSArray, NSString;

@interface FinderPhotoGroupListModel : NSObject
{
    NSString *_authorId;
    NSString *_authorName;
    NSString *_authorArticleNum;
    NSString *_authorPic;
    NSString *_authorSynopsis;
    NSString *_articleId;
    NSString *_indexImage;
    NSString *_title;
    NSString *_subTitle;
    double _publishTime;
    NSArray *_contentDic;
    NSString *_shareUrl;
    NSString *_shareImage;
    NSArray *_contentArray;
    NSString *_authorSign;
    NSString *_authorUrl;
    NSArray *_similarArticle;
    NSString *_typeName;
    NSString *_typeId;
    long long _likeNum;
    NSString *_likeNumStr;
    long long _hasLiked;
    long long _commentNum;
    NSArray *_dataArray;
    NSString *_imghost;
    NSString *_pin;
    NSString *_unionId;
    long long _hasfollowed;
    long long _followNums;
    NSArray *_tagList;
    long long _hasShare;
    long long _hasStore;
    long long _style;
    long long _subPosition;
    NSString *_shareContent;
    FinderTabBarPraiseItemModel *_praiseItemModel;
    FinderTabBarStoreItemModel *_storeItemModel;
}

+ (id)objectClassInArray;
+ (id)replacedKeyFromPropertyName;
@property(retain, nonatomic) FinderTabBarStoreItemModel *storeItemModel; // @synthesize storeItemModel=_storeItemModel;
@property(retain, nonatomic) FinderTabBarPraiseItemModel *praiseItemModel; // @synthesize praiseItemModel=_praiseItemModel;
@property(copy, nonatomic) NSString *shareContent; // @synthesize shareContent=_shareContent;
@property(nonatomic) long long subPosition; // @synthesize subPosition=_subPosition;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(nonatomic) long long hasStore; // @synthesize hasStore=_hasStore;
@property(nonatomic) long long hasShare; // @synthesize hasShare=_hasShare;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList=_tagList;
@property(nonatomic) long long followNums; // @synthesize followNums=_followNums;
@property(nonatomic) long long hasfollowed; // @synthesize hasfollowed=_hasfollowed;
@property(retain, nonatomic) NSString *unionId; // @synthesize unionId=_unionId;
@property(retain, nonatomic) NSString *pin; // @synthesize pin=_pin;
@property(copy, nonatomic) NSString *imghost; // @synthesize imghost=_imghost;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray=_dataArray;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
@property(nonatomic) long long hasLiked; // @synthesize hasLiked=_hasLiked;
@property(copy, nonatomic) NSString *likeNumStr; // @synthesize likeNumStr=_likeNumStr;
@property(nonatomic) long long likeNum; // @synthesize likeNum=_likeNum;
@property(copy, nonatomic) NSString *typeId; // @synthesize typeId=_typeId;
@property(copy, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
@property(retain, nonatomic) NSArray *similarArticle; // @synthesize similarArticle=_similarArticle;
@property(copy, nonatomic) NSString *authorUrl; // @synthesize authorUrl=_authorUrl;
@property(copy, nonatomic) NSString *authorSign; // @synthesize authorSign=_authorSign;
@property(retain, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
@property(copy, nonatomic) NSString *shareImage; // @synthesize shareImage=_shareImage;
@property(copy, nonatomic) NSString *shareUrl; // @synthesize shareUrl=_shareUrl;
@property(retain, nonatomic) NSArray *contentDic; // @synthesize contentDic=_contentDic;
@property(nonatomic) double publishTime; // @synthesize publishTime=_publishTime;
@property(copy, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *indexImage; // @synthesize indexImage=_indexImage;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(copy, nonatomic) NSString *authorSynopsis; // @synthesize authorSynopsis=_authorSynopsis;
@property(copy, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(copy, nonatomic) NSString *authorArticleNum; // @synthesize authorArticleNum=_authorArticleNum;
@property(copy, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(copy, nonatomic) NSString *authorId; // @synthesize authorId=_authorId;
- (void).cxx_destruct;
- (void)keyValuesDidFinishConvertingToObject;

@end

