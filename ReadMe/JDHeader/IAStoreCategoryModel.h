//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString, UIImage;

@interface IAStoreCategoryModel : NSObject
{
    NSString *_categoryName;
    UIImage *_categoryImg;
    NSMutableArray *_categoryWareList;
}

+ (id)modelWithDict:(id)arg1;
@property(retain, nonatomic) NSMutableArray *categoryWareList; // @synthesize categoryWareList=_categoryWareList;
@property(retain, nonatomic) UIImage *categoryImg; // @synthesize categoryImg=_categoryImg;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (void).cxx_destruct;

@end

