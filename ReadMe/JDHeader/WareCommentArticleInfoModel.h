//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSString;

@interface WareCommentArticleInfoModel : JDModel
{
    NSString *_createTime;
    NSString *_content;
    NSString *_skuId;
    NSString *_title;
    NSString *_source;
    NSString *_articleId;
    NSString *_imageUrl;
    NSString *_jumpMUrl;
    NSString *_articleType;
}

@property(copy, nonatomic) NSString *articleType; // @synthesize articleType=_articleType;
@property(copy, nonatomic) NSString *jumpMUrl; // @synthesize jumpMUrl=_jumpMUrl;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(copy, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *skuId; // @synthesize skuId=_skuId;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
