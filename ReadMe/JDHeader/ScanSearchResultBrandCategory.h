//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, ScanSearchResultMainCategory;

@interface ScanSearchResultBrandCategory : NSObject
{
    _Bool _selected;
    NSString *_brandIndex;
    NSString *_brandName;
    ScanSearchResultMainCategory *_mainCategory;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) __weak ScanSearchResultMainCategory *mainCategory; // @synthesize mainCategory=_mainCategory;
@property(copy, nonatomic) NSString *brandName; // @synthesize brandName=_brandName;
@property(copy, nonatomic) NSString *brandIndex; // @synthesize brandIndex=_brandIndex;
- (void).cxx_destruct;

@end

