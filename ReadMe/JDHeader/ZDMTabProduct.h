//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, ZDMTabProductViewModel;

@interface ZDMTabProduct : NSObject
{
    _Bool _hasExposed;
    NSString *_identifier;
    NSString *_subPosition;
    long long _tabIndex;
    NSString *_tabId;
    NSString *_title;
    NSString *_bigImg;
    NSArray *_skuImgList;
    NSString *_mixJournalBackgroundImg;
    NSString *_authorName;
    NSString *_authorPic;
}

+ (id)tabProductWithDict:(id)arg1;
@property(nonatomic) _Bool hasExposed; // @synthesize hasExposed=_hasExposed;
@property(retain, nonatomic) NSString *authorPic; // @synthesize authorPic=_authorPic;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *mixJournalBackgroundImg; // @synthesize mixJournalBackgroundImg=_mixJournalBackgroundImg;
@property(retain, nonatomic) NSArray *skuImgList; // @synthesize skuImgList=_skuImgList;
@property(retain, nonatomic) NSString *bigImg; // @synthesize bigImg=_bigImg;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
@property(nonatomic) long long tabIndex; // @synthesize tabIndex=_tabIndex;
@property(retain, nonatomic) NSString *subPosition; // @synthesize subPosition=_subPosition;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
@property(readonly) ZDMTabProductViewModel *viewModel;

@end

