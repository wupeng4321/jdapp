//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface WareCommentArticleModel : JDModel
{
    NSString *_articleIcon;
    NSString *_articleTitle;
    NSArray *_articleList;
}

@property(retain, nonatomic) NSArray *articleList; // @synthesize articleList=_articleList;
@property(copy, nonatomic) NSString *articleTitle; // @synthesize articleTitle=_articleTitle;
@property(copy, nonatomic) NSString *articleIcon; // @synthesize articleIcon=_articleIcon;
- (void).cxx_destruct;
- (void)setDataWithDic:(id)arg1;

@end
