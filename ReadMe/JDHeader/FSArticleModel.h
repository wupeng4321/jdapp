//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface FSArticleModel : JDModel
{
    NSString *_articleAuthor;
    NSString *_articleImage;
    NSString *_articleTitle;
    NSString *_articleID;
    NSString *_articleVisits;
    NSString *_articlePublishTime;
    NSArray *_articleTracks;
    NSString *_articleType;
    NSString *_subPosition;
    NSString *_atricleSkuNum;
    NSArray *_atricleListImages;
    NSString *_style;
}

@property(copy, nonatomic) NSString *style; // @synthesize style=_style;
@property(retain, nonatomic) NSArray *atricleListImages; // @synthesize atricleListImages=_atricleListImages;
@property(copy, nonatomic) NSString *atricleSkuNum; // @synthesize atricleSkuNum=_atricleSkuNum;
@property(copy, nonatomic) NSString *subPosition; // @synthesize subPosition=_subPosition;
@property(copy, nonatomic) NSString *articleType; // @synthesize articleType=_articleType;
@property(retain, nonatomic) NSArray *articleTracks; // @synthesize articleTracks=_articleTracks;
@property(copy, nonatomic) NSString *articlePublishTime; // @synthesize articlePublishTime=_articlePublishTime;
@property(copy, nonatomic) NSString *articleVisits; // @synthesize articleVisits=_articleVisits;
@property(copy, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
@property(copy, nonatomic) NSString *articleTitle; // @synthesize articleTitle=_articleTitle;
@property(copy, nonatomic) NSString *articleImage; // @synthesize articleImage=_articleImage;
@property(copy, nonatomic) NSString *articleAuthor; // @synthesize articleAuthor=_articleAuthor;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end

