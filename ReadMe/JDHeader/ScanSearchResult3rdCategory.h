//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, ScanSearchResultMainCategory;

@interface ScanSearchResult3rdCategory : NSObject
{
    _Bool _selected;
    NSString *_cat3Index;
    NSString *_cat3Name;
    ScanSearchResultMainCategory *_mainCategory;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak ScanSearchResultMainCategory *mainCategory; // @synthesize mainCategory=_mainCategory;
@property(copy, nonatomic) NSString *cat3Name; // @synthesize cat3Name=_cat3Name;
@property(copy, nonatomic) NSString *cat3Index; // @synthesize cat3Index=_cat3Index;
- (void).cxx_destruct;

@end

