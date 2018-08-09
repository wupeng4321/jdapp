//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSIndexPath, NSString;

@interface FSFilterPromotionCategoryViewModel : NSObject
{
    NSString *_title;
    NSIndexPath *_selectedIndexPath;
    NSIndexPath *_comSelectedIndexPath;
    NSArray *_categoryViewModelArray;
}

@property(retain, nonatomic) NSArray *categoryViewModelArray; // @synthesize categoryViewModelArray=_categoryViewModelArray;
@property(retain, nonatomic) NSIndexPath *comSelectedIndexPath; // @synthesize comSelectedIndexPath=_comSelectedIndexPath;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)changToLayoutDataWithCategoryArray:(id)arg1;
- (id)initWithSearchCategoryModelArray:(id)arg1;

@end

