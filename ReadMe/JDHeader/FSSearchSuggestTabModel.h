//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <JDDBaseModule/JDModel.h>

@class NSArray, NSString;

@interface FSSearchSuggestTabModel : JDModel
{
    _Bool _selected;
    NSString *_tabId;
    NSString *_tabName;
    NSArray *_addParams;
}

+ (id)arrayModelWithDicArray:(id)arg1;
@property(retain, nonatomic) NSArray *addParams; // @synthesize addParams=_addParams;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(copy, nonatomic) NSString *tabName; // @synthesize tabName=_tabName;
@property(copy, nonatomic) NSString *tabId; // @synthesize tabId=_tabId;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long tabType;
- (_Bool)isEqualToTab:(id)arg1;
- (void)setDataWithDic:(id)arg1;

@end
