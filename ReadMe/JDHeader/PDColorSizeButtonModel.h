//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface PDColorSizeButtonModel : NSObject
{
    NSString *_text;
    NSArray *_skuList;
    long long _selectedType;
    long long _dimension;
}

+ (id)objectClassInArray;
@property(nonatomic) long long dimension; // @synthesize dimension=_dimension;
@property(nonatomic) long long selectedType; // @synthesize selectedType=_selectedType;
@property(retain, nonatomic) NSArray *skuList; // @synthesize skuList=_skuList;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

